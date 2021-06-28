#include<iostream.h>
#include<conio.h>
int main()
{
clrscr();
int age;
cout<<"Enter the age of the user: ";
cin>>age;
(age>=18)?cout<<"User is eligible to vote":cout<<"User is not eligible to vote";
getch();
return 0;
}