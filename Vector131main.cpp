#include <iostream>
#include<string>
#include<utility>
#include"includes/Vector131.h"


using namespace std;

                                                    //this is my main file
                                                    //the only thing this mainfile needs is the main function and the class vector131. everything else i can delete out once i make sure i did this right with derrick
                                                    //Question for derrick: do i need to create a main.exe file to connect the functionality, the main and the header files together? I saw them do that in the youtube video
class Vector131
{
    public:

    int n;
    int i;
    



} ;

                         //Question 1.1
void bigOTest1()
{
    //cout<< " its a great day ";
    
    
                   
                    
    int i;
    int n = 10;

   for (i=0 ; i < n; i++ )       //ask professor if he made a mistake on the homework. the homework says we are supposed to do n++ doesn't he mean for us to do i ++? n++ creates an infinite loop // yes professor did mean i++
   {
       cout<< "bigOtest 1 time complexity is " << n << " time steps.\n";   // thats still fine using just 1 line of code
   }


    // for answer we have to put big o notation, time step is optional. Do we write the big o notation as a commment?
    //O(n)
   
  
    
}

            
                         //Question 1.2

void bigOTest2()
{
    int i;
    int n = 100;
    int m = 200;

   for (i=0 ; i < n; i++ )       
   {
                            //this line of code is to test how the for loop works
       //cout<< "bigOtest2 time complexity for n is " << n << " time steps. \n";
   }
   
   for(i=0; i < m; i++)
   {
       //cout<< "bigOtest2 time complexity for m is " << m << " time steps. \n";
   }
   
   cout<< "bigOtest2 time complexity is " << n + m << " time steps. \n";

   //O(n)
}




                //Question 1.3


    void bigOTest3()
    {
        
        int i;
        int n = 100;
        int timeSteps = 0;
        
        for(i=0; i<n; n = n/2)
        {
            timeSteps++;
        }
        
        cout << "bigOtest3 time complexity is " << timeSteps << " time steps.\n";
        
    }
    
                //Question1.4
    
    void bigOTest4()
    {
        int i;
        int n = 10;
        int m = 100;

        for(i = 0; i<n; i++)
        {

            for(i = 0; i<n; m++)
            {
            i++;
            }
        
        cout <<" bigOtest4 time complexity is " << i << " time steps. \n";
        }
        
        //O(n*m)
    }
    
                //Question 1.5
    void bigOTest5()
    {
        
        int i;
        int n = 10;
        
        for(i = 0; i <n; i++)
        {
            for(i =0; i<n; n = n/2)
            {
                cout << "this nested for loop is working";
            }
        }
        
         cout <<" bigOtest5 time complexity is " << i << " time steps. \n";
        
    }
            


int main()
{
    cout<<"Hello World";
    bigOTest1();
    bigOTest2();
    bigOTest3();
    bigOTest4();
    bigOTest5();

    return 0;
}



// push_back means you have an array and you add a value to the back
//push_front means you have an array and you add a value to the front, then you have to renumber everything in the array

//prototype file should be a .h file , should be a basic defintion of what the function is about
// implementation file should 
//style guide just helps give us an idea on how we format our code. as long as its readable and clean and has comments its fine
//make a github repository and submit it from there
//this homework is due friday end of the day
//professor says learning github is mandatory for working in computer science