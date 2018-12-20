#include<iostream>
#define PI 3.14
    int rad;
    float hei;
    int trel;
    int th,tl;
    float area;
       void get_r()
    {
    std::cout<<"enter the radious of the circle";
    std::cin>>rad;
    }
      void get_h()
    {
    std::cout<<"enter the height of squear";
    std::cin>>hei;       }
      void get_t()
    {
    std::cout<<"enter the length of the side of triangle";
    std::cin>>trel;      }
void get_l()
    {
    std::cout<<"enter the heigh and length for triangle";
    std::cin>>th>>tl;    }

    are(int rad)
    {
    float area;
    area=rad*PI*PI;
    return area;
    }
    are(float hei)
    {area=hei*hei;
    return area;}
    are (int th,int tl)
    {area=th*tl;
    return area;
    }

int main()
{

   get_r();
   std::cout<<rad<<"\n";
      std::cout<<"area"<<are(rad)<<"\n";
   get_h();
    std::cout<<hei<<"\n";
       std::cout<<"area"<<are(rad)<<"\n";
    get_t();
    std::cout<<trel<<"\n";
       std::cout<<"area"<<are(rad)<<"\n";
   get_l();
    std::cout<<th<<"\n"; std::cout<<tl<<"\n";
   std::cout<<"area"<<are(rad)<<"\n";
   return 0;

}
