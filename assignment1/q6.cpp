//Q6 write a class for a rectangle. Create objects for this class and call the member functions to find the area and perimeter of rectangle


#include <iostream>
using namespace std;
class Rectangle{
    private:
        int l, b;
    public:
        void input(int len, int bre){
            l = len;
            b = bre;
        }
		
        int area(){
            return l * b;
        }
		int perimeter(){
			return 2*(l+b);
		}
};
int main(){
    Rectangle r1, r2;
    r1.input(10, 9);
    r2.input(8, 6);
    cout << "Area of r1: " << r1.area() << endl;
    cout << "Area of r2: " << r2.area() << endl;
	cout << "Perimeter of r1: " << r1.perimeter() << endl;
	cout << "Perimeter of r2: " << r2.perimeter() << endl;
	return 0;
}