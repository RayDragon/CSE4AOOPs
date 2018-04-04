#include<iostream>
using namespace std;

template<class T> int bsearch(T a[], T el, int length){
    //search for an element(el) in ascending array(a[])
    int p1=0, c, p2=length-1;

    while(p1!=p2 && p1!=p2-1){
        c=(p1+p2)/2;
        if(a[p1]==el) return p1;
        if(a[c]==el) return c;
        if(a[p2]==el) return p2;

        if(el>a[c]) p1=c;
        else if(el<a[c]) p2=c;
    }
    return -1;

}