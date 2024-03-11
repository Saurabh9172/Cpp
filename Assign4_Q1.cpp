#include <iostream>
using namespace std;
class Date
{
    int day;
    int month;
    int year;

    public:
    Date()
    {
        day=1;
        month=1;
        year=2000;
    }
    Date(int day,int month,int year)
    {
         this->day=day;
         this->month=month;
         this->year=year;

    }
    void accept()
    {
        cout<<"Enter the Date as per day/month/year : ";
        cin>>day>>month>>year;
        cout<<endl;
    }
    void display()
    {
        cout<<"Date is : "<<day<<"/"<<month<<"/"<<year<<endl;
    }
    void set_day(int day)
    {
        this->day=day;
    }
    void set_month(int month)
    {
        this->month=month;
    }
    void set_year(int year)
    {
        this->year=year;
    }
    int get_day()
    {
        return day;
    }
    int get_month()
    {
        return month;
    }
    int get_year()
    {
        return year;
    }
    bool is_leap_year()
    {
        if(((year%100==0)&&(year%400==0))||(year%4==0))
        return true;
        else 
        return false;
    }

};
class Person
{
    string name;
    string addr;
    Date birth_date;
    
    public:
    Person():birth_date(4,12,1999)
    {
        name="ABC";
        addr="XYZ";
        
    }
    Person(string name,string addr,Date birth_date)
    {
        this->name=name;
        this->addr=addr;
        this->birth_date=birth_date;
    }
    void accept()
    {
        cout<<"Enter Person Name : ";
        getchar();
        getline(cin,name);
        cout<<"Enter Person Address : ";
        getline(cin,addr);
        cout<<"Enter Person Birth_Date : "<<endl;
        birth_date.accept();
    }
    void display()
    {
        cout<<"Person Name is : "<<name<<endl;
        cout<<"Person Address is : "<<addr<<endl;
        cout<<"Person Birth_";
        birth_date.display();
    }
    void set_name(string name)
    {
        this->name=name;
    }
    void set_addr(string addr)
    {
        this->addr=addr;
    }
    void set_birth_date(Date birth_date)
    {
        this->birth_date=birth_date;
    }
    string get_name()
    {
        return name;
    }
    string get_addr()
    {
        return addr;
    }
    Date get_birth_date()
    {
        return birth_date;
    }

};
class Employee
{
    int id;
    float sal;
    string dept;
    Date joining;
    public:
    Employee():joining(4,1,2008)
    {
        id=100;
        sal=50.50F;
        dept="TUV";

    }
    Employee(int id,float sal,string dept,Date joining)
    {

        this->id=id;
        this->sal=sal;
        this->dept=dept;
        this->joining=joining;
    }
    void accept()
    {
        cout<<"Enter Employee id : ";
        cin>>id;
        cout<<"Enter Employee salary : ";
        cin>>sal;
        cout<<"Enter Employee Department : ";
        getchar();
        getline(cin,dept);
        cout<<"Enter Employee Joining Date : "<<endl;
        joining.accept();
    }
    void display()
    {
        cout<<"Employee id is : "<<id<<endl;
        cout<<"Employee Salary is : "<<sal<<endl;
        cout<<"Employee Department is : "<<dept<<endl;
        cout<<"Employee Joining ";
        joining.display();
    }
    void set_id(int id)
    {
        this->id=id;
    }
    void set_sal(float sal)
    {
        this->sal=sal;
    }
    void set_dept(string dept)
    {
        this->dept=dept;
    }
    void set_joining_date(Date joining)
    {
        this->joining=joining;
    }
    int get_id()
    {
        return id;
    }
    float get_sal()
    {
        return sal;
    }
    string get_dept()
    {
        return dept;
    }
    Date get_joining_date()
    {
        return joining;
    }
};
int main()
{
    
    Employee e1;
    e1.display();
    cout<<endl;
    Date d1(2,4,2024);
    Employee e2(101,234.34F,"Math",d1);
    e2.display();
    cout<<endl;
    Employee e3;
    e3.accept();
    cout<<endl;
    e3.display();
    cout<<endl;
    e3.set_id(505);
    e3.set_sal(455.45F);
    e3.set_dept("Chemistry");
    Date d2(2,2,2022);
    e3.set_joining_date(d2);
    cout<<"Employee id : "<<e3.get_id()<<endl;
    cout<<"Employee salary : "<<e3.get_sal()<<endl;
    cout<<"Employee Department : "<<e3.get_dept()<<endl;
    Date d3=e3.get_joining_date();
    cout<<"Employee Joining ";
    d3.display();
    cout<<"\n\n\n";
    Person p1;
    p1.display();
    cout<<endl;
    Date d4(4,12,2000);
    Person p2("Saurabh Misal","At-Yelawade",d4);
    cout<<endl;
    Person p3;
    p3.accept();
    cout<<endl;
    p3.display();
    cout<<endl;
    Person p4;;

    p4.set_name("Sanket Misal");
    p4.set_addr("Kolhapur");
    Date d5(5,12,2022);
    p4.set_birth_date(d5);
    cout<<"Person Name : "<<p4.get_name()<<endl;
    cout<<"Person Address : "<<p4.get_addr()<<endl;
    d5=p4.get_birth_date();
    cout<<"Person Birth ";
    d5.display();

    Date d6(2,2,2024);
    if(d6.is_leap_year())
    cout<<"Given Year is leap Year!!!"<<endl;
    else
    cout<<"Given Year is not leap year"<<endl;





}