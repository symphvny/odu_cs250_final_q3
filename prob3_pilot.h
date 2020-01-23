#ifndef PROB3_PILOT_H_INCLUDED
#define PROB3_PILOT_H_INCLUDED
#include "prob3_soldier.h"
#include <string>
using namespace std;

class pilot: public soldier
{

    public:
        pilot();
        virtual ~pilot(){};

        string getCert(){return cert;}
        void setCert(string value){cert=value;}

        void display();

    private:
        string cert;

};



#endif // PROB3_PILOT_H_INCLUDED
