#include<iostream>
using namespace std;
class staff //level 0
{
  int code;
  string name;
public:
  void Sgetdata()
  {
    std::cout << "enter the name of staff  " << '\n';
    std::cin >> name;
    std::cout << "enter code of the staff" << '\n';
    std::cin >> code;
  }
  void Sdisplay()
  {
    std::cout << "name is : "<< name << "\ncode is :"<< code << '\n';
  }
};

class qualification
{
  string Heigested;
  string HeiP;
public:
  void qgetdata(){
    std::cout << "enter heigest education" << '\n';
    std::cin >> Heigested;
    std::cout << "enter heigest prifetional qualification" << '\n';
    std::cin >> HeiP;
  }
  void qdisplay(){std::cout << "education is :" << Heigested << '\n';
  std::cout << "heigest prifetional qualification is :" << HeiP <<'\n';}

};
class teacher : public staff, public qualification //level 1
{
  string subject;
  int publication;
public:
  void tgetdata()
  {
    Sgetdata();
    std::cout << "enter the subject" << '\n';
    std::cin >> subject;
    std::cout << "enter number of publications" << '\n';
    std::cin >>publication;
    qgetdata();
  }
void   tdisplay()
  {
    Sdisplay();
    std::cout << "subject is :"<< subject << "\nnumbre of publications are :"<<publication << '\n';
    qdisplay();
  }
};

class officer : public staff,public qualification //level 1
{
  int grade;
  //string Heigested;
  //string HeiP;
public:
  void ogetdata()
  {
    Sgetdata();
    std::cout << "enter the grade of officer" << '\n';
    std::cin >> grade;
    qgetdata();
  }
  void odisplay()
  {
    Sdisplay();
    std::cout << "grade is :"<< grade << '\n';
    qdisplay();
  }
};

class Typest : public staff //level 1
{
  int speed;
public:
  void Tgetdata()
  {Sgetdata();
    std::cout << "enter the speed in words per minute" << '\n';
    std::cin >> speed;
  }
  void Tdisplay()
  {
    Sdisplay();
    std::cout << "the speed is "<< speed << '\n';
  }
};

class Regular : public Typest //level 2
{
public:
void   Rgetdata()
  {
    Tgetdata();
  }
  void Rdisplay()
  {
    Tdisplay();
  }
};

class casual : public Typest //level 2
{
  int day;
  int wage;
public:
void   cgetdata()
  {
    Tgetdata();
    std::cout << "enter days" << '\n';
    std::cin >> day;
    std::cout << "enter wage" << '\n';
    std::cin >> wage;
  }
  void cdisplay()
  {
    Tdisplay();
    std::cout << "dailywages is : " << day*wage<< '\n';
  }
};

main()
{
  start:
  int ch,ch2;
  std::cout << " is it teacher typist or officer ??" << '\n';
  std::cout << "1 for teacher\n2 for Typest\n3 for officer" << '\n';
  std::cin >> ch;
  if (ch==1) {
    system ("cls");
    std::cout << "Entering for teacher" << '\n';
    teacher t;
    t.tgetdata();
      system ("cls");
    t.tdisplay();
  }
  if (ch==2) {
    system ("cls");
    std::cout << "Entering for typest" << '\n';
    std::cout << "is it 1 regular or 2 casual [1/2]?" << '\n';
    std::cin >> ch2;
    if (ch2==1) {
      Regular r;
      r.Rgetdata();
        system ("cls");
      r.Rdisplay();
    }
    if (ch2==2) {
     casual c;
     c.cgetdata();
       system ("cls");
     c.cdisplay();
    }
  }
  if (ch==3)
  {
    system("cls");
    std::cout << "Entering for officer" << '\n';
    officer o;
    o.ogetdata();
      system ("cls");
    o.odisplay();
  }
  std::cout << "want to try again? press if 3 yes or 4 to exit" << '\n';
  std::cin >> ch2;
  if (ch2==3) {
    system("cls");
    goto start;
  }
  return 0;
}
