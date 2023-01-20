#include<stdio.h>


void bst(int adj[100][100],int n,int v[],int start)
{
    int queue[100];
    int front=-1;
    int rear=-1;
    queue[++rear] = start;
    v[start] = 1;
    while(front!=rear)
    {
        start = queue[++front];
        printf("%d ",start);
        for(int i=0;i<n;i++)
        {
            if(adj[start][i]==1 && v[i]==0)
            {
                queue[++rear] = i;
                v[i] = 1;
            }
        }
    }
}

void main()
{
    int n=5,v[100];
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
    }

    for(int i=0;i<n;i++)
    {
        printf("\n");
        for(int j=0;j<n;j++)
        {
           printf(" %d ",adj[i][j]);
        }
    }

    printf("\nvertex : ");
    scanf("%d",&i);
    
    bst(adj,n,v,i);
    }