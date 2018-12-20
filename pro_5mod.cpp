#include<iostream>
#include<stdio.h>
#include<conio.h>
#include<string.h>
int main() {
  int i,a;
  std::cout << "enter the length of the string you want to revers " << '\n';
  std::cin >> a;
   char str[a];
   std::cout << "enter the string now" << '\n';
   gets(str);
   i=0;
   std::cout << "string is ";
   std::cout << str << '\n';
   std::cout << "revers string is" << '\n';
   std::cout << a << '\n';
   for (i = a; i ==0; i--) {
     if (str[i]!=NULL)
     {
       std::cout << str[i] << '\n';
     }
   }
   return 0;
}
