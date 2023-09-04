#include <stdio.h>
int input();
int add(int a, int b,);
void output(int a, int b, int sum);

int main()
{
    int a,b,sm;
    a=input();
    b=input();
    sm=add(a,b);
    output(a,b,sm);
    return 0;
}

int input()
{
    int x;
    printf("Enter the value\n");
    scanf("%d",&x);
    return x;
}

int add(int a,int b,)
{
  int sum=0;
    sum=a+b;
  return sum;
}

void output(int a, int b, int sum)
{
    printf("The sum of %d and %d is %d\n",a, b,sum);
}
