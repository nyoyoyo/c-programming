#include <stdio.h>
int main(void){
    int i,n,s=0;
    scanf("%d",&n);
    for(i=1;i<=n; i++){
        printf("%d\n",i);
        s=s+i;
    }
    printf("合計は%dです。\n",s);
    return 0;
}