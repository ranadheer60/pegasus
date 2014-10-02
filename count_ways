// A C program to count number of ways to reach n't stair when
// a person can climb 1, 2, ..m stairs at a time.

#include<stdio.h>

int stairs(int n){
	
	//int ways =0;
	if(n == 0){
		return 1;
	}
	else if(n < 0){
		return 0;	
	}
	else{
		//ways = ways + stairs(n-1);
		//ways = ways + stairs(n-2);
		return stairs(n-1) + stairs(n-2); 
	}
}
void main(){

	int n, ways;
	printf("Enter no. of Stairs :\n");
	scanf("%d",&n);
	ways = stairs(n);
	printf("No of ways to climb %d steps: %d\n", n, ways);	
}
