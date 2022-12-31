// Program to read radius of a circle, calculate area and perimeter and display them.

#include<iostream>
#include<cstdlib>
using namespace std;
int main()
{
	double rad,ar,per;
	cout<<"Enter radius of the circle: ";
	cin>>rad;
	per=2*3.14*rad;
	ar=3.14*rad*rad;
	cout<<"The area of the circle is: "<<ar;
	cout<<"\n"<<"The perimeter of the circle is: "<<per;
}
