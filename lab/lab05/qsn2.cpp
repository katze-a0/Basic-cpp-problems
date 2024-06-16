#include <iostream>
using namespace std;
class coordinate {
private:
	int x,y,z;

public:
	coordinate(int x= 0, int y = 0,int z=0):x(x),y(y),z(z){}
	
	
	// The global operator function is made friend of this
	// class so that it can access private members
	friend coordinate operator+(coordinate const& c1,coordinate const& c2);
    friend coordinate operator-(coordinate const& c1,coordinate const& c2);
    void print() { cout << "(" << x <<"," << y<<","<<z<<")"<<endl; }
};
coordinate operator+(coordinate const& c1, coordinate const& c2)
{
	return coordinate (c1 .x + c2.x, c1.y + c2.y,c1.z+c2.z);
}
coordinate operator-(coordinate const& c1, coordinate const& c2)
{
	return coordinate (c1.x - c2.x, c1.y - c2.y,c1.z-c2.z);
}
int main()
{
	coordinate c1(5,3,2), c2(3,1,0);
	coordinate c3= c1+c2; // An example call to "operator+"
    coordinate c4=c1-c2;
	c3.print();
    c4.print();
	return 0;
}
