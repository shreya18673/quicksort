#include<iostream>
using namespace std;

//QuickSort
int QS(int arr[],int l, int h){
	
    if(l < h){
        int p=h;
        partition(arr, l, 4,4);
    }
    QS(arr, l, p-1);
    QS(arr, p+1, h);
}


	
//partition
void partition(int arr[],int l,int h, int p){
	for(int i=0;i<5;i++){
		if(arr[4]<arr[0]){
			Swap(arr,0,3);
		}
		else{
			
		}
		Swap(arr,2,4);
	}
}

//Swap function
void Swap(int arr[],int i,int j){
	int x;
	x=arr[i];
	arr[i]=arr[j];
	arr[j]=x;
	for(int i=0;i<5;i++){
	cout<<arr[i];
	}
}	
//main function
int main(){
	int arr[5]={2,1,5,4,3};
	QS(arr,0,4);

//call QS
}
