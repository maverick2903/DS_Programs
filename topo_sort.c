#include<stdio.h>


void dfs(int adj[100][100],int n,int v[],int start)
{
    int stack[100];
    int top=-1;
    stack[++top] = start;
    v[start] = 1;
    while(top!=-1)
    {
        start = stack[top--];
        printf("%d ",start);
        for(int i=0;i<n;i++)
        {
            if(adj[start][i]==1 && v[i]==0)
            {
                stack[++top] = i;
                v[i] = 1;
            }
        }
    }
}

void main()
{
    int n=5,v[100],indeg[100];
    int i=0;
    int adj[100][100];
    printf("Enter the size of matrix : ");
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        printf("\nEnter the %d row : ",i+1);
        for(int j=0;j<n;j++)
        {
            scanf("%d",&adj[i][j]);
        }
    }

    for(int i=0;i<n;i++)
    {
        v[i]=0;
        indeg[i]=0;
    }
// v[i] = 0,0,0,0,0,0...
    for(int i=0;i<n;i++)
    {
        printf("\n");
        for(int j=0;j<n;j++)
        {
           printf(" %d ",adj[i][j]);
        }
    }

    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
           if(adj[j][i])
            indeg[i]++;
        }
    }

    for(int i=0;i<n;i++)
    {
        if(indeg[i]==0)
        {
            dfs(adj,n,v,i);
        }
    }
    }
