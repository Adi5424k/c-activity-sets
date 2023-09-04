#include <stdio.h>
int input();
void add(int a, int b,int *sum);
void output(int a, int b, int sum);

int main()
{
    int a,b,sm;
    a=input();
    b=input();
    add(a,b,&sm);
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

void add(int a,int b,int *sum)
{
    *sum=a+b;
}

void output(int a, int b, int sum)
{
    printf("The sum of %d and %d is %d\n",a, b,sum);
}
