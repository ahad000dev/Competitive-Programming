#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
int returnValue(int n,int m, int a[n][m])
{
    if (n==m)
    {
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                if (i!=j&&i+j!=n-1)
                {
                    if (a[i][j]!=0)
                    {
                        return 0;
                    }
                }
                else
                {
                    if (a[i][j]!=1)
                    {
                        return 0;
                    }
                }
                
            }
        }
        return 1;
    }
    else
    {
        return 0;
    }

}
int main() {
    int n,m;
    scanf("%d %d",&n,&m);
    int a[n][m];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    int flag = returnValue(n,m,a);

    if (flag == 0)
    {
        printf("NO");
    }
    else
    {
        printf("YES");
    }
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    return 0;
}
