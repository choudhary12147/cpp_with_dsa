#include<iostream>
using namespace std;


/*
polymorphism -> ability of obj to take on different form. or behave in different ways depending on the context in which they used.

 compile time polymorphism

  1.  function overloading
  2.  operator overloading

*/

// class complex{
    
//     int real;
//     int img;

//     public:
     
//      complex(int r , int i){
        
//         real = r;
//         img = i;
//      }

//         void showNum(){
//             cout<<real<<"+"<<img<<"i"<<endl;
//         }


//        complex operator + (complex &c2) {

//               int resreal = this->real + c2.real;
//               int resimg = this->img + c2.img;
                
//                 complex c3(resreal,resimg);

//               return c3;
//        }

     
// };



// int main(){

//    complex c1(1,2);

//    complex c2(3,4);

//    c1.showNum();
//    c2.showNum();


//    complex c3 =  c1 + c2;
     
//      c3.showNum();

//     return 0;
// }


/*
        Runtime polymorphism
        1. functon overriding -> in which parent and child both contain the same fun with different implementation.
         parent class fun called the overridden.
*/


class parent{
    public:
      
      void print(){
        cout<<"print the parent fun"<<endl;
      }
    
};

class child:public parent{

    public:

      void print(){
        cout<<"print the child fun"<<endl;
      }


};


int main(){

      child c1;
      c1.print();

    return 0;
}