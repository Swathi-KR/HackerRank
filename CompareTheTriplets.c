#include <stdio.h>
int main() {
    int a[3],b[3];
    int a_count =0;
    int b_count =0;
    for(int i=0;i<3;i++) {
        scanf("%d",&a[i]);
    }
    for(int i=0;i<3;i++) {
        scanf("%d",&b[i]);
    }
    for(int i=0;i<3;i++) {
        if(a[i]>b[i])
        a_count++;
        else if(a[i]<b[i])
        b_count++;
    }
    printf("%d %d",a_count,b_count);
}
