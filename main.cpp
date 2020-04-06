/* 
    Unit 2 Assignment – C STL Library
    Author: Jesus Cardenas
    Class: COSC-1437
    Teacher: Dr_T

*/

#include "Vector_as_Class.h"
#include <iostream>
#include <vector>
#include <algorithm> 
#include <string>
#include <stack>
#include <cassert>
using namespace std; 

//Credit https://www.geeksforgeeks.org/passing-vector-constructor-c/ clarifications added
class MyClassVector1 
  { 
    private:  
        vector<int> vec; 
    public: 
        MyClassVector1 (vector<int> v)  //parameterized constructor
        { 
          vec = v; 
        } 
        void print() 
        { 
            /// print the value of vector 
            for (int i = 0; i < vec.size(); i++) 
            {
                cout << vec[i] << " "; 
            }    
        } 
  };

class MyClassVector2 { 
  private:
    vector<int> vec; 
  
  public: 
    MyClassVector2(vector<int> v) : vec(v) 
    { 
    } 
    void print() 
    { 
        /// print the value of vector 
        for (int i = 0; i < vec.size(); i++) 
            cout << vec[i] << " "; 
    } 
  };   
  

class MyClassVector3 { 
  private:
    vector<int>& vec; 
  
  public: 
      // this is the right way to assign 
      // the reference of stl container 
      MyClassVector3(vector<int>& arr) 
          : vec(arr) 
      { 
      } 
      void print() 
      { 
          /// print the value of vector 
          for (int i = 0; i < vec.size(); i++) 
              cout << vec[i] << " "; 
      } 
  }; 
  







int main() 
{
    /****Section_Name***Vectors*/ 
    //Write the base code for: 5. std::vector example
    vector<double> vd; //vd elments are floating point numbers
    vector<int> vi; //vi elements are integer numbers 
    vector<string> vs; //vs elements are string objects 

    //Expand this code to:

    //add 3 elements to the vd vector
    vd.push_back(0.01);
    vd.push_back(5.2);
    vd.push_back(69.70);


    //add 3 elements to the vi vector
    vi.push_back(1);
    vi.push_back(20);
    vi.push_back(50);

   // add 3 elements to the vs vector
   vs.push_back("Hello");
   vs.push_back("world");
   vs.push_back("!");

   // display the 3 elements in the vd vector
   cout << "\nValues in vd: \n"; 
   for(double vals : vd)
   {
     cout << vals << endl; 
   }

   
    //display the 3 elements in the vi vector
    cout << "\nValues in vi: \n"; 
   for(double vals : vi)
   {
     cout << vals << endl; 
   }
   // display the 3 elements in the vs vector
  cout << "\nValues in vs: " << endl; 
   for(int i = 0; i < vs.size(); i++)
   {
     cout << vs[i] << " "; 
   }
   cout<<endl;



    /****Section_Name***Vector_as_Class_Member*/ 
    //Credit https://www.geeksforgeeks.org/passing-vector-constructor-c/

   cout << "\n\nPassing vector object to a constructor." << endl; 
    vector<int> vec; 
        for (int i = 1; i <= 5; i++) 
            vec.push_back(i); 
        MyClassVector1 obj(vec); 
        obj.print(); 
      
    
     cout<<"\n\nInitializing vector object using initializer list."<<endl;
    vector<int> vec2; 
    for (int i = 1; i <= 5; i++) 
        vec2.push_back(i); 
    MyClassVector2 obj2(vec2); 
    obj2.print();
    

      cout<<"\n\nCPP program to initialize a vector reference."<<endl;
    vector<int> vec3; 
    for (int i = 1; i <= 5; i++) 
        vec3.push_back(i); 
    MyClassVector3 obj3(vec3); 
    obj3.print();
    

 
    /****Section_Name***STL_Iterators*/ 

      vector <int> vint (10); //vector with 10 integer numbers
      vint[0] = 10;
      vint[1] = 20;
      vint[2] = 30;
      vint[3] = 40;
      vint[4] = 50;
      vint[5] = 60;
      vint[6] = 70;
      vint[7] = 80;
      vint[8] = 90;
      vint[9] = 100;

      //Display elements of the vector:
      cout<<"\n\nSTL Iterator:";
      vector<int>::iterator it;
      for (it = vint.begin(); it != vint.end(); ++it)  {
        cout<<" "<< *it;
      }


    /****Section_Name*** Stack*/


    stack<int> st;
    
    st.push (100);            //Pushes an int value to the top of the stack.
    assert (st.size()==1 );   //Tells us how many elements are on the stack.
    assert (st.top() ==100);  //verifies element value
    
    st.top()=456;             //Assigns new value to the top
    assert(st.top()== 456);

    st.pop();                 //Removes the top(peek) item.
    assert(st.empty()==true); //Tells us if the stack is empty or not.

    //A good way to understand stack and see how it can be used without being too complicated:
    // https://www.youtube.com/watch?v=XSdXSmwb550
    

    /****Section_Name**** Set*/
    //Write the code as presented in: 3. std::set

    //Write comments that help one better understand what the code is doing.

    /****Section_Name****Pair_Structure*/
    //Write the code as presented in: 4. std::pair structure

    //Write comments that help one better understand what the code is doing.

    /****Section_Name**** Map_Insert*/
    //Write the code as presented in: 14. std::map::insert

    //Write comments that help one better understand what the code is doing.

    /****Section_Name****Map_Summary*/
    //Write the code as presented in: 16. Map summary

    //Write comments that help one better understand what the code is doing.

    /****Section_Name**** Sort_Algorithm*/
    //Write the code as presented in: 23. sort example

    //Write comments that help one better understand what the code is doing.

    /****Section_Name****Predicate_Algorithm*/
    //Write the code as presented in: 25. count_if and predicate function

    //Write comments that help one better understand what the code is doing. 

      return 0; 
 }