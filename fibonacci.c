#include<stdio.h>
int fib(int n)
{
  if(n<=1)
  return n;
  return (fib(n-1)+fib(n-2));
}
int main()
{
  int n;
  printf("Enter the no of fibonacci series to be printed \n");
  scanf("%d",&n);
  int ans = fib(n);
  printf("ANSWER = %d \n",ans);
}
