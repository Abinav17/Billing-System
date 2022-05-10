#include<stdio.h>
#include<conio.h>
#include<dos.h>
void main(){
int n,opt,opt1;
float amt,tot=0.0,qv1,qv2,qv3,qr1,qr2,qr3,qf1,qf2,qf3,v1=0.0,v2=0.0,v3=0.0,r1=0.0,r2=0.0,r3=0.0,f1=0.0,f2=0.0,f3=0.0,tax;
float v11=0.0,v22=0.0,v33=0.0,r11=0.0,r22=0.0,r33=0.0,f11=0.0,f22=0.0,f33=0.0;
clrscr();
printf("\t\tWELCOME TO MART");
do{

delay(1000);
label: {printf("\n\n 1.Vegetables \n 2.Rice and Millets \n 3.Fruits\n 4.Bill\n 5.Close"); }
printf("\n Enter the Category: ");
scanf("%d",&n);
switch(n){
case 1:
do{
printf("\n\n1.Onion\n2.Tomato\n3.Brinjal\n4.Other category\n\nEnter the Product No: ");
scanf("%d",&opt);
if(opt==1)   {
printf("How much kg you want:");
scanf("%f",&qv1);
v11+=qv1;
v1=50*v11;  }
if(opt==2) {
printf("How much kg you want:");
scanf("%f",&qv2);
v22+=qv2;
v2=25*v22;}
if(opt==3){
printf("How much kg you want:");
scanf("%f",&qv3);
v33+=qv3;
v3=30*v33;}
if(opt==4){
goto label;
}
} while(1);
break;
case 2:
do{
printf("\n\n1.Rice\n2.Toor Dal\n3.Urid Dal\n4.Other Category\n\nEnter the Product No: ");
scanf("%d",&opt);
if(opt==1)    {
printf("How much kg you want:");
scanf("%f",&qr1);
r11+=qr1;
r1=1000*r11;   }
if(opt==2) {
printf("How much kg you want:");
scanf("%f",&qr2);
r22+=qr2;
r2=200*r22; }
if(opt==3)   {
printf("How much kg you want:");
scanf("%f",&qr3);
r33+=qr3;
r3=150*r33;   }
if(opt==4){
goto label;
}}while(1);
break;
case 3:
do{
printf("\n\n1.Mango\n2.Apple\n3.Pine\n4.Other category\n\nEnter the Product No: ");
scanf("%d",&opt);
if(opt==1)     {
printf("How much kg you want:");
scanf("%f",&qf1);
f11+=qf1;
f1=140*f11;      }
if(opt==2)   {
printf("How much kg you want:");
scanf("%f",&qf2);
f22+=qf2;
f2=200*f22;   }
if(opt==3)    {
printf("How much kg you want:");
scanf("%f",&qf3);
f33+=qf3;
f3=50*f33;     }
if(opt==4){
goto label;
}
}while(1);
break;
case 4:

tot=v1+v2+v3+r1+r2+r3+f1+f2+f3;
tax=tot*0.1;
amt=tot+tax;
printf("\n----------------------------------------------");
printf("\n              MART BILL                       ");
printf("\n-----------------------------------------------");
printf("\n S.no    Product       Qty             Tot           ");
printf("\n------------------------------------------------");
if(v11>0){
printf("\n  1      Onion         %f         %f            ",v11,v1); }
if(v22>0){
printf("\n  2      Tomato        %f         %f            ",v22,v2);}
if(v33>0){
printf("\n  3      Brinjal       %f         %f            ",v33,v3); }
if(r11>0){
printf("\n  4      Rice          %f         %f            ",r11,r1);}
if(r22>0){
printf("\n  5      Toor dal      %f         %f            ",r22,r2); }
if(r33>0){
printf("\n  6      Urid dal      %f         %f            ",r33,r3);   }
if(f11>0){
printf("\n  7      Mango         %f         %f            ",f11,f1);}
if(f22>0){
printf("\n  8      Apple         %f         %f            ",f22,f2); }
if(f33>0){
printf("\n  9      Pine          %f         %f            ",f33,f3);  }
printf("\n-------------------------------------------------");
printf("\n         Total                    %f             ",tot);
printf("\n         GST                      %f             ",tax);
printf("\n===================================================");
printf("\n         Amount                   %f             ",amt);
printf("\n===================================================");
v1=v2=v3=r1=r2=r3=f1=f2=f3=0;
break;
case 5:exit(0);break;
default:printf("Enter correct choice");
}
} while(1);

getch();
}