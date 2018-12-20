#include <iostream>
#include <conio.h>
using namespace std;
template <class T>
T findMin(T arr[],int n)
{
    int i;
    T min;
    min=arr[0];
    for(i=0;i<n;i++)
    {
         if(min > arr[i])
        min=arr[i];
    }
    return(min);
}
int main()
{

    int iarr[5];
//    char carr[5];
  //  double darr[5];

    cout << "Integer Values \n";
    for(int i=0; i < 5; i++)
    {
        cout << "Enter integer value "  << i+1 << " : ";
        cin >> iarr[i];
    }
/*
    cout << "Character values \n";
    for(int j=0; j < 5; j++)
    {
        cout << "Enter character value " << j+1 << " : ";
        cin >> carr[j];
    }


    cout << "Decimal values \n";
    for(int k=0; k < 5; k++)
    {
        cout << "Enter decimal value " << k+1 << " : ";
        cin >> darr[k];
    }*/
    //calling Generic function...to find minimum value.
    cout<<"Generic Function to find Minimum from Array\n\n";
    cout<<"Integer Minimum is : "<<findMin(iarr,5)<<"\n";
  //  cout<<"Character Minimum is : "<<findMin(carr,5)<<"\n";
    //cout<<"Double Minimum is : "<<findMin(darr,5)<<"\n";

    return 0;
}
