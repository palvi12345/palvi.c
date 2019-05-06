
#include<stdio.h>
int get_input()
{
int x;
printf("Enter first number\n");
scanf("%d",&x);
return x;
}
int get_input2()
{
int y;
printf("Enter second number\n");
scanf("%d",&y);
return y;
}
int add_2_num(int x,int y)
{
int z;
z=x+y;
return z;
}
void output(int x, int y, int z)
{
printf("%d + %d is %d",x,y,z);
}
int main(void)
{
int x=get_input();
int y=get_input2();
int z=add_2_num(x,y);
output(x,y,z);
}


