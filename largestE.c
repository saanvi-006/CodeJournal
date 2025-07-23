#include<stdio.h>
int main(){
    int arr[]={3,4,5,6,7,10};
    int n=sizeof(arr)/sizeof(arr[0]);
    int max=arr[0];
    for(int i=0;i<n;i++){
        if(arr[i]>max){
            max=arr[i];
        }
    }
    printf("Largest element is: %d\n", max);
    return 0;
}
