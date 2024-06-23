#include<iostream>
using namespace std;
int main(){
     double temp;
  char unit;
  cout<<"*******TemperatureConverter*******"<< endl;
  cout<<"F=Fahrenheit"<<endl;
  cout<<"C=Celsius"<<endl;
  cout <<" *****select one of the above*********"<<endl;
  cin>> unit;
  if (unit == 'F' || unit == 'f'){
    cout<<"Enter the Temprature in celsius: ";
    cin>>temp;
    temp=(1.8*temp)+32.0;
    cout<< "Temprature in Fahrenheit:"<<temp<<endl;
  }
    else if (unit == 'c' || unit == 'C'){
        cout<<"Enter the Temprature in Fahrenheit: ";
        cin>>temp;
    temp=(temp-32)/1.8;
    cout<< "Temprature in celsius"<<temp<<endl;
    }
    else{
        cout<<"Enter the vlaue in C and F";
    }  
}