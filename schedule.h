/* MAHNOOR AKHTAR
   20I-0635
   PROJECT
*/






#include<iostream>
#include<cstdlib>
#include<fstream>
#include<string>

using namespace std;



#ifndef SCHEDULE_H_
#define SCHEDULE_H_
class schedule : public login
{
    protected:
           int flight_hours;
           int D_hrs;
           int D_mins;
           int D_sec;
           int A_hrs;
           int A_mins;
           int A_sec;
           int E_seats;
           int B_seats;
           int flight_no;
           double cost;
           string origin;
           string destination;
    public:
           
           schedule()
           {}
        
           void seed()

           {srand(time(0));}

           void available_seats()
           {
              E_seats=50;
              B_seats=10;
           }

           void flight_number(int flight_no)
           {
              this->flight_no = flight_no;
           }


         


           void change_Eseat()
           {
               E_seats=E_seats--;
              
               
           }

           void change_Bseat()
           {
              B_seats=B_seats--;
               
           }
        
       
           string getorigin()const
           {return origin;}

           string getdestination()const
           {return destination;}

           double getfullcost()const
           {return cost;}

            
           double getdiscost()
           {
              cost -= (cost*0.1);
              return cost;
           }

           
               

           void Display()
           {
             cout<<flight_no<<"   		" << origin << "	   " << destination << "	 " <<"|"<< D_hrs<<":"<<D_mins<<":"<<D_sec<<"	  "<<"|"<<A_hrs<<":"<<A_mins<<":"<<A_sec<<"	  "<<"|"<<flight_hours<<"         "<<"|"<<cost<<endl;

           }		
};

#endif

#ifndef LOCAL_FLIGHT_H_
#define LOCAL_FLIGHT_H_

class local_flights : public schedule
{
    public:
          
           void flight_hrs()
           {

             flight_hours = A_hrs-D_hrs;
               
           }

           void flight_number(int flight_no)
           {
                this->flight_no = flight_no;
           }

           void dep_time()
           {
              D_hrs = rand()%14 + 1;
              D_mins = rand()%60;
              D_sec = rand()%60;
            }

            void arrival_time()
            {
              
              A_hrs = rand()%14 + 10;
              A_mins = rand()%60;
              A_sec = rand()%60;
            }

            void originofflight(int i)
            {
                  if(i==1 || i==2)
                  {origin = "North Islamabad Airport";}

                  else if(i==3)
                  {origin = "South Islamabad Airport";}

                  else if(i==4 || i==5)
                  {origin = "North Lahore Airport";}

                  else if(i==6)
                  {origin = "South Lahore Airport";}

                  else if(i==7 || i==8)
                  {origin = "North Quetta Airport";}

                  else if(i==9)
                  {origin = "South Quetta Airport";}

                  else if(i==10 || i==11)
                  {origin = "North Peshawar Airport";}
                  
                  else if (i==12)
                  {origin = "South Peshawar Airport";}
    
                  else if(i==13 || i==14)
                  {origin = "North Karachi Airport";}
 
                  else if(i==15)
                  {origin = "South Karachi Airport";}

             }

            void destinationofflight(int i)
            
             {
                  if(i==5 || i==9)
                  {destination = "Balochistan Airport";}

                  else if(i==4)
                  {destination= "Islamabad Airport";}

                  else if(i==8 || i==2)
                  {destination = "North Lahore Airport";}

                  else if(i==14)
                  {destination = "Multan Airport";}

                  else if(i==13|| i==3)
                  {destination = "North Quetta Airport";}

                  else if(i==12)
                  {destination = "South Quetta Airport";}

                  else if(i==15 || i==1)
                  {destination = "Gilgit Airport";}
                  
                  else if (i==6)
                  {destination = "South Peshawar Airport";}
    
                  else if(i==7 || i==10)
                  {destination = "Swat Airport";}
 
                  else if(i==11)
                  {destination = "South Karachi Airport";}

             }
             void ticket_cost()
             {
               cost = flight_hours * 10000 ;
               cost = cost + (cost/100)*5;
             } 
             
             void change_L_origin()
           {
              cout<<"ENTER NEW ORIGIN : "<<endl;
              cin>>origin;
           }

           void change_L_destination()
           {
              cout<<"ENTER NEW DESTINATION : "<<endl;
              cin>>destination;
           }

           void change_L_time()
           { cout<<"ENTER DEPARTURE TIME : "<<endl;
             cin>>D_hrs>>D_mins>>D_sec;

             cout<<"ENTER ARRIVAL TIME : "<<endl;
             cin>>D_hrs>>D_mins>>D_sec;
           }

            
};

#endif

#ifndef INTERNATIONAL_FLIGHTS_H
#define INTERNATIONAL_FLIGHTS_H

class international_flights: public schedule
{
         
    public:
           void flight_hrs()
           {

             flight_hours = A_hrs-D_hrs;
               
           }

           void flight_number(int flight_no)
           {
                this->flight_no = flight_no;
           }

           void dep_time()
           {
              
              D_hrs = rand()%4 + 1;
              D_mins = rand()%60;
              D_sec = rand()%60;
            }

            void arrival_time()
            {
             
              A_hrs = rand()%14 + 10;
              A_mins = rand()%60;
              A_sec = rand()%60;
            } 

             void originofflight(int k)
             {
               switch (k)
                     {
                         case 1:
                                origin = "North Islamabad Airport";
                          break;

                          case 2:
                                origin = "South Lahore Airport";
                          break;

                          case 3:
                                 origin = "North Peshawar Airport";
                          break;

                          case 4:
                                 origin = "South Quetta Airport";
                          break;
                                
                          case 5: 
                                 origin = "North Karachi Airport";
                          break;
                       }
               } 


                void destinationofflight(int j) 
                {
                   switch(j)
                        {
                            case 1:
                                   destination = "UAE Airport";
                            break;
                     
                            case 2:
                                   destination = "DUBAI Airport";
                            break;

                            case 3:
                                   destination = "SAUDIA ARAB Airport";
                            break;

                            case 4:
                                   destination = "TURKEY Airport";
                            break;

                            case 5:
                                   destination = "PARIS Airport";
                            break;
                       }
               }


               void ticket_cost()
               {
               cost = flight_hours * 20000 ;
               cost = cost + (cost/100)*10;
               } 


               void change_I_origin()
           {
              cout<<"ENTER NEW ORIGIN : "<<endl;
              cin>>origin;
           }

           void change_I_destination()
           {
              cout<<"ENTER NEW DESTINATION : "<<endl;
              cin>>destination;
           }

           void change_I_time()
           { cout<<"ENTER DEPARTURE TIME : "<<endl;
             cin>>D_hrs>>D_mins>>D_sec;

             cout<<"ENTER ARRIVAL TIME : "<<endl;
             cin>>D_hrs>>D_mins>>D_sec;
           }
  
                
};  

#endif   
 
