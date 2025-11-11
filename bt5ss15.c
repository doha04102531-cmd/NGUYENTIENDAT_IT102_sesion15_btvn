#include <stdio.h>
void timPhanTu(int arr[], int n,int *phanTu,int *soLan){
	int maxCount=0;
	int element=arr[0];
	
	for(int i=0; i<n; i++){
		int count=0;
		for(int j=0; j<n; j++){
			if(arr[j]==arr[i]){
				count++;
			}
		}
		if(count>maxCount){
			maxCount=count;
			element=arr[i];
		}
		*phanTu=element;
		*soLan=maxCount;		
	}
}
int main(){
	int arr[]={1,3,1,3,2,5,6,6,8,6,8,6};
	int n = sizeof(arr)/sizeof(arr[0]);
	int phanTu, soLan;
	timPhanTu(arr, n, &phanTu, &soLan);
	printf("Phan tu xuat hien nhieu nhat: %d\n", phanTu);
	printf("So lan xuat hien nhieu nhat: %d", soLan);
	return 0;
}
