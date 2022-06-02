#include<stdio.h>
int main(){
    int n,a=0,b=0;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<n;++i){
        for (int j = i+1; j < n; ++j)
        {
            if (arr[i]<arr[j])
            {
                a=arr[i];
                arr[i]=arr[j]; 
                arr[j]=a; 
            }
        }   
    }
    printf("%d",arr[1]);
    return 0;
}   