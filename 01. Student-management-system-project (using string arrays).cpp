#include<iostream>
#include <stdlib.h>
using namespace std;

string arr1[20],arr2[20],arr3[20],arr4[20],arr5[20];
int total=0;

void enter()
{
    int n;
    cout<<"how many student's data you wish to enter:  ";
    cin>>n;
    if(total==0)
    {
        for(int i=0;i<n;i++)
        {
        cout<<endl<<"enter data of student "<<i+1<<endl;
        cout<<"name: ";
        cin>>arr1[i];
        cout<<"roll no: ";
        cin>>arr2[i];
        cout<<"course: ";
        cin>>arr3[i];
        cout<<"class: ";
        cin>>arr4[i];
        cout<<"contact: ";
        cin>>arr5[i];
        }
    }
    else
    {
        for(int i=total;i<total+n;i++)
        {
        cout<<endl<<"enter data of student "<<i+1<<endl;
        cout<<"name: ";
        cin>>arr1[i];
        cout<<"roll no: ";
        cin>>arr2[i];
        cout<<"course: ";
        cin>>arr3[i];
        cout<<"class: ";
        cin>>arr4[i];
        cout<<"contact: ";
        cin>>arr5[i];
        }
    }
    total+=n;
}

void show()
{
    if(total==0)
    {
        cout<<"no data is entered so far"<<endl;
    }

    else
    {
        for(int i=0;i<total;i++)
        {
        cout<<endl<<"data of student "<<i+1<<endl;
        cout<<"name: "<<arr1[i]<<endl;
        cout<<"roll no: "<<arr2[i]<<endl;
        cout<<"course: "<<arr3[i]<<endl;
        cout<<"class: "<<arr4[i]<<endl;
        cout<<"contact: "<<arr5[i]<<endl;
        }
    }
}

void searched()
{
    if(total==0)
    {
        cout<<"no data is entered so far"<<endl;
    }
    else
    {
    string roll;
    cout<<"enter roll no of student which you want to search: ";
    cin>>roll;
    for(int i=0;i<total;i++)
    {
        if(roll == arr2[i])
        {
        cout<<endl<<"data of student "<<i+1<<endl;
        cout<<"name: "<<arr1[i]<<endl;
        cout<<"roll no: "<<arr2[i]<<endl;
        cout<<"course: "<<arr3[i]<<endl;
        cout<<"class: "<<arr4[i]<<endl;
        cout<<"contact: "<<arr5[i]<<endl;
        }
    }
    }
}

void updated()
{
    if(total==0)
    {
        cout<<"no data is entered so far"<<endl;
    }
    else
    {
    string roll;
    cout<<"enter roll no of student which you want to search: ";
    cin>>roll;
    for(int i=0;i<total;i++)
    {
        if(roll == arr2[i])
        {
        cout<<endl<<"previous data:"<<endl;
        cout<<"data of student "<<i+1<<endl;
        cout<<"name: "<<arr1[i]<<endl;
        cout<<"roll no: "<<arr2[i]<<endl;
        cout<<"course: "<<arr3[i]<<endl;
        cout<<"class: "<<arr4[i]<<endl;
        cout<<"contact: "<<arr5[i]<<endl<<endl;
        cout<<"enter new data:"<<endl;
        cout<<"name: ";
        cin>>arr1[i];
        cout<<"roll no: ";
        cin>>arr2[i];
        cout<<"course: ";
        cin>>arr3[i];
        cout<<"class: ";
        cin>>arr4[i];
        cout<<"contact: ";
        cin>>arr5[i];
        }
    }
    }
}

void deleted()
{
    if(total==0)
    {
        cout<<"no data is entered so far"<<endl;
    }
    else
    {
    int a;
    cout<<"1. delete full record"<<endl;
    cout<<"2. delete specific roll no"<<endl;

    cout<<"enter choice:  ";
    cin>>a;
    if(a==1)
    {
        total=0;
        cout<<"all record is deleted"<<endl;
    }
    else if(a==2)
    {
        string roll;
        cout<<"enter roll no you want to delete: ";
        cin>>roll;
        for(int i=0;i<total;i++)
        {
            if(roll==arr2[i])
            {
                for(int j=i;j<total;j++)
                {
                    arr1[j]=arr1[j+1];
                    arr2[j]=arr2[j+1];
                    arr3[j]=arr3[j+1];
                    arr4[j]=arr4[j+1];
                    arr5[j]=arr5[j+1];
                }
                total--;
                cout<<"the required record is deleted."<<endl;
            }
        }
    }
    }
}


int main()
{
    int ch;
    while(true)
    {
        cout<<endl<<"........................................................";
        cout<<endl<<"1. enter data"<<endl;
        cout<<"2. show data"<<endl;
        cout<<"3. search data"<<endl;
        cout<<"4. update data"<<endl;
        cout<<"5. delete data"<<endl;
        cout<<"6. exit"<<endl;

        cout<<"enter choice:  ";
        cin>>ch;
        switch(ch)
        {
            case 1: enter();
            break;
            case 2: show();
            break;
            case 3: searched();
            break;
            case 4: updated();
            break;
            case 5: deleted();
            break;
            case 6: exit(0);
            default : cout<<"wrong choice"<<endl;
            break;

        }
    }
    return 0;
}
