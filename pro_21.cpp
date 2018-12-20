#include<iostream>
using namespace std;
class employe
{
private:
  int age;
  int sallary;
  char group;
public:
  employe(){age=0;sallary=0;}
  employe(int a,int s,char n)
  {
    sallary=s;
    age=a;
    group=n;
  }
  friend ostream &operator <<(ostream &hout,const employe &e1)
  {
    hout<<endl;
    hout<<"sallary is : "<<e1.sallary<<endl<<"age is : "<<e1.age<<endl<<"group is : "<<e1.group;
    return hout;
  }
  friend istream &operator >>(istream &hin,employe &e1)
  {
    std::cout << "enter sallary , age and group" << '\n';
    hin >> e1.sallary;
    hin >> e1.age;
    hin >> e1.group;
  }
};

// ostream &operator <<(ostream &hout,employe &e1)

// istream &operator >>(istream &hin,employe &e1)


 int main()
 {
   char c=c;
   employe e1,e2(17,25000,c);
   cin >> e1;
   cout << "enter value of first student" << e1<<endl<< '\n';
   cout << "value of second student" << e2<<endl <<'\n';
 }
