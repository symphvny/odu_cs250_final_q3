#ifndef PROB3_H_INCLUDED
#define PROB3_H_INCLUDED
#include <iostream>
#include <string>
using namespace std;

class person{

    public:
        person();
        virtual ~person();

        string getName(){return name;}
        void setName(string value){name=value;}

        void display(){
            cout<<name<<endl;}

    private:
        string name;
};

#endif // PROB3_H_INCLUDED
