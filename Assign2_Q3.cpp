#include <iostream>
using namespace std;
namespace NStudent
{
    
        class Student
{
    string name;
    int rollNo;
    int marks;
    public:
    void initStudent()
    {
        name="ABC";
        rollNo=111;
        marks=40;
    }
    void acceptStudentFromConsle(){
        cout<<"Enter Student Name: ";
        cin>>name;
        cout<<"Enter Student RollNo: ";
        cin>>rollNo;
        cout<<"Enter Student Marks: ";
        cin>>marks;
        cout<<endl;
    }
    void printStudentOnConsole()
    {
        cout<<"\nStudent Name: "<<name<<endl;
        cout<<"Roll No: "<<rollNo<<endl;
        cout<<"Marks: "<<marks<<endl<<endl;
    }

};
    
}
using namespace NStudent;
int main()
{
    int choice;
    Student student;
    do{
        cout<<"1.Enter Student Information"<<endl;
        cout<<"2.Print Student Information"<<endl;
        cout<<"3.Set Default Information."<<endl;
        
        cout<<"Enter Your Choice: ";
        cin>>choice;
        switch(choice)
        {
            case 1:
            student.acceptStudentFromConsle();
            break;

            case 2:
            student.printStudentOnConsole();
            break;

            case 3:
            student.initStudent();
            break;

            default:
            cout<<"Thank You";

        }

    }while((choice==1)||(choice==2)||(choice==3));
    return 0;
}