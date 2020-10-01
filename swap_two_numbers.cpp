#include<iostream.h>
#include<conio.h>
int main()
{
  clrscr();
  int a,b;
  cout<<"Enter two numbers 'a' and 'b' respectively : "<<endl;
  cin>>a>>b;
  a=a+b;
  b=a-b;
  a=a-b;
  cout<<"After swapping,the value of a : "<<a<<" and b : "<<b;
  getch();
  return 0;
}
