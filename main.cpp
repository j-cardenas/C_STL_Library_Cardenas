/* 
    Unit 2 Assignment – C STL Library
    Author: Jesus Cardenas
    Class: COSC-1437
    Teacher: Dr_T

*/


#include <iostream>
#include <vector>
#include <algorithm> 
#include <string>
#include <stack>
#include <cassert>
#include <set>
#include <utility>
#include <map>
using namespace std; 
typedef map<string, int> MapT;
typedef MapT::const_iterator MapIterT;




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

    cout<<"\n\nstd::set\n";
    set <int> iset;   //set of uniqure integer numbers
    iset.insert(11);  //populate set with some values
    iset.insert(-11);
    iset.insert(55);
    iset.insert(22);
    iset.insert(22);
    if( iset.find(55) !=iset.end() ){ //is value already stored?
      iset.insert(55);
    }
    assert(iset.size()==4 );      //one way to check values 
    set<int>::iterator it1;
    for ( it1 = iset.begin(); it1 !=iset.end(); it1++){ //prints values on the set
      cout<<" "<< *it1;
    }



    /****Section_Name****Pair_Structure*/

    cout<<"\n\nPair structure\n";
    pair< string, string > strstr;  //creating a pair to hold 2 strings
    strstr.first = "Hello";         //first string
    strstr.second = "World";        //second string

    pair< int, string > intstr;    //creating a pair that holds one int and string
    intstr.first =1;               //first half of the pair is an int
    intstr.second = "one";         //second half of the pair in a string

    pair< string, int > strint( "two", 2);
    assert(strint.first =="two");
    assert(strint.second == 2);

    cout<<"Nothing to see here: ¯\\_(ツ)_/¯";

    /****Section_Name**** Map_Insert*/
    MapT amap;
    pair< MapIterT, bool> result =
        amap.insert( make_pair( "Fred", 45) );

      assert( result.second == true);
      assert( result.first->second == 45 );

      result = amap.insert ( make_pair ( "Fred", 54) );

      //Fred was already in the map, and result.first
      // simply points there now:
      assert( result.second == false );
      assert( result.first->second == 45 );






    /****Section_Name****Map_Summary*/
    cout<<"\n\nMap Summary"<<endl;

    map< string, string > phone_book; //creating a map with 2 strings
    phone_book[ "411" ] = "Directory"; 
    phone_book[ "911" ] = "Emergency";
    phone_book[ "508-678-2811" ] = "BCC";
    if ( phone_book.find( "411" ) != phone_book.end()  ){
      phone_book.insert(
        make_pair(
          string ("411"),
          string ("Directory" )
        )
      );
    }
    assert( phone_book.size() ==3 );
    map< string, string >::const_iterator it2;
    for ( it2 = phone_book.begin(); it2 != phone_book.end(); ++it2 ){

      cout
        <<" "<< it2->first    //referencing first
        <<" " <<it2->second   //referencing second
        << endl
        ;
    }
    
    /****Section_Name**** Sort_Algorithm*/
    int arr[100]; //creating an array
    sort( arr, arr +100); //sorting array
    vector <int> v1;    //creating a vector
    sort( v1.begin(), v1.end() ); //sorting the vector
    
   

    /****Section_Name****Predicate_Algorithm
    bool less_than_7 (int value)      //creating bool function
    {

      return value < 7 ;    //Will check if value is less than 7
    }
    vector<int> v2;         //creating vector called v2
    int count_less = std::count_if ( v2.begin(), v2.end(), less_than_7 ); //Will check to see if the value in the vector is between the range, if it is then it will be added to count count_less
    

    */
      return 0; 
 }