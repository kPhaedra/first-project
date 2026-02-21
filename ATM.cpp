#include <iostream>
using namespace std;

int passWord ()  
{
    int pin;

    for (int count=1;count<=3; count++){
        cout<<"please enter your password"<<endl;
        cin>>pin;

        if (pin==2327)
        break;      /*if the user succed before the 3 chances left 
        the program will stop directly*/
    }

    return pin;     /*store if the user failed or succed
    to enter the password*/
}

int psold(){
    int sold=1200;
    return sold;
    
}

int Deposit (int sold){

    int depo;
    sold=1200;

    cout<<"how much do you want to put"<<endl;
    cin>>depo;

    if(depo>=10){
        sold+=depo;
        cout<<"deposit done "<<endl;
        return sold; /* minimum for deposit and will keep the 
        value of sold in the code*/
    } else return sold; /*in case if the minimum is not respect
    the system will keep the value of sold*/

}

int Withdrawal(int sold){

    int withdraw;
    sold=1200;

    cout<<"how much do you want to withdraw?"<<endl;
    cin>>withdraw;
    if (withdraw>sold){
    while (withdraw>sold){
        cout<<"the amount enter is superior than the one in your sold"<<endl;
        cout<<"enter another amount please"<<endl;
        cin>>withdraw;
    }
} else sold=sold-withdraw;
return sold;
}

int main () {
    int choice;
    int resultdepo,resultwith;
    int sold =psold();
    

    int pina=passWord();

    if (pina==2327){
        cout<<endl;
        cout<<"1_Withdrawal\n"<<"2_Deposit\n"<<"3_transaction history\n"<<"4_exit"<<endl;

        while(choice!=4){
        cout<<"please choose a number"<<endl;
        cin>> choice;
        switch(choice){
            case 1 :cout<<"withdrawal"<<endl;
            resultwith=Withdrawal(sold);
            cout<<"done successully"<<endl;
            cout<<"your sold is now "<<resultwith<<"$"<<endl;
            break;

            case 2 :cout<<"deposit"<<endl;
            resultdepo=Deposit(sold);
            
            cout<<resultdepo<<endl;
            break;

            default : break;
        }
    }

    } else cout<<"take your card back "<<endl;

    return 0;
}