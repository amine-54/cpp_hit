#include <iostream>
#include <iomanip>
using namespace std;

int main(){

	float a = 123.5467;

	//cout<< "test test"<< setw(20)<< "tst 2"<<endl;
	//cout <<setw(10)<< setfill('*') << a<< endl;

	cout << a <<endl;
	cout <<setprecision(3)<< a<<endl;
	cout << setprecision(6)<< a << endl;
}
