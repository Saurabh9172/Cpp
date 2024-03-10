#include<iostream>
using namespace std;
class Box
{
    float length,width,height;
    public:
    Box(double length=1,double width=1,float height=1):length(length),width(width),height(height)
    {}
   void acceptDimensions()
   {
    cout<<"\nEnter length, width, height of Box : ";
    cin>>length>>width>>height;
   }
   float calcVolume()
   {
    return (length*width*height);
   }
};
int main()
{
    int choice;
   
    Box box1;
    while(true)
    {
        cout<<"\n1. Set Dimension of Box."<<endl;
        cout<<"2. Calculate Volume of box and display."<<endl;
        cout<<"Enter Your choice: ";
        cin>>choice;
        if(choice==1)
        box1.acceptDimensions();
        else if(choice==2)
        {
        
        cout<<"\nVolume Of Box : "<<box1.calcVolume()<<endl;
        }
        else
        cout<<"Invalid Choice "<<endl;
    }
}