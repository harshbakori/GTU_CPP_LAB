#include<iostream>
#include<string.h>
class bank_account
{
  char name[20];
  int accno;
  char type[50];
  int amount;
public:
  setvalue(int i){
  char d[20];
  std::cout << "enter name of coustmer " << '\n';
  std::cin >> name;
  accno = i;
  std::cout << "enter account type  " << '\n';
  std::cin >> d;
  amount = 0;}
  diposit_amount(){std::cout << "enter amount to diposit " << '\n';int a;std::cin >> a;amount=amount+a;}
  widrow(){std::cout << "enter amount to widrow" << '\n';int a;
  wd:
  std::cin >> a;
if (a>amount) {std::cout << "cam't widrow pleas enter valid amount " << '\n';goto wd;}
if (a<=amount) {amount=amount-a;}
          }
  display(){std::cout << "name of the coustmer is: "<< name << "\n ballance is: "<< amount << "\naccount no is "<< accno<<'\n';}
};

int main()
{
  int i,ch;
  bank_account a[10];
  while(i!=11)
  do{
  std::cout << "enter coustmer number" << '\n';
  std::cin >> i;if (i==11) {goto ab;}
do{
  std::cout << "select action \n0 setvalue\n1 diposit \n2 widrow\n3 display detail\n 5 exit" << '\n';
  std::cin >> ch;
  switch (ch) {
    case 0:
  a[i].setvalue(i);
  break;
  case 1:
  a[i].diposit_amount();
  break;
  case 2:
  a[i].widrow();
  break;
  case 3:
  a[i].display();
  break;
}
}while(ch!=5);
}
ab:
  return 0;
}
