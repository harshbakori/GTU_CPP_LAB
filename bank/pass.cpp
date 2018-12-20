#include <iostream>
#include <fstream>
#include <string.h>
#include <iomanip>
#include <conio.h>
#include"atm.h"
int y = 0,write = 0;
using namespace std;
char nm[20],pass2[20];
int fn=0,fp=0;
fstream f,fu;
class authentication{
  char name[30],pass[20],passc[20];
public:
  void usear(){

    std::cout << "enter user name : ";
    std::cin >> name;
    std::cout << "\nenter passwoard : ";
    std::cin >> pass;
    //cout<<"\n\nEnter Name : ";            //show usears and password
    strcpy(nm,name);
  //  std::cout << "enter password" << '\n';
    strcpy(pass2,pass);
    char nama[20]="admin" ,passa[20]="password";
      if(strcmp(name,nama) == 0 && strcmp(pass,passa) ==0 )
    {
       y=1;
    }
    else { y = 2;}
}
//template <typename T>
char *getname(){ return name; }
char *getpass(){ return pass; }
  void conferm_password(){
        std::cout << "\nreenter your passwoard : ";
        std::cin >> passc;
        if(strcmp(pass,passc)==0){
          std::cout << "\n \t \t user created ...!!" << '\n';
          write = 1;
        }
        else{
          std::cout << "passwoard miss match plase retry..!!" << '\n';
        }
      }
 void signin(){
   usear();
   conferm_password();
 }
 void login(){usear();}
 void showdata();
};
void authentication :: showdata(){
    cout<<"\n";
    cout<<setw(20)<<name;
    //cout<<setw(15)<<pass;
}
void login_or_not(int a ,int b)
{
  int x;
  try{
  if (a==0 && b==0)
  throw x;
}
catch(int x)
  {std::cout << "please login first .....!!" << '\n';}
//  goto start;
}
char fuser[20],txt[5]=".txt";
void make_filename()
{
  strcpy(fuser,nm);
  strcat(fuser,txt);
  std::cout << fuser << '\n';
}
main()
{
    authentication a;
    int la=0,lu=0;
    f.open("users.txt", ios::ate | ios::in | ios::out | ios::binary);
      while(1){
        start:
        system("cls");
      	cout<<"\n*****ATM*****\n";
      	cout<<"1) Add new user\n";
      	cout<<"2) Login\n";
      	cout<<"3) Loged in or not\n";
      	cout<<"4) List all usears\n";
      	cout<<"5) Logout\n";
      	cout<<"6) Exit\n";
      	cout<<"Choose your choice : ";
        int ch;
      	cin>>ch;
      	switch(ch){
          case 1:
              std::cout << "Please login to admin to add new user" << '\n';
            //  system("timeout 3");
                a.usear();
                if( y ==1)
                {
                  std::cout << "you are going to add new user" << '\n';
                  a.signin();
                  if(write==1)
                  {
                    f.write((char *) &a, sizeof(a));
                    write=0;
                  }
                }
                else if(y != 1){std::cout << "you are not admin ..!!" << '\n';}
                system("timeout 5");
                break;
        case 2:
                if(la==1 || lu==1){
                  std::cout << "please logout first....!!!" << '\n';
                  goto start;
                }
                a.usear();
                if(y == 1 ){ std::cout << "you are loged in as admin" << '\n'; la=1;
              system("timeout 5"); }
                f.seekg(0,ios::beg);
                while(f.read((char *) &a, sizeof(a)))
                {
                  if(strcmp(nm,a.getname())==0)// && strcmp(pass2,a.getpass())
                  {
                    fn=1;
                  }
                  // a.showdata();
                }
                f.clear();
                f.seekg(0,ios::beg);
                while(f.read((char *) &a, sizeof(a)))
                {
                  if(strcmp(pass2,a.getpass())==0)
                  {
                    fp=1;
                    std::cout << "loged in sussesfully...!!" << '\n';
                    fu.open(fuser,ios::out);
                    std::cout << "file created sussesfully" << '\n';
                    main1();
                    lu=1;

                  }
                }
                f.clear();
                if (la != 1 ){
                if(fn != 1 || fp != 1)
                cout<<"\n\n---Record Not found---\n";
                getch();}
                break;
        case 3: login_or_not(la,lu);
                system("timeout 3");
                break;
        case 4:
                  std::cout << "Please give admin Login" << '\n';
                  a.usear();
                  if(y == 1 ){ std::cout << "you are loged in as admin" << '\n'; la=1;}
                  if(la==1){
                  f.seekg(0,ios::beg);
             		 cout<<"\n\nThe user list is\n";
             		 while(f){
             		    f.read((char *) &a, sizeof(a));
             		    if(!f.eof())
             			a.showdata();
             		 }
             		 f.clear();
             		 getch();}
                 else{
                   if(y != 1){std::cout << "you are not admin ..!!\n not have acces to this data......!!!\n\t SORRY>>!" << '\n';}
                   system("timeout 5");
                 }
                break;
        case 5:la=0;lu=0;
                std::cout << "you are loged out" << '\n';
                system("timeout 3");
                break;
        case 6:
                goto end;
                break;
              }//switch
    }//while
  end :
return 0;
}
