#include<stdio.h>
int main(void) {
 int score;
 //変数scoreに整数を入力
 printf("点数を入力してください");
 scanf("%d",&score);
 //scoreが80点以上なら[合格]と表示しよう
 if(score>=80){
 printf("合格です。\n");
 }
 else{
printf("不合格です。\n");
 }
 return 0;
}