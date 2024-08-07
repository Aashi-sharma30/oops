// create a class" cricketer" that contains name of cricketer,his age,number of test matches,that he has played and the average runs that he has scored in each test match.
// create an array of data type"cricketer" to hold records of 20 such cricketers and then write a program to read these recods
#include<iostream>
using namespace std;
class cricketer {
    char name;
    int age;
    int noOfTestMatches;
    int averageScore;
};
int main(){
    vector<cricketer>cricketers;
    // freeopen("input.txt","r",stdin);
    // freeopen ("output.txt","w",stdout);
    // #endif
    // cout<<"\n\n\n\n";
    // #ifndef ONLINE_JUDGE


// statically
    Cricketer virat;
    virat.name='V';
    virat.age=30;
    virat.noOfTestMatches=100;
    virat.averageSocre=80;

    Cricketer dhoni;
    dhoni.name='V';
    dhoni.age=40;
    dhoni.noOfTestMatches=80;
    dhoni.averageSocre=100;


//dynamically
for(int i=0;i<=20;i++){
    Cricketer *cricketer=new cricketer;
    cricketer->name="  ";
    cricketer->age-=" ";

    cricketers.add(*cricketer);

}

     Cricketer cricketers[2]={virat,dhoni}; // add virat and dhoni to the array
for(int i=0;i<2;i++){
    cout<<cricketers[i].name;
    cout<<cricketers[i].age;
    cout<<cricketers[i].noOfTestMatches;
}

}
