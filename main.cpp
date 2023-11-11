#include<iostream>
using namespace std;

void nhap{
	int n;
	cout<<"nhap vao 1 so nguyen n: ";
	cin>>n;
}
bool kTSCP(int n)
{
	int kt = sqrt(n);
	return kt * kt == n;
}