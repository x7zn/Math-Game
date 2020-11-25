#include <iostream>
#include <conio.h>
using namespace std;

main () {
	float m,t,r,c,a,s,d,a1,a2,a3,a4,a5,a6,a7,a8,a9,a10;
	string w;
do {

	cout<<"\t\tMATH GAME";
	
	cout<<"\n[1]Practice\n[2] QUIZ\nChose:";
	cin>>w;

s=0;
	 if (w=="1") {
	 	cout<<"[1] ADDITTION [2] SUBTRACTIION [3] DIVISION [4] MULTIPLICATION:";
	 	cin>>t;
	 	
	 	if (t==1) {
	 		
	 			cout<<"1+1:";
	 			cin>>a1;
	 	
	 		if (a1==2) {
	 			s=s+1;
			 } 
			 cout<<"2+2:";
			 cin>>a2;
			 if (a2==4) {
			 	s=s+1;
			 }
			 cout<<"3+3:";
			 cin>>a3;
			 if (a3==6) {
			 	s=s+1;
			 }
			 cout<<"4+4:";
			 cin>>a4;
			 if (a4==8) {
			 	s=s+1;
			 }
			 cout<<"5+5:";
			 cin>>a5;
			 if (a5==10) {
			 	s=s+1;
			 }
			 cout<<"6+6:";
			 cin>>a6;
			 if (a6==12) {
			 	s=s+1;
			 }
			 cout<<"7+7:";
			 cin>>a7;
			 if (a7==14) {
			 	s=s+1;
			 }
			 cout<<"8+8:";
			 cin>>a8;
			 if (a8==16) {
			 	s=s+1;
			 }
			 cout<<"9+9:";
			 cin>>a9;
			 if (a9==18) {
			 	s=s+1;
			 }
			 cout<<"10+10:";
			 cin>>a10;
			 if (a10==20) {
			 	s=s+1;
			 }
		 }
		if (t==2) {
			cout<<"1-1:";
			cin>>a1;
			if (a1==0) {
				s=s+1;
			}
			cout<<"2-1:";
			cin>>a2;
			if (a2==1) {
				s=s+1;
			}
			cout<<"3-1:";
			cin>>a3;
			if (a3==2) {
				s=s+1;
			}
			cout<<"4-1:";
			cin>>a4;
			if (a4==3) {
				s=s+1;
			}
			cout<<"5-2:";
			cin>>a5;
			if (a5==3) {
				s=s+1;
			}
			cout<<"6-3:";
			cin>>a6;
			if (a6==3) {
				s=s+1;
			}
			cout<<"7-2:";
			cin>>a7;
			if (a7==5) {
				s=s+1;
			}
			cout<<"8-5:";
			cin>>a8;
			if (a8==3) {
				s=s+1;
			}
			cout<<"9-3:";
			cin>>a9;
			if (a9==6) {
				s=s+1;
			}
			cout<<"10-4:";
			cin>>a10;
			if (a10==6) {
				s=s+1;
			}
		}
		if (t==3) {
			cout<<"1/1:";
			cin>>a1;
			if (a1==1) {
				s=s+1;
			}
			cout<<"2/2:";
			cin>>a2;
			if (a2==1) {
				s=s+1;
			}
			cout<<"3/2:";
			cin>>a3;
			if (a3==1.5){
				s=s+1;
			}
			cout<<"4/2:";
			cin>>a4;
			if (a4==2) {
				s=s+1;
			}
			cout<<"5/2:";
			cin>>a5;
			if (a5==2.5) {
				s=s+1;
			}
			cout<<"6/3:";
			cin>>a6;
			if (a6==2) {
				s=s+1;
			}
			cout<<"7/2:";
			cin>>a7;
			if (a7==3.5) {
				s=s+1;
			}
			cout<<"8/2:";
			cin>>a8;
			if (a8==4) {
				s=s+1;
			}
			cout<<"9/3:";
			cin>>a9;
			if (a9==3) {
				s=s+1;
			}
			cout<<"10/5:";
			cin>>a10;
			if (a10==2) {
				s=s+1;
			}
		}
		if (t==4) {
			cout<<"5*2:";
			cin>>a1;
			if (a1==10) {
				s=s+1;
			}
			cout<<"2*6:";
			cin>>a2;
			if (a2==12) {
				s=s+1;
			}
			cout<<"5*9:";
			cin>>a3;
			if (a3==45) {
				s=s+1;
			}
			cout<<"6*6:";
			cin>>a4;
			if (a4==36) {
				s=s+1;
			}
			cout<<"4*4:";
			cin>>a5;
			if (a5==16) {
				s=s+1;
			}
			cout<<"9*8:";
			cin>>a6;
			if (a6==72) {
				s=s+1;
			}
			cout<<"8*2:";
			cin>>a7;
			if (a7==16) {
				s=s+1;
			}
			cout<<"4*3:";
			cin>>a8;
			if (a8==12) {
				s=s+1;
			}
			cout<<"12*12:";
			cin>>a9;
			if (a9==144) {
				s=s+1;
			}
			cout<<"4*6:";
			cin>>a10;
			if (a10==24) {
				s=s+1;
			}
		}		
cout<<"Your score is:"<<s; 
	 }
	 if (w=="2") {
	 		cout<<"\n\n*calculator not allowed\n*there will be 10 questions\n*TOTAL MARK IS 10\n*The Hard questions will be 5 ONLY 2 MARKS EACH\n*IF YOUR MARK IS LESS THAN 5 YOU FAIL THE QUIZ\n*YOU WILL SEE YOUR MARK AFTER THE QUIZ";

	 	cout<<"\n\n[1] ADDITION [2] SUBTRACTION [3] DIVISION [4] MULTIPLICATION [5] ALL:";
	cin>>c;
	cout<<"\n\n\nChose the difficulty \n\n[1] EASY [2] MEDIUM [3] HARD:";
	cin>>d;
	
	 	if (c==1) {
		if (d==1) {
			cout<<"Q1:1+1:";
			cin>>a1;
			
			if (a1==2) {
				
				s=s+1;
				
			}
			
			cout<<"Q2:5+5:";
			cin>>a2;
			
			if (a2==10) {
				
				s=s+1;
				
			}
			
			cout<<"Q3:17+3:";
			cin>>a3;
			
			if (a3==20) {
				
				s=s+1;
				
			}
			
			cout<<"Q4:22+8:";
			cin>>a4;
			
			if (a4==30) {
				
				s=s+1;
				
			}
			
			cout<<"Q5:3+8:";
			cin>>a5;
				
				if (a5==11) {
					
					s=s+1;
					
				}
				
				cout<<"Q6:11+4:";
				cin>>a6;
				
				if (a6==15) {
					
					s=s+1;
					
				}
				
				cout<<"Q7:18+3:";
				cin>>a7;
				
				
				if (a7==21) {
					
					s=s+1;
					
				}
				
				cout<<"Q8:8+8:";
				cin>>a8;
				
				
				if (a8==16) {
					
					s=s+1;
					
				}
				
				cout<<"Q9:18+22:";
				cin>>a9;
				
				if (a9==40) {
					
					s=s+1;
					
				}
				
				cout<<"Q10:2+6+12:";
				cin>>a10;
				
				if (a10==20) {
					
					s=s+1;
					
				}
		}
		if (d==2) {
			cout<<"Q1:12+8+3:";
			cin>>a1;
			
			if (a1==23) {
	
				
				s=s+1;
				
			}
			
			cout<<"Q2:5+5+5:";
			cin>>a2;
			
			if (a2==15) {
				
				s=s+1;
				
			}
			
			cout<<"Q3:14+6+4:";
			cin>>a3;
			
			if (a3==24) {
				
				s=s+1;
				
			}
			
			cout<<"Q4:21+4+5:";
			cin>>a4;
			
			if (a4==30) {
				
				s=s+1;
				
			}
			
			cout<<"Q5:54+21+49:";
			cin>>a5;
			
			if (a5==124) {
				
				s=s+1;
				
			}
			
			cout<<"Q6:31+3+2:";
			cin>>a6;
			
			if (a6==36) {
				
				s=s+1;
				
			}
			
			cout<<"Q7:12+9+4:";
			cin>>a7;
			
			if (a7==25) {
				
				s=s+1;
				
			}
			
			cout<<"Q8:18+5+6:";
			cin>>a8;
			
			if (a8==29) {
				
				s=s+1;
				
			}
			
			cout<<"Q9:12+3+5+12:";
			cin>>a9;
			
			if (a9==32) {
				
				s=s+1;
				
			}
			
			cout<<"Q10:61+12+63+12:";
			cin>>a10;
			
			if (a10==148) {
				
				s=s+1;
				
			}
		}
		if (d==3) {
			cout<<"Q1:150+150:";
			cin>>a1;
			
			if (a1=300) {
				
				s=s+2;
				
			} 
			
			cout<<"Q2:234+123:";
			cin>>a2;
			
			if (a2==357) {
				
				s=s+2;
				
			}
			
			cout<<"Q3:260+320+140:";
			cin>>a3;
			
			if (a3==720) {
				
				s=s+2;
				
			}
			
			cout<<"Q4:890+110+234:";
			cin>>a4;
			
			if (a4==1234) {
				
				s=s+2;
				
			}
			
			cout<<"Q5:130+700+270:";
			cin>>a5;
			
			
			if (a5==1100) {
				
				s=s+2;
			}
		}
	} 
	if (c==2) {		
		if (d==1) {
			cout<<"Q1:1-1:";
			cin>>a1;
			
			if (a1==0) {
				
				s=s+1;
			}
			
			
			cout<<"Q2:21-19:";
			cin>>a2;
			
			if (a2==2) {
				
				s=s+1;
				
			}
			
			cout<<"Q3:35-15:";
			cin>>a3;
			
			if (a3==20) {
				
				s=s+1;
				
			}
			
			cout<<"Q4:19-12:";
			cin>>a4;
			
			if (a4==7) {
				
				s=s+1;
				
			}
			
			cout<<"Q5:23-16:";
			cin>>a5;
			
			if (a5==7) {
				
				s=s+1;
				
			}
			
			cout<<"Q6:12-6:";
			cin>>a6;
			
			
			if (a6==6) {
				
				s=s+1;
				
			}
			
			cout<<"Q7:28-9-11:";
			cin>>a7;
			
			if (a7==8) {
				
				s=s+1;
				
			}
			
			cout<<"Q8:26-14:";
			cin>>a8;
			
			
			if (a8==12) {
				
				s=s+1;
				
			}
			
			cout<<"Q9:51-20-11:";
			cin>>a9;
			
			
			if (a9==20) {
				
				s=s+1;
				
			}
			
			cout<<"Q10:22-12:";
			cin>>a10;
			
			
			if (a10==10) {
				
				s=s+1;
				
			}
			
		}
		if (d==2) {
			cout<<"Q1:21-11-10:";
			cin>>a1;
			
			
			if (a1==0) {
				
				s=s+1;
				
			}
			
			cout<<"Q2:16-5-11:";
			cin>>a2;
			
			
			if (a2==0) {
				
				s=s+1;
				
			}
			
			cout<<"Q3:29-13:";
			cin>>a3;
			
			if (a3==16) {
				
				s=s+1;
				
			}
			
			cout<<"Q4:39-29-4:";
			cin>>a4;
			
			if (a4==6) {
				
				s=s+1;
				
			}
			
			cout<<"Q5:81-50-30:";
			cin>>a5;
			
			if (a5==1) {
				
				s=s+1;
				
			}
			
			cout<<"Q6:120-60-40:";
			cin>>a6;
			
			if (a6==20) {
				
				s=s+1;
				
			}
			
			cout<<"Q7:68-45:";
			cin>>a7;
			
			if (a7==23) {
				
				s=s+1;
				
			}
			
			cout<<"Q8:26-15-9:";
			cin>>a8;
			
			if (a8==2) {
				
				s=s+1;
				
			}
			
			cout<<"Q9:20-15:";
			cin>>a9;
			
			if (a9==5) {
				
				s=s+1;
				
			}
			
			cout<<"Q10:39-18-2:";
			cin>>a10;
			
			if (a10==19) {
				
				s=s+1;
				
			}
			
		}
		if (d==3) {
			cout<<"Q1:30-15-12:";
			cin>>a1;
			
			if (a1==3) {
				
				s=s+2;
				
			}
			
			cout<<"Q2:250-150-30:";
			cin>>a2;
			
			if (a2==70) {
				
				s=s+1;
				
			}
			
			cout<<"Q3:365-150-18:";
			cin>>a3;
			
			if (a3==197) {
				
				s=s+1;
				
			}
			
			cout<<"Q4:180-30-10:";
			cin>>a4;
			
			if (a4==140) {
				
				s=s+1;
				
			}
			
			cout<<"Q5:250-50-100:";
			cin>>a5;
			
			if (a5==100) {
				
				s=s+1;
				
			}
			
			
		}
	}
	if (c==3) {
		if (d==1) {
		cout<<"Q1:2/2:";
		cin>>a1;
		
		if (a1==1) {
			
			s=s+1;
			
		}
		
		cout<<"Q2:15/3:";
		cin>>a2;
		
		if (a2==5) {
			
			s=s+1;
			
		}
		
		cout<<"Q3:30/10:";
		cin>>a3;
		
		if (a3==3) {
			
			s=s+1;
			
		}
		
		cout<<"Q4:100/20:";
		cin>>a4;
		
		if (a4==5) {
			
			s=s+1;
			
		}
		
		cout<<"Q5:45/9:";
		cin>>a5;
		
		if (a5==5) {
			
			s=s+1;
			
		}
		
		cout<<"Q6:81/9:";
		cin>>a6;
		
		if (a6==9) {
			
			s=s+1;
			
		}
		
		cout<<"Q7:64/8:";
		cin>>a7;
		
		if (a7==8) {
			
			s=s+1;
			
		}
		
		cout<<"Q8:54/6:";
		cin>>a8;
		
		if (a8==9) {
			
			s=s+1;
			
		}
		
		cout<<"Q9:50/2:";
		cin>>a9;
		
		if (a9==25) {
			
			s=s+1;
			
		}
		
		cout<<"Q10:18/6:";
		cin>>a10;
		
		if (a10==3) {
			
			s=s+1;
			
		}
		
	}
		if (d==2) {
			cout<<"Q1:20/2/5:";
			cin>>a1;
			
			if (a1==2) {
				
				s=s+1;
				
			}
			
			cout<<"Q2:25/5/5:";
			cin>>a2;
			
			if (a2==1) {
				
				s=s+1;
				
			}
			
			cout<<"Q3:150/2/5/3:";
			cin>>a3;
			
			if (a3==5) {
				
				s=s+1;
				
			}
			
			cout<<"Q4:20/2:";
			cin>>a4;
			
			if (a4==10) {
				
				s=s+1;
				
			}
			
			cout<<"Q5::33/11:";
			cin>>a5;
			
			if (a5==3) {
				
				s=s+1;
				
			}
			
			cout<<"Q6:12/4:";
			cin>>a6;
			
			if (a6==3) {
				
				s=s+1;
				
			}
			
			cout<<"Q7:18/6:";
			cin>>a7;
			
			if (a7==3) {
				
				s=s+1;
				
			}
			
			cout<<"Q8:36/2/3:";
			cin>>a8;
			
			if (a8==6) {
				
				s=s+1;
				
			}
			
			cout<<"Q9:100/50/2:";
			cin>>a9;
			
			if (a9==1) {
				
				s=s+1;
				
			}
			
			cout<<"Q10:68/2:";
			cin>>a10;
			
			if (a10==34) {
				
				s=s+1;
				
			}
		}	
		if (d==3) {
			cout<<"Q1:145/5:";
			cin>>a1;
			
			if (a1==29) {
				
				s=s+2;
				
			}
			
			cout<<"Q2:165/5/11:";
			cin>>a2;
			
			if (a2==3) {
				
				s=s+2;
				
			}
			
			cout<<"Q3:144/12/6:";
			cin>>a3;
			
			if (a3==2) {
				
				s=s+2;
				
			}
			
			cout<<"Q4:30/2:";
			cin>>a4;
			
			if (a4==15) {
				
				s=s+2;
				
			}
			
			cout<<"Q5:365/5:";
			cin>>a5;
			
			if (a5==73) {
				
				s=s+2;
				
			}
		}
	}
	if (c==4) {
		if (d==1) {
			cout<<"Q1:2*2:";
			cin>>a1;
			
			if (a1==4) {
				
				s=s+1;
				
			}
			
			cout<<"Q2:1*2:";
			cin>>a2;
			
			if (a2==2) {
				
				s=s+1;
				
			}
			
			cout<<"Q3:12*12:";
			cin>>a3;
			
			if (a3==144) {
				
				s=s+1;
				
			}
			
			cout<<"Q4:5*5:";
			cin>>a4;
			
			if (a4==25) {
				
				s=s+1;
				
			}
			
			cout<<"Q5:6*6:";
			cin>>a5;
			
			if (a5==36) {
				
				s=s+1;
				
			}
			
			cout<<"Q6:9*3:";
			cin>>a6;
			
			if (a6==27) {
				
				s=s+1;
				
			}
			
			cout<<"Q7:13*2:";
			cin>>a7;
			
			if (a7==26) {
				
				s=s+1;
				
			}
			
			cout<<"Q8:7*3:";
			cin>>a8;
			
			if (a8==21) {
				
				s=s+1;
				
			}
			
			cout<<"Q9:9*9:";
			cin>>a9;
			
			if (a9==81) {
				
				s=s+1;
				
			}
			
			cout<<"Q10:11*2:";
			cin>>a10;
			
			if (a10==22) {
				
				s=s+1;
				
			}
		}
		if (d==2) {
			cout<<"Q1:13*2*1:";
			cin>>a1;
			
			if (a1==26) {
				
				s=s+1;
				
			}
			cout<<"Q2:32*3:";
			cin>>a2;
			
			if (a2==96) {
				
				s=s+1;
				
			}
			
			cout<<"Q3:22*5:";
			cin>>a3;
			
			if (a3==110) {
				
				s=s+1;
				
			}
			
			cout<<"Q4:12*5:";
			cin>>a4;
			
			if (a4==60) {
				
				s=s+1;
				
			}
			
			cout<<"Q5:32*5:";
			cin>>a5;
			
			if (a5==160) {
				
				s=s+1;
				
			}
			
			cout<<"Q6:9*8:";
			cin>>a6;
			
			if (a6==72) {
				
				s=s+1;
				
			}
			
			cout<<"Q7:4*8:";
			cin>>a7;
			
			if (a7==32) {
				
				s=s+1;
				
			}
			
			cout<<"Q8:6*6*1:";
			cin>>a8;
			
			if (a8==36) {
				
				s=s+1;
				
			}
			
			cout<<"Q9:13*6:";
			cin>>a9;
			
			if (a9==78) {
				
				s=s+1;
				
			}
			
			cout<<"Q10:12*12*2:";
			cin>>a10;
			
			if (a10==288) {
				
				s=s+1;
				
			}
 			
			
		}
		if (d==3) {
			cout<<"Q1:12*12*5:";
			cin>>a1;
			
			if (a1==720) {
				
				s=s+2;
				
			}
			
			cout<<"Q2:15*6*3:";
			cin>>a2;
			
			if (a2==270) {
				
				s=s+2;
				
			}
			
			cout<<"Q3:22*9:";
			cin>>a3;
			
			if (a3==198) {
				
				s=s+2;
				
			}
			
			cout<<"Q4:25*6:";
			cin>>a4;
			
			if (a4==150) {
				
				s=s+2;
				
			}
			
			cout<<"Q5:72*3:";
			cin>>a5;
			
			if (a5==216) {
				
				s=s+2;
				
			}
		}
	}
	if (c==5) {
			if (d==1) {
		cout<<"Q1:25+13:";
		cin>>a1;

		if (a1==38) {
			s=s+1;
		}

		cout<<"Q2:16-5:";
		cin>>a2;

		if (a2==11) {

			s=s+1;
		}

		cout<<"Q3:14+7:";
		cin>>a3;

		if (a3==21) {

			s=s+1;
		}

		cout<<"Q4:22+9:";
		cin>>a4;

		if (a4==31) {

			s=s+1;

		}

		cout<<"Q5:38-25:";
		cin>>a4;

		if (a4==13) {

			s=s+1;

		}

		cout<<"Q6:13+7:";
		cin>>a6;

		if (a6==20) {

			s=s+1;

		}

		cout<<"Q7:125-25:";
		cin>>a7;

		if (a7==100) {

			s=s+1;

		}

		cout<<"Q8:39+11-5:";
		cin>>a8;

		if (a8==45) {

			s=s+1;
		}

		cout<<"Q9:12+18+50-35:";
		cin>>a9;

		if (a9==45) {

			s=s+1;

		}

		cout<<"Q10:35+10-22:";
		cin>>a10;

		if (a10==23) {

			s=s+1;

		}

	}
	if (d==2) {

		cout<<"Q1:25+5/5:";
		cin>>a1;

		if (a1==26) {

			s=s+1;

		}

		cout<<"Q2:30*2/6:";
		cin>>a2;

		if (a2==10) {

			s=s+1;

		}

		cout<<"Q3:12-2*3:";
		cin>>a3;

		if (a3==6) {

			s=s+1;

		}

		cout<<"Q4:15/3+5:";
		cin>>a4;

		if (a4==10) {

			s=s+1;

		}

		cout<<"Q5:16/4+4:";
		cin>>a5;

		if (a5==8) {

			s=s+1;

		}

		cout<<"Q6:12*5-30:";
		cin>>a6;

		if (a6==30) {

			s=s+1;

		}

		cout<<"Q7:50/10+5*2:";
		cin>>a7;

		if (a7==15) {

			s=s+1;

		}

		cout<<"Q8:25/5+25:";
		cin>>a8;

		if (a8==30) {

			s=s+1;

		}

		cout<<"Q9:11-10:";
		cin>>a9;

		if (a9==1) {

			s=s+1;

		}

		cout<<"Q10:15*5-35:";
		cin>>a10;

		if (a10==40) {

			s=s+1;

		}
	}
	if (d==3) {

		cout<<"Q1:2+10+(12*5):";
		cin>>a1;

		if (a1==72) {

			s=s+2;

		}

		cout<<"Q2:5+3(6+5):";
		cin>>a2;

		if (a2==38) {

			s=s+2;

		}

		cout<<"Q3:12*2+5(5*3)+12:";
		cin>>a3;

		if (a3==111) {

			s=s+2;

		}

		cout<<"Q4:15-5+(15*6)+12:";
		cin>>a4;

		if (a4==112) {

			s=s+2;

		}

		cout<<"Q5:12+8+3(12*5)+12*5:";
		cin>>a5;

		if (a5==260) {

			s=s+2;

		}
	}
	}
	if (s>=5) {

		cout<<"YOU PASSED THE QUIZ!";

	}
	if (s<=5) {

		cout<<"YOU FAILED THE QUIZ";

	}

	cout<<"\nYour score is:"<<s;
cout<<"\t\t\n\nThanks For trying the quiz";
	 }
	
	
cout<<"\n\t\t\t\t\t\tMADE BY:Hussain Ali Isa Almajed";

cout<<"\n[1] EXIT:\n[2]REPEAT:\nCHOSE:";
cin>>r;

}
while (r==2);

	return 0;
} 


