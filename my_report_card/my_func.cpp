#include <iostream>
#include <iomanip>
#include "my_headie.h"
using namespace std;

repo::repo()
{
	cout<<"HAPPY HOLIDAY"<<endl;
	cout<<endl;
}

void repo::attendance()
{
	cout<<"enter number of school open days: ";
	cin>>sch_days;
	/*if (isdigit(sch_days) != true)
		{
			cout<<"re-enter a value, abeg"<<endl;
		}
	else 
	{
		cout<<"hiiii"<<endl;
	}*/
	cout<<"enter number of days present: ";
	cin>>present_days;
}

void repo::data_receival()
{
	cout<<"enter the number of subjects offered: ";
	cin>>subjNum;
	
	for (int i = 0; i <subjNum; i ++)
	{
		cout<<"enter subject"<<i+1<<": ";
		cin.getline(data[i].subj, 29);
		
		cout<<"enter test score of subj: ";
		cin>>data[i].test_score;
		/*if (isdigit(data[i].test_score) != true)
		{
			cout<<"re-enter a value, abeg"<<endl;
		}*/
		cout<<"enter exam score of subject: ";
		cin>>data[i].exam_score;
		
		system("cls");
	}
}

void repo::print_out()
{
	cout<<setw(10)<<"HIGH FOCUS GROUP OF SCHOOL"<<setw(10)<<endl;
	//cout<<"-" *30<<endl;
	cout<<"Number of days school was on: "<<sch_days<<endl;;
	cout<<"Number of days present are: "<<present_days<<endl;
	cout<<"Number of days absent: "<<sch_days - present_days<<endl;

}	


