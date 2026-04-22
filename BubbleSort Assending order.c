#include<stdio.h>

int main(){
    int arr[]={17,3,5,7,45,77,10};//3,5,7,10,17,45,77
    int n=7;

    for(int i=0;i<n-1;i++){

        for(int j=0;j<n-i-1;j++){

            if(arr[j]>arr[j+1]){

                int temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    }

                printf("Sorted array:");

                    for(int i=0;i<n;i++){
                        printf("%d ",arr[i]);
                    }
                    return 0;
                }
            
        