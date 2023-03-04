#include<iostream>
using namespace std;

class Sample
{
	private:
		int a,b,c;
	public:
		
		//Constructor : 1.Member Function , 2.Special Member Function(its name is same as class name.)
		//				3.No Return type , 4.Initialize  the Objects , 
		//				5.Not any need to call by object .It is called internally.
			                         
		Sample()			//Default Function
		{
			a=0;
			b=0;
			c=0;
		}
		Sample(int x,int y,int z)		//Parameterized Constructor
		{
			a=x;				//S1.a=10;
			b=y;				//S2.b=20;
			c=z;				//S3.c=30;
		}
		Sample(Sample &T)		//Copy Constructor
		{
			a = T.a;			//S3.a=S2.a;
			b = T.b;			//S3.b=S2.b;
			c = T.c;			//S3.c=S2.c;
		}
		~Sample()			//Destructor : Delete [free] all memory allocated by constructor.
		{					// ~ : Tilde operator
			cout<<"\nExecute the program.";
		}
		void setData()
		{
			cout<<"\nA=";
			cin>>a;
			cout<<"\nB=";
			cin>>b;
			cout<<"\nC=";
			cin>>c;
		}
		void getData()
		{
			cout<<"\nA ="<<a;
			cout<<"\nB ="<<b;
			cout<<"\nC ="<<c;
		}
};

int main()
{
	

	Sample S1;
	S1.getData();
	Sample S2(10,20,30);
	S2.getData();
	Sample S3(S2);
	S3.getData();
	
	
		
//	Sample S1;
//	S1.setData();
//	Sample S2(10,20,30);
//	S2.setData();
//	Sample S3(S2);
//	S3.setData();
//	
//
//	S1.getData();
//	S2.getData();
//	S3.getData();
//	
}









//											***	Constructor ***
//			Rules:  1)Constructor always should be public.  
//					2)Constructor cannot have return types why it does  not return any value.      
//					3)Constructor is called while creating the objects. 
//					4)Constructor can be called only once throught out the execution of program. 
//					
//			Purpose: Constructor is used to initialize objects.
//
//			Types: 
//					1)Default Constructor : The constructor which does not have  parameter is called DEFAULT contructor.
//					2)Parameterized Constructor : The constructor which accepts parameters is PARAMEtERIZED constructor.
//					3)Copy Constructor : The constructor which accepts objects as arguments is called COPY constructor 
//
//			
//
//
//
//
//
//
//
//
//
//             