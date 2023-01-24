#include <iostream>
#include <windows.h>
#include<iomanip>
using namespace std;



int main(){

	

	/* DECLARE Variable*/	
	
	//calculation
	int totalprice = 0;
	int memberprice = 0;
	int totalamount;
	
	//Counter
	int sscounter = 0,member=0;
	
	//user input
	int session,court,ans,menuchoose;
	string name,ynans,ynans2,membership,ansmembership;
			
	
	/* DECLARE ARRAY*/
	string sessionArr[] = {"session 1","session 2","session 3","session 4"}; 
	
	int sssave[]={};
	int flag1[] = {1,1,1,0};
	int flag2[] = {1,1,0,1};
	int flag3[] = {1,0,1,1};
	int flag4[] = {1,1,1,1};  

	cout<<"\n\tHi welcome! please enter your name: ";
	cin>> name;
	cout<<"\n\tEnter membership code(type 'NO' if you dont have): ";
	cin>> membership;	
 do
	{	//Display Menu
		 system("Color E4");  
		 cout << "\t\t+" << setfill('-') << setw(40) << "+" << endl;
	   	 cout<<"\t\t\t\tW E L C O M E\n";
		 cout << "\t\t+" << setfill('-') << setw(40) << "+" << endl;
		 cout<<"\t\t1- Booking Court"<< endl;
		 cout<<"\t\t2- Apply Membership"<< endl;
		 cout<<"\t\t3- Current order"<< endl;	

	do 
		{
			cout << "\n\tHi "<< name<<"! please enter select a menu [1/2/3]: ";
			cin >> menuchoose;
				
			if (menuchoose==1)
		{
				//Print court availablity//
				  
				 cout << "\t\t+" << setfill('-') << setw(40) << "+" << endl;
			   	 cout<<"\t\t C O U R T  B O O K I N G  S Y S T E M\n";
				 cout << "\t\t+" << setfill('-') << setw(40) << "+" << endl;
		
		         cout<< "\t\t||AVAILABLE SESSION||\n";
				      
			   
				cout<<"\t\t*|COURT 1|*\n";
				for (int i = 0; i < 4; i++){
					if (flag1[i] == 1)
						cout<<"\t\t"<<sessionArr[i] << "\n";
					else
						cout<<"\t\t"<<sessionArr[i]<<":Not available\n";
			    }
			       
				cout<<"\t\t*|COURT 2|*\n";
				for (int i = 0; i < 4; i++){
					if (flag2[i] == 1)
						cout<< "\t\t"<<sessionArr[i] << "\n";
				else
					cout<<"\t\t"<<sessionArr[i]<<":Not available\n";
			    }
			    
			      
				cout<<"\t\t*|COURT 3|*\n";
				for (int i = 0; i < 4 ; i++){
					if (flag3[i] == 1)
						cout<< "\t\t"<<sessionArr[i] << "\n";
			
					else
						cout<<"\t\t"<<sessionArr[i]<<":Not available\n";
				}
			
			       
			    cout<<"\t\t*|COURT 4|*\n";
				for (int i = 0; i < 4; i++){
				if (flag4[i] == 1)
					cout<< "\t\t"<<sessionArr[i] << "\n";
				else 
					cout<<"\t\t"<<sessionArr[i]<<":Not available\n";
			}
			 	cout << "\t\t+" << setfill('-') << setw(40) << "+" << endl;
				cout<<"\n\t\t\t    1 session = RM 60";
				cout<<"\n\t\t\t    2 session = RM 100";
				cout<<"\n\t\t    GET 10% DISCOUNT WITH MEMBERSHIP!!\n";
				cout << "\t\t+" << setfill('-') << setw(40) << "+" << endl;			
				cout << "\n\tDo you want to proceed with the booking? (1-Yes/2-No): ";
				cin >> ans;
											
						switch (ans) 
						{
							case 1:
							{
								do
								{
							
									//booking
									cout<<"\n\tEnter the court number: ";
									cin>> court;
									switch (court){
									case 1:
										cout<<"\n\tEnter the session number: ";
										cin>> session;
										if (flag1[session-1]==0)
											cout<< "The session is not avaiable!";
										else if (session == 1){
											flag1[0]= 0;
											
											sscounter++;
										}
										else if (session == 2){
											flag1[1]= 0;
										
											sscounter++;
										}
										else if (session == 3){
											flag1[2]= 0;
											sscounter++;
										}
										else if (session == 4){
											flag1[3]= 0;

											sscounter++;
										}
											
										else
									{
											cout << "\n\t\t***INVALID INPUT***" <<endl;
											cout <<endl;
									}
									break;
									case 2:
										cout<<"\n\tEnter the session number: ";
										cin>> session;
										if (flag2[session-1]==0)
											cout<< "\n\tThe session is not avaiable!";										
										else if (session == 1){
											flag2[0]= 0;
											sscounter++;
										}
										else if (session == 2){
											flag2[1]= 0;
											sscounter++;
										}
										else if (session == 3){
											flag2[2]= 0;
											sscounter++;
										}
										else if (session == 4){
											flag2[3]= 0;
											sscounter++;
										}
										else
									{
											cout << "\n\t\t***INVALID INPUT***" <<endl;
											cout <<endl;
									}
									break;
									case 3:
										cout<<"\n\tEnter the session number: ";
										cin>> session;
										if (flag2[session-1]==0)
											cout<< "\n\tThe session is not avaiable!";										
										else if (session == 1){
											flag3[0]= 0;
											sscounter++;
										}
										else if (session == 2){
											flag3[1]= 0;
											sscounter++;
										}
										else if (session == 3){
											flag3[2]= 0;
											sscounter++;
										}
										else if (session == 4){
											flag3[3]= 0;
											sscounter++;
										}
										else
										{
											cout << "\n\t\t***INVALID INPUT***" <<endl;
											cout <<endl;
										}
											
									break;
									case 4:
										cout<<"\n\tEnter the session number: ";
										cin>> session;
										if (flag2[session-1]==0)
											cout<< "\n\tThe session is not avaiable!";
										else if (session == 1){
										
											flag4[0]= 0;
											sscounter++;
										}
										else if (session == 2){
										
											flag4[1]= 0;
											sscounter++;
										}
										else if (session == 3){
										
											flag4[2]= 0;
											sscounter++;
										}
										else if (session == 4){
										
											flag4[3]= 0;
											sscounter++;
										}
										else
										{
											cout << "\n\t\t***INVALID INPUT***" <<endl;
											cout <<endl;
										}
									break;
									default:
									{
										cout << "\n\t\t***INVALID INPUT***" << endl;
									break;
									}
										
									
								  }
								//calculation
								  
								if (membership == "AYAM"){
									if(sscounter == 1){
										totalprice = 0.9 * 60 ;
										cout << "\n\n\t\t***| Your total purchase right now is RM" << totalprice <<" |***" << endl;
											
									
									}
									else if(sscounter == 2){
											totalprice = 0.9 * 100 ;
											cout << "\n\n\t\t***| Your total purchase right now is RM" << totalprice <<" |***" << endl;
												
										
									}
									else{
										totalprice = 0.9 * sscounter * 60 ;
										cout << "\n\n\t\t***| Your total purchase right now is RM" << totalprice <<" |***" << endl;
									
									} 
								}
								else {
									if(sscounter == 1){
										totalprice = 60 ;
										cout << "\n\n\t\t***| Your total purchase right now is RM" << totalprice <<" |***" << endl;
											
									
									}
									else if(sscounter == 2){
										totalprice = 100 ;
										cout << "\n\n\t\t***| Your total purchase right now is RM" << totalprice <<" |***" << endl;
											
										
									}
									
									else{
										totalprice = sscounter * 60 ;
										cout << "\n\n\t\t***| Your total purchase right now is RM" << totalprice <<" |***" << endl;
											

									}	
								}
								sssave[sscounter] = session;		 
								cout << "\n\n\tDo you want to add more session? (Yes/No) : ";
								cin >> ynans2;
										
									
							} while (ynans2 == "Yes" || ynans2 == "yes");
								
								break;
								}
							
							case 2:
							{
								cout <<"\n\t***| Thank You. Please come again later :) |***" << endl;
								return 0;
								break;
							}
							
							default:
							{
								cout << "\n\t\t***INVALID INPUT***" << endl;
								break;
							}
						}	
					}	
		//Membership Application
					else if (menuchoose==2)
					{
						cout << endl << "\tOUR MEMBERSHIP ONLY COST RM30 FOR A LIFETIME!!" << endl;
						cout << endl << "\tGET IT NOW TO ENJOY THE BENEFITS" << endl;
						cout << "\n\t\tThe benefits of membership:" << endl;
						cout << "\t\t\t1.Collect stamp for every purchased." << endl;
						cout << "\t\t\t2.Enjoy 10% discount for every purchased." << endl;
							
						cout << "\n\tAre you sure you want to purchase? (Yes/No): ";
						cin >> ansmembership;
							
						if (ansmembership == "Yes" || ansmembership == "yes")
						{
							cout << "\n\t| Thank You for your purchased, Welcome to our membership |" << endl;
							cout << "\t| RM 30 will be add to your total |" <<endl;
							cout << "\t***| YOUR MEMBERSHIP CODE IS 'AYAM' |***" <<endl;
							memberprice = 30;
							member++;
						}
					
						else if (ansmembership == "No" || ansmembership == "no")
						{
							cout << "\n\t***| YOU ARE WELCOME TO JOIN OUR MEMBERSHIP ANYTIME YOU WANT |***" << endl;
							memberprice = 0;
						}
					
						else
						{
							cout << "\n\t***INVALID INPUT***" << endl;
						}	
					}		
					else if (menuchoose==3){
							if (sscounter== 0)
								cout << "\n\t Please make an order first" << endl;
							else {
									cout << endl << "\t\t" << setw(35) << setfill('=') <<" ";
									cout << endl << "\t\t" << setw(21) << setfill(' ') << "Receipt";
									cout << endl << "\t\t" << setw(35) << setfill('=')<< " ";
									cout << "\n\t\tName: " << name ;
									cout << "\n\t\tCourt number: "<<court;

									cout << "\n\t\tsession: ";
								for(int j = 1 ; j <= sscounter; j++){
									cout <<sssave[j]<<"|";
									}
									if(member>0){
										totalamount = (totalprice + memberprice) * 0.9;
									}
									else
									totalamount = totalprice + memberprice;;
									cout<<"\n\t\tYour total is RM "<<totalamount;
								}
							
					 }
					
				
					else
					{
						cout << "\n\t***INVALID INPUT***" << endl;
					}
				
		}while (menuchoose>3);
			
				//Exit or loop back to menu
				cout << "\n\t Are you done with the purchased? (Yes/No): ";
				cin >> ynans;
				
				cout << endl << endl;
				
		
	} while(ynans == "No" || ynans == "no");
			//Display receipt
			cout << endl << "\t\t" << setw(35) << setfill('=') <<" ";
			cout << endl << "\t\t" << setw(21) << setfill(' ') << "Receipt";
			cout << endl << "\t\t" << setw(35) << setfill('=')<< " ";
			cout << "\n\t\tName: " << name ;
			cout << "\n\t\tCourt number: "<<court;

			cout << "\n\t\tsession: ";
			for(int j = 1 ; j <= sscounter; j++){
				cout <<"|"<<sssave[j]<<"|";
				}
				if(member>0){
					totalamount = (totalprice + memberprice) * 0.9;
				}
				else
				totalamount = totalprice + memberprice;
				
				cout<<"\n\t\tYour total is RM "<<totalamount;
				cout <<"\n\n\t***| Thank You. Please come again later |***" << endl;
			

return 0;
}