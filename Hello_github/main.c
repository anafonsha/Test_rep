#include <stdio.h>
#include <stdlib.h>
int sum(int,int);
int main()
{
    int res=sum(1,1);
    printf("%d",res);
    return 0;
}
int sum(int a,int b){
int res=a+b;
return res;
}
