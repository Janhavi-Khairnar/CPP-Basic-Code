#include<iostream>
using namespace std;

class Student
{
	private:
		char name[10];
		int roll_no;
		float fees;
		
	public:
		void setStudent()
		{
			cout<<"\nEnter the Name of Student:";
			cin>>name;
			cout<<"\nEnter the ID :";
			cin>>roll_no;
			cout<<"\nEnter the Fees :";
			cin>>fees;cout<<"\n";
		}	
		
		void getStudent()
		{
			
			cout<<"\nName :"<<name;
			cout<<"\nID :"<<roll_no;
			cout<<"\nFees :"<<fees;
		}	
};
		

class Teacher
{
	private:
		char name[10];
		int id;
		float salary;

	
	public:
	void setTeacher()
	{
		cout<<"\nEnter the Name of Teacher :";
		cin>>name;
		cout<<"\nEnter the ID :";
		cin>>id;
		cout<<"\nEnter the Salary :";
		cin>>salary;
	}	
	
	void getTeacher()
	{
		cout<<"\nName :"<<name;
		cout<<"\nID :"<<id;
		cout<<"\nSalary :"<<salary;
	}
		
};


int main()
{	
//  1st method 
//	Student S;
//	S.setStudent();
//	S.getStudent();
//	
//	Teacher T;
//	T.setTeacher();
//	T.getTeacher();
	
	// 2nd method using for loop with array
	Student S[3];
	for(int i=0;i<=2;i++)
	{
		S[i].setStudent();
	}
	for(int i=0;i<=2;i++)
	{
		S[i].getStudent();
	}
	
	Teacher T[3];
	for(int i=0;i<=2;i++)
	{
		T[i].setTeacher();
	}
	for(int i=0;i<=2;i++)
	{
		T[i].getTeacher();
	}
	return 0;
}