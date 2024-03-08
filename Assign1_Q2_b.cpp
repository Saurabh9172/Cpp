#include <iostream>
using namespace std;
class Date
{
    int day;
    int month;
    int year;
    public:
    void initDate()
    {
        day=1;
        month=1;
        year=1111;
        cout<<"Default Date is set"<<endl<<endl;
    }
    void printDateOnConsole()
    {
        cout<<"\nDate is : "<<day<<"-"<<month<<"-"<<year<<endl<<endl;
    }
    void acceptDateFromConsole()
    {
        cout<<"Enter the Date: ";
        cin>>day>>month>>year;


    }
    bool isLeapYear()
    {
        if(((year%100==0)&&(year%400==0)) || (year%4==0))
        return true;
         else
         return false;
    }

};
int main()
{
    int choice;
    bool ptr;
    Date date;
    do{
        
        cout<<"1.Set Date"<<endl;
        cout<<"2.Display Date"<<endl;
        cout<<"3.check whether year is leap or not"<<endl;
        cout<<"4.Set Default date"<<endl<<endl;
        cout<<"Enter Your Choice: ";
        cin>>choice;

        switch(choice)
        {
            case 1:
            date.acceptDateFromConsole();
            break;

            case 2:
            date.printDateOnConsole();
            break;

            case 3:
            ptr=date.isLeapYear();
            if(ptr)
            cout<<"\nGiven Year is Leap Year"<<endl<<endl;
            else
            cout<<"\nGiven Year is Non-leap Year"<<endl<<endl;
            break;

            case 4:
            date.initDate();
            break;

            default:
            cout<<"Thank You\n";

        }
        

    }while((choice>=1)&&(choice<=4));
    return 0;
}