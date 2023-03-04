#include<iostream>
using namespace std;

class Student
{
	private:
		char name[10];
		int roll_no;
		float fees;
	public:
		void setData();
		void getData();	
};
void Student::setData()
{
	cout<<"\nEnter the Name :";
	cin>>name;
	cout<<"\nEnter the Roll No. :";
	cin>>roll_no;
	cout<<"\nEnter the Fees :";
	cin>>fees;
}
void Student::getData()
{
	cout<<"\nName :"<<name;
	cout<<"\nRoll No."<<roll_no;
	cout<<"\nFees :"<<fees;
	cout<<"\n";
}

class Teacher 
{
	private:
		char name[20];
		int id;
		float salary;
	public:
		void setData();
		void getData();	
			
};
void Teacher::setData()
{
	cout<<"\nEnter the name of Teacher :";
	cin>>name;
	cout<<"\nEnter the ID of Teacher :";
	cin>>id;		
	cout<<"\nEnter the Salary of Teacher :";
	cin>>salary;	
}
void Teacher::getData()
{
	cout<<"\nName :"<<name;
	cout<<"\nID :"<<id;
	cout<<"\nSalary :"<<salary;
	cout<<"\n";
}

int main() 
{
//	Student S[3];
//	for(int i=0;i<=2;i++)
//	{
//		S[i].setData();
//	}
//	for(int i=0;i<=2;i++)
//	{
//		S[i].getData();
//	}
//	
//	Teacher T[3];
//	for(int i=0;i<=2;i++)
//	{
//		T[i].setData();
//	}
//	
//	for(int i=0;i<=2;i++)
//	{
//		T[i].getData();
//	}
	
	
	Student S1,S2,S3;
	S1.setData();
	S2.setData();
	S3.setData();

	S1.getData();
	S2.getData();
	S3.getData();
	
	
	Teacher T1,T2,T3;
	T1.setData();
	T2.setData();
	T3.setData();
	
	T1.getData();
	T2.getData();
	T3.getData();
	return 0;
}

