#include <stdio.h>

void hash(int h[],int i,int k,int m)
{
    int j;
    j = ( k%m + i ) % m;
    if(i>m)
    {
        printf("Not possible");
    }
    else if(h[j]==-1)
    {
        h[j] = k;
    }
    else if(h[j]!=-1)
    {
        hash(h,i+1,k,m);
    }
}

int main() {
    // Write C code here
    int m,k,ans=1;
    int h[100];
    printf("Enter hashing table size\n");
    scanf("%d",&m);
    for(int i=0;i<m;i++){h[i]=-1;}
    while(ans==1)
    {
        printf("Enter key\n");
        scanf("%d",&k);
        hash(h,0,k,m);
        printf("Enter 1 to continue\n");
        scanf("%d",&ans);
    }
    for(int i=0;i<m;i++)
    {
        if(h[i]!=-1)
        printf("| %d",h[i]);
        else
        printf("|null");
    }

    return 0;
}