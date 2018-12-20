//cpp program to calculate avg of an array cantaininng 10 eliments using userdefine fun of catagory no return with argument
#include<iostream>
int i=0;
float ans=0;
int a[9];
void avg(int a[])
{
  for(i=0;i<10;i++)
  {
    ans=ans+a[i];
  }
  ans=ans/10;
  std::cout << "ans="<< ans  << '\n';
}
int main()
{
    for ( i = 0; i < 10; i++)
    {
      std::cout << "enter number: "<< i+1 << '\n';
      std::cin >> a[i];
    }
  avg(a);
  return 0;
}
