// Program to store student and display info by member function
#include<iostream>
#include<string.h>
#include<vector>
using namespace std;

class Student{
    int rollno;
    string name;
    public:
    Student(int rollno, string name){
        this->rollno = rollno;
        this->name = name;
    }

    void PrintDetails(){
        cout<<rollno<<"\t"<<name<<"\n";
    }
};
int main()
{
    vector<Student> students;
    int choice=1;
    while(choice!=3)
    {
        cout
    <<"1:Add Student\n"
    <<"2:Display Students details\n"
    <<"3:Exit\n";
        cin>>choice;
        if(choice==1){
            string name;
            int rollno;
            cout<<"First-Name rollno:";
            cin>>name>>rollno;
            Student s(rollno, name);
            students.push_back(s);
        }
        else if(choice==2)
        {
            cout<<"Roll No\tName\n";
            for(int i=0;i<students.size(); i++)
                students[i].PrintDetails();
        }
    }
    return 0;
}
/*
1:Add Student
2:Display Students details
3:Exit
1
First-Name rollno:Govind 1
1:Add Student
2:Display Students details
3:Exit
1
First-Name rollno:Rohan 2
1:Add Student
2:Display Students details
3:Exit
2
Roll No Name
1       Govind
2       Rohan
1:Add Student
2:Display Students details
3:Exit
3
*/