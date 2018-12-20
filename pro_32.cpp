#include<iostream>
using namespace std;
template <class T>
class vector
{
  T a[3];
public:
  int i,j;
  void creat()
  {
    for ( i = 0; i < 3; i++)
    {
      std::cout << "a["<<i<<"]" << '\n';
      std::cin >> a[i];
    }
  }
  void modify() {
    int n;
    T value;
    std::cout << "enter posiction" << '\n';
    std::cin >> n;
    std::cout << "enter new value" << '\n';
    std::cin >> value;
    a[n]=value;
  }
  void display()
  {
    for (size_t j = 0; j < 3; j++)
    {
      std::cout << a[j] << '\n';
    }
  }
  void multiply()
  {
    int s;
    std::cout << "enter scaler value" << '\n';
    std::cin >> s;
    for ( i = 0; i < s; i++)
    {
        a[i]=a[i]*s;
    }
    for ( i = 0; i < 3; i++)
    {
      std::cout << a[i] << '\n';
    }
  }
};
main()
{
  int ch,obj;
  std::cout << "enter \n0 for int vecter\n1 for float vector\n2 for modify\n3 for multiply\n4 for display" << '\n';
  while(1)
  {
    std::cout << "enter choice : " << '\n';
    std::cin >> ch;
    switch (ch) {
      case 0:
            vector<int>obj1;
            obj1.creat();
            obj=0;
            break;
      case 1:
            vector<float> obj2;
            obj2.creat();
            obj=1;
            break;
      case 2:
        //    std::cout << "object : " << '\n';
          //  std::cin >> obj;
            if (obj == 0) {
              obj1.modify();
            }
            else
            {
              obj2.modify();
            }
            break;
      case 3:
        //    std::cout << "object : " << '\n';
          //  std::cin >> obj;
            if (obj == 0) {
              obj1.multiply();
            }
            else
            {
              obj2.multiply();
            }
            break;
      case 4:
          //std::cout << "object : " << '\n';
        //  std::cin >> obj;
            if (obj ==0 ) {
              obj1.display();
            }
            else
            {
              obj2.display();
            }
            break;
    }
  }
  return 0;

}
