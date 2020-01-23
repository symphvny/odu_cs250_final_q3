#include <iostream>
#include <string>
#include "prob3_pilot.h"
///#include "prob3_pilot.cpp"
#include "prob3_person.h"
///#include "prob3_person.cpp"
#include "prob3_soldier.h"

using namespace std;
char menu();

int main(){

string tempName, tempRank, tempCert;
char option;

person * pptr=nullptr;
soldier * sptr=nullptr;
pilot * cptr=nullptr;
string cert;
option='a';
while(option!='5')

    {

        option=menu();
        switch(option){

case '1': {pptr = new person();
                cin.ignore();
                    cout<<"Person's Name: "<<endl;
                    getline(cin,tempName);

                    pptr->setName(tempName);
                    }break;

case '2':          {
                    sptr=new soldier();
                    cin.ignore();
                    cout<<"Person's Name: "<<endl;
                    getline(cin,tempName);

                    cout<<"Soldier's Rank: "<<endl;
                    getline(cin,tempRank);

                    sptr->setName(tempName);
                    sptr->setRank(tempRank);

                   }break;

case '3':          {
                    cin.ignore();
                    cout<<"Person's Name: "<<endl;
                    getline(cin,tempName);

                    cout<<"Soldier's Rank: "<<endl;
                    getline(cin,tempRank);

                    sptr->setName(tempName);
                    sptr->setRank(tempRank);

                    cout<<"Certification: "<<endl;
                    getline(cin,tempCert);
                    sptr->setName(tempName);
                    sptr->setRank(tempRank);
                    cptr->setCert(tempCert);

                   }break;


case '4':{
            if(pptr==nullptr){cout<<"No Person"<<endl;}
                ///else{pptr->display();}

            if(sptr==nullptr){cout<<"No Soldier"<<endl;}
                ///else{sptr->display();}
            if(cptr==nullptr){cout<<"No Certification"<<endl;}
                ///else{cptr->display();}
         }break;





}///end of switch
}///end of while

return 0;

}

char menu(){

    cout<<"   MENU   "<<endl;
    cout<<"1. Person's Name: "<<endl;
    cout<<"2. Soldier: "<<endl;
    cout<<"3. Certified?: "<<endl;
    cout<<"4. Display Person, Soldier, and Certification: "<<endl;
    cout<<"5. Quit!"<<endl;
    char option;
    cin>>option;
    return option;
}

