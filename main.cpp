#include <iostream>
#include <stdio.h>
using namespace std;

int main()
{
    //Declaration of variables
    int dollars;
    double B,M,J,I;
    double D1,D2,D3,D4;
    int choice;
    int rupee,pesos,yen,pound;

    cout<<"For Converting American Dollar to Indian Rupee  or vice-versa Press 1: "<<endl;
    cout<<"For Converting American Dollar to Mexican Pesos or vice-versa Press 2: "<<endl;
    cout<<"For Converting American Dollar to Japenese Yen  or vice-versa Press 3:"<<endl;
    cout<<"For Converting American Dollar to British Pound or vice-versa Press 4:"<<endl;
    cin>>choice;

    if(choice==1)
    {
        char choice2;
        cout<<"From Dollars to Indian Rupee Press Letter 'I': "<<endl;
        cout<<"From Indian Rupee to Dollars Press Letter 'D': "<<endl;
        cin>>choice2;

        if(choice2=='I' || choice2=='i')
        {
            cout<<"Enter the amount of American Dollars: "<<endl;
            cin>>dollars;
            I=dollars*77.81;
            cout<<dollars<<"$ American dollars are equal to ₹ "<<I<<endl; 
        }
        if(choice2== 'D'|| choice2=='d')
        {
            cout<<"Enter the amount in Indian Rupee: "<<endl;
            cin>>rupee;
            D1=rupee/77.81;
            cout<<rupee<<"Rs are equal to $"<<D1<<endl;

        }   
        
    }
    else if(choice==2)
    {
        char choice3;
        cout<<"From Dollars to Mexican Pesos Press Letter 'P': "<<endl;
        cout<<"From Mexican Pesos to Dollars Press Letter 'D': "<<endl;
        cin>>choice3;
        
        if(choice3=='P' || choice3=='p')
        {
            cout<<"Enter the amount of American Dollars: "<<endl;
            cin>>dollars;
            M=dollars*19.60;
            cout<<dollars<<" American Dollars are equal to MX$ "<<M<<endl;
        }
        if(choice3=='D' || choice3=='d')
        {
            cout<<"Enter the amount of Mexican Pesos: "<<endl;
            cin>>pesos;
            D2=pesos/19.60;
            cout<<pesos<<" Mexican Pesos are equal to "<<D2<<endl;
        }
       
    }
    else if(choice==3)
    {
        char choice4;
        cout<<"From Dollars to Japenese Yen Press Letter 'J:' "<<endl;
        cout<<"From Japenese Yen to Dollars Press Letter 'D': "<<endl;
        cin>>choice4;
        if(choice4=='J' || choice4=='j')
        {
            cout<<"Enter the amount of American Dollars: "<<endl;
            cin>>dollars;
            J=dollars*131.95;
            cout<<dollars<<" American Dollars are equal to ¥ "<<J<<endl;
        }
        if(choice4=='D' || choice4=='d')
        {
            cout<<"Enter the amount of Japenese Yen: "<<endl;
            cin>>yen;
            D3=yen/131.95;
            cout<<yen<<" Japenese Yen are equal to $"<<D3<<endl; 
        }
        
    }
    else if(choice==4)
    {
        
        char choice5;
        cout<<"From Dollars to British Pound Press Letter 'B': "<<endl;
        cout<<"From British Pound to Dollars Press Letter 'D': "<<endl;
        cin>>choice5;
        if(choice5=='B' || choice5=='b')
        {
            cout<<"Enter the amount of American Dollars: "<<endl;
            cin>>dollars;
            B=dollars*0.80;
            cout<<dollars<<" American Dollars are equal to £ "<<B<<endl;

        }
        if(choice5=='D' || choice5=='d')
        {
            cout<<"Enter the amount of British Pounds: "<<endl;
            cin>>pound;
            D4=pound/0.80;
            cout<<pound<<" British Pounds are equal to $:"<<D4<<endl;
        }
       
    }
   
    system("pause");
}
