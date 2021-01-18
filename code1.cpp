#include<stdio.h>
int main(){
int a=10;
int b=20;
int c=add(a,b);
printf("ans is "%d,c);
return 0;
}
int add(int a,int b){
    return a+b;
}