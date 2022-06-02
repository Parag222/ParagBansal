#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    
        for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int min=arr[0],max=arr[0];
    for (int i = 0; i < n; i++)
    {
        if (arr[i]>max)
        {
            max=arr[i];
        }
    }
    for (int i = 0; i < n-1; i++)
    {
        if (arr[i]<min)
        {
            min=arr[i];
        }    
    }
    printf("max=%d,min=%d",max,min);
    return 0;
}   

// #include<stdio.h>
// int main(){
//     int n,a=0,b=0;
//     scanf("%d",&n);
//     int arr[n];
//     for(int i=0;i<n;i++){
//         scanf("%d",&arr[i]);
//     }
//     for(int i=0;i<n;++i){
//         for (int j = i+1; j < n; ++j)
//         {
//             if (arr[i]<arr[j])
//             {
//                 a=arr[i];
//                 arr[i]=arr[j]; 
//                 arr[j]=a; 
//             }
//         }   
//     }
//     printf("%d",arr[0]);
//     printf("%d",arr[n-1]);
//     return 0;
// } 