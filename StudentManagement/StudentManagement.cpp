#include<iostream>
#include<fstream>
#include<stdlib.h>
#include<cstdlib>
#include<conio.h>

using namespace std;
class student
{
	private:
		string name, roll_no,course, address, email_id, contact_no;
	public:
		void menu();
		void insert();
		void display();
		void modify();
		void search();
		void deleted();
};
void student::menu()
{
	menustart:
	int choice;
	char x;
	system("cls");
	cout<<"\t\t\t -------------------------"<<endl;
	cout<<"\t\t\t|STUDENT MANAGEMENT SYSTEM|"<<endl;
	cout<<"\t\t\t -------------------------"<<endl;
	cout<<"\t\t\t 1. Enter new record "<<endl;
	cout<<"\t\t\t 2. Display record "<<endl;
	cout<<"\t\t\t 3. Modify new record "<<endl;
	cout<<"\t\t\t 4. Serach record "<<endl;
	cout<<"\t\t\t 5. Delete record "<<endl;
	cout<<"\t\t\t 6. Exit "<<endl;
	
	
	cout<<"\t\t\t -------------------------"<<endl;
	cout<<"\t\t\tChoose option[1,2,3,4,5,6]"<<endl;
	cout<<"\t\t\t -------------------------"<<endl;
	cout<<"Enter the choice"<<endl;
	cin>>choice;
	
	switch(choice)
	{
	case 1:
		do{
			insert();
		    cout<<"\n\t\t\t Add Another Student Record (Y,N):";	
		    cin>>x;
		}
		while(x=='y' || x=='Y');
		break;
	case 2:
		display();
		break;
	case 3:
		modify();
		break;
	case 4:
		search();
		break;
	case 5:
		deleted();
		break;
	case 6:
	  exit(0);
	  	
	default:
		cout<<"\n\t\t\t Invalid choice.. Please try again..";
		break;
	}
	getch();
	goto menustart;
}
void student::insert()
{
	system("cls");
	fstream file;
	cout<<"\n--------------------------------------------------------------------------------";
	cout<<"\n-------------------------------Add student Details------------------------------";
	cout<<"\t\t\tEnter Name:";
	cin>>name;
	cout<<"\t\t\tEnter roll number:";
	cin>>roll_no;
	cout<<"\t\t\tEnter course:";
	cin>>course;
	cout<<"\t\t\tEnter address:";
	cin>>address;	
	cout<<"\t\t\tEnter email_id:";
	cin>>email_id;	
	cout<<"\t\t\tEnter contact number:";
	cin>>contact_no;
	
	file.open("StudentManagement.txt", ios::app | ios::out);
	file<<" "<<name<<" "<<roll_no<<" "<<course<<" "<<address<<" "<<email_id<<" "<<contact_no<<"\n";
	file.close();
}
void student::display(){
	system("cls");
	fstream file;
	int total = 0;
	cout<<"\n--------------------------------------------------------------------------------"<<endl;
	cout<<"\n------------------------------Student Record Table------------------------------"<<endl;
	file.open("StudentManagement.txt", ios::in);
	if(!file){
		cout<<"\n\t\t\t No Data is Present..";
		file.close();
	}
	else
	{
		file>>name>>roll_no>>course>>address>>contact_no;
		while(!file.eof())
		{
		  cout<<"\t\t\t Student No"<<total++<<endl;
		  cout<<"\t\t\t Student Name"<<name<<endl;	
		  cout<<"\t\t\t Student Course"<<course<<endl;	
		  cout<<"\t\t\t Student Address"<<address<<endl;	
		  cout<<"\t\t\t Student Email"<<email_id<<endl;	
		  cout<<"\t\t\t Student Contact No"<<contact_no<<endl;
		  file<<name<<roll_no<<course<<address<<contact_no;		
		}
		if(total==0){
			cout<<"\n\t\t\t No Data is Present..";
		}
	}
	file.close();
}
void student::modify(){
	system("cls");
	fstream file,file1;
	string rollno;
	int found=0;
	cout<<"\n--------------------------------------------------------------------------------"<<endl;
	cout<<"\n------------------------------Student Modify Table------------------------------"<<endl;
	file.open("studentRecord.txt", ios::in);
	if(!file){
		cout<<"\n\t\t\t No Data is Present..";
		file.close();
	}
	else{
		cout<<"\n Enter roll no of student you want to modify: ";
		cin>>rollno;
		file1.open("Record.txt", ios::app | ios::out);
		file>>name>>roll_no>>course>>address>>contact_no;
		while(!file.eof())
		{
			if(rollno != rollno)
			{
				file1<<" "<<name<<" "<<roll_no<<" "<<course<<" "<<address<<" "<<email_id<<" "<<contact_no<<"\n";
	
			}
			else
			{
				cout<<"\n\t\t\tEnter Name:";
	            cin>>name;
	            cout<<"\n\t\t\tEnter roll number:";
	            cin>>roll_no;
	            cout<<"\n\t\t\tEnter course:";
	            cin>>course;
	            cout<<"\n\t\t\tEnter address:";
	            cin>>address;	
	            cout<<"\n\t\t\tEnter email_id:";
	            cin>>email_id;	
	            cout<<"\n\t\t\tEnter contact number:";
	            cin>>contact_no;
	            
	            file1<<" "<<name<<" "<<roll_no<<" "<<course<<" "<<address<<" "<<email_id<<" "<<contact_no<<"\n";
	            found++;
			}
			file>>name>>roll_no>>course>>address>>contact_no;
			if(found== 0)
			{
				cout<<"\n\t\t\t Student roll no not found.. ";
				
			}
		}
		file1.close();
		file.close();
		remove("studentRecord.txt");
		rename("Record.text","studentRecord.txt");
	}
}
void student::search() // search data of student
{
    system("cls");
    fstream file;
    int found = 0;
    file.open("studentRecord.txt", ios::in);
    if (!file)
    {
        cout << "\n-------------------------------------------------------------------------------------------------------" << endl;
        cout << "------------------------------------- Student Search Data ------------------------------------------" << endl;
        cout << "\n\t\t\t No Data Is Present...";
    }
    else
    {
        string rollno;
        cout << "\n-------------------------------------------------------------------------------------------------------" << endl;
        cout << "------------------------------------- Student Search Data ------------------------------------------" << endl;
        cout << "\n Enter Roll No. of Student Which You Want to Search: ";
        cin >> rollno;
        file >> name >> roll_no >> course >> email_id >> contact_no >> address;
        while (!file.eof())
        {
            if (rollno == roll_no)
            {
                cout << "\n\t\t\t Student Name: " << name << endl;
                cout << "\t\t\t Student Roll No.: " << roll_no << endl;
                cout << "\t\t\t Student course: " << course << endl;
                cout << "\t\t\t Student Email Id.: " << email_id << endl;
                cout << "\t\t\t Student Address: " << address << endl;
                found++;
            }
            file >> name >> roll_no >> course >> email_id >> contact_no >> address;
        }
        if (found == 0)
        {
            cout << "\n\t\t\tStudent Roll No. Not Found...";
        }
        file.close();
    }
}
void student::deleted()
{
    system("cls");
    fstream file, file1;
    int found = 0;
    string roll;
    cout << "\n-------------------------------------------------------------------------------------------------------" << endl;
    cout << "------------------------------------- Delete Student Details ------------------------------------------" << endl;
    file.open("studentRecord.txt", ios::in);
    if (!file)
    {
        cout << "\n\t\t\tNo Data is Present..";
        file.close();
    }
    else
    {
        cout << "\nEnter Roll No. of Student which you want Delete Data: ";
        cin >> roll;
        file1.open("record.txt", ios::app | ios::out);
        file >> name >> roll_no >> course >> email_id >> contact_no >> address;
        while (!file.eof())
        {
            if (roll != roll_no)
            {
                file1 << " " << name << " " << roll_no << " " << course << " " << email_id << " " << contact_no << " " << address << "\n";
            }
            else
            {
                found++;
                cout << "\n\t\t\tSuccessfully Delete Data";
            }
            file >> name >> roll_no >> course >> email_id >> contact_no >> address;
        }
        if (found == 0)
        {
            cout << "\n\t\t\t Student Roll NO. Not Found....";
        }
        file1.close();
        file.close();
        remove("studentRecord.txt");
        rename("record.txt", "studentRecord.txt");
    }
}
main()
{
	student project;
	project.menu();
    return 0;
}
