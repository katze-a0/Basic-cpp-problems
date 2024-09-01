#include <iostream>
using namespace std;

class cons{
    public:
    cons(){
        
     cout<<"Constructor invoked\n ";
    }
};
int main() {
    cons c1;
    cout <<"Size of int: " << sizeof(int) << " bytes" << std::endl;
    return 0;
}
