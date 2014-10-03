#include<stdio.h>
#include<malloc.h>

int minJumps(int a[], int n){
	
	int r[n], i, j, min;
	r[0] = 0;
	for(i = 1; i < n; i++){
		r[i] = 1000;
		for(j = 0; j < i; j++){
			if( i <= j + a[j] ){
				// min (r[i], r[j]+1)
				if(r[i] > r[j]+1){
					r[i] = r[j] + 1;
				} 			
			}
		}
	}
	return r[n-1];
}

void main(){

	int a[11]  = {1, 3, 5, 8, 9, 2, 6, 7, 6, 8, 9};
	//int b[10] = {1, 3, 6, 3, 2, 3, 6, 8, 9, 5};
	//int c[6] = {1, 3, 6, 1, 0, 9};
	printf("min jumps to reach end : %d\n", minJumps(a, 11));
	//printf("min jumps to reach end : %d\n", minJumps(b, 10)); 
	//printf("min jumps to reach end : %d\n", minJumps(c, 6));
}
