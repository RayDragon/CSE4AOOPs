// Program for bubble short of an array
#include<iostream>
#include "program_c.h"
using namespace std;
int main()
{
	cout<<"Length of the array:";
	int L;
	cin>>L;
	int a[L];
	cout<<"Enter the elements:";
	for(int i=0;i<L;i++)cin>>a[i];
	bubble_short(a, L);
	for(int i=0;i<L;i++)cout<<a[i];
}
