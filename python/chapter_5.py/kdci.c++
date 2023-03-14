#include<iostream>
using namespace std;
int grade(string s)
{
	if (s=="A+"||s=="a+")
	return 10;
	else if(s=="A"||s=="a")
	return 9;
	else if (s=="B+"||s=="b+")
	return 8;
	else if (s=="B"||s=="b")
	return 7;
	else if (s=="C+"||s=="c+")
	return 6;
	else if (s=="C"||s=="c")
	return 5;
	else if (s=="D+"||s=="d+")
	return 4;
	else if (s=="D"||s=="d")
	return 3;
	cout<<"You are Failed!"<<endl;
	return 0;
}
int main()
{
	string x;
	double sum=0;
	cout<<"Enter the Python Grade : ";
	cin>>x;
	sum=sum+(3.0*grade(x));
	cout<<"Enter the Data Structures Grade : ";
	cin>>x;
	sum=sum+(4.0*grade(x));
	cout<<"Enter the  OS Grade : ";
	cin>>x;
	sum=sum+(4.0*grade(x));
	cout<<"Enter the DBMS Grades : ";
	cin>>x;
	sum=sum+(4.0*grade(x));
	cout<<"Enter the Java Grades : ";
	cin>>x;
	sum=sum+(3.0*grade(x));
	cout<<"Enter the Maths Grades : ";
	cin>>x;
	sum=sum+(4.0*grade(x));
	cout<<"Enter the GP Grades  : ";
	cin>>x;
	sum=sum+grade(x);
	cout<<"Enter the Soft skills Grades : ";
	cin>>x;
	sum=sum+grade(x);
	cout<<"Enter the Entrepreneurship grades : ";
	cin>>x;
	sum=sum+grade(x);
	cout<<"\n"<<endl;
	cout<<"The SGPA : "<<(sum)/25.0<<endl;
}