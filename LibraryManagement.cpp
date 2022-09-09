#include<iostream>
#include<string.h>
#include<stdlib.h>

using namespace std;

class Library
{
    public:
       int id;
       char name[100];
       char author[100];
       char student[100];
       char Sid[50];
       char Sbr[50];
       float price;
       
};

int main()
{
    Library lib[20];
    int input=0;
    int count=0;
    while(input!=3){
        cout<<"\t\t\t  |_____________________________________| \n";
        cout<<"\t\t\t  | Press 1. To Enter Student Details:  | "<<endl;
        cout<<"\t\t\t  | Press 2. To Show Details:           | "<<endl;
        cout<<"\t\t\t  | Press 3. To Exit:                   | "<<endl;
        cout<<"\t\t\t  |_____________________________________| "<<endl;
        cout<<"\t\t\t  |                                     | "<<endl;
        cout<<"\n\t\t\t\t Select Your Choice:- ";
        cin>>input;
        switch(input){
            case 1:{
            
            cout<<"\n\t\tEnter Book Id: ";
            cin>>lib[count].id;
            cout<<"\n\t\tEnter Book Name: ";
            cin>>lib[count].name;
            cout<<"\n\t\tEnter Book Author Name: ";
            cin>>lib[count].author;
            cout<<"\n\t\tEnter Student Name: ";
            cin>>lib[count].student;
            cout<<"\n\t\tEnter Student Id: ";
            cin>>lib[count].Sid;
            cout<<"\n\t\tEnter Student Course: ";
            cin>>lib[count].Sbr;
            cout<<"\n\t\tEnter  Book Price: ";
            cin>>lib[count].price;
            
            count++;
            break;
            
          }
          case 2:
          {
            for(int i=0;i<count;i++){
                cout<<"\n\tBook Id: "<<lib[i].id;
                cout<<"\n\n\tBook Name: "<<lib[i].name;
                cout<<"\n\n\tAuthor Name: "<<lib[i].author;
                cout<<"\n\n\tStudent Name: "<<lib[i].student;
                cout<<"\n\n\tStudent Id: "<<lib[i].Sid;
                cout<<"\n\n\tStudent Course: "<<lib[i].Sbr;
                cout<<"\n\n\tBook Price: "<<lib[i].price<<endl<<"\n\n";
            }
            break;
          }
          case 3:
          {
            exit(0);
            break;
          }
          default:
          {
            cout<<"\n Invalid Input!";
            cout<<"\n Please Select The Valid Choice!\n\n";
            main();
          }
        }
    }
}