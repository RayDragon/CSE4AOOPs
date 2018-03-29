// 1A program for arthematic operation
#include<iostream>
using namespace std;
template<class T> T add(T t1, T t2){ return t1+t2;}
template<class T> T subt(T t1, T t2){return t2-t1;}
template<class T> T mult(T t1, T t2){return t2*t1;}
template<class T> float dev(T t1, T t2){return (float)t2/(float)t1;}
main()
{
	cout<<add(1.3,2.4)<<" "
		<<subt(2,6)<<" "
		<<mult(2.4,4.0)<<" "
		<<dev(10,2)<<"\n";
}
