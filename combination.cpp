#include<iostream>
using namespace std;

int C(int,int);

int main()
{
	int n=100;
	int r=4;
	if(n>=r)
		cout<<C(n,r);
	else
		cout<<"False Input"<<endl;
	return 0;
}

int C(int n,int r)
{
	if(n == r || r==0)
		return 1;
	if(r==1)
		return n;
	return C(n-1,r)+C(n-1,r-1);
}