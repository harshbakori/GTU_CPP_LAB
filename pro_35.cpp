#include<iostream>
#include<conio.h>
using namespace std;
double a,b;
fun3(double j){
   try{
       if (cin.fail())
           throw (j);
   }
   catch(double j)
   {
       cout<<"\n Incompatible Datatype for value"<<j;
   }
}
fun1()
{
  getch();
  std::cout << "enter two double int" << '\n';
  std::cin >> a;
  fun3(a);
  std::cin >> b;
  fun3(b);
}
fun2()
{
  int y,c;
  try {
    if(b==0){throw y;}
    else if (a > b)
    {
      c=a/b;
      std::cout << "div is : " << '\n';
      std::cout << c << '\n';
    }
    else{ throw y ;}
  }
  catch (int y){std::cout << "\nplease enter valid numbers " << '\n';}
}
main()
{start:
  fun1();
  fun2();
  goto start;
}
