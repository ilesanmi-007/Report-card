#include <iostream>
#include <iomanip>
#include <fstream>
#include "my_headie.h"
using namespace std;

repo::repo()
{
	cout<<"_____HAPPY HOLIDAY_____"<<endl;
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
		cin.ignore();
		cin.getline(data[i].subj, 29);
		//cin.ignore();
		
		cout<<"enter test score of subj: ";
		cin.ignore();
		cin>>data[i].test_score;
		//cin.ignore();
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
	//to be editted later.
	//want the name to be of student.
	ofstream file("student.txt");
	if (file.is_open())
	{
		cout<< "\n\nhey...result saved on file...."<<endl;
		//out put confirmation
		file<<setw(10)<<"________________HIGH FOCUS GROUP OF SCHOOL________________"<<setw(10)<<endl;
		//cout<<"-" *30<<endl;
		file<<"Number of days school was on: "<<sch_days<<'\n';
		file<<"Number of days present are: "<<present_days<<endl;
		file<<"Number of days absent: "<<sch_days - present_days<<endl;
		

		file<<endl<<endl<<endl;
		file <<"SUBJECT_____"<< "TEST SCORE______"<<"EXAM SCORE___"<< "TOTAL"<<endl;
		for (int i = 0; i<1;i++)
		{
			for (int j = 0; j<subjNum; j++)
			{
			
				file<<data[j].subj<<"          "<<data[j].test_score<<"        "<<data[j].exam_score<<"        "<<data[j].exam_score + data[j].test_score<<endl;
				//I observed the test result prints the second
				//character of whatever number i inputted
			}
		}
		
		// morre body of code
		file.close();
		

	}
	else
	{
		cout<<"didnt save on .txt file"<<endl;
	}

}	


