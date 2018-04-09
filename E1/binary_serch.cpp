// Program to print the position of an element in an accending array
#include<iostream>
#include "binary_serch.h"
using namespace std;
int main(){
    int a[]={1,2,3,4,5};
    float b[]={0, 0.2, 0.5, 1.1, 1.2, 1.4, 1.5};
    cout<<bsearch(a,3,5)<<" "<<bsearch(b, (float)1.1, 4)<<"\n";
    return 0;
}
