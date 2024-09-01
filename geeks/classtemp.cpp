#include<iostream>
using namespace std;
template<class T>
class find_max{
    T x,y;
    public:
    find_max(T a, T b){
        x=a;
        y=b;}

        T getmax();
    

};
template<class T>
T find_max<T>::getmax(){        //getmax defined outside class 
T result;
result=x>y? x:y;
return result;
}
int main(){
    find_max<int> obj(100,17);
    cout<<obj.getmax();
    return 0;
}