/* MAHNOOR AKHTAR
   20I-0635
   PROJECT
*/



#include<iostream>
#include<cstdlib>
#include<fstream>
#include<string>

#ifndef BOOKING_H_
#define BOOKING_H_

class booking : public login
{
    private:
          
           string check_passport;
           char VISA;
           string check_ACC;
           
           string UN;
           string PW;
           string CN;


          
         
    public:
           booking()
           {}

           ~booking()
            {}

            void local_flight_passenger()
            {
               int k;
               cout<<"ENTER YOUR PASSPORT NO : "<<endl;
               cin>>passport;

               ifstream infile("passenger.txt");
               infile>>UN;
               infile>>PW;
               infile>>CN;
               infile>>check_passport;
              

               while (! infile.eof( ))
                 {
                  if(check_passport==passport)
                  {k=1;
                   break;
                  }

                  else{ 
                  k=0;
                  infile>>UN;
                  infile>>PW;
                  infile>>CN;
                  infile>>passport;
                 
                  }
                }
                
                if(k==1)
                {
                   account_no();
                }

                else
                {
                   cout<<"YOUR PASSPORT NO IS INCORRECT"<<endl;
                   exit(0);
                }
             }

             void international_flight_passenger()
             {
                 int k;
               cout<<"ENTER YOUR PASSPORT NO : "<<endl;
               cin>>passport;

               ifstream infile("passenger.txt");
               infile>>UN;
               infile>>PW;
               infile>>CN;
               infile>>check_passport;
              

               while (! infile.eof( ))
                 {
                  if(check_passport==passport)
                  {k=1;
                   break;
                  }

                  else{ 
                  k=0;
                  infile>>UN;
                  infile>>PW;
                  infile>>CN;
                  infile>>passport;
                 
                  }
                }

                if(k==1)
                {
                   cout<<"DO YOU HAVE YOUR VISA. Y/N"<<endl;
                   cin>>VISA;
                   if(VISA='Y')
                   {
                      account_no();
                   }

                   else
                       { cout<<"YOU CAN'T PROCEED FURTURE"<<endl;
                         exit(0);
                       }
                }

                else
                {
                   cout<<"YOUR PASSPORT NO IS INCORRECT"<<endl;
                   exit(0);
                }
               
               
              
               
               }

             void account_no()
             {
                   int i;
                   cout<<"ENTER YOUR ACCOUNT NO OF 11 DIGITS"<<endl;
                   
                   cin>>ACC;
                   ifstream infile("passenger.txt");
                   infile>>UN>>PW>>CN>>check_passport>>check_ACC;
                  
      
              

              while (! infile.eof( ))
              {
                  if(check_ACC==ACC)
                  {i=1;
                   break;
                  }

                  else{ 
                  i=0;
                  infile>>UN;
                  infile>>PW;
                  infile>>CN;
                  infile>>check_passport;
                  infile>>check_ACC;
                  }

              }
             
               if(i==1)
               {
                  cout<<"YOU MAY CHECK YOUR TRAVEL HISTORY FOR DISCOUNT"<<endl;
               }

               else
                  {cout<<"YOUR ACCOUNT NO IS INCORRECT"<<endl;
                   exit(0);
                  }
              }

              
};

#endif  

