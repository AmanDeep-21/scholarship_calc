#include<bits/stdc++.h>
#include<iostream>
#include<string.h>
#include<conio.h>
#include<fstream>
#include<windows.h>
using namespace std;

class Input1{
	protected:
		int l1;
		float t1;
	public:
		void Inputa()
		{
		cout<<"Marks obtained in 10th class : ";
		cin>>t1;
		cout<<"Ranking Slab in LPUNEST : "<<endl;
		cout<<"1. Top 10%"<<endl;
		cout<<"2. 11%-20%"<<endl;
		cout<<"3. 21%-35%"<<endl;
		cout<<"4. None of the above."<<endl;
		cin>>l1;
		getch();
		system("CLS");
		cout<<"\n\n";
		}	
};
class diploma:public Input1{
	protected:
		int app_fe1=29500;
		public:
			diploma1()
			{
			Input1::Inputa();
				{
				cout<<"Acutal fee(per semester): "<<app_fe1<<endl;
				if(t1>90 || l1==1)
				{
				cout<<"Scholarship provided(per semester) : 15000"<<endl;
				cout<<"Applicable fee(per semester) : 14500"<<endl;
				}
				else if((t1>80&& t1<89.99)|| l1==2)
				{
				cout<<"Scholarship provided(per semester) : 10000"<<endl;
				cout<<"Applicable fee(per semester) : 19500"<<endl;
				}
				else if((t1>70&& t1<79.99)|| l1==3)
				{
				cout<<"Scholarship provided(per semester) : 5000"<<endl;
				cout<<"Applicable fee(per semester) : 24500"<<endl;
				}
				else
				{
				cout<<"Scholarship provided(per semester) : Nil"<<endl;
				cout<<"Applicable fee(per semester) : 29500"<<endl;
				}
			}
				getch();
				system("CLS");
			}
				
		
};


class Input2{
	protected:
		int l2;
		float t2;
	public:
		void Inputb()
		{
		cout<<"Marks obtained in 12th class : ";
		cin>>t2;
		cout<<"Ranking Slab in LPUNEST : "<<endl;
		cout<<"1. Top 10%"<<endl;
		cout<<"2. 11%-20%"<<endl;
		cout<<"3. 21%-35%"<<endl;
		cout<<"4. None of the above."<<endl;
		cin>>l2;
		cout<<"\n\n";
		getch();
		system("CLS");	
		}
};

class after_12a:public Input2{
	protected:
		int app_ft1=49500;
		public:
			void after_a()
			{
				Input2::Inputb();
				cout<<"Acutal fee(per semester): "<<app_ft1<<endl;
				if(t2>90 || l2==1)
				{
				cout<<"Scholarship provided(per semester) : 20000"<<endl;
				cout<<"Applicable fee(per semester) : 29500"<<endl;
				}
				else if((t2>80&& t2<89.99)|| l2==2)
				{
				cout<<"Scholarship provided(per semester) : 15000"<<endl;
				cout<<"Applicable fee(per semester) : 34500"<<endl;
				}
				else if((t2>70&& t2<79.99)|| l2==3)
				{
				cout<<"Scholarship provided(per semester) : 10000"<<endl;
				cout<<"Applicable fee(per semester) : 39500"<<endl;
				}
				else
				{
				cout<<"Scholarship provided(per semester) : Nil"<<endl;
				cout<<"Applicable fee(per semester) : 49500"<<endl;
				}
				getch();
				system("CLS");
		}			
};

class after_12b:public Input2{
	protected:
		int app_ft3=74500;
		public:
			void after_b()
			{
				Input2::Inputb();
				cout<<"Acutal fee(per semester): "<<app_ft3<<endl;
				if(t2>90 || l2==1)
				{
				cout<<"Scholarship provided(per semester) : 40000"<<endl;
				cout<<"Applicable fee(per semester) : 34500"<<endl;
				}
				else if((t2>80&& t2<89.99)|| l2==2)
				{
				cout<<"Scholarship provided(per semester) : 30000"<<endl;
				cout<<"Applicable fee(per semester) : 44500"<<endl;
				}
				else if((t2>70&& t2<79.99)|| l2==3)
				{
				cout<<"Scholarship provided(per semester) : 20000"<<endl;
				cout<<"Applicable fee(per semester) : 54500"<<endl;
				}
				else
				{
				cout<<"Scholarship provided(per semester) : Nil"<<endl;
				cout<<"Applicable fee(per semester) : 78500"<<endl;
				}
				getch();
				system("CLS");
		}			
};

class after_12c:public Input2{
	protected:
		int app_ft4=64500;
		public:
			void after_c()
			{
				Input2::Inputb();
				cout<<"Acutal fee(per semester): "<<app_ft4<<endl;
				if(t2>90 || l2==1)
				{
				cout<<"Scholarship provided(per semester) : 30000"<<endl;
				cout<<"Applicable fee(per semester) : 34500"<<endl;
				}
				else if((t2>80&& t2<89.99)|| l2==2)
				{
				cout<<"Scholarship provided(per semester) : 20000"<<endl;
				cout<<"Applicable fee(per semester) : 44500"<<endl;
				}
				else if((t2>70&& t2<79.99)|| l2==3)
				{
				cout<<"Scholarship provided(per semester) : 15000"<<endl;
				cout<<"Applicable fee(per semester) : 49500"<<endl;
				}
				else
				{
				cout<<"Scholarship provided(per semester) : Nil"<<endl;
				cout<<"Applicable fee(per semester) : 64500"<<endl;
				}
				getch();
				system("CLS");
		}			
};

class btech_b:public Input2{
	protected:
		int app_ft7=89500;
		public:
			void btech()
			{
				Input2::Inputb();
				cout<<"Acutal fee(per semester): "<<app_ft7<<endl;
				if(t2>90 || l2==1)
				{
				cout<<"Scholarship provided(per semester) : 45000"<<endl;
				cout<<"Applicable fee(per semester) : 44500"<<endl;
				}
				else if((t2>80&& t2<89.99)|| l2==2)
				{
				cout<<"Scholarship provided(per semester) : 35000"<<endl;
				cout<<"Applicable fee(per semester) : 54500"<<endl;
				}
				else if((t2>70&& t2<79.99)|| l2==3)
				{
				cout<<"Scholarship provided(per semester) : 25000"<<endl;
				cout<<"Applicable fee(per semester) : 64500"<<endl;
				}
				else
				{
				cout<<"Scholarship provided(per semester) : Nil"<<endl;
				cout<<"Applicable fee(per semester) : 89500"<<endl;
				}
				getch();
				system("CLS");
		}			
};

class Input3{
	protected:
		int l3;
		float t3;
	public:
		void Inputc()
		{
		cout<<"CGPA obtained in graduation : ";
		cin>>t3;
		cout<<"Ranking Slab in LPUNEST : "<<endl;
		cout<<"1. Top 10%"<<endl;
		cout<<"2. 11%-20%"<<endl;
		cout<<"3. 21%-35%"<<endl;
		cout<<"4. None of the above."<<endl;
		cin>>l3;
		cout<<"\n\n";
		getch();
		system("CLS");
		}
};

class grad1:public Input3{
	protected:
		int app_fg1=74500;
		public:
			void graduation1()
			{
				Input3::Inputc();
				cout<<"Acutal fee(per semester): "<<app_fg1<<endl;
				if(t3>9 || l3==1)
				{
				cout<<"Scholarship provided(per semester) : 40000"<<endl;
				cout<<"Applicable fee(per semester) : 34500"<<endl;
				}
				else if((t3>8 && t3<8.99)|| l3==2)
				{
				cout<<"Scholarship provided(per semester) : 30000"<<endl;
				cout<<"Applicable fee(per semester) : 44500"<<endl;
				}
				else if((t3>7 && t3<7.99)|| l3==3)
				{
				cout<<"Scholarship provided(per semester) : 20000"<<endl;
				cout<<"Applicable fee(per semester) : 54500"<<endl;
				}
				else
				{
				cout<<"Scholarship provided(per semester) : Nil"<<endl;
				cout<<"Applicable fee(per semester) : 74500"<<endl;
				}
				getch();
				system("CLS");
		}			
};

class grad2:public Input3{
	protected:
		int app_fg2=54500;
		public:
			void graduation2()
			{
				Input3::Inputc();
				cout<<"Acutal fee(per semester): "<<app_fg2<<endl;
				if(t3>9 || l3==1)
				{
				cout<<"Scholarship provided(per semester) : 30000"<<endl;
				cout<<"Applicable fee(per semester) : 24500"<<endl;
				}
				else if((t3>8 && t3<8.99)|| l3==2)
				{
				cout<<"Scholarship provided(per semester) : 20000"<<endl;
				cout<<"Applicable fee(per semester) : 34500"<<endl;
				}
				else if((t3>7 && t3<7.99)|| l3==3)
				{
				cout<<"Scholarship provided(per semester) : 15000"<<endl;
				cout<<"Applicable fee(per semester) : 39500"<<endl;
				}
				else
				{
				cout<<"Scholarship provided(per semester) : Nil"<<endl;
				cout<<"Applicable fee(per semester) : 54500"<<endl;
				}
				getch();
				system("CLS");
		}			
};

class grad3:public Input3{
	protected:
		int app_fg3=64500;
		public:
			void graduation3()
			{
				Input3::Inputc();
				cout<<"Acutal fee(per semester): "<<app_fg3<<endl;
				if(t3>9 || l3==1)
				{
				cout<<"Scholarship provided(per semester) : 30000"<<endl;
				cout<<"Applicable fee(per semester) : 34500"<<endl;
				}
				else if((t3>8 && t3<8.99)|| l3==2)
				{
				cout<<"Scholarship provided(per semester) : 20000"<<endl;
				cout<<"Applicable fee(per semester) : 44500"<<endl;
				}
				else if((t3>7 && t3<7.99)|| l3==3)
				{
				cout<<"Scholarship provided(per semester) : 15000"<<endl;
				cout<<"Applicable fee(per semester) : 49500"<<endl;
				}
				else
				{
				cout<<"Scholarship provided(per semester) : Nil"<<endl;
				cout<<"Applicable fee(per semester) : 64500"<<endl;
				}
				getch();
				system("CLS");
		}			
};

class grad4:public Input3{
	protected:
		int app_fg4=54500;
		public:
			void graduation4()
			{
				Input3::Inputc();
				cout<<"Acutal fee(per semester): "<<app_fg4<<endl;
				if(t3>9 || l3==1)
				{
				cout<<"Scholarship provided(per semester) : 20000"<<endl;
				cout<<"Applicable fee(per semester) : 34500"<<endl;
				}
				else if((t3>8 && t3<8.99)|| l3==2)
				{
				cout<<"Scholarship provided(per semester) : 15000"<<endl;
				cout<<"Applicable fee(per semester) : 39500"<<endl;
				}
				else if((t3>7 && t3<7.99)|| l3==3)
				{
				cout<<"Scholarship provided(per semester) : 10000"<<endl;
				cout<<"Applicable fee(per semester) : 44500"<<endl;
				}
				else
				{
				cout<<"Scholarship provided(per semester) : Nil"<<endl;
				cout<<"Applicable fee(per semester) : 54500"<<endl;
				}
				getch();
				system("CLS");
		}			
};



class Input4{
	protected:
		int l4;
		float t4;
	public:
		void Inputd()
		{
			
		cout<<"CGPA obtained in graduation : ";
		cin>>t4;
		cout<<"Ranking Slab in LPUNEST : "<<endl;
		cout<<"1. Top 10%"<<endl;
		cout<<"2. 11%-20%"<<endl;
		cout<<"3. 21%-35%"<<endl;
		cout<<"4. None of the above."<<endl;
		cin>>l4 ;
		cout<<"\n\n";
		getch();
		system("CLS");
		}
};
class lateral1:public Input4{
	protected:
		int app_fl1=89500;
		public:
			void lateral_a()
			{
				Input4::Inputd();
				cout<<"Acutal fee(per semester): "<<app_fl1<<endl;
				if(t4>9 || l4==1)
				{
				cout<<"Scholarship provided(per semester) : 50000"<<endl;
				cout<<"Applicable fee(per semester) : 39500"<<endl;
				}
				else if((t4>8 && t4<8.99)|| l4==2)
				{
				cout<<"Scholarship provided(per semester) : 40000"<<endl;
				cout<<"Applicable fee(per semester) : 49500"<<endl;
				}
				else if((t4>7 && t4<7.99)|| l4==3)
				{
				cout<<"Scholarship provided(per semester) : 30000"<<endl;
				cout<<"Applicable fee(per semester) : 59500"<<endl;
				}
				else
				{
				cout<<"Scholarship provided(per semester) : Nil"<<endl;
				cout<<"Applicable fee(per semester) : 89500"<<endl;
				}
				getch();
				system("CLS");
		}			
};
class lateral2:public Input4{
	protected:
		int app_fl2=64500;
		public:
			void lateral_b()
			{
				Input4::Inputd();
				cout<<"Acutal fee(per semester): "<<app_fl2<<endl;
				if(t4>9 || l4==1)
				{
				cout<<"Scholarship provided(per semester) : 30000"<<endl;
				cout<<"Applicable fee(per semester) : 34500"<<endl;
				}
				else if((t4>8 && t4<8.99)|| l4==2)
				{
				cout<<"Scholarship provided(per semester) : 20000"<<endl;
				cout<<"Applicable fee(per semester) : 44500"<<endl;
				}
				else if((t4>7 && t4<7.99)|| l4==3)
				{
				cout<<"Scholarship provided(per semester) : 15000"<<endl;
				cout<<"Applicable fee(per semester) : 49500"<<endl;
				}
				else
				{
				cout<<"Scholarship provided(per semester) : Nil"<<endl;
				cout<<"Applicable fee(per semester) : 64500"<<endl;
				}
				getch();
				system("CLS");
		}			
};




class basic_info{
	char name[25],ch1,ch2,sex;
	int age=0,jee=0,lpu_nest=0;
	float per=0;
	public:
		void getdata();
		void display();
};

class Course: private diploma,private after_12a, private after_12b, private after_12c,private btech_b,
private grad1, private grad2, private grad3, private grad4, private lateral1,private lateral2,private basic_info{
	protected:
	int i,main_course;
	string course_name;
	char ch2;
	public:
		void getcourse();
		void putcourse();
};
void Course::getcourse()
{
	cout<<"\t\t\t\tWelcome to LOVELY PROFESSIONAL UNIVERSITY"<<endl;
	cout<<"\t\t\t\t-----------------------------------------\n\n";
	cout<<"You are applying after : "<<endl;
	cout<<"1. After 10th"<<endl;
	cout<<"2. After 12th"<<endl;
	cout<<"3. After Graduation"<<endl;
	cout<<"4. Lateral Entry\n"<<endl;
	cout<<"Kindly enter your answer (in digits) : ";
	cin>>i;
	if(i>4 || i<=0)
	cout<<"Invalid input."<<endl;
	getch();
	system("CLS");
	
	switch(i)
	{
		case 1:
			cout<<"Select your course"<<endl;
			cout<<"------------------"<<endl;
			cout<<"1. CSE(Diploma) "<<endl;
			cout<<"2. Civil Engineering(Diploma) "<<endl;
			cout<<"3. Mechanical Engineering(Diploma)"<<endl;
			cout<<"4. Electrical Engineering(Diploma)"<<endl;
			cout<<"5. Hotel Management and Tourism(Diploma)\n"<<endl;
			cout<<"Kindly enter desired course number : ";
			cin>>main_course;
			break;
		case 2:
			cout<<"Select your course"<<endl;
			cout<<"------------------"<<endl;
			cout<<"1. BBA"<<endl;
			cout<<"2. BCA"<<endl;
			cout<<"3. B.Tech"<<endl;
			cout<<"   a)(CSE)"<<endl;
			cout<<"   b)(Electrial)"<<endl;
			cout<<"   c)(Aerospace Engineering)"<<endl;
			cout<<"   d)(Mechanical)"<<endl;
			cout<<"   e)(Civil)"<<endl;
			cout<<"   f)(IT)"<<endl;
			cout<<"4. BHMCT"<<endl;
			cout<<"5. BA,LLB(Hons.)"<<endl;
			cout<<"6. B.Sc.(Design-Fashion)"<<endl;
			cout<<"7. B.Sc.(Hons.)Agriculture\n"<<endl;
			cout<<"Kindly enter desired course number : ";
			cin>>main_course;
			if(main_course==3)
			{
				cout<<"Select the course in B.Tech : ";
				cout<<"Kindly enter desired course aplhabet : ";
				cin>>ch2;
			}
			break;
		case 3:
			cout<<"Select your course"<<endl;
			cout<<"------------------"<<endl;
			cout<<"1. MCA"<<endl;
			cout<<"2. LLB"<<endl;
			cout<<"3. M.Sc.(Design-Fashion)"<<endl;
			cout<<"4. M.Sc.(Hotel Management)"<<endl;
			cout<<"5. M.Sc.(Biotechnology)\n"<<endl;
			cout<<"Kindly enter desired course number : ";
			cin>>main_course;
			break;
		case 4:
			cout<<"Select your course"<<endl;
			cout<<"------------------"<<endl;
			cout<<"1. B.Pharma"<<endl;
			cout<<"2. B.Design"<<endl;
			cout<<"3. BHMCT\n"<<endl;
			cout<<"Kindly enter desired course number : ";
			cin>>main_course;
	}
	cout<<"\n\n";
	getch();
	system("CLS");
}
void Course::putcourse()
{
	cout<<"Selected course is : ";
	if(i==1)
	{
		if(main_course==1)
		{
		cout<<"CSE(Diploma)\n"<<endl;
		diploma::diploma1();
		}
		else if(main_course==2)
		{
		cout<<"Civil Engineering(Diploma)\n"<<endl;
		diploma::diploma1();
		}
		else if(main_course==3)
		{
		cout<<"Mechanical Engineering(Diploma)\n"<<endl;
		diploma::diploma1();
		}
		else if(main_course==4)
		{
		cout<<"Electrical Engineering(Diploma)\n"<<endl;
		diploma::diploma1();
		}
		else if(main_course==5)
		{
		cout<<"Architectural Assistantship(Diploma)\n"<<endl;
		diploma::diploma1();
		}
		else 
		cout<<"INVALID COURSE!\n";	
	}
	else if(i==2)
	{
		
		if(main_course==1)
		{
		cout<<"BBA\n"<<endl;
		basic_info::getdata();
		basic_info::display();
		getch();
		system("CLS");
		after_12a::after_a();
		}
		else if(main_course==2)
		{
		cout<<"BCA\n"<<endl;
		basic_info::getdata();
		basic_info::display();
		getch();
		system("CLS");
		after_12a::after_a();
		}
		else if(main_course==3)
		{
			cout<<"B.Tech";
			if(ch2=='a')
			{
			cout<<"(CSE)\n"<<endl;
			basic_info::getdata();
			basic_info::display();
			getch();
			system("CLS");
			btech_b::btech();
			}
			else if(ch2=='b')
			{
			cout<<"(Electrical)\n"<<endl;
			basic_info::getdata();
			basic_info::display();
			getch();
			system("CLS");
			btech_b::btech();
			}
			else if(ch2=='c')
			{
			cout<<"(Aerospace Engineering)\n"<<endl;
			basic_info::getdata();
			basic_info::display();
			getch();
			system("CLS");
			btech_b::btech();
			}
			else if(ch2=='d')
			{
			cout<<"(Mechanical)\n"<<endl;
			basic_info::getdata();
			basic_info::display();
			getch();
			system("CLS");
			btech_b::btech();
			}
			else if(ch2=='e')
			{
			cout<<"(Civil)\n"<<endl;
			basic_info::getdata();
			basic_info::display();
			getch();
			system("CLS");
			btech_b::btech();
			}
			else if(ch2=='f')
			{
			
			basic_info::getdata();
			cout<<"(IT)\n"<<endl;
			basic_info::display();
			getch();
			system("CLS");
			btech_b::btech();
			}
			else
			cout<<"INVALID COURSE!\n";
		}
		else if(main_course==4)
		{
		cout<<"BHMCT\n"<<endl;
		after_12c::after_c();
		}
		else if(main_course==5)
		{
		cout<<"BA,LLB(Hons.)\n"<<endl;
		after_12b::after_b();
		}
		else if(main_course==6)
		{
		cout<<"B.Sc.(Design-Fashion)\n"<<endl;
		after_12c::after_c();
		}
		else if(main_course==7)	
		{
		cout<<"B.Sc.(Hons.)Agriculture\n"<<endl;
		after_12c::after_c();
		}
		else
		cout<<"INVALID COURSE!\n";
	}
	else if(i==3)
	{
		if(main_course==1)
		{
		cout<<"MCA\n"<<endl;
		grad1::graduation1();
		}
		else if(main_course==2)
		{
		cout<<"LLB\n"<<endl;
		grad2::graduation2();
		}
		else if(main_course==3)
		{
		cout<<"M.Sc.(Design-Fashion)\n"<<endl;
		grad3::graduation3();
		}
		else if(main_course==4){
		cout<<"M.Sc.(Hotel Management)\n"<<endl;
		grad3::graduation3();
		}
		else if(main_course==5)
		{
		cout<<"M.Sc.(Biotechnology)\n"<<endl;
		grad4::graduation4();
		}
		else
		cout<<"INVALID COURSE!\n";
	}
	else if(i==4)
	{
		if(main_course==1)
		{
		cout<<"B.Pharma\n"<<endl;
		lateral1::lateral_a();
		}
		else if(main_course==2)
		{
		cout<<"B.Design\n"<<endl;
		lateral2::lateral_b();
		}
		else if(main_course==3)
		{
		cout<<"BHMCT\n"<<endl;
		lateral2::lateral_b();
		}
		else
		cout<<"INVALID COURSE!";
	}
	else
	cout<<"INVALID COURSE!\n";
	
	cout<<"\n\n";
	getch();
	system("CLS");
}

void basic_info::getdata()
{
	
		cout<<"\t\t\t\t\tEnter your details "<<endl;
		cout<<"\t\t\t\t\t------------------"<<endl;
		cout<<"Name : ";
		cin>>name;
		cout<<"Age : ";
		cin>>age;
		cout<<"Sex (M/F) : ";
		cin>>sex;
		cout<<"Percentage in 12th Board exams : ";
		cin>>per;
		cout<<"Have you appeared for JEE Mains? (Y/N): ";
		cin>>ch1;
		if(ch1=='Y')
		{
			cout<<"Marks scored in JEE Mains : ";
			cin>>jee;
		}
		cout<<"Have you appeared for LPU Nest? (Y/N) : ";
		cin>>ch2;
		if(ch2=='Y')
		{
			cout<<"Marks scored in LPU Nest : ";
			cin>>lpu_nest;
		}	
		
		getch();
		system("CLS");
		cout<<"\n\n";
}
void basic_info::display()
{
		cout<<"\t\t\t\tYour details "<<endl;
		cout<<"\t\t\t\t------------"<<endl;
		cout<<"Name    Sex";
		cout<<"    Age  ";
		cout<<"   12th Board marks   ";
		cout<<"JEE Mains marks ";
		cout<<"  LPU Nest marks "<<endl;
		cout<<"---------------------------------------------------------------------------------"<<endl;
		cout<<name<<"\t "<<sex<<"     "<<age<<" yrs\t     "<<per<<"%\t\t "<<jee<<"\t\t   "<<lpu_nest;
		getch();
		system("CLS");
		cout<<"\n\n";
		jee=0;
		lpu_nest=0;
}


int main()
{
	
	int id;
	char name[30],course[25],mob_no[12];
	Course c;
	c.getcourse();
	c.putcourse();
	cout<<"Please register yourself here : \n";
	
		ofstream infile;
		infile.open("Student5.txt",ios::app);
		
		cout<<"Name : ";
		infile>>name;
		cin.ignore();
		cout<<"\nMobile No. : ";
		infile>>mob_no;
		cin.ignore();
		cout<<"\nCourse Opted : ";
		infile>>course;
		cin.ignore();
		
		cout<<"\nYour profile has been created.\n";
		infile<<"Name : "<<name;
		infile<<"\nMobile No. : "<<mob_no;
		infile<<"\nCourse : "<<course;		
		
		infile.close();	
	
	
	
	getch();
	system("CLS");
	
	cout<<"\n\n\n\n\n\n\t\t\tThank you for showing interest in Lovely Professional University!";
}



