use strict;
use warnings;

my @str = split '', <>;
my $size = @str;
my $test_cases = <>;
foreach (1..$test_cases){
	my ($num1, $num2) = split ' ', <>;
	my $rem1 = ($num1-1) % ($size-1);
	my $rem2 = ($num2-1) % ($size-1);
	if($str[$rem1] eq $str[$rem2]){
		print "Yes\n";	
	}	
	else{
		print "No\n";	
	}
}
