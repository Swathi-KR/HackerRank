#include <stdio.h>
#include <math.h>
int main() {
    int a[100][100];
    int n;
    int sum1=0;
    int sum2=0;
    int diff;
    scanf("%d",&n);
    for(int i=0;i<n;i++) {
        for(int j=0;j<n;j++) {
            scanf("%d",&a[i][j]);
        }
    }
     for(int i=0;i<n;i++) {
        for(int j=i;j<=i;j++) {
            sum1 = sum1 + a[i][j];
        }
    }
   for(int i=0; i<n; i++)
    {
        for(int j=0; j<n; j++)
        {
            if(i+j == ((n+1)-2))
            {
                sum2 += a[i][j];
            }
        }
    }
     diff = abs(sum1-sum2);
     printf("%d",diff);
    
    return 0;
}
