#include <iostream>
using namespace std;
class Address
{
     string building;
     string street;
     string city;
     int pin;
    public:
    Address()
    {
        building="XYZ";
        street="ABC";
        city="MNO";
        pin=11111;
    }
    Address(string building,string street,string city,int pin)
    {
        this->building=building;
        this->street=street;
        this->city=city;
        this->pin=pin;
    }
    void accept()
    {
        cout<<"Enter Your Address: "<<endl;
        cout<<"Building Name : ";
        getline(cin,building);
        cout<<"Street Name : ";
        getline(cin,street);
        cout<<"City Name : ";
        getline(cin,city);
        cout<<"Pin Code : ";
        cin>>pin;
        cout<<endl;
    }
    void display()
    {
        cout<<"Addresss is :- "<<endl;
        cout<<"Building name : "<<building<<endl;
        cout<<"Street name : "<<street<<endl;
        cout<<"City name : "<<city<<endl;
        cout<<"Pin code : "<<pin<<endl;
    }
    string get_building()
    {
        return building;
    }
    string get_street()
    {
        return street;
    }
    string get_city()
    {
        return city;
    }
    int get_pin()
    {
        return pin;
    }
    void set_building(string building)
    {
        this->building=building;
    }
    void set_street(string strret)
    {
        this->street=street;
    }
    void set_city(string city)
    {
        this->city=city;
    }
    void set_pin(int pin)
    {
        this->pin=pin;
    }
};
int main()
{
    Address address1;
    address1.display();

    Address address2("Shradha House","Radhangri Road","Kolhapur",416211);
    address2.display();

    Address address3;
    address3.set_building("Vilasar Ghor");
    address3.set_city("Latur");
    address3.set_street("Kalanba Road");
    address3.set_pin(42334);

    cout<<"Adddress is : "<<endl;
    cout<<"Building name : "<<address3.get_building()<<endl;
    cout<<"Street name : "<<address3.get_street()<<endl;
    cout<<"City name : "<<address3.get_city()<<endl;
    cout<<"Pin code : "<<address3.get_pin()<<endl;

    Address address4;
    address4.accept();
    address4.display();

}