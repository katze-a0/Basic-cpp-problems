

#include<iostream>
using namespace std;

template <class T>
class Queue
{   
    int cap;
    T *arr;  
    int r;

    public:
    Queue()
    {   
        cap = 10;
        arr = new T[cap];
        r = -1;
    }
    void enq(T d)
    {
        arr[++r] = d;
    }
    T deq()
    {
        T f = arr[0];
        for (int i = 0; i < cap - 1; i++) {
            arr[i] = arr[i + 1]; 
        }
        r--;
        return f;
    }
    ~Queue()
    {
        delete[] arr;
    }
};

int main()
{
    Queue <int> qi;
    qi.enq(1);
    qi.enq(2);
    qi.enq(3);
    cout<<qi.deq()<<endl;
    cout<<qi.deq()<<endl;
    cout<<qi.deq()<<endl;
    Queue <char> qc;
    qc.enq('a');
    qc.enq('b');
    qc.enq('c');
    cout<<qc.deq()<<endl;
    cout<<qc.deq()<<endl;
    cout<<qc.deq()<<endl;
    return 0;
}