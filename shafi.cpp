//#include<iostream>
//using namespace std;
//int main()
//{
//for( int a=0,a<=10; prod=3, prod<=100; a++)
//cout<<a<<"*"<<prod<<endl;
//return 0;
//}
//#include <iostream>
//using namespace std;
//int main() {
//    for (int a = 0; a <= 10; a++) 
//	{
//        cout << a << " * 4 = " << a * 4 << endl;
//    }
//    
//    return 0;
//}

//#include<iostream>
//using namespace std;
//int main()
//{
//	int a;
//	cout<<"Enter a number : ";
//	cin>>a;
//	int b;
//	cout<<"Enter a number : ";
//	cin>>b;
//	cout<<"Addition : "<<a+b<<endl;
//	cout<<"subtraction : "<<a-b<<endl;
//	cout<<"Multiplication : "<<a*b<<endl;
//	cout<<"Division : "<<a/b<<endl;
//	return 0;
//}

#include<iostream>
using namespace std;
int main()
{
	char ch;
	cout<<"Enter a character : ";
	cin>>ch;
//	alphabetic cheking coditions
	if((ch>='a' && ch<='z') || (ch>='A' && ch<='Z'))
	{
	cout<<ch<<" is a alphabet";
	}
else if(ch > '0' && ch <= '9')
{
  cout<< ch <<" is a numeric digit";
  }
  else
  {
  	cout<<ch<<" is a special character";}
  	return 0;
}