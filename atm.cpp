#include<iostream>
#include<conio.h>
#include<stdio.h>
#include<fstream>
#include<windows.h>
using namespace std;
class bank
{
private:
    int pin;
    float balance;
    string id,pass,name,fname,address,phone;
    public:
      void menu();
      void bank_management();
      void atm_management();
      void new_user();
};
void bank::menu()
{
    p:
    system("cls");//screen clear
    int choice;
    char ch;
    string pin,pass,email;
    cout<<"\n\n\n\t\t\t ***  WEL COME TO PNB BANK *** ";
    cout<<"\n\n 1. Bank Management";
    cout<<"\n\n 2. ATM management";
    cout<<"\n\n 3. Exit";
    cout<<"\n\n\n  Enter your choice ===>> ";
    cin>>choice;
    switch(choice)
    {
   case 1:
       cout<<"\n\n\t\t login Account";
       cout<<"\n\n E-mail ===>> ";
       cin>>email;
       cout<<"\n\n Pin-code ===>> ";
       for(int i=1;i<=4;i++)
       {
           ch = getch();
           pin += ch;
           cout<<"*";
       }
       cout<<"\n\n Password ===>> ";
       for(int i=1;i<=4;i++)
       {
           ch = getch();
           pass += ch;
           cout<<"*";
       }

       if(email == "rak97638@gmail.com" && pin == "8294" && pass == "9065")
       {
        bank_management();
       }
       else
       {
           cout<<"\n\n Your email,Pin & Password is wrong...";



       }
      break;
   case 2:
         atm_management();
         break;
   case 3:
        exit(0);// break;
   default:
         cout<<"\n\n\n Invalid number ... please try again";
    }
    getch();
    goto p;

}
 void bank::bank_management()
 {
     p:
     system("cls");
     int choice;
     cout<<"\n\n\t\t\t\t\t     [ BANK  Management System ] ";
     cout<<"\n\n     1. NEW User";
     cout<<"\n\n    2. Already User";
     cout<<"\n\n    3. Deposit Option";
     cout<<"\n\n    4. Withdraw Option";
     cout<<"\n\n    5. Transfer Option";
     cout<<"\n\n    6. Payment Option";
     cout<<"\n\n    7. Search User Record";
     cout<<"\n\n    8. Edit User Record";
     cout<<"\n\n    9. Delete User Record";
     cout<<"\n\n    10. Show All Record ";
     cout<<"\n\n    11. Payment All Record";
     cout<<"\n\n    12. Go Back";
     cout<<"\n\n Enter your Choice ==> ";
     cin>>choice;
     switch(choice)
     {
     case 1:
         new_user();
        break;
     case 2:
        break;
     case 3:
        break;
    case 4:
        break;
    case 5:
        break;
     case 6:
        break;
    case 7:
        break;
     case 8:
        break;
     case 9:
        break;
     case 10:
         break;
     case 11:
        break;
     case 12:
        menu();
     default:
        cout<<"\n\n invalid  value ...please try again ";


     }
     getch();
     goto p;

 }
 void bank::atm_management()
 {
     p:
     system("cls");
     int choice;
     cout<<"\n\n\t\t\t  ATM Management System";
     cout<<"\n\n 1.User Login & Check Balance";
     cout<<"\n   2. Withdraw Amount";
     cout<<"\n   3. Account detail";
     cout<<"\n   4. Go Back";
     cout<<"\n\n Enter your Choice==> ";
     cin>>choice;
     switch(choice)
     {
     case 1:
        break;
     case 2:
        break;
     case 3:
        break;
     case 4:
        menu();
     default:
        cout<<"\n\n invalid  value ...please try again ";


     }
     getch();
     goto p;
}
void bank::new_user()
{
   p:
   system("cls");
   fstream file;
   int p;
   float b;
   string n,f,pa,a,ph,i;
   cout<<"\n\n\t\t\t\t\t\t  Add New User Details  ";
   cout<<"\n\n\n  User ID ==> ";
   cin>>id;
   cout<<"\n\n Name ==> ";
   cin>>name;
   cout<<"\n\n  Father Name ==> ";
   cin>>fname;
   cout<<"\n\n address==> ";
   cin>>address;
   cout<<"\n\n  Pin- code ==> ";
   cin>>pin;
   cout<<"\n\n  password==> ";
   cin>>pass;
   cout<<"\n\n  Phone number ==> ";
   cin>>phone;
   cout<<"\n\n  current balance ==> ";
   cin>>balance;
   file.open("bank.text",ios::in);
   if(!file)
   {
     file.open("bank.text",ios::app|ios::out);
      file<<" "<<id<<" "<<name<<" "<<fname<<" "<<address<<" "<<pin<<" "<<pass<<" "<<phone<<" "<<balance<<"\n";
     file.close();
}
else
{
   file>>i>>n>>f>>a>>p>>pa>>ph>>b;
   while(!file.eof())
   {
      if(i == id)
      {
         cout<<"\n\n User ID already Exit ....";
         getch();
         goto p;
      }
       file>>i>>n>>f>>a>>p>>pa>>ph>>b;
   }
   file.close();
   file.open("bank.text",ios::app|ios::out);
      file<<" "<<id<<" "<<name<<" "<<fname<<" "<<address<<" "<<pin<<" "<<pass<<" "<<phone<<" "<<balance<<"\n";
     file.close();
     }
     cout<<"\n\n \t\t\t\t Add new user account created successfully.... ";
}
main()
{
    bank obj;
    obj.menu();

}
