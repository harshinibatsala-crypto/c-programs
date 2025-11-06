#include<stdio.h>
int main()
{
    int a,b;
    printf("enter a and b values");
    scanf("%d %d",&a,&b);
    printf("\n using bitwise operator[AND &] on %d&%d:%4d",a,b,a&b);
    printf("\n using bitwise operator[OR |] on %d|%d:%4d",a,b,a|b);
    printf("\n using bitwise operator[<<] on %d<<%d:%4d",a,b,a<<b);
    printf("\n using bitwise operator[>>] on %d>>%d;%4d",a,b,a>>b);
    printf("\n using bitwise operator[xOR ^] on %d^%d:%4d",a,b,a^b);
    printf("\n using bitwise operator[~] on %d~%d:%4d",a,b,~a);
    return 0;
}
