/* MAHNOOR AKHTAR
   20I-0635
   PROJECT
*/







#include<iostream>
#include<cstdlib>
#include<fstream>
#include<string>

using namespace std;


#ifndef LOGIN_H_
#define LOGIN_H_



class login
{
     protected:
             string CNIC;
             string username;
             string password;
             string ACC;
             string passport;
             

     public:

            login()
            {}
             
            void setCNIC()
            {
              cout<<"Enter your CNIC"<<endl;
              cin>>CNIC;
              while(CNIC.size()!=13)
              {
                cout<<"YOU HAVE ENTERED WRONG CNIC.Plz enter again"<<endl;
                cin.ignore();
                cin>>CNIC;
              }
            }

             void setusername()
             {
               cout<<"Enter your username"<<endl;
               cin.ignore();
               cin>>username;
             }

             


             void setpassword()
             {
               cout<<"Enter your password"<<endl;
               cin.ignore();
               cin>>password;

               while(password.size()<8)
               {
                 cout<<"You have entered wrong password.Plz enter again"<<endl;   
                 cin>>password;
               }
                 
              
             }

             

             void setpassport()
             {
                cout<<"Enter your passport no : "<<endl;
                cin>>passport;
             }

             string getCNIC()const
             {
               return CNIC;
             }

             string getusername()const
             {
                return username;
             }

             string getpassword()const
             {
                return password;
             }

             
                
};

#endif

#ifndef ADMIN_H_
#define ADMIN_H_
class Admin: public login
{

    private:
            string CN;
            string UN;
            string PW;
            int i;
            
    public:
           
           void existing_login()
             {
              ifstream infile("admin.txt");
              infile>>UN;
              infile>>PW;
              infile>>CN;
              

              while (!infile.eof( ))
              {
                  if(UN==username && PW==password && CN==CNIC)
                  {i=1;
                   break;
                  }

                  else{ 
                  i=0;
                  infile>>UN;
                  infile>>PW;
                  infile>>CN;
                  }

              }

             if(i==1)
             {
                 cout<<"YOU HAVE SUCCESSFULLY LOGIN"<<endl;
             }

             else
               {cout<<"YOU have entered wrong LOGIN ID details"<<endl;
                exit(0);
               }
            
             infile.close();
            }

            
};

#endif

#ifndef PASSENGER_H_
#define PASSENGER_H_

class passenger: public login
{

    private:
            string CN;
            string UN;
            string PW;
            string Registration_details[3];
            int age;
            int i;           
    public:
            passenger()
            {}

            
           
           void existing_login()
             {
              ifstream infile("passenger.txt");
              infile>>UN;
              infile>>PW;
              infile>>CN;
              

              while (!infile.eof( ))
              {
                  if(UN==username && PW==password && CN==CNIC)
                  {i=1;
                   break;
                  }

                  else{ 
                  i=0;
                  infile>>UN;
                  infile>>PW;
                  infile>>CN;
                  }

              }

             if(i==1)
             {
                 cout<<"YOU HAVE SUCCESSFULLY LOGIN"<<endl;
             }

             else
               {cout<<"YOU have entered wrong LOGIN ID details"<<endl;
                exit(0);
               }
            
             infile.close();
            

              
            }

            void new_login()
            {
              
              ofstream myfile;
              myfile.open("passenger.txt" , ios::app);
              
              myfile<<username<<" ";
              myfile<<password<<" ";
              myfile<<CNIC<<" ";
              myfile<<passport<<" ";
              myfile<<ACC<<endl;
              myfile.close();
           }

            void setage()
            {
              cout<<"ENTER YOUR AGE"<<endl;
              cin>>age;
            }

            int getage()const
            {
               return age;
            }

            void registration()
            {
               for(int i=0 ; i<3 ; i++)
               {
                  cout<<"Enter your " << i+1 <<" Registration detail"<<endl;
                  cin>>Registration_details[i];
               }
            }

           string getusername()const
           {
             return username;
           }

            void setaccountno()
            {
              cout<<"Enter your account no : "<<endl;
              cin>>ACC;
            }
                

          
};
#endif

