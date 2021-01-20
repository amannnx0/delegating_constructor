#include<iostream>
#include<string>
using namespace std;

class Player{
private:
    std::string name;
    int health;
    int xp;
public:
    Player();
    Player(std::string name_val);
    Player(std::string name_val,int health_val,int xp_val);
};

Player::Player()
    :Player("none",0,0){
        cout<<"\nNo-Args constructor";
    }

Player::Player(std::string name_val)
    :Player(name_val,0,0){
        cout<<"\nOne Args constructors";
    }

Player::Player(std::string name_val,int health_val,int xp_val)
    :name(name_val),health(health_val),xp(xp_val){
        cout<<"\nThree Args constructor";
    }





int main(){
    Player empty;
    Player Aman("Aman");
    Player Bot("Bot",69,69);
    return 0;
}
