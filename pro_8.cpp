#include<iostream>
#include<conio.h>
#include<string.h>
#define  PI 3.14
main()
{
  enum choice{circule,rectangal,triangle};
  std::cout << "what do you want to do? \n o area of circule \n 1 area of rectangle \n 2 area of triangle " << '\n';
  std::cin >> choice ;
  switch ( choice )
  {
    case 0:
          std::cout << "enter the radious of circule" << '\n';
          float r,ans;
          std::cin >> r ;
          ans=PI*r*r;
          std::cout << ans << '\n';
          break;
    case 1:
          int h,l;
          std::cout << "enter the length" << '\n';
          std::cin >> l;
          std::cout << "enter hight " << '\n';
          std::cin >> h;
          ans=l*h;
          break;
    case 2:
          std::cout << "enter the length of one side" << '\n';
          int b;
          std::cin >> b;
          ans = (1/2)*b;
          break;
  }
  return 0;
}
