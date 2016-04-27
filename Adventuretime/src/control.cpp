#include "control.h"
#include "iostream"
#include "string"
#include "stdlib.h"

control::control()
{
    //ctor
    for(int i = 0; i < 16; i++){
        choices[i] = 0;
    }
    root = NULL;
    x = 0;
}

control::~control()
{
    //dtor
}


void control::buildTreeEasy(){
    difficulty = 1;

}


void control::buildTreeMedium(){
    difficulty = 2;

}


void control::buildTreeHard(){
    difficulty = 3;

}


void control::createPlayer(){

    player1.health = 100;
    cout<<"What would you like your hero to be named?"<<endl;
    cin>>player1.name;
    player1.points = 0;
    player1.weapon = 0;

}


void control::printPlayerPath(){

}


void control::printBestPath(){

}


void control::traverseTree(int command){

    if (command==1)
    {
        root=root->right;
        choices[x] = 1;
    }
    if (command==2)
    {
        root=root->left;
        choices[x] = 2;
    }

    x++;


}


void control::checkStats(){

    cout<<"Health: "<<player1.health<<endl;
    cout<<"Points: "<<player1.points<<endl;
    cout<<"Currently wielding: ";
    if(player1.weapon == 0){
        cout<<"Fists"<<endl;
    }
    if(player1.weapon == 1){
        cout<<"Sword"<<endl;
    }
    if(player1.weapon == 2){
        cout<<"Gun"<<endl;
    }
    if(player1.weapon == 3){
        cout<<"Axe"<<endl;
    }

}


void control::changeWeapon(){

    if(player1.weapon == 0){
        cout<<"You are currently wielding Fists"<<endl;
        cout<<"Input 1 for a Sword, 2 for a Gun, 3 for an Axe, or 0 to keep Fists: "<<endl;
        cin>>player1.weapon;
        cin.clear();
    }
    else if(player1.weapon == 1){
        cout<<"You are currently wielding a Sword"<<endl;
        cout<<"Input 0 for Fists, 2 for a Gun, 3 for an Axe, or 1 to keep Sword: "<<endl;
        cin>>player1.weapon;
        cin.clear();
    }
    else if(player1.weapon == 2){
        cout<<"You are currently wielding a Gun"<<endl;
        cout<<"Input 0 for a Fists, 1 for a Sword, 3 for an Axe, or 2 to keep a Gun: "<<endl;
        cin>>player1.weapon;
        cin.clear();
    }
    else if(player1.weapon == 3){
        cout<<"You are currently wielding an Axe"<<endl;
        cout<<"Input 0 for a Fists, 1 for a Sword, 2 for a Gun, or 3 to keep Axe: "<<endl;
        cin>>player1.weapon;
        cin.clear();
    }

}


void control::recoverHealth(){

    int healthGain = 0;
    healthGain = rand() % 20;
    if(player1.health+healthGain > 100){
        cout<<"By going around you have recovered "<<100-player1.health<<" and are now back to full health!"<<endl;
        player1.health = 100;
    }else{

        cout<<"By going around you have recovered "<<healthGain<<endl;
        player1.health += healthGain;
        cout<<"You now have "<<player1.health<<" health."<<endl;


    }

}


//void restart();



void control::printCurrentTask(){



}



void control::story(int num)
{
    if (num==1)
    {
        cout<<"A dragon fly's in out of no where and is now attacking the village, go right to protect the village, go left to run away"<<endl;
    }

    if (num==2)
    {
        cout<<"Now you are at a forest, you have 2 options, you can go left and go home, or you can protect the kids from the wolves."<<endl;
    }

    if (num==3)
    {
        cout<<"A dragon fly's in out of no where and is now attacking the village, go right to protect the village, go left to run away"<<endl;
    }

    if (num==4)
    {
        cout<<"You're at a cave now trying to get home, in front of you are wolves, go left to go around them, go right to fight."<<endl;
    }

    if (num==5)
    {
        cout<<"A dragon fly's in out of no where and is now attacking the village, go right to protect the village, go left to run away"<<endl;
    }

    if (num==6)
    {
        cout<<"Now you are at a forest, you have 2 option, go left to go straight home, or protect the kids at the right from giants bugs."<<endl;
    }

    if (num==7)
    {
        cout<<"A dragon fly's in out of no where and is now attacking the village, go right to protect the village, go left to run away"<<endl;
    }

    if (num==8)
    {
        cout<<"You are a member of the hunting squad in a small village in the mountain. The squad is on top of a mountain and trying get home. But you are being attacked by mountain wolves. Go left to leave the crew, go right to fight of the wolves."<<endl;
    }

    if (num==9)
    {
        cout<<"A dragon fly's in out of no where and is now attacking the village, go right to protect the village, go left to run away"<<endl;
    }

    if (num==10)
    {
        cout<<"You need some food for the village, go right to go hunting, go left to go home"<<endl;
    }

     if (num==11)
    {
        cout<<"A dragon fly's in out of no where and is now attacking the village, go right to protect the village, go left to run away"<<endl;
    }

     if (num==12)
    {
        cout<<"The hunters are going down the mountain, you spot wolves in a cave attacking a villager, to help him go right, go left to leave him"<<endl;
    }

     if (num==13)
    {
        cout<<"A dragon fly's in out of no where and is now attacking the village, go right to protect the village, go left to run away"<<endl;
    }

     if (num==14)
    {
        cout<<"A 30 foot long anaconda appears in front of the hunter, go right to fight, go left to ditch them"<<endl;
    }

     if (num==15)
    {
        cout<<"A dragon fly's in out of no where and is now attacking the village, go right to protect the village, go left to run away"<<endl;
    }
}
