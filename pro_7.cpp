#include<iostream>
#include<conio.h>
#include<string.h>
#include<stdio.h>
int main() {
  int a,i;
  int b=0,e=0,p=0,o=0,u=0;
   std::cout << "enter the length of the string " << '\n';
   std::cin >> a;
   char str[a];
  // std::cout << "so your string is of the length" << a << '\n';
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
   for ( i = 0; i < a; i++)
   {
     if      (str[i]=='a') { b++;}
     else if (str[i]=='e') { e++;}
     else if (str[i]=='i') { p++;}
     else if (str[i]=='o') { o++;}
     else if (str[i]=='u') { u++;}
   }
   std::cout << "numbers of a are: "<< b << '\n';
   std::cout << "numbers of e are: "<< e << '\n';
   std::cout << "numbers of i are: "<< p << '\n';
   std::cout << "numbers of o are: "<< o << '\n';
   std::cout << "numbers of u are: "<< u << '\n';
   std::cout << "toatal is" << b+e+p+o+u;
}
