#include<iostream>
#include<iomanip>
using namespace std;
int main(){
    int quan;
    double price;
    cout<<"Enter the quantity: ";
    cin>>quan;
    if(quan>0 && quan<10){
        price=quan*20;
    }
    else if(quan>9 && quan<20){
        price=quan*16;
    }
    else if(quan>19 && quan<50){
        price=quan*14;
    }
    else if(quan>49 && quan<100){
        price=quan*12;
    }
    else if(quan>99){
        price=quan*10;
    }
    else{
        cout<<"Invalid Number.";
    }
    cout<<fixed<<showpoint<<setprecision(2)<<"The total price is " <<price<<"RM.";
    return 0;
}
