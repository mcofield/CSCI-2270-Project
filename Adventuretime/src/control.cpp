#include "control.h"
#include <string>
#include <iostream>

control::control()
{
    //ctor
}

void control::buildTreeEasy()
{

}

void control::buildTreeMedium()
{

}

void control::buildTreeHard()
{

}
void control::createPlayer(playerNode player1)
{
    int w;
    string n;
    cout<<"Welcome: "<<endl;
    cin>>n;
    cout<<"You are about to start a adventure, please choose a weapon."<<endl;
    cout<<""<<endl;
    cin>>w;
    player1.name=n;
    player1.weapon=w;
    player1.points=0;
    player1.health=100;
}

void control::printPlayerPath()
{

}

void control::printBestPath()
{

}

void control::traverseTree(TreeNode *root, int command)
{
    if (command==1)
    {
        root=root->right;
    }
    if (command==2)
    {
        root=root->left;
    }
}

void control::checkStats(playerNode player1)
{
    cout<<player1.name<<" Health: "<<player1.health<<" Points: "<<player1.points<<" weapon: "<<player1.weapon<<endl;
}

void control::changeWeapon(int weaponKey)
{

}

void control::recoverHealth()
{

}

void control::restart()
{

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

control::~control()
{
    //dtor
}
