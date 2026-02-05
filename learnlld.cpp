#include<iostream>
#include<fstream>
#include<string>
using namespace std;

class car{
    public:
    virtual void start()=0; // pure virtual function
    virtual void shiftGear(int gear )=0; // pure virtual function
    virtual void accelerate(int speed)=0; 
    virtual void stop()=0;
    virtual ~car(){} // virtual destructor
};
class sport :public car{

}
int main(){
    return 0;
}