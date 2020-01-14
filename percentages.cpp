#include<iostream>
using namespace std;

int total_points();
void interface();

int main()
{
    interface();
    return 0;
}
void interface(){
    int num, denom, perc;
    char z='~';
    cout<<"welcome to gpa buddy!";
    cout<<"\n";
    while (z!='c'){
        denom = total_points();
        cout<<denom<<"\n";
        cout<<"c to continue, any key to re-enter: ";
        cout<<"\n";
        cin>>z;
    }
    cout<<"enter points earned";
    cout<<"\n";
    z='~';
    while (z!='c'){
        num = total_points();
        cout<<num<<"\n";
        cout<<"c to continue, any key to re-enter: ";
        cout<<"\n";
        cin>>z;
    }
    cout<<(num*100)/denom<<"%\n";
    z='~';
        while (z != 'q'){
            cout<<"enter the calculation you wish to run ";
            cout<<"\n";
            cout<<"for current percentage, choose 'c' ";
            cout<<"\n";
            cout<<"for maximum possible percentage at end choose 'm' ";
            cout<<"\n";
            cout<<"for percent needed for a particular grade choose 'p'";
            cout<<"\n";
            cout<<"for current percentage, choose 'c' ";
            cout<<"\n";
            cin>>z;
        }

return;
}
int total_points(){

    int num=0;
    int add=0;
    char choice='~';
    cout<<"please enter points, one item at a time, and select q when done";
    cout<<"\n";
    while (choice != 'q'){
        cout<<"enter points";
        cout<<"\n";
        cin>>add;
        num+=add;
        cout<<"q for quit, any key to add more";
        cout<<"\n";
        cin>> choice;
        cout<<"you chose"<<choice;
        cout<<"\n";
    }
return num;
}
