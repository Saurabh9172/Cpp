#include <iostream>
using namespace std;
class Stack
{
    int num;
    int size;
    int *ptr;
    int top=-1;
    
    public:
    Stack(int size=5)
    {
        this->size=size;
        ptr=new int[this->size];
    }
    void push()
    {
        if(this->isFull())
        cout<<endl;
        else
        {
            top++;
            cout<<"Enter the number to push into the Stack : ";
            cin>>num;
            ptr[top]=num;
            cout<<"At Index "<<top<<" : "<<ptr[top]<<" is pushed."<<endl<<endl;
    }
    }
    void pop()
    {
        if(this->isEmpty())
        cout<<endl;
        else
        {
           cout<<"At Index "<<top<<" : "<<ptr[top]<<" poped."<<endl<<endl;
           top--;
    }
    }

    void peek()
    {
        if(this->isEmpty())
        cout<<endl;
        else
        cout<<"Current Number is "<<ptr[top]<<endl<<endl;
    }
    bool isEmpty()
    {
         if(top==-1)
         {
            cout<<"Stack is Empty."<<endl;
            return true;
         }
        return false;

    }
    bool isFull()
    {
        if(top==size-1)
        {
            cout<<"Stack is Full."<<endl;
            return true;
        }
        else
        return false;
    }
    void print()
    {
        if(this->isEmpty())
        cout<<endl;
        else
        {
             cout<<"Stack elements are as per last in first out : "<<endl;   
            for(int i=0;i<=top;i++)
            {
               
                cout<<"  "<<ptr[i];
            }
            cout<<endl<<endl;
        }
        

    }
    ~Stack()
    {
        delete[] ptr;
    }

};
int main()
{
    int choice,size;
    int num;
    cout<<"Enter the Stack Size to store numbers : ";
    cin>>size;
    Stack stk1(size);

    do
    {
        cout<<"1. Add Number in Stack."<<endl;
        cout<<"2. Delete Number in Stack."<<endl;
        cout<<"3. Check current stack number"<<endl;
        cout<<"4. Print All Stack numbers"<<endl;
        cout<<"0. Exit"<<endl;
        cout<<"Enter the choice : ";
        cin>>choice;
        switch(choice)
        {
            case 1:
            stk1.push();
            break;
            
            case 2:
            stk1.pop();
            break;

            case 3:
            stk1.peek();
            break;

            case 4:
            stk1.print();
            break;

            case 0:
            cout<<"Thank You"<<endl;
            break;

            default:
            cout<<"Enter Valid Choice"<<endl;

        }
    } while (choice!=0);
    
}
