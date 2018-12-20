#include<iostream>
#include<math.h>
#include<iomanip>
main()
{
  std::cout <<std::setw(15)<< "v"<<std::setw(8)<<"p"<<std::setw(6)<<"r"<<std::setw(4)<<"n" << std::endl;
  float v,p,r,n;
  for(p=1000,r=0.10,n=1;n<=10;p=p+1000,r=r+0.01,n++)
  {
    v=p*pow(1+r,n);
  std::cout <<std::setw(15)<<v<<std::setw(8)<<p<<std::setw(6)<<r<<std::setw(4)<<n<< std::endl;
  }
  return 0;
}
