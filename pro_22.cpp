#include <iostream>
#define PI 3.14
class circle
{
  int r;
  float area;
public:
  circle(){r=0;area=0;}

  circle (int a){
    r=a;
    area=r*r*PI;
  }
  display()
  {
    std::cout << "the radious is "<< r << '\n';
    std::cout << "area is "<< area << '\n';
  }
//  friend int operator == (circle a , circle b);
  int operator == (circle a)
{if (r==a.r)
  {
      return 1;
  }
  else {return 0;}
}
};
/*int operator == (circle a,circle b)
{
if (a.r==b.r)
{
  return 1;
}
  else
  {  return 0;
  }
}*/
main()
{
  int r1,r2,v;
  ag:
  std::cout << "enter radious of the circles" << '\n';
  std::cin >> r1>>r2;
  circle x(r1),z(r2);
  x.display();
  z.display();
  if (x==z) {
    std::cout << "area is same" << '\n';}
    else
    std::cout << "area is not same" << '\n';

    std::cout << "whant to try again? (y=1/n=0)?" << '\n';
    std::cin >> v;
    if (v==1) {
      goto ag;
    }

  return 0;
}
