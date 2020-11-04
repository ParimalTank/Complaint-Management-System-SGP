#include <iostream>
#include <stdlib.h>
#include <string>
#include <cctype>
#include <fstream>

using namespace std;

string Store;
int TotalComplaint=0;
int solve=0;
int pend=0;
int inpro=0;
int can=0;

class complaint
{
public:
void customer_StoreComplaint();
void admin_menu();
    void create_complaint();
    void cancel_complaint();
    void dashboard();
    void update_complaint ();
    void update_status();
void print_complaint();
void view_complaint();
void exit();

complaint();

};

 complaint::complaint ()
{

}


struct node
{
long long int complaint_number;
string customerName;
string date;
string x;

node *prev;
node *next;
node *link;

}*q, *temp;


node *start_ptr = NULL;
node *head = NULL;
node *last = NULL;

int main()
{
complaint admin;
system("COLOR b0");
int option,menu;

do
{
   system("cls");
cout<<"\n";
    cout<<"\t\t ***********************************************************************************\n";
cout<<"\t\t\t\t\t|   Complaint Management System  |\n";
cout<<"\t\t ***********************************************************************************\n\n\n";
    cout<<"\t\t\t\t\t\t||  1. Customer       ||\t\t\t\t\n";
cout<<"\t\t\t\t\t\t||  2. Administrator  ||\t\t\t\n";
cout<<"\t\t\t\t\t\t||  3. Dashboard      ||\t\t\t\n";
cout<<"\t\t\t\t\t\t||  4. EXIT           ||\t\t\t\t\n";

    cout<<"\n\n\t\tEnter Your Choice   :   ";
cin>>option;
switch(option)
{
case 1:
admin.customer_StoreComplaint();
break;

case 2:
admin.admin_menu();
break;

        case 3:
            admin.dashboard();
            break;

case 4:
admin.exit();
goto a;
break;
}

}while(option!=4);
a:

system ("PAUSE");

}

void complaint::customer_StoreComplaint()
{
    int menu;

    system("cls");

    cout<<"\n";
    cout<<"\t\t ***********************************************************************************\n";
    cout<<"\t\t\t\t\t|   Complaint Management System  |\n";
    cout<<"\t\t ***********************************************************************************\n\n\n";
    cout<<"\t\t**********  | Customer |  **********\n\n\n";
    cout<<"\t\t||\t1. Create Complaint\t ||\n";
    cout<<"\t\t||\t2. Update Complaint      ||\n";
    cout<<"\t\t||\t3. Print the complaint \t ||\n";
    cout<<"\t\t||\t4. Cancel a Complaint \t ||\n";
    cout<<"\t\t||\t5. Exit\t\t\t ||\n";

    cout<<"Enter choice: ";
    cin>>menu;

    if(menu==1)
    {
      create_complaint();


    }

    else if(menu==2)
    {
        update_complaint();
        system("PAUSE");

    }

    else if(menu==3)
    {
        print_complaint();

    }

    else if(menu==4)
    {
        cancel_complaint();
        system("PAUSE");

    }

    else if(menu==5)
    {

    }
}


void complaint::admin_menu()
{
complaint admin;
int menu;
string userName, userPassword;

system("cls");
cout<<"\n";
    cout<<"\t\t ***********************************************************************************\n";
    cout<<"\t\t\t\t\t|   Complaint Management System  |\n";
    cout<<"\t\t ***********************************************************************************\n\n\n";

    cout<<"\t\t\t  Administrator / Staff Login      \n\n";
    cout << "\n\n\t\tAdmin Name: ";
    cin >> userName;
    cout << "\n\n\t\tAdmin Password: ";
    cin >> userPassword;

    if (userName == "admin" && userPassword == "admin")
    {
        do
   {
        system("cls");
        cout<<"\n";
            cout<<"\t\t ***********************************************************************************\n";
            cout<<"\t\t\t\t\t|   Complaint Management System  |\n";
            cout<<"\t\t ***********************************************************************************\n\n\n";
            cout<<"\t\t**********  | Administrator |  **********\n\n\n";
   cout<<"\t\t||\t1. View Complaint\t    ||\n";
            cout<<"\t\t||\t2. Update Complaint Status  ||\n";
            cout<<"\t\t||\t3. Print Complaint \t    ||\n";
            cout<<"\t\t||\t4. Cancel Complaint \t    ||\n";
            cout<<"\t\t||\t5. Exit\t\t\t    ||\n";

            cout<<"Enter choice: ";
   cin>>menu;

switch (menu)
{
case 1:
{
admin.view_complaint();
system("PAUSE");
break;
}


case 2:
{
admin.update_status();
system("PAUSE");
break;
}

case 3:
{
admin.print_complaint();
system("PAUSE");
break;
}
case 4:
            {
                admin.cancel_complaint();
                system("PAUSE");
                break;

            }

case 5:
{
admin.exit();
break;
}


}

}while(menu!=5);


}

else
{
           cout << "\n\n\t\tInvalid login attempt. Please try again.\n" << '\n';
           system("PAUSE");
           system ("cls");
           admin.admin_menu();


    }
}

void complaint::create_complaint()
{

node *temp;
temp = new node;
cout<< "Enter Customer Name: ";
cin.ignore();
getline(cin, temp->customerName);
cout << "Enter Mobile Number : ";
    cin >> temp->complaint_number;

cout<<"Enter Date : ";
cin>>temp->date;
cout << "Complaint Description : ";

cin.ignore();
getline(cin, temp->x);
    Store=temp->x;
    cout << "Complaint added Successfully"<<endl;
     ++TotalComplaint;
    system ("PAUSE");

    temp->next=NULL;
if(start_ptr!=NULL)
{
temp->next=start_ptr;
}
start_ptr=temp;
system("cls");
}


void complaint::view_complaint()
{
int num;
bool found;

node *temp;

temp=start_ptr;
found = false;
cout<<" Enter the Your Mobile Number : ";
cin>>num;
cout<<"\n";

cout <<"\t\t**********  Here is the Complaint List  **********\n";

if(temp == NULL)
{
cout << "\tNo Complaint to show.....\tThe List is Empty\n\n\n";
}
while(temp !=NULL && !found)
{
if (temp->complaint_number==num)
{
found = true;
}
else
{
temp = temp -> next;
}
        if (found)
        {
cout <<"Mobile Number : "<<temp->complaint_number;

cout<<"Customer Name: "<<temp->customerName<<endl;

cout<<"Complain Date : "<<temp->date<<endl;


cout<<"**********  |  Complaint description  |  **********"<<endl;

cout<<temp->x;

cout <<"\n";

}


}
}


void complaint::cancel_complaint()
{

int num, count;
cout<<"Enter the Mobile Number  :  \n";
    cin>>num;
    node *q;
node *temp;
bool found;

if(start_ptr == NULL)
cerr<<".....Empty list.....\n";
else
{
if(start_ptr->complaint_number == num)
{
q = start_ptr;
start_ptr = start_ptr->next;
count--;
if(start_ptr == NULL)
last = NULL;
delete q;
cout<<"The Complaint is Cancelled Successfully"<<endl;
++can;
}
else
{
found = false;
temp = start_ptr;
q = start_ptr->next;

while((!found) && (q != NULL))
{
  if(q->complaint_number != num)
{
temp = q;
q = q-> next;
}
else
found = true;
}

if(found)
{
temp->next = q->next;
count--;

if(last == q)
last = temp;
delete q;
cout<<"The Complaint is Cancelled Successfully"<<endl;
}
else
cout<<"Complaint to be Cancelled is not in the list."<<endl;
}
}
}

void complaint::update_complaint()
{

 int sid;
 bool found;
 found = false;
 temp = start_ptr;
 cout<<"Enter Mobile Number  :  ";
 cin>>sid;
 if (temp==NULL && sid==0)
 {
    cout<<"No Complaint To Update..!"<<endl;
 }

 else
 {
  while(temp !=NULL && !found)
{
if (temp->complaint_number==sid)
{
found = true;
}
else
{
temp = temp -> next;
}
    if (found)
    {
cout<<"*Note: If No any Change In Mobile Number,Name,Date. So Write in a Previous Which you Entered in a First Time.    Thank You :)"<<endl;
cout << "Update Mobile Number  :  ";
cin >> temp->complaint_number;
cout<< "Update Customer Name: ";
cin.ignore();
getline(cin, temp->customerName);
cout<<"Update Date : ";
cin>>temp->date;
cout << "********** |  Complaint Description  | **********"<< endl;

cout << "       " ;
cin.ignore();
getline(cin, temp->x);

system("PAUSE");
temp = temp->next;


}

 cout<<"Complaint Updated.........!\n\n"<<endl;
 }

  if(temp != NULL && temp->complaint_number != sid)
  {
  cout<<"Invalid Mobile Number...!\n\n"<<endl;
    }

}

}

void complaint::print_complaint()
{
int num;
bool found;

ofstream outputFile;
outputFile.open("List.txt",ios::app);
node *temp;

temp=start_ptr;
found = false;
  outputFile<<"\n";
  cout<<" Enter the Mobile Number  :  ";
cin>>num;
cout<<"\n";

cout <<"\n\n\t\t***********************   Here is the Complaint list   *****************************\n";



if(temp == NULL)
{
cout << "\tThere is no Complaint to show...\tSo The List is Empty\n\n\n";
system("PAUSE");
}
while(temp !=NULL && !found)
{
if (temp->complaint_number==num)
{
found = true;
}
else
{
temp = temp -> next;
}
        if (found)
        {
cout <<"Mobile Number : "<<temp->complaint_number;
outputFile << "Mobile Number : "<<temp->complaint_number << endl;
cout <<"\n";
cout<<"Customer Name: "<<temp->customerName<<endl;
outputFile << "Customer Name: "<<temp->customerName<<endl;
cout<<"Complaint Date : "<<temp->date<<endl;
outputFile << "Complaint Date : "<<temp->date<<endl;
cout<<"**********   Complaint description   **********\n"<<endl;
outputFile << "**********   Complaint description   **********\n"<<endl;

cout<<Store<<endl;
cout<< temp->x;


outputFile << temp->x<<endl;
cout <<"\n";

temp=temp->next;

}
outputFile.close();
cout << "Complaint Printed Succesfully....!\n";
system("PAUSE");


}
}

void complaint::exit()
{

}

void complaint::update_status()
{
     int num,press;
            bool found;
            node *temp;
            temp=start_ptr;
       found = false;
       cout<<" Enter the Your Mobile Number : ";
       cin>>num;
       cout<<"\n";

            if(temp == NULL)
       {
         cout << "\tNo Complaint to Change Status.....\n\n\n";
       }
       while(temp !=NULL && !found)
            {
                if (temp->complaint_number==num)
       {
                    found = true;
       }
       else
       {
       temp = temp -> next;
   }
            if (found)
            {

                cout<<"\n\n";
                cout<<"**********  | Available Input for Change status |  **********\n\n";
                cout<<"\t\t\tFor Solved       --->   Press 1\n";
                cout<<"\t\t\tFor Pending      --->   Press 2\n";
                cout<<"\t\t\tFor In Progress  --->   Press 3\n";
                cout<<"\n\n\t\t\tEnter Your Choice  :  ";
                cin>>press;

                if(press==1)
                {
                    ++solve;
                    cout<<"Status change into the Dashboard for Complaint Solved..... :)\n\n";

                }
                else if(press==2)
                {
                    ++pend;
                    cout<<"Status change into the Dashboard for Complaint Pending..... :)\n\n";
                }
                else if(press==3)
                {
                    ++inpro;
                     cout<<"Status change into the Dashboard for Complaint In progress..... :)\n\n";
                }
            }
            }



}

void complaint::dashboard()
{
    cout<<"\t\t\t\t\t_________________________\n\n";
    cout<<"\t\t\t\t\t| Total Complaint - "<<TotalComplaint<<" |\n";
    cout<<"\t\t\t\t\t_________________________\n\n\n\n";
    cout<<"\t\t\t|  Complaint   \t|\tNumber \t|\tPerformance \t|\n";
    cout<<"\t\t\t_________________________________________________________\n\n";
    cout<<"\t\t\t|  Solved      \t|\t"<<solve<<"    \t|\t"<<(solve*100)/TotalComplaint<<"%      \t|\n";
    cout<<"\t\t\t|  In Progress \t|\t"<<inpro<<"     \t|\t"<<(inpro*100)/TotalComplaint<<"%      \t|\n";
    cout<<"\t\t\t|  Pending     \t|\t"<<pend<<"     \t|\t"<<(pend*100)/TotalComplaint<<"%       \t|\n";
    cout<<"\t\t\t|  Cancel      \t|\t"<<can<<"     \t|\t"<<(can*100)/TotalComplaint<<"%      \t|\n\n\n\n";

    system("PAUSE");
}
