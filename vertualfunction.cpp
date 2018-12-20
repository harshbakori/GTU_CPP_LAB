#include<iostream>
#include<conio.h>
#define PI 3.14

class shap
{
protected:
  double a,b,c;
public:
  shap(){a=0;b=0;c=0;}
  shape(int i,int m,int n=0){a=i;b=m;c=n;}
  virtual void display()=0;
};

class twod : public shape
{
protected:
  double area;
public:
  twod(){}
  twod(int x,int y=0):shape(x,y){}
  virtual double findarea()=0;
};

class threed : public shape
{
protected:
  double volume;
public:
  threed(){}
  threed(int x,int y=0;int z=0):shape(x,y,z){}
  virtual double findvolume()=0;
};

class triangle : public twod
{
public:
  triangle(int x,int y):twod(x,y){}
  double findarea(){
    area=0.5*a*b;
    return area;
  }
  void display(){std::cout << "area of triangleis :" << findarea() << '\n';}
};
