#include <iostream>
using namespace std;
int main()
{
	int i, a[10], ss, sm;
	cout<<"Enter the array: \n";
	for(i-0;i<10;i+=1)
	{
		cin>>a[i];
	}
	ss=a[0];
	sm=a[0];
	for(i=0;i<9;i+=1)
	{
		if(a[i+1]<ss)
		{
			if(a[i+1]<sm)
				sm=a[i+1];
			else
				ss=a[i+1];	
		}
	}
	cout<<"\nSmallest :"<<sm;
	cout<<"\n2nd smallest: "<<ss;
}
