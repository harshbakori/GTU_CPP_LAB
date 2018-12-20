#include<iostream>
#include<conio.h>
int main()
{
  int a[3][3],b[3][3],c[3][3];
  int i=0,j=0;
  for (i=0;i<3;i++)
  {
    for ( j = 0; j < 3; j++)
    {
      std::cout << "enter the value of a[" << i << "][" << j <<"]";
      std::cin >> a[i][j];
    //  std::cout <<  '\n';
    }
  }
  std::cout << "matrix a is" << '\n';
  for (i=0;i<3;i++)
  {
    for (j= 0; j < 3; j++)
    {
      std::cout << a[i][j] << '\t';
    }
    std::cout << '\n';
  }

  for (i=0;i<3;i++)
  {
    for ( j = 0; j < 3; j++)
    {
      std::cout << "enter the value of b[" << i << "][" << j <<"]";
      std::cin >> b[i][j];
    //  std::cout <<  '\n';
    }
  }
  std::cout << "matrix b is" << '\n';
  for (i=0;i<3;i++)
  {
    for (j= 0; j < 3; j++)
    {
      std::cout << b[i][j] << '\t';
    }
    std::cout << '\n';
  }

  std::cout << "addiction of matrix is c" << '\n';

  for (i=0;i<3;i++)
  {
    for ( j = 0; j < 3; j++)
    {
    c[i][j]=a[i][j]+b[i][j];
    }
  }
  std::cout << "matrix c is" << '\n';
  for (i=0;i<3;i++)
  {
    for (j= 0; j < 3; j++)
    {
      std::cout << c[i][j] << '\t';
    }
    std::cout << '\n';
  }
  return 0;
}
