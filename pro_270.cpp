#include<iostream>
#include<fstream>
#include<string.h>
using namespace std;

int main()
{
  std::string line;
  int a;
  fstream file;
  file.open("harsh.txt",ios::out);
  cout << "the file is created" << '\n';
  file<<"this is the text enterd in the file "<<'\n'<<"the second line ";
file.close();
file.open("harsh.txt",ios::in);
  /*char ch;
  cout<<"File content: ";
  while(!file.eof())
  {
      file>>ch;
      cout<<ch;
  }*/
  std::cout << "\ntry 2 : ";
  char fileChar;
  if(file.eof())
          return 0;
          file >> noskipws;
    while (!file.eof())
    	{
    		file >> fileChar;
    		cout << fileChar;
        line +=fileChar;
    	}
  file.close();
  std::cout << fileChar<< '\n';
  file.open("bakori.txt",ios::out);
  file<<line;
  file.close();
  file.open("bakori.txt",ios::in);
  //char fileChar;
  std::cout << "\n\nfile 2 data is : " << '\n';
  if(file.eof())
          return 0;
          file >> noskipws;
    while (!file.eof())
      {
        file >> fileChar;
        if (file.eof())
        {
          fileChar = '#';
        }
    // line +=fileChar;
        cout << fileChar;
      }
      file.close();
  return 0;
}
