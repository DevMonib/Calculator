#include <iostream>
#include <math.h>

using namespace std;

int main()
{
	int f,e,p,s,op,k,sh;
	double a,b,c,d,l;
	char x;
	
	do
	{
		cout <<"\t\tWelcome To My Calculator\n\n";
		cout <<"\t1 = Single Operation \n (Sin,Cos,Tan,Cot,ARCsin,ARCcos,ARCtan,ARCcot,Factorial,sinh,cosh,tanh,coth,Log,Radikal)\n\n";
		cout <<"\t2 = Double Operation \n (Sum,Deduce,Multiplication,Division,Mood,Power)\n\n";
		cout <<"\t3 = Calculate the Roots of the 2nd Degree Equation\n\n";
		cout <<"\t4 = Geometric Calculations\n(Primeter,Area,Volume)\n\n";
		cout <<" Please Choose What Do you Want :\t";
		cin>>e;
		cout <<"\n";
		{
			if (e==1)
			{
				cout << "\n 1 = sin\n 2 = cos\n 3 = tan\n 4 = cot\n 5 = ARC sin\n 6 = ARC cos\n 7 = ARC tan\n 8 = ARC cot\n 9 = sinH\n 10 = cosH\n 11 = tanH\n 12 = cotH\n 13 = Factorial\n 14 = Log(10 Base)\n 15 = Radikal\n\t";
				cout <<"Please Enter An Operator :\t";
				cin>> f;
				cout <<"Please Input The Number :\n\t";
				cin >> c ;
				switch (f)
				{
					case 1:
					cout <<"sin"<<c<<'='<<sin(c)<<endl;
					break;
					case 2:
					cout <<"cos"<<c<<'='<<cos(c)<<endl;
					break;
					case 3:
					cout <<"tan"<<c<<'='<<tan(c)<<endl;
					break;
					case 4:
					cout <<"cot"<<c<<'='<<cos(c)/sin(c)<<endl;
					break;
					case 5:
					cout <<"ARC sin"<<c<<'='<<asin(c)<<endl;
					break;
					case 6:
					cout <<"ARC cos"<<c<<'='<<acos(c)<<endl;
					break;
					case 7:
					cout <<"ARC tan"<<c<<'='<<atan(c)<<endl;
					break;
					case 8:
					cout <<"ARC cot"<<c<<'='<<acos(c)/asin(c)<<endl;
					break;
					case 9:
					cout <<"sinH"<<c<<'='<<sinh(c)<<endl;
					break;
					case 10:
					cout <<"cosH"<<c<<'='<<cosh(c)<<endl;
					break;
					case 11:
					cout <<"tanH"<<c<<'='<<tanh(c)<<endl;
					break;
					case 12:
					cout <<"cotH"<<c<<'='<<cosh(c)/sinh(c)<<endl;
					break;
					case 13:
					if (a==0)
					{
						cout <<"\t 0!=1"<<endl;
					}
					else
					{ 
						int q=1;
						for (int i=1 ; i<=a ; i++)
						{
							q=q*i;
						}
						cout <<"\t"<< a << "! = " << q <<endl;
					}
					break;
					case 14:
					cout <<"\t Log"<<c<<'='<<log10(c)<<endl;
					break;
					case 15:
					cout <<"Radikal"<<c<<'='<<sqrt(c)<<endl;
					break;
					default :
					cout <<"Invalid Operator\n\n";
				}
			}
			else if (e==2)
			{
				cout <<"Please Enter An Operator :\n";
				cout <<"1 = Sum (+) \n2 = Deduce (-)\n3 = Multiplication (*)\n4 = Division (/) \n5 = Mood (%)\n6 = Power (^)\n\t";
				cin>>op;
				if (op!=5)
				{
					cout <<"Please Enter The First Number :\n\t";
					cin >>a;	
					cout <<"Please Enter The Second Number :\n\t";
					cin >>b;
				}
				switch (op)
				{
					case 1:
					cout <<"\t"<<a<<'+'<<b<<'='<<a+b<<endl;
					break;
					case 2:
					cout <<"\t"<<a<<'-'<<b<<'='<<a-b<<endl;
					break;
					case 4:
					cout <<"\t"<<a<<'/'<<b<<'='<<a/b<<endl;
					break;
					case 3:
					cout <<"\t"<<a<<'*'<<b<<'='<<a*b<<endl;
					case 5:
					cout <<"Please Enter The First Number :\n\t";
					cin >>p;	
					cout <<"Please Enter The Second Number :\n\t";
					cin >>s;
					cout <<"\t"<<p<<'%'<<s<<'='<<p%s<<endl;
					break;
					case 6:
					cout <<"\t"<<a<<'^'<<b<<'='<<pow(a,b)<<endl;
					break;
					default :
					cout <<"\tInvalid Operator\n\n";
				} 
			}
			else if (e==3)
			{
				cout<<"Please Input The A : \n\t";
				cin>>a;
				cout<<"Please Input The B : \n\t";
				cout <<"\t";
				cin>>b;
				cout<<"Please Input The C : \n\t";
				cin>>c;
				double m=((b*b)-(4*a*c));
				if (m>0)
				{
					double r=(((-b)+(sqrt(m)))/(2*a));
					double R=(((-b)-(sqrt(m)))/(2*a));
					cout <<"The equation has two roots And They Are : "<<r<<" & "<<R<<endl;
				}
				else if (m==0)
				{
					double r=((-b)/(2*a));
					cout <<"The equation has only one root and its : "<<r<<endl;
				}
				else if (m<0)
				{
					cout <<"The equation has no roots"<<endl;
				}
			}
			else if (e==4)
			{
				cout <<"\t1 = Perimeter\n\t2 = Area\n\t3 = Volume\n\t\tWhat Do You Want :\t";
				cin>>k;
				if (k==1)
				{
					cout << "\n\t1 = Squre\n\t2 = Rectangle\n\t3 = Triangle\n\t4 - Circle\n\t5 = Trapezoid\n\t6 = Diamond\n\tWhat Shape Do You Want?\n\t";
					cin>>sh;
					switch (sh)
					{
						case 1 :
						cout << "Please Input Size of the Side :\t";
						cin>>a;
						cout << "\nThe Perimeter of This Shape Equal to :"<<4*a<<endl;
						break;
						case 2 :
						cout << "Please Input Size of the First Side :\t";
						cin>>a;
						cout << "\nPlease Input Size of the Second Side :\t";
						cin>>b;
						cout << "\nThe Perimeter of This Shape Equal to :"<<(2*(a+b))<<endl;
						break;
						case 3 :
						cout << "Please Input Size of the First Side :\t";
						cin>>a;
						cout << "\nPlease Input Size of the Second Side :\t";
						cin>>b;
						cout << "\nPlease Input Size of the Third Side :\t";
						cin>>d;
						cout << "\nThe Perimeter of This Shape Equal to :"<<(a+b+d)<<endl;
						break;
						case 4 :
						cout << "Please Input the Circle Diameter :\t";
						cin>>a;
						cout << "\nThe Perimeter of This Shape Equal to :"<<(3.14*a)<<endl;
						break;
						case 5 :
						cout << "Please Input Size of the First Side :\t";
						cin>>a;
						cout << "\nPlease Input Size of the Second Side :\t";
						cin>>b;
						cout << "\nPlease Input Size of the Third Side :\t";
						cin>>d;
						cout << "\nPlease Input Size of the Fourth Side :\t";
						cin>>l;
						cout << "\nThe Perimeter of This Shape Equal to :"<<(a+b+d+l)<<endl;
						break;
						case 6 :
						cout << "Please Input Size of the Side :\t";
						cin>>a;
						cout << "\nThe Perimeter of This Shape Equal to :"<<4*a<<endl;
						break;
						default :
						cout <<"\tInvalid !!\n\n";
					}					
				}
				else if (k==2)
				{
					cout << "\n\t1 = Squre\n\t2 = Rectangle\n\t3 = Triangle\n\t4 - Circle\n\t5 = Trapezoid\n\t6 = Diamond\n\tWhat Shape Do You Want?\n\t";
					cin>>sh;
					switch (sh)
					{
						case 1 :
						cout << "Please Input Size of the Side :\t";
						cin>>a;
						cout << "\nThe Area of This Shape Equal to :"<<a*a<<endl;
						break;
						case 2 :
						cout << "Please Input Size of the First Side :\t";
						cin>>a;
						cout << "\nPlease Input Size of the Second Side :\t";
						cin>>b;
						cout << "\nThe Area of This Shape Equal to :"<<a*b<<endl;
						break;
						case 3 :
						cout << "Please Input Size of the Base :\t";
						cin>>a;
						cout << "\nPlease Input Size of the Height :\t";
						cin>>b;
						cout << "\nThe Area of This Shape Equal to :"<<((a*b)/2)<<endl;
						break;
						case 4 :
						cout << "Please Input the Circle Radius :\t";
						cin>>a;
						cout << "\nThe Area of This Shape Equal to :"<<(3.14*a*a)<<endl;
						break;
						case 5 :
						cout << "Please Input Size of the Little Base :\t";
						cin>>a;
						cout << "\nPlease Input Size of the Big Base:\t";
						cin>>b;
						cout << "\nPlease Input Size of the Height :\t";
						cin>>d;
						cout << "\nThe Area of This Shape Equal to :"<<(((a+b)*d)/2)<<endl;
						break;
						case 6 :
						cout << "Please Input Size of the Little Radius :\t";
						cin>>a;
						cout << "\nPlease Input Size of the Big Radious:\t";
						cin>>b;
						cout << "\nThe Area of This Shape Equal to :"<<((a*b)/2)<<endl;
						break;
						default :
						cout <<"\tInvalid !!\n\n";
					}	
				}
				else if (k==3)
				{
					cout << "\n\t1 = Squre Cube\n\t2 = Rectangle Cube\n\t3 = Pyramid\n\t4 - Sphere\n\tWhat Shape Do You Want?\n\t";
					cin>>sh;
					switch (sh)
					{
						case 1 :
						cout << "Please Input Size of the Side :\t";
						cin>>a;
						cout << "Please Input Size of the Height :\t";
						cin>>b;
						cout << "\nThe Volume of This Shape Equal to :"<<((a*a)*a)<<endl;
						break;
						case 2 :
						cout << "Please Input Size of the First Side :\t";
						cin>>a;
						cout << "\nPlease Input Size of the Second Side :\t";
						cin>>b;
						cout << "Please Input Size of the Height :\t";
						cin>>d;
						cout << "\nThe Volume of This Shape Equal to :"<<(d*(a*b))<<endl;
						break;
						case 3 :
						cout << "Please Input Size of the First Side :\t";
						cin>>a;
						cout << "\nPlease Input Size of the Second Side :\t";
						cin>>b;
						cout << "\nPlease Input Size of the Height :\t";
						cin>>d;
						cout << "\nThe Volume of This Shape Equal to :"<<((((a*b)/2)*d)/3)<<endl;
						break;
						case 4 :
						cout << "Please Input the Circle Radious :\t";
						cin>>a;
						cout << "\nThe Volume of This Shape Equal to :"<<(((a*a)*3.14)*(4/3))<<endl;
						break;
						default :
						cout <<"\tInvalid !!\n\n"; 
					}
				}	
			}
			cout <<" \tDo You Want To Continue ? (Y/N)\n\t";
			cin>>x;				
		}
	}	
	while (x =='Y' || x=='y');
	cout <<"See you";
	return 0;
}