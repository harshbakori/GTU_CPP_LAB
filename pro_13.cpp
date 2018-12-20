#include<iostream>
int a,b,c;
inline max(int a,int b, int c)
{
  if(a>b&& a>c)
  {std::cout << "a is max ="<< a << '\n';}
  else if (b>a&&b>c ) {std::cout << "b is max ="<< b << '\n';}
  else if (c>a&&c>b) {std::cout << "c is max ="<< c << '\n';}
}

inline min(int a,int b,int c)
{
  if(a<b&& a<c){std::cout << "a is min ="<< a << '\n';}
  else if (b<a&&b<c ) {std::cout << "b is min ="<< b << '\n';}
  else if (c<a&&c<b) {std::cout << "c is min ="<< c << '\n';}
}
main ()
{
  int a,b,c;
  std::cout << "enter the three numbers" << '\n';
  std::cin >> a >> b >> c;
  max(a,b,c);
  min(a,b,c);
}
