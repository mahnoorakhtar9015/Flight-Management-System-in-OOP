/* MAHNOOR AKHTAR
   20I-0635
   PROJECT
*/




#include<iostream>
#include<cstdlib>
#include<fstream>
#include<string>


#include "login.h"
#include "schedule.h"
#include "booking.h"

using namespace std;

       
               
   
int main()
{
    
    Admin A;
    passenger P;
    int option, O;
    booking B;
    int F_NO , T_NO , Class;
    local_flights *L = new local_flights[15];
    international_flights *I = new international_flights[5];
    string check;
   
    
    L[0].seed();

   for(int i=0 ; i<15 ; i++)
   {
      L[i].flight_number(i+1);
      L[i].dep_time();
      L[i].arrival_time();
      L[i].originofflight(i+1);
      L[i].destinationofflight(i+1);
      L[i].flight_hrs();
      L[i].ticket_cost();      
   }

   for(int i=0 ; i<5 ; i++)
   {
      I[i].flight_number(i+1);
      I[i].dep_time();
      I[i].arrival_time();
      I[i].originofflight(i+1);
      I[i].destinationofflight(i+1);
      I[i].flight_hrs();
      I[i].ticket_cost();
      
   } 

    
    cout<<"WELCOME TO THE NEW-PAK AIRLINE FLIGHT SYSTEM"<<endl;
    cout<<endl;
    cout<<"***************MENUE*****************"<<endl;
    cout<<endl;
    cout<<"PRESS 1) ADMIN"<<endl;
    cout<<"PRESS 2) PASSENGER"<<endl;
    cout<<"PRESS 3) BASIC DETAILS OF NPAFS"<<endl;
    cout<<"PRESS 4) EXIT"<<endl;

    cin>>option;

    while(option!=4)
    {
       switch(option)

                     {

                        case 1:
                              int option1, option2, option3 , option4;
                              cout<<"**********WELCOME ADMIN************"<<endl;
                              cout<<"PRESS 1) LOGIN"<<endl;
                              cout<<"PRESS 0) EXIT"<<endl;
                          
                              cin>>option1;
 
                              switch (option1)
                              {
                                case 1:
                                       A.setusername();
                                       A.setpassword();
                                       A.setCNIC();
                                       A.existing_login();
                                       cout<<"PRESS 1) LOCAL FLIGHT SCHEDULE"<<endl;
                                       cout<<"PRESS 2) INTERNATIONAL FLIGHT SCHEDULE"<<endl;
                                       cout<<"PRESS 3) LOCAL FLIGHT SCHEDULE CHANGES"<<endl;
                                       cout<<"PRESS 4) INTERNATIONAL FLIGHT SCHEDULE CHANGES"<<endl;
                                       cout<<"PRESS 0) EXIT"<<endl;

                                       cin>>option2;
                                       switch (option2)
                                       {
                                          case 1:
                                                cout<<"************LOCAL FLIGHTS SCHEDULE**************"<<endl;
   cout<<"FLIGHT NO" << "	" << "ORIGIN" << "			  " << "DESTINATION"  << "         " <<  "DEP TIME"<<"		"<<"ARRIVAL TIME"<<"   "<<"FLIGHT HOURS"<<"      "<<"TICKET COST"<<endl;
                                                 
                                               for(int i=0 ; i<15 ; i++)
                                               {
                                                 L[i].Display();
                                               }
                                           break;


                                           case 2:
                                                  cout<<"************INTERNATIONAL FLIGHTS SCHEDULE**************"<<endl;
   cout<<"FLIGHT NO" << "	" << "ORIGIN" << "			  " << "DESTINATION"  << "         " <<  "DEP TIME"<<"		"<<"ARRIVAL TIME"<<"   "<<"FLIGHT HOURS"<<"      "<<"TICKET COST"<<endl;
                                               for(int i=0 ; i<5 ; i++)
                                               {
                                                 I[i].Display();
                                               }
                                            break;

                                            case 3:
                                                   int no2;
                                                   cout<<"PRESS 1) TO CHANGE ORIGIN"<<endl;
                                                   cout<<"PRESS 2) TO CHANGE DESTINATION"<<endl;
                                                   cout<<"PRESS 3) TO CHANGE TIME"<<endl;
                                                   cin>>option3;
                                                   switch(option3)
                                                   {
                                                      case 1:
                                                             cout<<"ENTER FLIGHT NO : "<<endl;
                                                             cin>>no2;
                                                             cout<<"ENTER NEW ORIGIN"<<endl;
                                                             cin>>check;
                                                             L[no2-1].originofflight(no2);
                                                             break;

                                                      case 2:
                                                             cout<<"ENTER FLIGHT NO : "<<endl;
                                                             cin>>no2;
                                                             cout<<"ENTER NEW DESTINATION"<<endl;
                                                             cin>>check;
                                                             L[no2-1].destinationofflight(no2);
                                                             break;

                                                      case 3:
                                                             cout<<"ENTER FLIGHT NO : "<<endl;
                                                             cin>>no2;
                                                             L[no2-1].change_L_time();
                                                             break;
                                                   }
                                             break;

                                             case 4:
                                                   int no1;
                                                   cout<<"PRESS 1) TO CHANGE ORIGIN"<<endl;
                                                   cout<<"PRESS 2) TO CHANGE DESTINATION"<<endl;
                                                   cout<<"PRESS 3) TO CHANGE TIME"<<endl;
                                                   cin>>option4;
                                                   switch(option4)
                                                   {
                                                      case 1:
                                                             cout<<"ENTER FLIGHT NO : "<<endl;
                                                             cin>>no1;
                                                             cout<<"ENTER NEW ORIGIN"<<endl;
                                                             cin>>check;
                                                             I[no1-1].originofflight(no1);
                                                             break;

                                                      case 2:
                                                             cout<<"ENTER FLIGHT NO : "<<endl;
                                                             cin>>no1;
                                                             cout<<"ENTER NEW DESTINATION"<<endl;
                                                             cin>>check;
                                                             I[no1-1].destinationofflight(no1);
                                                             break;

                                                      case 3:
                                                             cout<<"ENTER FLIGHT NO : "<<endl;
                                                             cin>>no1;
                                                             I[no1-1].change_I_time();
                                                             break;
                                                   }
                                             break;
                                          }

                                      case 0:
                                             break;
                                }

                                          
         
                                                      
                              
                              break;


                        case 2:
                               int opt1,opt2;
                               cout<<"**************WELCOME PASSENGER**************"<<endl;
                               cout<<"PRESS 1) LOGIN"<<endl;
                               cout<<"PRESS 2) NEW ACCOUNT"<<endl;
                               cout<<"PRESS 0) EXIST"<<endl;

                               cin>>opt1;


                               switch (opt1)
                               {case 1:
                                       P.setusername();
                                       P.setpassword();
                                       P.setCNIC();
                                      
                                      
                                       P.existing_login();

                                       cout<<"PRESS 1) FOR LOCAL FLIGHT SCHEDULE"<<endl;
                                       cout<<"PRESS 2) FOR INTERNATIONAL FLIGHT SCHEDULE"<<endl;
                                       cout<<"PRESS 3) FOR LOCAL FLIGHT BOOKING"<<endl;
                                       cout<<"PRESS 4) FOR INTERNATIONAL FLIGHT BOOKING"<<endl;
                                       cout<<"PRESS 5) FOR BOOKING CANCELLATION"<<endl;
                                       cout<<"PRESS 6) FOR TRAVEL HISTORY"<<endl;
                                       cout<<"PRESS 7) FOR SHORTEST ROUTE OF AMERICA"<<endl;
                                       cin>>opt2;
                                       switch(opt2)
                                       {
                                         case 1:
                                                cout<<"************LOCAL FLIGHTS SCHEDULE**************"<<endl;
   cout<<"FLIGHT NO" << "	" << "ORIGIN" << "			  " << "DESTINATION"  << "	   " <<  "DEP TIME"<<"		"<<"ARRIVAL TIME"<<"   "<<"FLIGHT HOURS"<<"      "<<"TICKET COST"<<endl;
                                               for(int i=0 ; i<15 ; i++)
                                               {
                                                 L[i].Display();
                                               }
                                         break;

                                         case 2:
                                                
                                                  cout<<"************INTERNATIONAL FLIGHTS SCHEDULE**************"<<endl;
   cout<<"FLIGHT NO" << "	" << "ORIGIN" << "			  " << "DESTINATION"  << "         " <<  "DEP TIME"<<"		"<<"ARRIVAL TIME"<<"   "<<"FLIGHT HOURS"<<"      "<<"TICKET COST"<<endl;
                                               for(int i=0 ; i<5 ; i++)
                                               {
                                                 I[i].Display();
                                               }
                                          break;
                                          
                                          case 3:
                                                 B.local_flight_passenger();
                                                 
                                                 cout<<"Enter flight_no "<<endl;
                                                 cin>>F_NO;
                                                 T_NO=rand()%500;

                                                 cout<<"PRESS 1) FOR BUSSINESS CLASS"<<endl;
                                                 cout<<"PRESS 2) FOR ECONOMY CLASS"<<endl;
                                                 cin>>Class;
                                                 switch (Class){
                                                 case 1:
                                                 cout<<"__________________TICKET___________________"<<endl;
                                                 cout<<"TICKET NO : "<<T_NO<<endl;
                                                 cout<<"FLIGHT NO : "<<F_NO<<endl;
                                                 cout<<"ORIGIN OF FLIGHT : "<<L[F_NO-1].getorigin()<<endl;
                                                 cout<<"DESTINATION OF FLIGHT : "<<L[F_NO-1].getdestination()<<endl;
                                                 cout<<"TICKET PRICE : "<<L[F_NO-1].getfullcost()<<endl;
                                                 cout<<"HAVE A SAFE JOURNEY"<<endl;
                                                 cout<<"___________________________________________"<<endl;
                                                 L[F_NO].change_Bseat();
                                                 break;
                                                 
                                                 case 2:
                                                 cout<<"__________________TICKET___________________"<<endl;
                                                 cout<<"TICKET NO : "<<T_NO<<endl;
                                                 cout<<"FLIGHT NO : "<<F_NO<<endl;
                                                 cout<<"ORIGIN OF FLIGHT : "<<L[F_NO-1].getorigin()<<endl;
                                                 cout<<"DESTINATION OF FLIGHT : "<<L[F_NO-1].getdestination()<<endl;
                                                 cout<<"TICKET PRICE : "<<L[F_NO-1].getfullcost()<<endl;
                                                 cout<<"HAVE A SAFE JOURNEY"<<endl;
                                                 cout<<"___________________________________________"<<endl;
                                                 L[F_NO].change_Eseat();
                                                 break;
                                                 }
                                                 break;

                                          case 4:
                                                 B.international_flight_passenger();
                                                 
                                                 cout<<"Enter flight_no "<<endl;
                                                 cin>>F_NO;
                                                 T_NO=rand()%500;

                                                 cout<<"PRESS 1) FOR BUSSINESS CLASS"<<endl;
                                                 cout<<"PRESS 2) FOR ECONOMY CLASS"<<endl;
                                                 cin>>Class;
                                                 switch (Class){
                                                 case 1:
                                                 cout<<"__________________TICKET___________________"<<endl;
                                                 cout<<"TICKET NO : "<<T_NO<<endl;
                                                 cout<<"FLIGHT NO : "<<F_NO<<endl;
                                                 cout<<"ORIGIN OF FLIGHT : "<<I[F_NO-1].getorigin()<<endl;
                                                 cout<<"DESTINATION OF FLIGHT : "<<I[F_NO-1].getdestination()<<endl;
                                                 cout<<"TICKET PRICE : "<<I[F_NO-1].getfullcost()<<endl;
                                                 cout<<"HAVE A SAFE JOURNEY"<<endl;
                                                 cout<<"___________________________________________"<<endl;
                                                 I[F_NO].change_Bseat();
                                                 break;
                                                 
                                                 case 2:
                                                 cout<<"__________________TICKET___________________"<<endl;
                                                 cout<<"TICKET NO : "<<T_NO<<endl;
                                                 cout<<"FLIGHT NO : "<<F_NO<<endl;
                                                 cout<<"ORIGIN OF FLIGHT : "<<I[F_NO-1].getorigin()<<endl;
                                                 cout<<"DESTINATION OF FLIGHT : "<<I[F_NO-1].getdestination()<<endl;
                                                 cout<<"TICKET PRICE : "<<I[F_NO-1].getfullcost()<<endl;
                                                 cout<<"HAVE A SAFE JOURNEY"<<endl;
                                                 cout<<"___________________________________________"<<endl;
                                                 I[F_NO].change_Eseat();
                                                 break;
                                                 }
                                                 break;
                                          case 5:
                                                 cout<<"YOUR BOOKING HAS BEEN CANCELLED WITH THE DEDUCTION OF  25%"<<endl;
                                                 break;

                                          case 7:
                                                 cout<<"****************************SPECIAL FLIGHT TO AMERICA***************************"<<endl;
                                                  cout<<"SHORTEST ROUTE:"<<endl;
                cout<<"The shortest distance (air line) between Pakistan and Usa is 7,560.61 mi (12,167.63 km)."<<endl;
                                                  cout<<"HOURS:"<<endl;
                                                  cout<<"15 HOURS 5 MINUTE."<<endl;
                                                 break;


                                          case 6:
                                                 ifstream txtfile("history.txt");
                                                 string str;
                                                 while (getline(txtfile, str)) {
                                                 cout << str << "\n";}
                                        
                                       }
                     
                                 break;

                                case 2:
                                       P.setusername();
                                       P.setpassword();
                                       P.setCNIC();
                                       P.setage();
                                       P.registration();
                                       P.setpassport();
                                       P.setaccountno();
                                       
                                       P.new_login();


                                       cout<<"PRESS 1) FOR LOCAL FLIGHT SCHEDULE"<<endl;
                                       cout<<"PRESS 2) FOR INTERNATIONAL FLIGHT SCHEDULE"<<endl;
                                       cout<<"PRESS 3) FOR LOCAL FLIGHT BOOKING"<<endl;
                                       cout<<"PRESS 4) FOR INTERNATIONAL FLIGHT BOOKING"<<endl;
                                       cout<<"PRESS 5) FOR BOOKING CANCELLATION"<<endl;
                                       cin>>opt2;
                                       switch(opt2)
                                       {
                                         case 1:
                                                cout<<"************LOCAL FLIGHTS SCHEDULE**************"<<endl;
   cout<<"FLIGHT NO" << "	" << "ORIGIN" << "			  " << "DESTINATION"  << "	   " <<  "DEP TIME"<<"		"<<"ARRIVAL TIME"<<"   "<<"FLIGHT HOURS"<<"      "<<"TICKET COST"<<endl;
                                               for(int i=0 ; i<15 ; i++)
                                               {
                                                 L[i].Display();
                                               }
                                         break;

                                         case 2:
                                                
                                                  cout<<"************INTERNATIONAL FLIGHTS SCHEDULE**************"<<endl;
   cout<<"FLIGHT NO" << "	" << "ORIGIN" << "			  " << "DESTINATION"  << "         " <<  "DEP TIME"<<"		"<<"ARRIVAL TIME"<<"   "<<"FLIGHT HOURS"<<"      "<<"TICKET COST"<<endl;
                                               for(int i=0 ; i<5 ; i++)
                                               {
                                                 I[i].Display();
                                               }
                                          break;
                                          
                                          case 3:
                                                 B.local_flight_passenger();
                                                 
                                                 cout<<"Enter flight_no "<<endl;
                                                 cin>>F_NO;
                                                 T_NO=rand()%500;
                                                 
                                                 cout<<"PRESS 1) FOR BUSSINESS CLASS"<<endl;
                                                 cout<<"PRESS 2) FOR ECONOMY CLASS"<<endl;
                                                 cin>>Class;
                                                 switch (Class){
                                                 case 1:
                                                 cout<<"__________________TICKET___________________"<<endl;
                                                 cout<<"TICKET NO : "<<T_NO<<endl;
                                                 cout<<"FLIGHT NO : "<<F_NO<<endl;
                                                 cout<<"ORIGIN OF FLIGHT : "<<L[F_NO-1].getorigin()<<endl;
                                                 cout<<"DESTINATION OF FLIGHT : "<<L[F_NO-1].getdestination()<<endl;
                                                 cout<<"TICKET PRICE : "<<L[F_NO-1].getfullcost()<<endl;
                                                 cout<<"HAVE A SAFE JOURNEY"<<endl;
                                                 cout<<"___________________________________________"<<endl;
                                                 L[F_NO].change_Bseat();
                                                 break;
                                                 
                                                 case 2:
                                                 cout<<"__________________TICKET___________________"<<endl;
                                                 cout<<"TICKET NO : "<<T_NO<<endl;
                                                 cout<<"FLIGHT NO : "<<F_NO<<endl;
                                                 cout<<"ORIGIN OF FLIGHT : "<<L[F_NO-1].getorigin()<<endl;
                                                 cout<<"DESTINATION OF FLIGHT : "<<L[F_NO-1].getdestination()<<endl;
                                                 cout<<"TICKET PRICE : "<<L[F_NO-1].getfullcost()<<endl;
                                                 cout<<"HAVE A SAFE JOURNEY"<<endl;
                                                 cout<<"___________________________________________"<<endl;
                                                 L[F_NO].change_Eseat();
                                                 break;
                                                 }
                                                 
                                                 break;

                                          case 4:
                                                 B.international_flight_passenger();
                                                 
                                                 cout<<"Enter flight_no "<<endl;
                                                 cin>>F_NO;
                                                 T_NO=rand()%500;

                                                 cout<<"PRESS 1) FOR BUSSINESS CLASS"<<endl;
                                                 cout<<"PRESS 2) FOR ECONOMY CLASS"<<endl;
                                                 cin>>Class;
                                                 switch (Class){
                                                 case 1:
                                                 cout<<"__________________TICKET___________________"<<endl;
                                                 cout<<"TICKET NO : "<<T_NO<<endl;
                                                 cout<<"FLIGHT NO : "<<F_NO<<endl;
                                                 cout<<"ORIGIN OF FLIGHT : "<<I[F_NO-1].getorigin()<<endl;
                                                 cout<<"DESTINATION OF FLIGHT : "<<I[F_NO-1].getdestination()<<endl;
                                                 cout<<"TICKET PRICE : "<<I[F_NO-1].getfullcost()<<endl;
                                                 cout<<"HAVE A SAFE JOURNEY"<<endl;
                                                 cout<<"___________________________________________"<<endl;
                                                 I[F_NO].change_Bseat();
                                                 break;
                                                 
                                                 case 2:
                                                 cout<<"__________________TICKET___________________"<<endl;
                                                 cout<<"TICKET NO : "<<T_NO<<endl;
                                                 cout<<"FLIGHT NO : "<<F_NO<<endl;
                                                 cout<<"ORIGIN OF FLIGHT : "<<I[F_NO-1].getorigin()<<endl;
                                                 cout<<"DESTINATION OF FLIGHT : "<<I[F_NO-1].getdestination()<<endl;
                                                 cout<<"TICKET PRICE : "<<I[F_NO-1].getfullcost()<<endl;
                                                 cout<<"HAVE A SAFE JOURNEY"<<endl;
                                                 cout<<"___________________________________________"<<endl;
                                                 I[F_NO].change_Eseat();
                                                 break;
                                                 }
                                                 break;
                                          case 5:
                                                 cout<<"YOUR BOOKING HAS BEEN CANCELLED WITH THE DEDUCTION OF 25%"<<endl;
                                                 break;

                        
                                       }
                     
                                       break;
                                case 0:
                                       break;
                              }
                                       
                                        
                                          
                               
                              break;

                        case 3:
                               
                               cout<<"WELCOME TO FLIGHT SCHEDULE"<<endl;
                               cout<<"PRESS 1) FOR LOCAL FLIGHT SCHEDULE"<<endl;
                               cout<<"PRESS 2) FOR INTERNATIONAL FLIGHT SCHEDULE"<<endl;
                               cout<<"PRESS 0)EXIT"<<endl;
                               cin>>O;
                               switch (O)
                               {
                                     case 1:
                                             
                                             cout<<"************LOCAL FLIGHTS SCHEDULE**************"<<endl;
   cout<<"FLIGHT NO" << "	" << "ORIGIN" << "			  " << "DESTINATION"  << "	   " <<  "DEP TIME"<<"		"<<"ARRIVAL TIME"<<"   "<<"FLIGHT HOURS"<<"      "<<"TICKET COST"<<endl;
                                       for(int i=0 ; i<15 ; i++)
                                       {
                                         L[i].Display();
                                        }
                                      break;
                                            


                                      case 2:

                                             cout<<"************INTERNATIONAL FLIGHTS SCHEDULE**************"<<endl;
   cout<<"FLIGHT NO" << "	" << "ORIGIN" << "			  " << "DESTINATION"  << "         " <<  "DEP TIME"<<"		"<<"ARRIVAL TIME"<<"   "<<"FLIGHT HOURS"<<"      "<<"TICKET COST"<<endl;
                                               for(int i=0 ; i<5 ; i++)
                                               {
                                                 I[i].Display();
                                               }
                                       break;

                                       case 0:
                                              break;
                                }
                                             

                                             
                               
                       
                               break;
                     }

                      cout<<"***************MENUE*****************"<<endl;
                      cout<<endl;
                      cout<<"PRESS 1) ADMIN"<<endl;
                      cout<<"PRESS 2) PASSENGER"<<endl;
                      cout<<"PRESS 3) BASIC DETAILS OF NPAFS"<<endl;
                      cout<<"PRESS 4) EXIT"<<endl;

                      cin>>option;
   }

      delete[] L;
      delete[] I;      


    

    
    return 0;
}       
