#include <iostream>
using namespace std;
int main() {
   const int a = 20;
   const int* b = &a;
   cout<<"old value :"<<*b<<"\n";
   int* c=const_cast<int *>(b);
   *c=40;
   //value can be changed after casting
   cout<<"new value:"<<*b;
   return 0;
}