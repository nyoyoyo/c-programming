//長方形の面積を求める関数を作りなさい

//関数の定義

#include <stdio.h>
float chohokei(float x,float y);
int main(void){
    float s=chohokei(5,3);
 printf("%f\n",s);
    return 0;
}

float chohokei(float x,float y){
    float s;
s=x*y;

    return s;
}