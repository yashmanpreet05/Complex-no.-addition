#include<iostream>
using namespace std;
class demo 
{
	int real, img;
	public:
		void getdata()
		{
			cout<<"enter the real value:";
			cin>>real;
			cout<<"enter the imaginaary value:";
			cin>>img;
		}
		void display()
		{
			cout<<real<<"+"<<img<<"i"<<endl;;
		}
        demo operator +(demo &cc)
        {
            demo temp;
            temp.real=real+cc.real;
            temp.img=img+cc.img;
             return temp;
        }
};
int main()
{
	demo dd,cc;
	dd.getdata();
	dd.display();
    cc.getdata();
	cc.display();
    demo aa = dd+cc;
    aa.display();

	
	return 0;
}
