#include<iostream>
using namespace std;

int main(){
    char startValue;
    char selectAgain;
    float converter(void);
    start:
    cout<<"*********Welcome to Currency Converter Application***********"<<endl;
    cout<<"****please follow the instruction****"<<endl; 
    cout<<"You  have currencies dollar, rupees, euro, pound, dirham, riyal"<<endl; 
    cout<<"You can type  a, b, c, d, e, f respectively for currencies dollar, rupees, euro, pound, dirham, riyal"<<endl; 
    cout<<"Enter currency1 which you want to convert"<<endl;
    cout<<"Enter value for currency1"<<endl;
    cout<<"Enter currency2 which you want to convert currency1"<<endl;
    cout<<"(a) dollar (b) rupees (c) euro (d) pound (e) dirham (f) riyal"<<endl;
    //cout<<"dollar rupees euro pound  dirham riyal"<<endl;
    cout<<"Please press s to start"<<endl;
    selectChoice:
    cin>>startValue;
    if(startValue== 's' || startValue== 'S'){
        float finalValue=converter();
        cout<<"result is "<<finalValue<<endl;
        cout<<"Do you want to use the application again?y or n"<<endl;
        typeAgain:
        cin>>selectAgain;
        if(selectAgain=='y' || selectAgain=='Y'){
            goto start;
        }
        else if(selectAgain=='n' || selectAgain=='N'){
            cout<<"Thank you for using our application !"<<endl;
        }
        else{
            cout<<"You have enterd wrong value please type again"<<endl;
            goto typeAgain;  
        }

    }
    else{
        cout<<"You have entered wrong value, please type s"<<endl;
        goto selectChoice;
    }
}
float converter(){
    char currName1;
    char currName2;
    float currency1;
    float currency2;
    currLevel:
    cout<<"Enter currency1 Name"<<endl;
    cin>>currName1;
    cout<<"Enter currency1 Value"<<endl;
    cin>>currency1;
    switch(currName1){
        case 'a':
           currLevel1:
           cout<<"Enter currency2 Name"<<endl;
           cin>>currName2;
           if(currName2=='a' || currName2=='A'){
             currency2=currency1*1;
           }
           else if(currName2=='b' || currName2=='B'){
             currency2=currency1*81.27;
           }
            else if(currName2=='c' || currName2=='C'){
              currency2=currency1*0.92;
           }
           else if(currName2=='d' || currName2=='D'){
             currency2=currency1*0.81;
           }
            else if(currName2=='e' || currName2=='E'){
            currency2=currency1*3.67;
           }
            else if(currName2=='f' || currName2=='F'){
            currency2=currency1*3.64;
           }
           else{
            cout<<"You have entered wrong value, please type again."<<endl;
            goto currLevel1;
           }
           break;

        case 'b':
           currLevel2:
           cout<<"Enter currency2 Name"<<endl;
           cin>>currName2;
           if(currName2=='a' || currName2=='A'){
             currency2=currency1*0.012;
           }
           else if(currName2=='b' || currName2=='B'){
             currency2=currency1*1;
           }
            else if(currName2=='c' || currName2=='C'){
              currency2=currency1*0.011;
           }
           else if(currName2=='d' || currName2=='D'){
             currency2=currency1*0.01;
           }
            else if(currName2=='e' || currName2=='E'){
            currency2=currency1*0.045;
           }
            else if(currName2=='f' || currName2=='F'){
            currency2=currency1*0.044;
           }
           else{
            cout<<"You have entered wrong value, please type again."<<endl;
            goto currLevel2;
           }
           break;

        case 'c':
           currLevel3:
           cout<<"Enter currency2 Name"<<endl;
           cin>>currName2;
           if(currName2=='a' || currName2=='A'){
             currency2=currency1*1.084;
           }
           else if(currName2=='b' || currName2=='B'){
             currency2=currency1*88.162;
           }
            else if(currName2=='c' || currName2=='C'){
              currency2=currency1*1;
           }
           else if(currName2=='d' || currName2=='D'){
             currency2=currency1*0.886;
           }
            else if(currName2=='e' || currName2=='E'){
            currency2=currency1*3.983;
           }
            else if(currName2=='f' || currName2=='F'){
            currency2=currency1*4.067;
           }
           else{
            cout<<"You have entered wrong value, please type again."<<endl;
            goto currLevel3;
           }
           break;

        case 'd':
           currLevel4:
           cout<<"Enter currency2 Name"<<endl;
           cin>>currName2;
           if(currName2=='a' || currName2=='A'){
             currency2=currency1*1.222;
           }
           else if(currName2=='b' || currName2=='B'){
             currency2=currency1*99.401;
           }
            else if(currName2=='c' || currName2=='C'){
              currency2=currency1*1.127;
           }
           else if(currName2=='d' || currName2=='D'){
             currency2=currency1*1;
           }
            else if(currName2=='e' || currName2=='E'){
            currency2=currency1*4.491;
           }
            else if(currName2=='f' || currName2=='F'){
            currency2=currency1*4.451;
           }
           else{
            cout<<"You have entered wrong value, please type again."<<endl;
            goto currLevel4;
           }
           break;

           case 'e':
           currLevel5:
           cout<<"Enter currency2 Name"<<endl;
           cin>>currName2;
           if(currName2=='a' || currName2=='A'){
             currency2=currency1*0.272;
           }
           else if(currName2=='b' || currName2=='B'){
             currency2=currency1*22.131;
           }
            else if(currName2=='c' || currName2=='C'){
              currency2=currency1*0.251;
           }
           else if(currName2=='d' || currName2=='D'){
             currency2=currency1*0.222;
           }
            else if(currName2=='e' || currName2=='E'){
            currency2=currency1*1;
           }
            else if(currName2=='f' || currName2=='F'){
            currency2=currency1*0.991;
           }
           else{
            cout<<"You have entered wrong value, please type again."<<endl;
            goto currLevel5;
           }
           break;

        case 'f':
           currLevel6:
           cout<<"Enter currency2 Name"<<endl;
           cin>>currName2;
           if(currName2=='a' || currName2=='A'){
             currency2=currency1*0.274;
           }
           else if(currName2=='b' || currName2=='B'){
             currency2=currency1*22.329;
           }
            else if(currName2=='c' || currName2=='C'){
              currency2=currency1*0.253;
           }
           else if(currName2=='d' || currName2=='D'){
             currency2=currency1*0.224;
           }
            else if(currName2=='e' || currName2=='E'){
            currency2=currency1*1.008;
           }
            else if(currName2=='f' || currName2=='F'){
            currency2=currency1*1;
           }
           else{
            cout<<"You have entered wrong value, please type again."<<endl;
            goto currLevel6;
           }
           break;

        default:{
            cout<<"You have entered wrong value, please type again."<<endl;
            goto currLevel;

            break;

        }



    }
    return currency2;
    
}