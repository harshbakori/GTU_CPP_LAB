#include<iostream>
class Int
{
  int a;
public:
  Int(){a=0;}
  void setvalue(int b)
  {//std::cout << "enter a value to set" << '\n';std::cin >> a;
a=b;
  }
  void displayvalue(){std::cout << "the value is : "<< a << '\n';}
  friend Int add(Int , Int );
};
Int add(Int s,Int p)
{
  Int q;
  q.a=s.a+p.a;
  return q;
}
int main()
{
  int ch;
  Int i1,i2,i3;
  int x,z;
  do {
  std::cout << "what do you want to do?" << '\n';
  std::cout << "1 initialize \n2 set value \n3 displayvalue \n4 add \n5 exit" << '\n';
  std::cin >> ch;
  switch (ch)
  {
    case 1:
      i1.displayvalue();
      i2.displayvalue();
      i3.displayvalue();
      std::cout << "value initialized to 0" << '\n';
      break;
    case 2:
      std::cout << "enter values to set" << '\n';
      std::cin >> x >> z;
      i1.setvalue(x);
      i2.setvalue(z);
      std::cout << "objest two value initialized" << '\n';
      break;
    case 3:
      i1.displayvalue();
      i2.displayvalue();
      break;
    case 4:
      i3=add (i1,i2);
      i3.displayvalue();
      break;
  }  system("pause");system("cls");
}while(ch<5);
}/*
{
   Int i1,i2,i3;
   i1.displayvalue();
   i2.displayvalue();
   i3.displayvalue();
std::cout << "after set value" << '\n';
   i1.setvalue(10);
   i2.setvalue(20);
   i1.displayvalue();
   i2.displayvalue();
std::cout << "after add " << '\n';
   i3=add (i1,i2);
   i3.displayvalue();

}*/
