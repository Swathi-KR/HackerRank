#include <stdio.h>
int main() {
    int a[100];
    int n;
    float p =0;
    float ne =0;
    float z=0;
    scanf("%d",&n);
    for(int i=0;i<n;i++) {
        scanf("%d",&a[i]);
    }
    for(int i=0;i<n;i++) {
        if(a[i]>0) {
            p = p + 1;
        }
        else if(a[i]<0) {
            ne = ne + 1;
        }
        else
        z=z+1;
    }
    printf("%f\n",(p/n));
    printf("%f\n",(ne/n));
    printf("%f\n",(z/n));
}
