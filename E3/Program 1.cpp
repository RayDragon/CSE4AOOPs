// Program for multiplication of two matrix
#include<iostream>
using namespace std;

template<class T> class Mat{public:
    int rows, cols;
    T* arr;
    Mat(int r, int c){
        rows=r;
        cols=c;
        arr = new T(r*c);
    }
    ~Mat(){
        int points=rows*cols
        T* next=arr+1;
        while(points--){
            delete arr;
            arr = next;
            next = arr+1;
        }
    }
};
int main(){
    Mat<int> a(3,3);
    cout<<a.arr[0];
    return 0;
}
/**/