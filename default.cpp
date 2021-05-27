#include <iostream>

using namespace std;

class A 
{
  public:
      int x;
      A(){}
};

class B 
{
  public:
      int x;
      B() = default;
};

int main() 
{ 
    int x = 5;
    new(&x)A(); // вызов пустого конструктора, который ничего не делает
    cout << x << endl; // 5
  
    new(&x)B; // вызов конструктора по умолчанию
    cout << x << endl; // 5
  
    new(&x)B(); // вызов конструктора по умолчанию + инициализация значением(?)
    cout << x << endl; // 0
  
    return 0; 
} 



