#include<stdio.h>
#include<math.h>
int sumArray(int arr[],int n){
	int sum=0;
	for(int i=0;i<n;i++){
		sum+=arr[i];
	}
	return sum;
}
int main(){
	int arr[]={5,10,20,30,40,50};
	int n = sizeof(arr) / sizeof(arr[0]);
	printf("Tong cac phan tu cua mang la : %d",sumArray(arr,n));
	return 0;
}
