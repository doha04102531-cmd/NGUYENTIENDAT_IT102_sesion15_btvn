#include<stdio.h>
#include<math.h>
int reverse(int n){
int	reverse=0;
	while(n>0){
	int digit = n%10;
	reverse=reverse*10+digit ;
	n=n/10;	
	}
	return reverse;
}
int main(){
int n=54321;
printf("So dao nguoc cua %d la : %d",n,reverse(n));

return 0;
}
