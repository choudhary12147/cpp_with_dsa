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



// class student{

     
//       public:

//         string name;
//            int age; 
//            int *cgpa;         
      
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
      constructor
*/

// class car{
    
//       string name;

//        string color;

//        public:
//         car(string nameval , string colorval){
            
//             name = nameval;
//             color = colorval;

//            cout<<"constructor is called\n";
//        }
     
//      void start(){
//         cout<<"car is started";
//      }

//      void stop(){
//         cout<<"car is stop";
//      }

//      //getters 

//      string getname(){
//         return name;
//      }

//      string getcolor(){
//         return color;
//      }


// };



// int main(){
         
//          car c1("maruti","red");

//          cout<<c1.getname()<<endl;

//        return 0;
// }


/*
    copy constructor :- used to copy properties of one object into another
*/

// class car{

//    public:

//    string name;
//    string color;
       
//        car(string name , string color){
         
//          this->name = name;
//          this->color = color;
//        }

// };



// int main(){
          
//           car c1("maruti","white");

//           car c2(c1);

//    // by changing the value of name there is no change in 
//           c2.name = "alto";

//           cout<<c1.name<<endl;
//           cout<<c2.name<<endl;


//     return 0;
// }



/*
    why we use custom copy constructor
        
        because default copy constructor make the shallow copy dynamic allocation 

        if require the deep copy the we use the custom copy constructor

*/

// class car{
     
//      public:
//           string name;
//           string color;
//            int *mileage;


//        car(string name , string color){
//            cout<<"constructor is called"<<endl;

//            this->name = name;
//             this->color = color;
//             mileage = new int;  // dynamic alloctaion
//             *mileage = 12;
//        }

//       car(car &original ){
//            cout<<"copy original to new \n";

//          name = original.name;
//          color = original.color;
//     //    mileage = original.mileage;  // passing the reference that is address of mileage which is already created in heap 
      
//       // for deep copy instead of above line we create a new copy in heap using

//              mileage = new int;

//              *mileage = *original.mileage;
        
//       }

// };



// int main(){

//        car c1("maruti","black");

//          car  c2(c1);

//           cout<<"before change in value of mileage "<<endl;   

//          cout<<*c2.mileage<<endl;
//          cout<<*c1.mileage<<endl;


//          *c2.mileage = 20;
         
//          cout<<"after change in value of mileage in one obj"<<endl;
         
//          cout<<*c2.mileage<<endl;
//          cout<<*c1.mileage<<endl;

//     return 0;
// }


/*
   destructor -> deallocate memory from heap  
*/

// class car{
 
//    public:
      
//       string name;
//       string color;
//       int *mileage;

//         car(string name , string color ){
            
//              this->name = name;
//              this->color = color;

//              mileage = new int;
               
//                *mileage = 20;


//         }
     
//      ~car(){
//            cout<<"delete the heep memory alloction\n";
             
//              if (mileage != NULL)
//              {
//                  delete mileage;
//                  mileage = NULL;  
//              }
             
//      }
 


// };


// int main(){

//     car c1("alto","black");
       
//        cout<<c1.name<<"\n"<<c1.color<<"\n"<<*c1.mileage<<endl;

//     return 0;
// }


/*
      inheritance  -> when properties and member function of base are passed on to the derived class.
*/

  
  /*
       base class /super class/ parent class(class A)
             
             .
             .
             .
             inherit the properties from base class
             .
             .
             .
                         
       derived class / sub class / child class(class B)
  */


// class animal{
    
//     public: 
//      string color;

//      void eat(){
//         cout<<"eats\n";
//      }

//      void breathe(){
//         cout<<"breathes\n";
//      }

// };

// class fish : protected animal{

//     public:
      
//       int fins;
//       void swim(){
//         cout<<"swim\n";
//       }
      

// };



// int main(){

//        animal a1;

//        a1.color = "black";

//       fish f1;

//       f1.color = " black";

//       cout<<f1.color<<endl;

//     return 0;
// }

/*
   multi-level  inheritance
*/

// class animal{
     
//      public:
       
//        void eat(){
               
//                cout<<"eating \n";
//        }
        
//         void breath(){
                  
//                   cout<<"breath\n";
//         }

// };

// class mammel :public animal{
  
//      public:

//        string blodtype = "warm";

//        mammel(){
             
//              this->blodtype = "warm";
//        }           

// };

// class dog: public mammel{
//           public:

//           void tail(){
//             cout<<"dog is tailing\n";
//           }
// };

// int main(){
            
//             dog d1;

//             d1.eat();
//             d1.tail();
//             cout<<d1.blodtype<<endl;

//     return 0;
// }



/*
    multiple inheritance
*/

class Teacher{

public:
     
     int salary;
     string subject;

};

class Student{
     
     public: 
       
       int rollno;
       float cgpa;

};

class TA : public Teacher,public Student{
     public:

        string name;
};

int main(){
     
     TA s1;
     TA t1;

     s1.name = "sunil";
     s1.cgpa = 7.5;
     t1.name = "amit";
     t1.subject = "c++";
     cout<<"student name :"<<s1.name<<"student cgpa is :"<<s1.cgpa<<"teacher name "<<t1.name<<"techers subject "<<t1.subject<<endl;

    return 0;
}