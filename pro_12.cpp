#include<iostream>
int n,i;
double m,ans;
int power(int m,int n);
double power(double m,int n=2);
main()
{
  std::cout << "enter the m" << '\n';
  std::cin >>m;
  std::cout << "enter the n" << '\n';
  std::cin >> n;
  power(m,n);
  std::cout << "with n ans = "<< ans << '\n';
  std::cout << "enter double m " << '\n';
  double c;
  std::cin >> c;
  power(double (c),n);
  std::cout << "intm ans = "<< ans << '\n';
  power(m);
  std::cout << "n=2 ans = "<< ans << '\n';
  return 0;
}
power(int m,int n)
{
  ans=1;
  for (int i = 0; i < n; i++)
  {
    ans=ans*m;
  }
  return 1;
}

double power(double m,int n)
{
  ans=1;
  for (int i = 0; i < n; i++)
  {
    ans=ans*m;
  }
  return 2;
}
