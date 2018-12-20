#include<iostream>
#include<conio.h>
#include<math.h>
 main()
{  int a,b,c;
  float avg,d;
  std::cout << "enter the values of a,b,c" << '\n';
  std::cin >> a;
  std::cin >> b;
  std::cin >> c;
  d=a+b+c;
  avg=d/3;
  std::cout << "avg of the number is" <<avg <<'\n';
if (a>b&&a>c) {
  std::cout << a<<" is max"<< '\n';
}
  else if(b>c&&b>a)
  {
    std::cout << b <<" is max"<< '\n';
  }
  else
  {
    std::cout << c<<" is max"<< '\n';
  }
if (a<b&&a<c) {
  std::cout << a<<" is min"<< '\n';
  }
else if(b<c&&b<a)
{
  std::cout << b <<" is min"<< '\n';
}
else
{
  std::cout << c<<" is min"<< '\n';
}
  return 0;
}
