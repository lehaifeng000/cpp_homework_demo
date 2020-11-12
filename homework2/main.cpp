#include <iostream>
using namespace std;

void bubbleSort(int *arr,int n)
{
	int m,i,j;
	for(i=0;i<n-1;i++)
		for(j=0;j<n-1-i;j++)
			if(arr[j]>arr[j+1])
			{
				m=arr[j];
				arr[j]=arr[j+1];
				arr[j+1]=m;
			}
}

int main()
{
    int arr[]={2,2,2,3,4,4,5,6,6,6,6,7,7,8,9,9,10,10,10};
    int n=sizeof(arr)/sizeof(arr[0]);
    // 用来记录保存到哪
    int index=0;
    // 排序
    bubbleSort(arr,n);
    int pre=arr[0];
    for(int i=1;i<n;i++){
        if(arr[i]!=arr[index]){
            if(i!=index){
                arr[index+1]=arr[i];
            }
            index++;
        }
    }
    for(int i=0;i<=index;i++){
        cout<<arr[i]<<' ';
    }
    return 0;
}

