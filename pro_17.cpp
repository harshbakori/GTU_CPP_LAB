#include<iostream>
class test
{
  static int a;
public:
  test(){a++;}
  ~test(){a--;}
  friend display();
};
int test::a=0;
display()
  {
    std::cout << "number of object are "<< test::a << '\n';
  }
int main()
{
  {
  test b,c,d;
  display();
  }
  display();
  test f;
  display();
  return 0;
}
