#include <iostream>
using namespace std;

struct result
{
	char subj[30];
	char name[40];
	float test_score;
	float exam_score;
};

class repo
{
	int sch_days;
	int present_days;
	int absent_days;
	result data[10];
	int subjNum;

public:
	repo();
	void attendance();
	void data_receival();
	void calculations();
	void print_out(); //this prints in .txt file


};