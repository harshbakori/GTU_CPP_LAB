#include<conio.h>
#include <iostream>
#include <string.h>
#include <iomanip>
#include <fstream>
//#include <conio.h>
//#include<iostream>
using namespace std;
fstream f,fu;
ifstream writefu;
ofstream readfu;
char fuser[20],txt[5]=".txt";
int balance;
class userfile
{
public:
  char balance[20];
  showdata()
  {
    cout<<setw(20)<<balance;
  }
};
void getbal(){
  std::cout << "enter amount : ";
  std::cin >> balance;
}
userfile b;
void deposit()
{
  getbal();
fu.write((char *) &b, sizeof(b));
//std::cout << "balance is : " << balance<< '\n';
fu.close();
}
void withdraw2()
{ int withdraw1;
  cout<<"Enter the ammount to withdraw:";
  cin>>withdraw1;
  if(withdraw1%100!=0)
   {
     cout<<"\nPlease Enter the ammount in multiples of 100";
   }
  else if(withdraw1>(balance-100))
  {
     cout<<"\nInsufficient Balance";
  }
  else
  {
    balance=balance - withdraw1;
   cout<<"Your ammount withdrawn successfully!!";
   cout<<"Your current balance is:"<<balance;
  }
}
void Transfer()
{
double transfer_amt;
}
void checkbalance()
{
//  while(fu){
  //   fu.read((char *) &b, sizeof(b));
  //   if(!fu.eof())
   //b.showdata();
  //}
  fu.clear();
cout<<"Your Balance is:"<<balance;
}
char nm[20],pass2[20];
void make_filename()
{
  strcpy(fuser,nm);
  strcat(fuser,txt);
//  std::cout << fuser << '\n';
}
int main1()
{
int cust_choice;
 double amt,withdraw,balance;
 while(1){

           cout << " \n -----------------------------------------------------------------------  \n";
           cout << "|                        AUTOMATED TELLER MACHINE                       | \n";
           cout << " -----------------------------------------------------------------------  \n";

           cout << "                     Please Select option to continue:              \n" << endl << endl;

           cout << "1) Check balance    : Press 1" << endl;
           cout << "2) Withdraw Cash    : Press 2" << endl;
           cout << "3) Deposit Cash     : Press 3" << endl;
          // cout << "4) Transfer Cash    : Press 4" << endl;
           cout << "5) Logout           : Press 5" << endl;
           cout << "\nEnter option: ";
           cin >> cust_choice;
           make_filename();
        //   fu.open(fuser,ios::in | ios::out | ios::binary);
          switch(cust_choice)
   {
          case 1:checkbalance();
          system("timeout 5");
          system("cls");
//               clrscr();
                 break;
          case 2:withdraw2();system("timeout 5");
          system("cls");
                break;
          case 3:deposit();system("timeout 5");
          system("cls");
                 break;
          case 4:Transfer();system("timeout 5");
          system("cls");
                 break;
          case 5:

          goto end;break;
    }//shwitch
  }//while
  end:
return 0;}
