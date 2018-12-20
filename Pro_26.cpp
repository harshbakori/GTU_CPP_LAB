#include<iostream>
class time24
{
  int h1,m1;
public:
  time24(){};
   time24(int a,int b){
    h1 = a;
    m1 = b;
  }
  geth1(){
    return h1;
  }
  getm1(){
    return m1;
  }
  void display24(){
    std::cout << "hour 24 : "<< h1 << '\t'  << "min 24 : "<< m1 << '\n';
  }
};

class time12
{
  int h2,m2;
public:
  time12(){};
  time12(time24 t){
    h2=t.geth1();
    m2=t.getm1();
      if (h2>12) {
        h2=h2%12;

      if (m2>60) {
        m2=m2-60;
        h2++;
      }
    }
  }
   void display12(){
    std::cout << "hour 12 : "<< h2 << '\t'<<"min 12 : "<< m2 << '\n';
  }
};
main(){
  system("cls");
  time24 t1(13,45);
  time12 t2(t1);
  t1.display24();
  t2.display12();
}
