#include<iostream>
using namespace std;
int main(){
    int x;
    cout<<"Enter the money ";
    cin>>x;
    switch(x<5){
        case 1:
            int r2=x/2;
            int r1=(x-2*r2)/1;
            cout<<"The min number of two ruppees coin is "<<r2<<endl;
            cout<<"The min number of one ruppees coin is "<<r1;
        
    }
    switch(x>=5&&x<10){
        case 1:
            int r5=x/5;
            int r2=(x-5*r5)/2;
            int r1=(x-5*r5-2*r2)/1;
            cout<<"The min number of five ruppees coin is "<<r5<<endl;
            cout<<"The min number of two ruppees coin is "<<r2<<endl;
            cout<<"The min number of one ruppees coin is "<<r1;
    }
    switch(x>=10&&x<20){
        case 1:
            int r10=x/10;
            int r5=(x-10*r10)/5;
            int r2=(x-10*r10-5*r5)/2;
            int r1=(x-10*r10-5*r5-2*r2)/1;
            cout<<"The min number of ten ruppees coin is "<<r10<<endl;
            cout<<"The min number of five ruppees coin is "<<r5<<endl;
            cout<<"The min number of two ruppees coin is "<<r2<<endl;
            cout<<"The min number of one ruppees coin is "<<r1;
    }
    switch(x>=20&&x<50){
        case 1:
            int r20=x/20;
            int r10=(x-20*r20)/10;
            int r5=(x-20*r20-10*r10)/5;
            int r2=(x-20*r20-10*r10-5*r5)/2;
            int r1=(x-20*r20-10*r10-5*r5-2*r2)/1;
            cout<<"The min number of twenty ruppees coin is "<<r20<<endl;
            cout<<"The min number of ten ruppees coin is "<<r10<<endl;
            cout<<"The min number of five ruppees coin is "<<r5<<endl;
            cout<<"The min number of two ruppees coin is "<<r2<<endl;
            cout<<"The min number of one ruppees coin is "<<r1;
    }
    switch(x>=50&&x<100){
        case 1:
            int r50=x/50;
            int r20=(x-50*r50)/20;
            int r10=(x-50*r50-20*r20)/10;
            int r5=(x-50*r50-20*r20-10*r10)/5;
            int r2=(x-50*r50-20*r20-10*r10-5*r5)/2;
            int r1=(x-50*r50-20*r20-10*r10-5*r5-2*r2)/1;
            cout<<"The min number of fifty ruppees note is "<<r50<<endl;
            cout<<"The min number of twenty ruppees coin is "<<r20<<endl;
            cout<<"The min number of ten ruppees coin is "<<r10<<endl;
            cout<<"The min number of five ruppees coin is "<<r5<<endl;
            cout<<"The min number of two ruppees coin is "<<r2<<endl;
            cout<<"The min number of one ruppees coin is "<<r1;
    }
    switch(x>=100&&x<200){
        case 1:
            int r100=x/100;
            int r50=(x-100*r100)/50;
            int r20=(x-100*r100-50*r50)/20;
            int r10=(x-100*r100-50*r50-20*r20)/10;
            int r5=(x-100*r100-50*r50-20*r20-10*r10)/5;
            int r2=(x-100*r100-50*r50-20*r20-10*r10-5*r5)/2;
            int r1=(x-100*r100-50*r50-20*r20-10*r10-5*r5-2*r2)/1;
             cout<<"The min number of hundred ruppees note is "<<r100<<endl;
            cout<<"The min number of fifty ruppees note is "<<r50<<endl;
            cout<<"The min number of twenty ruppees coin is "<<r20<<endl;
            cout<<"The min number of ten ruppees coin is "<<r10<<endl;
            cout<<"The min number of five ruppees coin is "<<r5<<endl;
            cout<<"The min number of two ruppees coin is "<<r2<<endl;
            cout<<"The min number of one ruppees coin is "<<r1;
    }
    switch(x>=200&&x<500){
        case 1:
            int r200=x/200;
            int r100=(x-200*r200)/100;
            int r50=(x-200*r200-100*r100)/50;
            int r20=(x-200*r200-100*r100-50*r50)/20;
            int r10=(x-200*r200-100*r100-50*r50-20*r20)/10;
            int r5=(x-200*r200-100*r100-50*r50-20*r20-10*r10)/5;
            int r2=(x-200*r200-100*r100-50*r50-20*r20-10*r10-5*r5)/2;
            int r1=(x-200*r200-100*r100-50*r50-20*r20-10*r10-5*r5-2*r2)/1;
            cout<<"The min number of two hundred ruppees note is "<<r200<<endl;
            cout<<"The min number of hundred ruppees note is "<<r100<<endl;
            cout<<"The min number of fifty ruppees note is "<<r50<<endl;
            cout<<"The min number of twenty ruppees coin is "<<r20<<endl;
            cout<<"The min number of ten ruppees coin is "<<r10<<endl;
            cout<<"The min number of five ruppees coin is "<<r5<<endl;
            cout<<"The min number of two ruppees coin is "<<r2<<endl;
            cout<<"The min number of one ruppees coin is "<<r1;
    }
    switch(x>=500){
        case 1:
            int r500=x/500;
            int r200=(x-500*r500)/200;
            int r100=(x-500*r500-200*r200)/100;
            int r50=(x-500*r500-200*r200-100*r100)/50;
            int r20=(x-500*r500-200*r200-100*r100-50*r50)/20;
            int r10=(x-500*r500-200*r200-100*r100-50*r50-20*r20)/10;
            int r5=(x-500*r500-200*r200-100*r100-50*r50-20*r20-10*r10)/5;
            int r2=(x-500*r500-200*r200-100*r100-50*r50-20*r20-10*r10-5*r5)/2;
            int r1=(x-500*r500-200*r200-100*r100-50*r50-20*r20-10*r10-5*r5-2*r2)/1;
            cout<<"The min number of five hundred ruppees note is "<<r500<<endl;
            cout<<"The min number of two hundred ruppees note is "<<r200<<endl;
            cout<<"The min number of hundred ruppees note is "<<r100<<endl;
            cout<<"The min number of fifty ruppees note is "<<r50<<endl;
            cout<<"The min number of twenty ruppees coin is "<<r20<<endl;
            cout<<"The min number of ten ruppees coin is "<<r10<<endl;
            cout<<"The min number of five ruppees coin is "<<r5<<endl;
            cout<<"The min number of two ruppees coin is "<<r2<<endl;
            cout<<"The min number of one ruppees coin is "<<r1;
    }
    
}