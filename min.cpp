//use of friend function
#include<iostream>
class one
{
  int a,b;
public:
  int initialize();
  friend float min(one s);
};
 int one::initialize(){std::cout << "enter a and b" << '\n';std::cin >> a>>b;}
 float min(one s)
 {
   float avg=(s.a+s.b)/2;
   return avg;
 }
main()
{
  one z;
  z.initialize();
  std::cout << "ans is "<< min(z) << '\n';
  return 0;
}
