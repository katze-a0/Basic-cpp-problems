#include<iostream>
using namespace std;
class pattern{
public:
char alpha1, character='A';
int r,i,j;
char getchar(){
    cout<<"enter a character in last row:";
    cin>>alpha1;
    alpha1=toupper(alpha1);

}

void display(){
    r=alpha1-'A'+1;
    for(int i=1;i<=r;i++)
    {
        for(int j=1;j<=i;j++){
            cout<<character;
            cout<<"\t";
        }
        cout<<endl;
        character++;
    }
}
};

int main(){
pattern obj;
obj.getchar();
obj.display();
return 0;

}