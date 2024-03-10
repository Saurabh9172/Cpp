#include<iostream>
using namespace std;
class tollbooth
{
    unsigned int car;
    double totalMoney;
    public:
    tollbooth()
    {
        car=0;
        totalMoney=0.0;
    }
    void payingCar()
    {
        ++car;
        totalMoney+=0.5;
    }
    void nopayCar()
    {
        ++car;
    }
    void printOnConsole()
    {
        cout<<"\nTotal Cars Crossing tollbooth : "<<car<<endl;
        cout<<"Total money collected by tollbooth : "<<totalMoney<<endl;
        cout<<"Total Cars Paying toll : "<<totalMoney/0.50<<endl;
        cout<<"Total Cars not paying toll : "<<car-(int)(totalMoney/0.50)<<endl<<endl;
        
    }
};
int main()
{
    int choice;
    tollbooth tollCar;
    while(true)
    {
        cout<<"1. Car crosses tollboth by paying toll"<<endl;
        cout<<"2. Car crosses tollboth without paying toll"<<endl;
        cout<<"3. All information about tollboth"<<endl;
        cout<<"Enter Your Choice : ";
        cin>>choice;
        switch(choice)
        {
            case 1:
            tollCar.payingCar();
            cout<<"\nThank You"<<endl<<endl;
            break;

            case 2:
            tollCar.nopayCar();
            cout<<"\nThank You"<<endl<<endl;
            break;

            case 3:
            tollCar.printOnConsole();
            break;

            default:
            cout<<"\nInvalid choice.\nQ"<<endl;


        }
    }
}