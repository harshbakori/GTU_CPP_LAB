//cpp program to find number is prime or not
#include<iostream>
int prime()
{
  int a,c=0;
  std::cout << "enter any no :-" << '\n';
  std::cin >> a;
  if (a==1){return 2;}
  for (int i = 2; i < a; i++)
  {
    if(a%i==0){c=1;break;}
  }
  if(c==1){return 0;}
  else return 1;
  //else if(c!=0){return 0;}
}

int main()
{
  int ans;
  ans=prime();
  if (ans==1)
  {
    std::cout << "the number is prime" << '\n';
  }
  else if(ans==0)
  {
    std::cout << "the5 number is composit" << '\n';
  }
  else if(ans==2)
  {
    std::cout << "the number ais not prime nor composit" << '\n';
  }
  return 0;
}
