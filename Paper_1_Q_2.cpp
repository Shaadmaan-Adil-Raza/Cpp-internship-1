#include <iostream>
#include <cstdlib> #To use qsort()
using namespace std;
int compare(const void* a, const void* b)
{
	const int* x = (int*) a;
	const int* y = (int*) b;
  if (*x > *y)
		return 1;
	else if (*x < *y)
		return -1;
  return 0;
}
void median(int a[], int n)
{
	float med;
	int i;
	qsort(a, n, sizeof(int), compare);
	if(n%2==0)
		med=(a[(n-1)/2]+a[((n-1)/2)+1])*1.0/2;
	else
		med=a[((n-1)/2)];
	cout<<"\nMedian for ";
	for(i=0;i<n;i+=1)
	{
		cout<<a[i]<<" ";
	}
	cout<<"is: "<<med<<endl;
}
int main()
{
	int i, a[10], j;
	cout<<"Enter the array: \n";
	for(i=0;i<10;i+=1)
	{
		cin>>a[i];
		median(a,i+1);
	}
}
