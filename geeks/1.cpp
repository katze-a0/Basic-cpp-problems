//finding no of possible paths to reach origin
//problem of the day-001
//exam preparation series

#include<iostream>
class solution
{
    private:
    int count=0;
    int path=0;
public:
       
        int fx(){
          int  x=x-1;
       }
       int fy(){
          int  y=y-1;
       }
    int ways(int x, int y)
    {
        if(x||y==0)
        path=1;
        
        else if((x&&y)!=0){
            fx();
            if((x||y)==0)
            count++;
            else 
            fy();
        }
        else{
            
            fy();
            if((x||y)==0)
            count++;
            else 
            fx();
        }
            
            
        }
        void result (){
            std::cout<<"No of paths ="<<count;
        }
        
    };

int main()
{ 

    int x,y;
    std::cout<<"enter x and y:";
    std::cin>>x>>y;
    int ways(x,y);
     void result();
    return 0;
}