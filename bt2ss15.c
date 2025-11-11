#include<stdio.h>
#include<math.h>
int sumdigits(int n){
int sum =0;//bien luu tong chu so

while(n!=0){
    sum+=n%10;
	n/=10;
}
return sum;// tra ket qua tinh duoc ve
}

int main(){	
int n=1234;
printf("Tong cac chu so trong %d la %d:",n,sumdigits(n)); 

return 0; 

}

