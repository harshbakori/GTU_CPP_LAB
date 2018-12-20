#include<iostream>
#include<conio.h>
#include<string.h>
#include<stdio.h>
int main() {
  int a,i;
   std::cout << "enter the length of the string you want to revers " << '\n';
   std::cin >> a;
   char str[a];
   std::cout << "so your string is of the length" << a << '\n';
   std::cout << "enter the string now" << '\n';
   i=0;
   do{
     std::cin >> str[i];
     i++;
   }
   while (i<a);
   std::cout << "string is " << '\n';
   for ( i = 0; i < a; i++) {
     std::cout << str[i];
   }
   std::cout << '\n'<<"reverse is" << '\n';
   for (i = 0; i <a; i++) {
     if (str[i]!=NULL) {
       std::cout << str[(a-1)-i] ;
     }
   }
  return 0;
}
