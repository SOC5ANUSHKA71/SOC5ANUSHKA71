#include <iostream>
using  namespace std;

class Animal
{
public:
void eat ()
{
cout<<"eating";
}
};
class dog: public Animal
{
public:
void bark ()
 {
cout<<"barking";
}};
 
intmain()
{
Dog d;
d.eat();
d.bark();
 return 0;
}


