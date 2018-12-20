
#include<iostream>
#include<conio.h>
#include<fstream>
#include<stdio.h>
#include<stdlib.h>
using namespace std;
int main()
{
system("cls");
ifstream fs;
ofstream ft;
char ch, fname1[20], fname2[20];
cout<<"Enter Source File Name With Extension : ";
gets(fname1);
fs.open(fname1);
if(!fs)
{
 cout<<"Error In Opening Source File..!!";
 getch();
 exit(1);
}
cout<<"Enter Destination File Name With Extension : ";
gets(fname2);
ft.open(fname2);
if(!ft)
{
 cout<<"Error In Opening Target File..!!";
 fs.close();
 getch();
 exit(2);
}
fs.unsetf(ios :: skipws);
while(fs.eof()==0)
{

 fs>>ch;
 ft<<ch;
}
cout<<"File Copied Successfully..!!";
fs.close();
ft.close();
getch();
return 0;
}
