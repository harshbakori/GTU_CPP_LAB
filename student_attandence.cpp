// cpp program that discribe the student detail such as roll no, name and attandence of 5 subject
//if the avg attandence is belo 75 % then student is not aligibal for mid sem exam
//write a cpp programe class having getdetail, set detail,check eligibility as a member function
#include<iostream>
int a;
class student
{
  char name[50];
  int rolno;
  int sub[5];
public:
  void stedetail()
  {
    std::cout << "enter the name of the student" << '\n';
    std::cin >> name;
    std::cout << "enter the roll no of student" << '\n';
    std::cin >> rolno;
    std::cout << "enter total days to be attande " << '\n';
    std::cin >> a;
    for (int i=0;i<5;i++)
    {
      re:
      std::cout << "attande of subject "<< i+1 << '\n';
      std::cin >> sub[i];
      if (sub[i]>a) {std::cout << "there is an error please enter proper attandence" << '\n'; goto re; }
    }
  }
  void getdetail();
  void check();
};
/*delay()
  {int c, d;for (c = 1; c <= 32767; c++)
       for (d = 1; d <= 32767; d++)
        {}return 0;
  }*/
void student::getdetail()
{
  system ("cls");
  std::cout << "name of the student is : "<< name << '\n';
  std::cout << "attandece  are" << '\n';
  for (int i=0;i<5;i++)
  {
    std::cout << "in sub " << i+1 << " attandence is :"<<sub[i] << '\n';
  }
  check();
}

void student::check()
{
  int sum=0;
  for (int i=0;i<5;i++)
  {
    sum=sum+sub[i];
  }
  float avg=(100*sum)/(a*5);
  std::cout << "\n" << '\n';
  std::cout << "you are having "<< avg <<"% attandence" << '\n';
  if (avg<75){system("color 04");std::cout << "not eligible for exam" << '\n';system("timeout 5");system("cls");}
  else {system("color 02");std::cout << "eligible for exam" << '\n';system("timeout 5");system("cls");}
  system("color 07");
}

main()
{
  start:
  student z;
  int f=0;
  std::cout << "ether your choise \n 1 for set detail \n 2 for get detail \n 3 for exit" << '\n';
  std::cin >> f;
  switch(f)
  {
    case 1:
  //  system("timeout 0");
    system("cls");
      z.stedetail();
      break;
    case 2:
    system("cls");
      z.getdetail();
      break;
    case 3:
      goto exit;
      break;
    }
    goto start;
    exit:
  return 0;
}
