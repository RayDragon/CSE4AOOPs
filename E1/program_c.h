#include<iostream>
using namespace std;
void bubble_short(int a[], int L){
	for(int i=0;i<L;i++){
		cout<<"Elements after Loop "<<i+1<<":";
		int changed=0;
		for(int j=0;j<L-1;j++){
			if(a[j]>a[j+1])
			{
				a[j] += a[j+1];
				a[j+1]=a[j]-a[j+1];
				a[j] = a[j]-a[j+1];
				if(j!=0)changed++;
			}
			cout<<a[j]<<" ";
		}
		cout<<a[L-1]<<"\n";
		if(changed==0)break;
		
	}
}