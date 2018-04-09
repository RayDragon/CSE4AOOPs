# Instructions to get code
1. This require python3 to run(ubuntu has pre-installed)
2. To get this code you may download it as zip and then extract it or install git (in linux sudo apt-get install git)
3. To clone via git :
    ```shell
    git clone https://github.com/RayDragon/CSE4AOOPs.git
    ```

# Instructions to run
1. cd to the cloned directory in terminal
2. type : 
    ```
    python3 show_programs.py
    ``` 
3. It will ask for experiments choose accordingly
4. Choose from shown list

### for quries : bluedragon.ray@gmail.com

# C++ new compiler syntax(s)
## Simple starter program:
```c++
#include<iostream>
using namespace std;
int main()
{
    cout<<"Hello wrold!";
    return 0;
}
```
## 1. print: 
cout<<variable;
```c++
    cout<<"My age is :"<<20; //output: My age is :20
```

## 2. Take input: 
cin>>variable;
```c++
    int age;
    cin>>age;
```
## 3. Comment
```c++
    // single line comment
    /*
        Multi line 
        comments...
    */
```
## 4. Declaring function
```c++
return_type func_name(parameter(s)){
    .
    .
    .
    return return_type_variable;
}
//i.e. for example
int add(int a, int b){
    return a+b;
}
```
## 5. Function calling
```c++
    int sum=add(1,2);
```
## 6. Conditional operator ?
```c++
    largest=(first>second)?first:second; //for getting larger value
```

## 7. New Operator
```c++
    //new datatype...
    Datatype *v = new Datatype;
    //new array
    Datatype *v = new Datatype(number_of_elements);
```

