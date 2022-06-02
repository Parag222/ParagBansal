#include<stdio.h>
int main(){
    int n,vis=-1;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;++i)
        scanf("%d",&arr[i]);
    int freq[n];
    for (int i = 0; i < n-1; i++)
    {
        int count=1;
        for (int j = i+1; j<n; j++)
        {
            if (arr[i]==arr[j])
            {
                freq[j]=vis;
                count+=1;
            }
        }
        if (freq[i]!=vis)
        {
            freq[i]=count;
        }
    }
    for (int i = 0; i < n; i++)
    {
        if (freq[i]!=vis)
        {
            printf("%d",freq[i]);
        }
        
    }    
return 0;
}