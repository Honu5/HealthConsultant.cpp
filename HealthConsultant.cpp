#include <iostream>
using namespace std;
#include<string>
#include<cmath>

double BMI(float n,float m){
double b = n/(m*m);
b=round(b*100)/100;
return b;
}
int main(){
cout << "====================================\n";
    cout << "     Welcome to Health Consultant\n";
    cout << "====================================\n"<<endl<<endl;




int a;
cout<<"enter 0 to exit"<<endl;
cout<<"enter 1 to continue"<<endl;
cin>>a;

 while(a){
cout<<"please enter your full name"<<endl;

string Name;
cin.ignore();
getline(cin,Name);
cout<<"Hello "<<Name<<",   How are you doing.\nWelcome to your health consultant\nI am here to give you advice depending on your information\n"<<endl<<endl;
int n;
float w,h;
cout<<"enter your age: ";

cin>>n;
cout<<"enter your height: ";
cin>>h;
cout<<"enter your weight: ";

cin>>w;

//BMI(w,h);
double b=BMI(w,h);
cout<<"Nice "<<Name<<",Thank you for providing your information.\n";
if (n<10)
cout<<"You are a child and ";
else if (n<20)
cout<<"You are a Teenage and ";
else if (n<30)
cout<<"You are a Young  and ";
else if (n<60)
cout<<"You are an Adult and ";
else if (n<150)
cout<<"You are an elder and ";
else{
cout<<"The age you entered is out of human being limit.Please try again";
break;}
cout<<"your Body mass index is "<<b<<".";
if(b<17.5){
cout<<" you are highly under weight please adjust your diet.Have more glucose , reduce your work load and stress"<<endl<<endl<<endl;}

else if(b>17.5 && b<20){
cout<<" your condition is slightly under weight please adjust your diet."<<endl<<endl<<endl;}
else if(b>20 && b<25){
cout<<" your condition is good .Try to Maintain it."<<endl<<endl<<endl;}
else if(b>25 && b<30){
cout<<" your condition is slightly over weight please adjust your diet.Like reduce your glucose intake and ha e more bulky foods"<<endl<<endl<<endl;}
else if(b>30){
cout<<" your condition is under a vary threatening obesity.You had better go to doctor and ask for advice."<<endl<<endl<<endl;}


cout<<"enter 0 to exit"<<endl;
cout<<"enter 1 to continue"<<endl;
cin>>a;
    }


return 0;}
