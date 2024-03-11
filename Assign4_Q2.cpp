#include<iostream>
using namespace std;
class Student
{
    string name;
    string gender;
    int rollNumber;
    float marks[3];
    float perct;
    public:
    void accept()
    {
        cout<<"Enter Student Name : ";
        getchar();
        getline(cin,name);
        cout<<"Enter Student Gender (M/F): ";
        cin>>gender;
        cout<<"Enter Student Roll Number : ";
        cin>>rollNumber;
        cout<<"Enter Student Marks in 3 subjects : ";
        cin>>marks[0]>>marks[1]>>marks[2];

    }
    void display()
    {
        cout<<"Student Name : "<<name<<endl;
        cout<<"Student gender : "<<gender<<endl;
        cout<<"Student Roll Number : "<<rollNumber<<endl;
        float total=0;
        for(int i=0;i<3;i++)
        {
            total+=marks[i];
        }
        perct=(total/300)*100;
        cout<<"Student Percentage obtained in exam : "<<perct<<"%"<<endl;
    }
    friend int searchRecords(Student *arr,int size);
    friend void sortRecords(Student *arr,int size);
};
int searchRecords(Student *arr,int size)
{
        
        int serch;
        cout<<"Enter Roll Number to search student : ";
        cin>>serch;
        for(int i=0;i<size;i++)
        {
              if(serch==arr[i].rollNumber)
              {
                return i;
              }
              
        }
        return -1;
}
void sortRecords(Student *arr,int size)
{
       
       
       for(int i=0;i<size-1;i++)
       {
            for(int j=i+1;j<size;j++)
            {
                if(((arr[i].name).compare(arr[j].name))>0)
                {
                   string name1=arr[i].name;
                    arr[i].name=arr[j].name;
                    arr[j].name=name1;
                }
            }
       }
       for(int i=0;i<size-1;i++)
       {
            for(int j=i+1;j<size;j++)
            {
                if(((arr[i].gender).compare(arr[j].gender))>0)
                {  
                   
                   string gender1=arr[i].gender;
                   arr[i].gender=arr[j].gender;
                   arr[j].gender=gender1;
                }
            }
       }
       for(int i=0;i<size-1;i++)
       {
           for(int j=i+1;j<size;j++)
           {
               if((arr[i].rollNumber)>(arr[j].rollNumber))
               {
                  int roll=arr[i].rollNumber;
                  arr[i].rollNumber=arr[j].rollNumber;
                  arr[j].rollNumber=roll;
               }
           }
       }
      for(int i=0;i<size-1;i++)
      {
        for(int j=i+1;j<size;j++)
        {
            if((arr[i].perct)>(arr[j].perct))
            {
                double perct1=arr[i].perct;
                arr[i].perct=arr[j].perct;
                arr[j].perct=perct1;
            }
        }
      }
    cout<<"Name\t\tGender\t\tRollNumber\tPercentage"<<endl;
    for(int i=0;i<size;i++)
    {
        
        cout<<arr[i].name<<"\t\t"<<arr[i].gender<<"\t\t"<<arr[i].rollNumber<<"\t\t"<<arr[i].perct<<endl;
    }
    cout<<endl;
};
int main()
{
    int choice,size,result;
    Student *ptr;
    cout<<"Enter the Size of Array : ";
    cin>>size;
    ptr=new Student[size];
    cout<<"Accept All Students Information : "<<endl;
    for(int i=0;i<size;i++)
    {
           cout<<"At Index ["<<i<<"] : "<<endl;
           ptr[i].accept();
    }
    do
    {
        cout<<"1. Display All Student Information : "<<endl;
        cout<<"2. Search Any Student based on Roll Number : "<<endl;
        cout<<"3. Sort All Students : "<<endl;
        cout<<"0. Exit "<<endl;
        cout<<"Enter Your Choice : ";
        cin>>choice;
        
        switch(choice)
        {
            case 1:
            for(int i=0;i<size;i++)
            {
                cout<<"At Index ["<<i<<"] : "<<endl;
                ptr[i].display();
            }
            cout<<endl;
            break;

            case 2:
            result=searchRecords(ptr,size);
            if(result!=-1)
            cout<<"Student is found at Index ["<<result<<"] . "<<endl;
            else
            cout<<"Student does not exist."<<endl;
            break;
            
            case 3:
            cout<<"All Student Information After Sorting : "<<endl;
            sortRecords(ptr,size);
            break;

            case 0:
            cout<<"Thank You!!!"<<endl;
            break;

            default:
            cout<<"Invalid Choice "<<endl;
            cout<<"Enter Again : "<<endl;

        }
    } while (choice!=0);
    


}

