#include <iostream>
using namespace std;
int main() {
   const int a = 20;
   const int* b = &a;
   cout<<"old value is"<<*b<<"\n";
   int* c=const_cast<int *>(b);
   *c=40;
   cout<<"new value is"<<*b;
   return 0;
}