#include<iostream>
using namespace std;
class player{
private:
    int score;
    int health;
    int age;
    int alive;
public:
    int gethealth(){
        return health;
    }
     int getage(){
        return age;
    }
     int getscore(){
        return score;
    }
     int isAlive(){
        return alive;
    }
    int sethealth(int health){
        this.health = health;
    }
     int setage(int age){
        this.age = age;
    }
     int setscore(int score){
        this.score=score; 
    }
     int setIsAlive(bool alive){
        this.alive=alive;
    }
};
int addscore(player a,player b)
return a.getscore()+b.getscore();
    int main(){
        player amit;
        player raghav;  //object creation
       
        amit.setscore(90);
        amit.sethealth(100);
        amit.setage(23);
        amit.IsAlive(true);
        
         raghav.setscore(90);
        raghav.sethealth(100);
        raghav.setage(23);
        raghav.IsAlive(true);

       cout<< addscore(amit,raghav);// using objects as perimeter
        
        
    }