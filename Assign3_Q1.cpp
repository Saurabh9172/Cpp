#include <iostream>
using namespace std;
class Time
{
    int h;
    int m;
    int s;
    public:
    Time()
    {
        h=12;
        m=0;
        s=0;
    }
    Time(int h,int m,int s)
    {
        this->h=h;
        this->m=m;
        this->s=s;
    }
    void setHour(int h)
    {
        this->h=h;
    }
    void setMinute(int m)
    {
        this->m=m;
    }
    void setSecond(int s)
    {
        this->s=s;
    }
    int getHour()
    {
        return h;
    }
    int getMinute()
    {
        return m;
    }
    int getSecond()
    {
        return s;
    }
    void acceptTime()
    {
        cout<<"Enter the time as per hour:minute:second"<<endl;
        cout<<"Hour : ";
        hour:
        cin>>h;
        if(h>=24)
        {
            if(h==24)
            {
                h=12;
            }
            else
            {
            cout<<"Invalid Hour time!!\nEnter Again : ";
            goto hour;
            
            }
        }
        minute:
        cout<<"Minute : ";
        cin>>m;
        if(m>=60)
        {
            if(m==60)
            {
                m=0;
                h+=1;
                if(h==24)
                {
                    h=12;
                }
            }
            else
            {
            cout<<"Invalid Minute time!!\nEnter Again"<<endl;
            goto minute;
            this->acceptTime();
            }
        }
        second:
        cout<<"Second : ";
        cin>>s;
        if(s>=60)
        {
            if(s==60)
            {
                s=0;
                m+=1;
                if(m==60)
                {
                    m=0;
                    h+=1;
                    if(h==24)
                    {
                        h=12;
                    }
                }
            }
            else
            {
            cout<<"Invalid Second time!!\nEnter Again"<<endl;
            goto second;
            
            }
        }
        cout<<endl;
    } 
    void printTime()
    {
        cout<<"Time is = "<<h<<":"<<m<<":"<<s<<endl;
    }

};
int main()
{
    int n;
    int h;
    int m;
    int s;
    cout<<"Enter Array Size to stores time lap : ";
    cin>>n;
    Time *ptr=new Time[n];
    for(int i=0;i<n;i++)
    {
         ptr[i].acceptTime();
         cout<<"Time is set in index "<<i<<endl<<endl;
    }
    for(int i=0;i<n;i++)
    {
        cout<<"Index "<<i<<endl;
        ptr[i].printTime();
        
    }
    for(int i=0;i<n;i++)
    {
        cout<<"For Index "<<i<<endl;
        Hour:
        cout<<"\nUpdate Hour Time : ";
        cin>>h;
        if(h>=24)
        {
            if(h==24)
            {
                h=12;
            }
           else{
                cout<<"Invalid Hour time!!\n\nEnter Again";
                goto Hour;
            }
        }
        ptr[i].setHour(h);
        Minute:
        cout<<"\nUpdate Minute Time : ";
        cin>>m;
        if(m>=60)
        {
            if(m==60)
            {
                m=0;
                h+=1;
                if(h==24)
                {
                    h=12;
                }
            }
            else{
                cout<<"Invalid Minute time!!\n\nEnter Again";
                goto Minute;
            }
        }
        ptr[i].setMinute(m);
        Second:
        cout<<"\nUpdate Second Time : ";
        cin>>s;
        if(s>=60)
        {
            if(s==60)
            {
                s=0;
                m+=1;
                if(m==60)
                {
                    m=0;
                    h+=1;
                    if(h==24)
                    {
                        h=12;
                    }
                }
            }
            else
            {
                cout<<"Invalid Second time!!\n\nEnter Again";
                goto Second;
            }
        }
        ptr[i].setSecond(s);
        
    }
    
    
    for(int i=0;i<n;i++)
    {
        cout<<"\nUpdated time for index "<<i<<endl;
        cout<<ptr[i].getHour()<<":"<<ptr[i].getMinute()<<":"<<ptr[i].getSecond()<<endl;
    }
    delete[] ptr;
}