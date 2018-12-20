#include<iostream>
#include<conio.h>
#include<string.h>

using namespace std;

class test
{
public:
        int Roll;
        char Name[25];
        float Marks;

       test()
       {
        Roll=1;
        strcpy(Name,"archit");
        Marks=85;
       }

        test(int r,char nm[],float m)           //Parameterize Constructor
        {
            Roll = r;
            strcpy(Name,nm);
            Marks = m;
        }

        void Display()
        {
            cout<<"\n\tRoll : "<<Roll;
            cout<<"\n\tName : "<<Name;
            cout<<"\n\tMarks : "<<Marks;
        }
    };
    int  main()
    {

        test ar(2,"archit",89.63);
        ar.Display();
    return 0;
    }
