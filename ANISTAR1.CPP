	     //face book //
#include<iostream.h>
#include<conio.h>
#include<process.h>
#include<iomanip.h>
#include<graphics.h>
#include<dos.h>
#include<stdio.h>
#include<string.h>
void profile();
void login();
char ei[25],pw[10];
void song();
struct dob{int d,m,y;};
struct ad{char city[10],state[10],area[10];};
class user{ private:dob D;
	   ad Q;
	   char password[10] ,emailadd[25]          ;
public:char fn[10],ln[10],s,status[10],about[50],pv[50],rv[50], ac[50],m[50],b[50];
int check(void)
{int a,b;

for(int i=0;i<10;i++)
{if (password[i]==pw[i]) ;
else {a=1;
     break;}
 if(i==7)
 return a=0;
 }
 for( i=0;i<25;i++)
{if (emailadd[i]==ei[i]) ;
else {b=1;
     break;}
 if(i==24)
  b=0;
 }
  return (a+b);}
	   void d1  ()
{clrscr();
cout<<"enter first name\n";
gets(fn)  ;
cout<<"enter last name\n";
gets (ln);
cout<<"enter email address\n";
gets(emailadd);
cout<<"enter password\n";
for( int i=0;i<10;++i)
{ password[i]=getch();
  if(password[i]==8)
  {if(i==0)
  {--i;
   gotoxy(i+2,8);
   clreol();
   continue;
 } --i;
  --i;
     gotoxy(i+2,8);
   clreol();
   continue ;
  }
   if(password[i]==9||password[i]==13)
   break;
    cout<<"*";
  }
cout<<"\nenter sex(m/f)\n";
cin>>s;
cout<<"enter date of birth\n"<<"day\n";
cin>>D.d;
cout<<"\nmonth\n";
cin>>D.m;
cout<<"\nyear\n" ;
cin>>D.y;
date_check(D.d,D.m,D.y);
clrscr();
cout<<"enter address\n"<<"city\n";
gets(Q.city);
cout<<"state\n";
gets(Q.state);
cout<<"area\n" ;
gets(Q.area);
clrscr();
cout<<" what's your relationship status\n"<<"1.married\n2.single\n3.commited\n";
gets(status);
clrscr();
cout<<"your political views\n";
gets(pv);
cout<<"your religious views \n";
gets(rv);
cout<<"your activities\n";
gets(ac);
cout<<"tell something about yourself(100 words) \n";
gets(about);
cout<<"music\n";
gets(m);
cout<<"books\n";
gets(b);
cout<<"\n ACCOUNT CREATED SUCESSFULLY";
delay(2000);
}
;}A;
void d2();
void home();
void main()
 {
static  int c2=0;
  clrscr();
song();
textcolor(4);
textbackground(9);
home();
if (c2==0)
{cin>>c2;
if(c2==1||c2==2||c2==3)
{if (c2==1)
{A.d1();
 main();
}if (c2==2)
d2();
if (c2==3)
exit(0);}
else {cout<<setw(30)<<"wrong input";
       delay(1000);
       main();}
     getch();
}}
void home()
{clrscr();
for(int i=15;i<66;i++)
{
int j=10;
gotoxy(i,j);
cout<<"*";
delay(10);}
for(int j=10;j<51;j++)
{ i=15;
gotoxy(i,j);
cout<<"*";
delay(10);}
for(i=15;i<66;i++)
{
j=66;
gotoxy(i,j);
cout<<"*";
delay(10);}
  for( j=10;j<51;j++)
{
int i=66;
gotoxy(i,j);
cout<<"*";
delay(10);}
gotoxy(30,12);
cout<<"WELCOME TO FACEBOOK";
gotoxy(22,13);
cout<<" An Aniruddh & Aseem Group network";
gotoxy(22,16);
cout<<"What do you want to do???";
gotoxy(22,19);
cout<<"1. CREATE ACCOUNT";
gotoxy(22,21);
cout<<"2.LOG-IN YOUR ACCOUNT";
gotoxy(22,23);
cout<<"3.EXIT";
gotoxy(22,44);
cout<<" project compiled by ANIRUDDH & ASEEM";
gotoxy(30,45);
cout<<"all rights reserved";
gotoxy(22,28);
cout<<"enter your choice- ";
gotoxy(41,28);
}
void d2()
{int c1=0;
clrscr();
cout<<"emailid\n";
gets(ei);
cout<<"password\n";
gets(pw) ;
cout<<"1.login\n2.homepage\n3.exit\n";
if(c1==0)
{cin>>c1;
switch (c1)
{case 1:if(A.check()==0)
	{delay(5000);
	login();
	break;}else {cout<<"wrong email or password";
	     delay(1000);
	     d2();
	break ; }
case 2:main();
       break ;
case 3:exit(0); }
getch();}}
void song()
{sound(880);
 delay(500);
  sound(880);
 delay(500);
 sound(1318) ;
 delay(500);
 sound(1318) ;
 delay(500);
 sound(1479);
 delay(500);
 sound(1479);
 delay(500);
 sound(1318);
 delay(1000);
 sound(1174);
 sound(1174);
 delay(1000);
  sound(1108);
 delay(1000);
  sound(988) ;
 delay(1000);
 sound(880);
 delay(1000);
 nosound();
 }
 void login(char fn,char ln,char s,char status, char about,char pv,char rv,char ac,char m,char b)
 { clrscr();

  cout<<"welcome  "<<fn<<"  "<<ln;
 cout<<"\n your profile is displayed below\n";
 cout<<"first name: "<<fn;
 cout<<"\nlast name: "<<ln;
 cout<<"\nsex: "<<s;
 cout<<"status: "<<status;
 cout<<"\npersonal views:\n"<<about;
 cout<<"\npolitical views:\n"<<pv;
 cout<<"\nreligious views:\n"<<rv;
 cout<<"\nactivites:\n"<<ac;
 cout<<"\nmusic:\n"<<m;
 cout<<"\nbooks:\n"<<b;
 }
 void date_check(int x,int y,int z)
{
if(y>=1&&y<=12)
{ if(y=1||y=3||y=5||y=7||y=8||y=10||y=12)
{  if(x>=1&&x<=31)
  {
  cout<"entered date is correct";
   delay(900);
   }
}
  else
  cout<<"enterded date does not exist!!";
  }
  else if(y=4||y=6||y=9||y=11)
  { if(x>=1&&x<=30)
   {cout<<"entered date is correct";
    delay(900);
    }
    else cout<<"entered date dose not exist!!";
    }
    else if(z%4==0)
    {if(y==2)
    {if(x>=1&&x<=29)
      { cout<<"entered date is correct";
	 delay(900);
	 }
	 else
	 cout<<"entered date does not exist";
     }
    }
	 else if(y==2)
	 {if(x>=1&&x<=28)
	  { cout<<"the entered date is correct!!";
	     delay(900);
	    }
	    else
	    cout<<"entered date is incorrect!!";
	    }
	 }