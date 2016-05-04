#include "control.h"
#include "iostream"
#include "string"
#include "stdlib.h"

#include <time.h>

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

int counterEasy = 0;
int counterMedium = 0;
int counterHard = 0;

void control::buildTreeEasy(int inKey){
    if(counterEasy==0){
        TreeNode *treeStart= new TreeNode;
        treeStart->key=inKey;
        treeStart->left=NULL;
        treeStart->right=NULL;
        root=treeStart;
        player = root;
        counterEasy++;
    }

    else{
        TreeNode *tmp= new TreeNode;
        TreeNode *insertNode = new TreeNode;
        tmp= root;
        bool stillRun=true;
        while(stillRun==true){
            if(tmp->key > inKey && tmp->left==NULL){
                tmp->left=insertNode;
                insertNode->key=inKey;
                insertNode->left=NULL;
                insertNode->right=NULL;
                stillRun=false;
            }
            else if(tmp->key < inKey && tmp->right==NULL){
                tmp->right=insertNode;
                insertNode->key=inKey;
                insertNode->left=NULL;
                insertNode->right=NULL;
                stillRun=false;
            }
            else if(tmp->key > inKey && tmp->left!=NULL){
                tmp=tmp->left;
            }
            else{
                tmp=tmp->right;
            }
        }
    }
}

void control::buildTreeMedium(int inKey){
    if(counterMedium==0){
        TreeNode *treeStart= new TreeNode;
        treeStart->key=inKey;
        treeStart->left=NULL;
        treeStart->right=NULL;
        root=treeStart;
        player = root;
        counterMedium++;
    }

    else{
        TreeNode *tmp= new TreeNode;
        TreeNode *insertNode = new TreeNode;
        tmp= root;
        bool stillRun=true;
        while(stillRun==true){
            if(tmp->key > inKey && tmp->left==NULL){
                tmp->left=insertNode;
                insertNode->key=inKey;
                insertNode->left=NULL;
                insertNode->right=NULL;
                stillRun=false;
            }
            else if(tmp->key < inKey && tmp->right==NULL){
                tmp->right=insertNode;
                insertNode->key=inKey;
                insertNode->left=NULL;
                insertNode->right=NULL;
                stillRun=false;
            }
            else if(tmp->key > inKey && tmp->left!=NULL){
                tmp=tmp->left;
            }
            else{
                tmp=tmp->right;
            }
        }
    }
}

void control::buildTreeHard(int inKey){
    if(counterHard==0){
        TreeNode *treeStart= new TreeNode;
        treeStart->key=inKey;
        treeStart->left=NULL;
        treeStart->right=NULL;
        root=treeStart;
        player = root;
        counterHard++;
    }

    else{
        TreeNode *tmp= new TreeNode;
        TreeNode *insertNode = new TreeNode;
        tmp= root;
        bool stillRun=true;
        while(stillRun==true){
            if(tmp->key > inKey && tmp->left==NULL){
                tmp->left=insertNode;
                insertNode->key=inKey;
                insertNode->left=NULL;
                insertNode->right=NULL;
                stillRun=false;
            }
            else if(tmp->key < inKey && tmp->right==NULL){
                tmp->right=insertNode;
                insertNode->key=inKey;
                insertNode->left=NULL;
                insertNode->right=NULL;
                stillRun=false;
            }
            else if(tmp->key > inKey && tmp->left!=NULL){
                tmp=tmp->left;
            }
            else{
                tmp=tmp->right;
            }
        }
    }
}


void control::createPlayer(){

    player1.health = 100;
    cout<<"What would you like your hero to be named?"<<endl;
    getline(cin,player1.name);
    player1.points = 0;
    player1.weapon = 0;

}


void control::printPlayerPath(){
    int counter = 0;
    TreeNode *tmp = root;
    cout<<"The first step of your journey was: " <<endl;
    story(tmp->key);
    while(tmp!= NULL){
        if(choices[counter] == 1){
            tmp = tmp=tmp->left;
            if(tmp!=NULL){
            cout<<"You chose to avoid the task, your next step was: "<< endl;
            cout << "" << endl;
            story(tmp->key);
            }
            else{
                cout << "You chose to avoid the task and your journey was complete" <<endl;
                cout << "" <<endl;
            }
        }else if(choices[counter] == 2){
            tmp = tmp->right;
            if(tmp!=NULL){
            cout<<"You chose to fight! Your next step was: " <<endl;
            cout << "" <<endl;
            story(tmp->key);
            }
            else{
                cout << ""<<endl;
                cout << "You chose to fight! And your journey was complete" << endl;
            }
        }
        if(choices[counter] == 0){
            cout<<"You did not make it this far"<<endl;
        }
        counter++;

    }


}


void control::printBestPath(){
    TreeNode *temp = root;
    cout << "" <<endl;
    cout<<"The first step of your journey was: " <<endl;
    story(temp->key);
    while(temp != NULL){
        temp = temp->right;
        if(temp!=NULL){
            cout << "The next step in your journey brought you here: " << endl;
            story(temp->key);
        }
        else{
            cout << "You chose to fight. And that was the end of your journey" << endl;
        }
    }

}


void control::traverseTree(int command){

    if (command==2)
    {
        player=player->right;
        choices[x] = 2;
    }
    if (command==1)
    {
        player=player->left;
        choices[x] = 1;
    }

    x++;


}


void control::checkStats(){
    cout << "" << endl;
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
    cout << "" <<endl;

}


void control::changeWeapon(){

    if(player1.weapon == 0){
        cout << "" <<endl;
        cout<<"You are currently wielding Fists"<<endl;
        cout<<"Input 1 for a Sword, 2 for a Gun, 3 for an Axe, or 0 to keep Fists: "<<endl;
        cin>>player1.weapon;
        cin.clear();
    }
    else if(player1.weapon == 1){
        cout << "" <<endl;
        cout<<"You are currently wielding a Sword"<<endl;
        cout<<"Input 0 for Fists, 2 for a Gun, 3 for an Axe, or 1 to keep Sword: "<<endl;
        cin>>player1.weapon;
        cin.clear();
    }
    else if(player1.weapon == 2){
        cout << "" <<endl;
        cout<<"You are currently wielding a Gun"<<endl;
        cout<<"Input 0 for a Fists, 1 for a Sword, 3 for an Axe, or 2 to keep a Gun: "<<endl;
        cin>>player1.weapon;
        cin.clear();
    }
    else if(player1.weapon == 3){
        cout << ""<<endl;
        cout<<"You are currently wielding an Axe"<<endl;
        cout<<"Input 0 for a Fists, 1 for a Sword, 2 for a Gun, or 3 to keep Axe: "<<endl;
        cin>>player1.weapon;
        cin.clear();
    }

}


void control::recoverHealth(){

    srand(rand()^time(NULL)); //seed the random number generator with number that will change

    int healthGain = 0;
    healthGain = rand() % 20;
    if(player1.health+healthGain > 100){
        cout<<"By going around and resting you have recovered "<<100-player1.health<<" and are now back to full health!"<<endl;
        player1.health = 100;
    }else{

        cout<<"By going around you have recovered "<<healthGain<<endl;
        player1.health += healthGain;
        cout<<"You now have "<<player1.health<<" health."<<endl;


    }

}

void control::fightCost(string difficulty, int task){

srand(rand()^time(NULL)); //seed the random number generator with number that will change with runtime

if(difficulty=="a" && task == 1){
    int healthLost=0;
    healthLost=(rand() % 50 +1)/2;
    player1.health=player1.health - healthLost;
    int pointGain= 0;
    cout << "" <<endl;
    cout << "You lost: " << healthLost << " health." << " Your health is now: " << player1.health << endl;
    cout << "You gained: " <<pointGain << " points." << "You now have: " <<player1.points << " points" <<endl;
    cout << "" <<endl;

}
else{
    int healthLost=0;
    healthLost=rand() % 50 +1;
    player1.health=player1.health - healthLost;
    int pointGain= healthLost;
    player1.points=player1.points +healthLost;
    cout << "" <<endl;
    cout << "You lost: " << healthLost << " health." << " Your health is now: " << player1.health << endl;
    cout << "You gained: " <<pointGain << " points." << "You now have: " <<player1.points << " points" <<endl;
    cout << "" <<endl;
}


}


void control::story(int num)
{
    if (num==100)
    {
        cout << ""<<endl;
        cout<<"Your journey to the promise land starts in your home village. Suddenly," <<endl;
        cout <<"A dragon fly's in out of no where and is attacking the village." <<endl;
        cout <<"Fighting could result in death, but you will gain hero recognition." <<endl;
        cout << "" <<endl;
        cout << "You must to choose to run or fight. Enter '1' to run and '2' to fight: "<<endl;
    }

    if (num==50 || num==150)
    {
        cout << "" <<endl;
        cout<<"Now you are at a forest, you have 2 options:" <<endl;
        cout <<"You can sneak past a pack of wolves." <<endl;
        cout << "Or you can fight the wolves in order to protect kids playing nearby." <<endl;
        cout << "If you sneak past the wolves kids may die, but fighting could kill you."<<endl;
        cout << "" <<endl;
        cout << "Enter '1' to sneak by, Enter '2' to fight: " << endl;
    }

    if (num==20 || num==80)
    {
        cout << "" <<endl;
        cout<<"You survived but you now see a dragon nearby killing a farmer's livestock." <<endl;
        cout <<"Fighting the dragon is a hero's action but it is your decision" <<endl;
        cout << "" <<endl;
        cout << "Enter '1' to go around, Enter '2' to fight dragon: " << endl;
    }

    if (num==120 || num==180)
    {
        cout << ""<<endl;
        cout<<"You have survived the wolves and arrived at the Death Cave." <<endl;
        cout <<"You must take the long route through the forest, or go through the cave"<<endl;
        cout << "" <<endl;
        cout << "Enter '1' to go around, Enter '2' to go through the treacherous cave: " << endl;
    }

    if (num==70 || num==90)
    {
        cout <<"" <<endl;
        cout<<"The farmer's livestock survived but now village giants are now after you." <<endl;
        cout << "Choosing to fight will increase your hero reputation" << endl;
        cout << "" <<endl;
        cout << "Enter '1' to hide from giants, Enter '2' to fight giants: " << endl;
    }

    if (num== 10 || num==30)
    {
        cout << "" <<endl;
        cout<<"The farmest livestock has survived, but you face a new obstacle." << endl;
        cout << "100's of poisonous bees are on your tail" << endl;
        cout <<"You can choose to fight them or lead them into a nearby village" << endl;
        cout << "" <<endl;
        cout << "Enter '1' to lead to village, Enter '2' to fight" << endl;
    }

    if (num==110 || num==130)
    {
        cout << "" <<endl;
        cout << "You stumble into a sick and starving village," << endl;
        cout << "There are dangerous, but filling boar surrounding the village" << endl;
        cout << "You must choose to hunt for them or not" <<endl;
        cout << "" <<endl;
        cout << "Enter '1' to let village starve, Enter '2' to hunt boar" << endl;
    }

    if (num==170 || num==190)
    {
        cout << "" <<endl;
        cout<<"You are recruited into a hunting squad in a small village." << endl;
        cout << "While your squad is hunting small game, you encounter a giant bear" <<endl;
        cout << "You must choose to help fight the bear or abandon your squad" << endl;
        cout <<"" <<endl;
        cout << "Enter '1' to run, Enter '2' to help fight the bear" << endl;
    }

    if (num==5 || num==15)
    {
        cout << "" <<endl;
        cout << "You come across a small fishing village starving and sick" << endl;
        cout << "A giant crocodile has been eating all the fish causing great hunger" << endl;
        cout << "You can choose to help the village and kill the crocodile or walk by" << endl;
        cout << "" << endl;
        cout << "Enter '1' to let village starve, Enter '2' to try and kill crocodile" << endl;
    }

    if (num==25 || num==35)
    {
        cout << ""<<endl;
        cout << "You come across a river with clean drinking water and safety" << endl;
        cout << "Suddenly, a woman falls into the river filled with hungry sharks" <<endl;
        cout << "You must choose to rest, or try and save the woman from the sharks" <<endl;
        cout << "" <<endl;
        cout << "Enter '1' to rest, Enter '2' to help save woman" << endl;
    }

     if (num==65 || num==75)
    {
        cout << "" <<endl;
        cout << "You are walking through the forest when you spot a giant anaconda" << endl;
        cout << "The anaconda is infamous for consuming children" << endl;
        cout << "You must decide to try and kill the anaconda or avoid it" << endl;
        cout << "" << endl;
        cout << "Enter '1' to avoid the anaconda, Enter '2' to fight it" << endl;
    }

     if (num==85 || num==95)
    {
        cout << "" <<endl;
        cout << "You are walking through the forest when you spot a enormous dragon." << endl;
        cout << "The dragon is sleeping, and killing it would bring great peace" << endl;
        cout << "" << endl;
        cout <<"Enter '1' to attack the dragon, Enter '2' to go around it" << endl;
    }
     if (num==105 || num==115)
    {
        cout << "" <<endl;
        cout << "In the distance you spot a village being attacked by man-eating birds" << endl;
        cout << "Without your help, all the villagers will certainly die." << endl;
        cout << "" << endl;
        cout << "Enter '1' to let villagers dies, Enter '2' to fight the birds" << endl;
    }

     if (num==125 ||num==135)
    {
        cout << "" <<endl;
        cout << "You are making progress on your journey when you see 2 kids in trouble" << endl;
        cout << "The 2 kids are being stalked by wolves, and without your help they will die." << endl;
        cout <<"" << endl;
        cout << "Enter '1' to let kids dies, Enter '2' to help kids" << endl;
    }

     if (num==165 || num==175)
    {
        cout << "" << endl;
        cout << "You are strolling through the forest when you encounter 2 orcs." << endl;
        cout <<"The orcs are known for killing villagers for no reason at all." << endl;
        cout << "Killing the orcs would be a great service to the realm" << endl;
        cout << "" << endl;
        cout << "Enter '1' to run from orcs, Enter '2' to fight them" << endl;
    }
    if(num==185 || num==195){
        cout << "" << endl;
        cout << "You are progressing through your journey when you spot 2 bandits" << endl;
        cout <<"The bandits have been wanted dead or alive for years." << endl;
        cout << "Killing them would bring justice to the realm" << endl;
        cout << "" << endl;
        cout << "Enter '1' to avoid bandits, Enter '2' to kill bandits " << endl;
    }
}

