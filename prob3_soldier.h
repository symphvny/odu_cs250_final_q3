#ifndef PROB3_SOLDIER_H_INCLUDED
#define PROB3_SOLDIER_H_INCLUDED
#include "prob3_person.h"
#include <string>
#include <iostream>
using namespace std;

class soldier: public person{

    public:
        soldier();
        virtual ~soldier();

        string getRanking(){return ranking;}
        void setRank(string value){ranking = value;}

        void display();

    private:
        string ranking;

};

#endif // PROB3_SOLDIER_H_INCLUDED
