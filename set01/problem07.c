#include <stdio.h>
int input();
int sum(int n);
void output(int add);

int main()
{
    int a,n;
    n=input();
    a=sum(n);
    output(a);
    return 0;
}

int input()
{
    int n;
    printf("Enter a positive number:");
    scanf("%d",&n);
    return n;
}

int sum(int n)
{
  int add=0;
    int i;
    for(i=1;i<=n;i++)
    {
        add+=i;
    }
    return add;
}

void output(int add)
{
    printf("Sum is %d",add);
}
