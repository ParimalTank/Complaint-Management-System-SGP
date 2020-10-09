#include <iostream>
#include<istream>
#include<string>
#include<iomanip>
#include<bits/stdc++.h>

using namespace std;

int main()
{
int menu,D,M,Y,countfile=0;
char FN[50],LN[50],temp[100],wrt[1000],wrt2[1000];
long long int Mo;
string n,P,adminName, adminPassword;
int option;
fstream ID;
    ID.open("ID.txt",ios::app);
system("COLOR b0");
do
{
    system("cls");
cout<<"\n";
    cout<<"\t\t ===================================================================================\n";
cout<<"\t\t\t\t\t|   Complaint Management System  |\n";
cout<<"\t\t ===================================================================================\n\n\n";
    cout<<"\t\t\t\t\t\t|  1. Customer       |\t\t\t\t\n";
cout<<"\t\t\t\t\t\t|  2. Administrator  |\t\t\t\n";
cout<<"\t\t\t\t\t\t|  3. Dashboard      |\t\t\t\n";
cout<<"\t\t\t\t\t\t|  4. EXIT           |\t\t\t\t\n";
    cout<<"\n\n\t\tEnter Your Choice   :   ";
cin>>option;


 if(option==1)
 {

              do
                {
           system("cls");
                cout<<"\n";
           cout<<"\t\t ===================================================\n";
       cout<<"\t\t|  Complaint Management System  |\n";
       cout<<"\t\t ===================================================\n\n\n";
       cout<<"\t\t--------------------------------------------------\n";
                cout<<"\t\t||\t1. Create Complaint\t\t\t ||\n";
       cout<<"\t\t||\t2. View Complaint\t\t\t ||\n";
       cout<<"\t\t||\t3. Update Complaint      \t\t ||\n";
       cout<<"\t\t||\t4. Print the complaint \t\t\t ||\n";
                cout<<"\t\t||\t5. Cancel a Complaint \t\t\t ||\n";
       cout<<"\t\t||\t6. Complaint Dashboard \t\t\t ||\n";
       cout<<"\t\t||\t7. Logout\t\t\t\t ||\n";
       cout<<"\t\t--------------------------------------------------\n";
       cout<<"Enter choice: ";

       cin>>menu;


   if(menu==1)
   {
       string s,symbol="@";

                    cout<<"First Name     : ";
                    ID<<"\n\n\nFirst Name     : ";
                    cin>>FN;
                    ID<<FN<<endl;

                    cout<<"Last Name      : ";
                    ID<<"Last Name      : ";
                    cin>>LN;
                    ID<<LN<<endl;

                    cout<<"Mobile Number  : ";
                    ID<<"Mobile Number  : ";
                    cin>>Mo;
                    ID<<M<<endl;

                    cout<<"Enter Date Define as Belove !!!\n";
                    cout<<"Day : ";
                    ID<<"Day : ";
                    cin>>D;
                    ID<<D<<"   ";
                    cout<<"Month : ";
                    ID<<"Month : ";
                    cin>>M;
                    ID<<M<<"   ";
                    cout<<"Year : ";
                    ID<<"Year : ";
                    cin>>Y;
                    ID<<Y<<endl;

                    cout<<"Set Password   : ";
                    ID<<"Password : ";
                    cin>>P;
                    ID<<P<<endl;

                    strcpy(temp,FN);
                    n= temp + to_string(Mo);

                    cout<<"Your Complaint ID : "<<n<<endl;
                    ID<<"Complain ID  : ";
                    ID<<n<<endl;

                    cout<<"Write about your Complaint :     ";
                    cin.ignore();
                    //cin.get(wrt);
                    //ID<<wrt<<endl;
                    ++countfile;

   system("PAUSE");
   system("cls");


   }

   else if(menu==2)
   {
                string vID,pID;
                  cout<<"\n\nEnter Complaint ID : ";
                  cin>>vID;

                  if(vID==n){
                    cout<<"\nEnter Password : ";
                    cin>>pID;

                    if(pID==P){
                        cout<<"Complaint Description   :-   "<<endl;
                        cout<<wrt;
                    }
                  }
 system("PAUSE");

   }

   else if(menu==3)
   {

string vID3,pID3;
                  cout<<"\n\nEnter Complaint ID : ";
                  cin>>vID3;

                  if(vID3==n){
                    cout<<"\nEnter Password : ";
                    cin>>pID3;

                    if(pID3==P){
                        cout<<" Now You Can Update a Complaint....."<<endl;
                        cin>>wrt2;
                        strcat(wrt,wrt2);
                        ID<<wrt;
                    }
                    else{
                        cout<<"Invalid Complaint Password.....\n";
                    }
                  }
                  else{
                    cout<<"Invalid Complaint ID.....\n";
                  }
 system("PAUSE");


   }
   else if(menu==4)
   {
        cout<<"\n\n\n\t\t\t\t\t  Complaint Management System\n\n";
                     cout<<"\t\tFirst Name : Darshan\n\t\tLast Name : Tarsariya";
                     cout<<"\n\t\tMobile Number : 9874563210\t\t\t\t\t\tDate : 12/05/2020\n\t\tComplaint ID : Darshan9874563210\n";
                     cout<<"\n\t\t\t Complaint Description\n";

                     system("PAUSE");

   }
   else if(menu==5)
   {


system("PAUSE");

   }
   else if(menu==6)
                {
                cout<<"View Dashboard Coming Soon\n\n";
                system ("PAUSE");
                }
           else if(menu==7)
   {
cout<<"You are Logged Out...!\n\n\n\n";

break;

   }




      }while(menu!=7);
 }
      else if(option==2)
      {

                system("cls");
                cout<<"\n";

              cout<<"\t\t----------------------------------------------------\n";
           cout<<"\t\t\t  Administrator    \n";
           cout<<"\t\t----------------------------------------------------\n\n";
                cout << "\n\t\tPlease enter your user name: ";
           cin >> adminName;
                cout << "\n\t\tPlease enter your user password: ";
           cin >> adminPassword;

           if (adminName == "admin" && adminPassword == "abcd")
           {
           do
                {
           system("cls");
                cout<<"\n";
           cout<<"\t\t ===================================================\n";
       cout<<"\t\t|  Complaint Management System  |\n";
       cout<<"\t\t ===================================================\n\n\n";
       cout<<"\t\t--------------------------------------------------\n";

       cout<<"\t\t||\t1. View Complaint\t\t\t ||\n";
       cout<<"\t\t||\t2. Update Complaint Status \t\t ||\n";
       cout<<"\t\t||\t3. Print the complaint \t\t\t ||\n";
       cout<<"\t\t||\t4. Logout\t\t\t\t ||\n";
       cout<<"\t\t--------------------------------------------------\n";
       cout<<"Enter choice: ";

       cin>>menu;


   if(menu==1)
   {

        string vID2,pID2;

                  cout<<"\n\nEnter Complaint ID : ";
                  cin>>vID2;

                  if(vID2==n){
                    cout<<"\nEnter Password : ";
                    cin>>pID2;

                    if(pID2==P){
                        cout<<"Complaint Description   :-   "<<endl;
                        cout<<wrt;
                    }
                  }
 system("PAUSE");


 system("PAUSE");
 system("cls");

   }

   else if(menu==2)
   {

 system("PAUSE");

   }

   else if(menu==3)
   {
                     cout<<"\n\n\n\t\t\t\t\t  Complaint Management System\n\n";
                     cout<<"\t\tFirst Name : Darshan\n\t\tLast Name : Tarsariya";
                     cout<<"\n\t\tMobile Number : 9874563210\t\t\t\t\t\tDate : 12/05/2020\n\t\tComplaint ID : Darshan9874563210\n";
                     cout<<"\n\t\t\t Complaint Description\n";

                     system("PAUSE");
   }

           else if(menu==4)
   {
cout<<"You are Logged Out...!\n\n\n\n";
                }
                else{
                    cout<<"Invalid Input Please Try again.....\n\n";
                    system("PAUSE");
                }



      }while(menu!=4);
      cout<<"Thank you"<<endl;
      system ("PAUSE");
      }

      else
      {
           cout << "\n\n\t\tInvalid login attempt. Please try again.\n";
           system("PAUSE");
           system ("cls");



           }

      }
      else if(option==3)
      {
         cout<<"\t\t ===================================================\n";
         cout<<"\t\t|  Complaint Management System - Dashboard|\n";
         cout<<"\t\t ===================================================\n\n\n";
      }
       else if(option==4)
      {

      }


    } while(option!=4);
     ID.close();
    cout<<"thank you"<<endl;


}
