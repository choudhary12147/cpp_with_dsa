#include<iostream>
#include<string>
using namespace std;


// class student{
       
//        //properties
// //   public:

//        string name;
//        float cgpa;

//        void percentage(){
//         cout<<"hello buddy ";
//        }

// };

// class user{

// public:
//        string name;
      
//       int age;

//       void print(int age , string name ){

//                    cout<<name<<" is of age "<<age<<endl;             
 
//       }


// };


// int main(){
  
//   student s1;
   
// //    s1.cgpa = 7.69;

//   s1.percentage();

// //   user u1;

// //   u1.print(26,"sunil");


//     return 0;
// }


/*
   Q. getters and setters
*/



// class student{
    
//     string name;
//     float cgpa;

//     public:

//     // setters

//     void setvalue(string nameval , float cgpaval){
//                   name = nameval;
//                   cgpa = cgpaval;
//     }

//     // getters

//     string getname(){
//          return name;
//     }
//     float getcgpa(){
//        return cgpa;
//     }


// };

// int main(){

//              student s1;
            
//              s1.setvalue("sunil",23);

//             cout<<s1.getcgpa()<<endl;
//             cout<<s1.getname()<<endl;

//        return 0;
// }


/*
    constructor
*/



class student{

     
      public:

        string name;
           int age; 
           int *cgpa;      


    
      
    /* non-parameterised constructor */

//        student(){
//            this->name = "sunil";
//            this->age = 23;
//       }


    /* parameterised constructor*/

           
//     student(string nameval , int ageval){
//                  name = nameval;
//                  age = ageval;
//            }
      
//       string getname(){
//              return name;
//       }

//       int getage(){
//          return age;
//       }


     /*copy constructor */

//      student( string name , int age){
              
//               this->name = name;
//               this->age = age;
//               cgpa = new int; //dynamic alloction
//                *cgpa = 77;
//      }

//        /* custom copy constructor */

//        student(student &orignal){
//              cout<<"copy..";
//              name = orignal.name;
//              age = orignal.age;
//              cgpa = orignal.cgpa;
//        }

// };

// int main(){
       
//        student s1("sunil",23);
       
//        /* here the copy constructor is created*/
//        student s2(s1);

       
       

//        cout<<s2.name<<" "<<s2.age<<" "<<*s2.cgpa<<endl;

//        // if we do change in cgpa of s2 then it will also change in s1

//        *s2.cgpa = 80;
       
//        cout<<s1.name<<" "<<s1.age<<" "<<*s1.cgpa<<endl;
   
//        return 0;
// }


/*
      destructor
*/

class 



int main(){


       return 0;
}