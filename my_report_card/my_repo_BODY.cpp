#include <iostream>
#include <iomanip>
#include "my_headie.h"
using namespace std;

int main()
{
	cout<<"hiiiiiii"<<endl;
	cout<<endl;
	repo student;
	student.attendance();
	system("cls");
	student.data_receival();
	//cout<< "-" * 30<<endl;
	//setw(30, "-");
	cout<<endl;
	student.print_out();
	return 0;
}