#include <iostream>
#include <string.h>
class string
{
  char *ab;
public:
  string(){
    ab=NULL;
  }
  set()
  {
    char *b;
    std::cout << "enter the desired string" << '\n';
      gets(b);
    strcpy(ab,b);
  }
  display()
  {
    puts(ab);
  }
  friend int operator==(string a,string b);
};
int operator ==(string a,string b)
{if (strcmp(a.ab,b.ab)==0)
  {return 1;}
else
return 0;
}

main()
{
  string s,y;
  s.set();
  s.display();
  y.set();
  y.display();
  if (s==y) {
    std::cout << "string is same" << '\n';
  }else {std::cout << "string is not same" << '\n';}
  return 0;
}
