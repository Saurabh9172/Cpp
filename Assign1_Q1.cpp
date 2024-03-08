#include<iostream>
using namespace std;
struct Date
{
    int day;
    int month;
    int year;
};
void initDate(struct Date* ptrDate)
{
    ptrDate->day=1;
    ptrDate->month=1;
    ptrDate->year=1111;
    cout<<"\nDefault Date is Set";
}
void printDateOnConsole(struct Date* ptrDate)
{
    cout<<"Today's Date is: "<<ptrDate->day<<"-"<<ptrDate->month<<"-"<<ptrDate->year<<endl;
}
void acceptDateFromConsole(struct Date* ptrDate)
{
    cout<<"Enter Today's Date as per dd/mm/yyyy :";
    cin>>ptrDate->day>>ptrDate->month>>ptrDate->year;

}
int main()
{ 
    int choice;
    struct Date today;
    today.day=4;
    today.day=12;
    today.day=1999;
    struct Date *ptr=&today;
    do
    {
        
        
        cout<<"1.Enter Today's Date."<<endl;
        cout<<"2.Display Today's Date."<<endl;
        cout<<"3.Set Default Date."<<endl;
        cout<<"\nEnter Your choice: ";
        cin>>choice;
        switch(choice)
        {
            case 1:
            acceptDateFromConsole(ptr);
            break;

            case 2:
            printDateOnConsole(ptr);
            break;

            case 3:
            initDate(ptr);
            break;

            default:
            cout<<"Thank You\n";
        }
    }while((choice==1)||(choice==2)||(choice==3));
    return 0;

}