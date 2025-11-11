#include<stdio.h>
#include<math.h>
void sortArray(int arr[],int n){
	int temp;
for(int i=0;i<n;i++){
	for(int j=0;j<n-1-i;j++){
		if(arr[j]>arr[j+1]){
			temp = arr[j];
			arr[j] = arr[j+1];
			arr[j+1] = temp;
			}
		}
	}
	
}
int main(){
	int arr[] = {5,4,3,2,1,};
	int n=sizeof(arr) / sizeof(arr[0]);
	sortArray(arr, n);
	printf("Mang sap xep tang dan theo Bubble Sort:");
	for (int i = 0; i < n; i++) {
	 printf("%d ", arr[i]);
   }
	return 0;
}