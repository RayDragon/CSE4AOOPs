// Program to store and display marks of student
#include<iostream>
#include<vector>
using namespace std;
class Student{
	public:
	float hindi, english, maths, science;
};
vector<Student> Students;
main()
{
	//store students
	while(true){
		cout<<"1 : add student's marks \n"
		<<"2 : display student's marks \n"
		<<"3 : exit : ";
		int choice;
		cin>>choice;
		if(choice == 1){
			Student s;
			cout<<"Enter marks in hindi english maths science:";
			cin>>s.hindi>>s.english>>s.maths>>s.science;
			cout<<s.hindi<<s.english<<s.maths<<s.science;
			Students.push_back(s);
		}
		else if(choice == 2){
			for(int i=0; i<Students.size();i++)
				cout<<Students[i].hindi<<Students[i].english<<Students[i].maths<<Students[i].science<<"\n";
		}
		else if(choice == 3)
			return 0;
	}
}
