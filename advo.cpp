#include<iostream>
#include<conio.h>
#include<fstream>
#include<stdlib.h>
#include<string>


using namespace std;
class advo
{
private:
char title[20],cname[20],jname[20],location[20],caseno[20],cocate[20],court[20],cacate[20],castage[20],act[20],dese[200],fdate[20],hdate[20],opplaw[20],fees[20],cpas[11];
public:

void add();
void open();
void edit();
void login();

};

class search : public advo
{
	char sname[30];
public:
	void write()
{
	advo a;
	
	char fname[30];
	cout<<"\nEnter the file name :- ";
	cin>>fname;
	strcpy(sname,fname);
	ofstream out("data.dat",ios::app);
	out.write((char*) (&b1) , sizeof(search));
	out.close();
	ofstream outf(fname,ios::out|ios::binary );
	a.add();
	outf.write((char *) (&a), sizeof(advo));
	
	outf.close();
};
	void read()
{
    advo a;
	
	cout<<"\nEnter the name of file to open :- ";
	char oname[30];
	cin>>oname;
	ifstream inf(oname,ios::in|ios::binary);
	inf.read((char *) (&a), sizeof(advo));
	a.open();
	inf.close();
	getch();
};
	void fedit()
{
	advo a;
	long pos;
	fstream File;
	
	cout<<"\nEnter the name of file to open :- ";
	char ename[30];
	cin>>ename;
	File.open(ename,ios::binary|ios::in|ios::out);
	while(!File.eof())
	{
	
		pos=File.tellg();
		File.read((char*) &a,sizeof(advo));
		a.edit();
		File.seekg(pos);
		File.write((char*) &a,sizeof(advo));
		break;
	}
	
	cout<<"\n\n\t Record Updated";
	File.close();
	getch();

	
	
/*	while(File.read(reinterpret_cast<char *> (&a), sizeof(advo)))
	{
		a.edit();

	File.write(reinterpret_cast<char *> (&a), sizeof(advo));
	}*/
	
}

	char get()
	 {
		
		 return sname[0];
	 }
	void put()
	{
		cout<<sname<<"\n";
	}

	

}b1;

	void find()
	{
		
	s:	char finame,ename[30];
		ifstream in("data.dat",ios::in);
		cout<<"\n\nenter the first char of file:-";
		cin>>finame;
		while(!in.eof())
		{
			in.read((char *) (&b1), sizeof(search));
			
						if(b1.get()==finame||b1.get()==char(int(finame)+32)||b1.get()==char(int(finame)-32))
			{
				b1.put();
				cout<<endl;
				
			}		}
		getch();
		cout<<"\n\n";
		cout<<"press \n1. to open file \n2. for other search \n3.Back :-";
		int i;
		cin>>i;
		if(i==1)
		{
			cout<<"\nEnter full name of file to open\n";
		b1.read();
		}
		if(i==2)
		{

		goto s;
		}
		in.close();
	}
void advo::add()
	{
		
		system("cls");
	
	cout<<"\n\t\t-----------PLEASE FILL THE ENTRYS-----------\n\nTitle :- ";
		cin.getline(title,20);
	cin.getline(title,20);
	
	cout<<"\nCase No. :- ";
	
	cin.getline(caseno,20);
	
	cout<<"\nClient name :- ";
	cin.getline(cname,20);
	
	cout<<"\nLocation :- ";
	
	cin.getline(location,20);
	cout<<"\nCourt categry :- ";
	
	cin.getline(cocate,20);
	cout<<"\nCourt :- ";
	
	cin.getline(court,20);
	cout<<"\nCase Categry :- ";
	
	cin>>cacate;
	cout<<"\nCase Stage :- ";
	
	cin.getline(castage,20);
    cin.getline(castage,20);
	cout<<"\nAct :- ";
	
	cin>>act;
	cout<<"\nDescription :- ";

	cin.getline(dese,200);
    cin.getline(dese,200);
	
	cout<<"\nFiling Date :- ";
	cin.getline(fdate,20);
	cout<<"\nHearing Date :- ";
	cin.getline(hdate,20);
	cout<<"\nOpposition Lawyer :- ";
	cin.getline(opplaw,20);
	cout<<"\nJudge Name :- ";
	cin.getline(jname,20);
	cout<<"\nTotal Fees(INR) :- ";
	cin.getline(fees,20);
	


}
void advo::open()
{
	
	system("cls");
	
	
	cout<<"\n\nTitle :- "<<title;
	cout<<"\n\nCase No. :- "<<caseno;
	cout<<"\n\nClient name :- "<<cname;
	cout<<"\n\nLocation :- "<<location;
	cout<<"\n\nCourt categry :- "<<cocate;
	cout<<"\n\nCourt :- "<<court;
	cout<<"\n\nCase Categry :- "<<cacate;
	cout<<"\n\nCase Stage :- "<<castage;
	cout<<"\n\nAct :- "<<act;
	cout<<"\n\nDescription :- "<<dese;
	cout<<"\n\nFiling Date :- "<<fdate;
	cout<<"\n\nHearing Date :- "<<hdate;
	cout<<"\n\nOpposition Lawyer :- "<<opplaw;
	cout<<"\n\nJudge Name :- "<<jname;
	cout<<"\n\nTotal Fees(INR) :- "<<fees;
	
}
void advo::edit()
{
	system("cls");
	int n;
	
	cout<<"\n\nTitle :- "<<title;
	cout<<"\n\n\nIf you wont to edit press '1' & if you don't press '0' ";
	cin>>n;
	if(n==1)
	{
			cout<<"\nEnter new data : ";
			cin.getline(title,20);
			cin.getline(title,20);
	}
	cout<<"\n\nCase No. :- "<<caseno;
	cout<<"\n\n\n\t\t\tIf you wont to edit press '1' & if you don't press '0' ";
	cin>>n;
	if(n==1)
	{
			cout<<"\nEnter new data : ";
			cin.getline(caseno,20);

			cin.getline(caseno,20);

	}
	cout<<"\n\nClient name :- "<<cname;
	cout<<"\n\n\n\t\t\tIf you wont to edit press '1' & if you don't press '0' ";
	cin>>n;
	if(n==1)
	{
			cout<<"\nEnter new data : ";
			cin.getline(cname,20);
			cin.getline(cname,20);
	}
	cout<<"\n\nLocation :- "<<location;
	cout<<"\n\n\n\t\t\tIf you wont to edit press '1' & if you don't press '0' ";
	cin>>n;
	if(n==1)
	{
			cout<<"\nEnter new data : ";
			cin.getline(location,20);
			cin.getline(location,20);
	}
	cout<<"\n\nCourt categry :- "<<cocate;
	cout<<"\n\n\n\t\t\tIf you wont to edit press '1' & if you don't press '0' ";
	cin>>n;
	if(n==1)
	{
			cout<<"\nEnter new data : ";
			cin.getline(cocate,20);
			cin.getline(cocate,20);
	}
	cout<<"\n\nCourt :- "<<court;
	cout<<"\n\n\n\t\t\tIf you wont to edit press '1' & if you don't press '0' ";
	cin>>n;
	if(n==1)
	{
			cout<<"\nEnter new data : ";
			cin.getline(court,20);
			cin.getline(court,20);
	}
	cout<<"\n\nCase Categry :- "<<cacate;
	cout<<"\n\n\n\t\t\tIf you wont to edit press '1' & if you don't press '0' ";
	cin>>n;
	if(n==1)
	{
			cout<<"\nEnter new data : ";
			cin.getline(cacate,20);
			cin.getline(cacate,20);
	}
	cout<<"\n\nCase Stage :- "<<castage;
	cout<<"\n\n\n\t\t\tIf you wont to edit press '1' & if you don't press '0' ";
	cin>>n;
	if(n==1)
	{
			cout<<"\nEnter new data : ";
			
			cin.getline(castage,20);
			cin.getline(castage,20);
	}
	cout<<"\n\nAct :- "<<act;
	cout<<"\n\n\n\t\t\tIf you wont to edit press '1' & if you don't press '0' ";
	cin>>n;
	if(n==1)
	{
			cout<<"\nEnter new data : ";
			cin.getline(act,20);
				cin.getline(act,20);
	}
	cout<<"\n\nDescription :- "<<dese;
	cout<<"\n\n\n\t\t\tIf you wont to edit press '1' & if you don't press '0' ";
	cin>>n;
	if(n==1)
	{
			cout<<"\nEnter new data : ";
			cin.getline(dese,200);
				cin.getline(dese,200);
			                                             
	}
	cout<<"\n\nFiling Date :- "<<fdate;
	cout<<"\n\n\n\t\t\tIf you wont to edit press '1' & if you don't press '0' ";
	cin>>n;
	if(n==1)
	{
			cout<<"\nEnter new data : ";
			cin.getline(fdate,20);
			cin.getline(fdate,20);
	}
	cout<<"\n\nHearing Date :- "<<hdate;
	cout<<"\n\n\n\t\t\tIf you wont to edit press '1' & if you don't press '0' ";
	cin>>n;
	if(n==1)
	{
			cout<<"\nEnter new data : ";
			cin.getline(hdate,20);
			cin.getline(hdate,20);
	}
	cout<<"\n\nOpposition Lawyer :- "<<opplaw;
	cout<<"\n\n\n\t\t\tIf you wont to edit press '1' & if you don't press '0' ";
	cin>>n;
	if(n==1)
	{
			cout<<"\nEnter new data : ";
			cin.getline(opplaw,20);
			cin.getline(opplaw,20);
	}
	cout<<"\n\nJudge Name :- "<<jname;
	cout<<"\n\n\n\t\t\tIf you wont to edit press '1' & if you don't press '0' ";
	cin>>n;
	if(n==1)
	{
			cout<<"\nEnter new data : ";
			cin.getline(jname,20);
			cin.getline(jname,20);
	}
	cout<<"\n\nTotal Fees(INR) :- "<<fees;
	cout<<"\n\n\n\t\t\tIf you wont to edit press '1' & if you don't press '0' ";
    cin>>n;
	if(n==1)
	{
			cout<<"\nEnter new data : ";
			cin.getline(fees,20);
			cin.getline(fees,20);
	}
}
/*void advo::login()
{
	char cname[25];
		string cpas;
		char pname[25];
string ppasword;
system("cls");
 ifstream inf("user.dat",ios::in|ios::binary);
		inf>>pname;
		inf>>ppasword;
		
		

cout<<"\n\n\nplease Enter user name :-  ";
cin>>cname;
A: cout<<"\nplease Enter pasword :- ";
  char ch;
  ch=_getch();
for(int i=1;i<=10;i++)
{
	cpas.push_back(ch);
	cout<<"*";
	ch=_getch();
}
if( !strcmp(pname,cname) && ppasword==cpas)
		{
			cout<<"login sucssecful";
			inf.close();
			getch();

		}
		

 else
 {
  cout<<"wrong pasword...\n\n\n\n"<<cname<<" please try again...\n";
  goto A;

 }
 
 
}*/



char pname[25];
char ppasword[10];
int p;
void lock()
{
	ofstream outf("user.dat",ios::out );
	cout<<"If you want lock on softwear then press 1 else press 0 :- ";
	cin>>p;
	outf<<p<<"\n";
	if(p==1)
	{
		cout<<"Enter the user name:- ";
		cin>>pname;
		cout<<"Enter the password of 10 digits:- ";
		cin>>ppasword;
		outf<<pname<<"\n";
		outf<<ppasword<<"\n";
		cout<<"Lock is activeted";
		getch();
	}

		outf.close();
}
void change()
	{
		
		ofstream outf("user.dat",ios::out|ios::binary );
		cout<<"Enter new user name:- ";
		cin>>pname;
		cout<<"Enter new password of 10 digits:- ";
		cin>>ppasword;
		p=1;
		outf<<p<<"\n";
		outf<<pname<<"\n";
		outf<<ppasword<<"\n";
		outf.close();
		cout<<"\n\n\nchange sucssecfuly done";
		getch();
		
		

	}

void sequrity()
{


	int i;
	

	cout<<"\n\n\n1.Lock\n\n2.change user name and password ";
	cin>>i;
	switch(i)
	{
	case 1: lock();
		break;
	case 2: change();
		break;
	
	}
}
	
	
void menu()
{        int n;

	E: system("cls");
	 cout<<"\t\t\t----------MENU----------\n\n\n1. Add record\n\n\n2. View record\n\n\n3. Edit record\n\n\n4. Sequrity\n\n\n5. search\n\n\n0. EXIT";
	cin>>n;
	if(n==0)
	{
		exit(0);
	}
	else
	{
	switch(n)
	{
	case 1:	system("cls");
		 cout<<"\t\t\t----------Add Record----------";
		b1.write();
			break;
	case 2:	system("cls");
		 cout<<"\t\t\t----------Open file----------";
			b1.read();
			break;
	case 3:
			system("cls");
			 cout<<"\t\t\t----------Edit File----------";
		b1.fedit(); 
		    break;
	case 4:system("cls");
		 cout<<"\t\t\t----------Sequrity----------";
		sequrity();
			break;
	case 5: system("cls");
		 cout<<"\t\t\t----------search----------";
		find();
			break;
		default: cout<<"\nwrong option...";
			break;
	  }
	
	goto E;
	}
}
int main()
{
system("cls");

system("COLOR F0");
advo a;

cout<<"\n\n\n\n\n\t\t\t  WELCOME TO ADVOCATE DAIRY\n\n\n\n\n";
C: cout<<"\t\t*********** PRESS Enter TO START *************";

{
if(cin.get()== '\n')
{

	 ifstream inf("user.dat",ios::in);
	 inf>>p;
	 inf>>pname;
	 inf>>ppasword;
	 
	if(p==1)
	{
		
	char cname[25];
		string cpas;
		
system("cls");
A: cout<<"\n\n\nplease Enter user name :-  ";
cin>>cname;
	cout<<"\nplease Enter pasword :- ";
  char ch;
  ch=_getch();
for(int i=1;i<=10;i++)
{
	cpas.push_back(ch);
	cout<<"*";
	ch=_getch();
	
}

if( !strcmp(pname,cname) )
		{
			cout<<"\n\nlogin sucssecful";
			inf.close();
			
			getch();

		}
		

else
 {
  cout<<"\n\nwrong username or pasword...\n\n"<<cname<<" please try again...\n";
  goto A;

 }
 
 
	}
	
B: cout<<"\n\n\n\n\t\t*********** PRESS Enter FOR MAIN MENU *************";
	cin.get();

 if(cin.get()=='\n')
	{
		menu();
	}
		/*else
		{
		cout<<"you press wrong key\n\ntry again\n\n";
		goto B;
		}*/

 }
}


a.add();
a.open();
a.edit();
//a.login();


return 0;
   }
   
