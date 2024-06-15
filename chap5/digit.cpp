
//count digits that divide the given number

#include<iostream>
using namespace std;
class count {
    public:
    int num;
    int count_digits(int num){
        int copy_num;
        copy_num=num;
        int rem,rem1;
        int count=0;
        while(num!=0){
            rem=num%10;
            if(copy_num%rem==0)
            {
                count++;
               if(rem1==rem)
               count--;
               
            }
            rem1=rem;
             num/=10;
        }
        return count;
    }
};
int main()
{
    int n;
    count obj1;
    cout<<"Enter a number:";
    cin>>n;
    cout<<"No.of digits= "<<obj1.count_digits(n)<<endl;
    return 0;
}