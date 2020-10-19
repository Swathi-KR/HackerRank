#include <stdio.h>
#include <stdlib.h>
void find(int [25][25],int,int,int,int,int,int);
int solution(int [25][25],int,int,int);
int main() {
    int n;
int arr1[25][25],arr2[24][24];
scanf("%d",&n);
for(int i=0;i<n-1;i++) {
    if((n-1)%(i+1)==0) {
        arr2[i][i]=(n-1)/(i+1);
    }
    else {
        arr2[i][i]=-1;
    }
    for(int j=i+1;j<n-1;j++){
        arr2[i][j]=arr2[j][i] = solution(arr1,n,i+1,j+1);
    }
}
for(int i=0;i<n-1;i++){
    for(int j=0;j<n-1;j++) {
        printf("%d ", arr2[i][j]);
    }
    printf("\n");
}
return 0;
}
int solution(int arr1[25][25],int n,int a, int b) {
    for(int i=0;i<n;i++)
    for(int j=0;j<n;j++)
    arr1[i][j]=-1;
    find(arr1,0,0,a,b,0,n);
    return arr1[n-1][n-1];
}
void find(int arr1[25][25], int i, int j,int a,int b,int count,int n) {
    if((i<0)||(j<0)||(i>=n)||(j>=n))
    return;
    if((arr1[i][j]<=count)&&(arr1[i][j]!=-1))
    return;
    arr1[i][j]=count;
    find(arr1, i+a, j+b, a, b, count + 1, n);
    find(arr1, i+a, j-b, a, b, count + 1, n);
    find(arr1, i-a, j+b, a, b, count + 1, n);
    find(arr1, i+b, j+a, a, b, count + 1, n);
    find(arr1, i-b, j+a, a, b, count + 1, n);
    find(arr1, i+b, j-a, a, b, count + 1, n);
    find(arr1, i-b, j-a, a, b, count + 1, n);
    find(arr1, i-a, j-b, a, b, count + 1, n);
}
