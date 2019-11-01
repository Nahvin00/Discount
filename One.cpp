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
        price=180+((quan-9)*20*0.8);
    }
    else if(quan>19 && quan<50){
        price=340+((quan-19)*20*0.7);
    }
    else if(quan>49 && quan<100){
        price=760+((quan-49)*20*0.6);
    }
    else if(quan>99){
        price=1360+((quan-99)*20*0.5);
    }
    else{
        cout<<"Invalid Number.";
    }
    cout<<fixed<<showpoint<<setprecision(2)<<"The total price is " <<price<<"RM.";
    return 0;
}
