#include "control.h"
#include <string>
#include <iostream>

using namespace std;

void help(){
//<<<<<<< HEAD

//=======

//>>>>>>> origin/master
	cout<< "The goal of this game is to navigate the realm while achieving the highest" << endl;
	cout << "amount of points possible."<<endl;
	cout<< "In every adventure you will be given various tasks to complete." << endl;
	cout << "You can either attempt or avoid each task"<<endl;
	cout << "If you attempt a task, you will gain points but lose health" << endl;
	cout << "If you avoid a task, you will not gain points but lose health" << endl;
	cout<< "That is all the information I have for you." <<endl;
	cout<< "Good luck hero, and have fun!"<<endl;
	cout <<"" <<endl;
}


int main(){
//<<<<<<< HEAD
int createPlayer=0;

//=======

//>>>>>>> origin/master
	string difficulty;
	cout<<"Before the game starts, pick if you'll be playing: " << endl;
	cout << "easy(e)" << endl;
	cout << "medium(m)" << endl;
	cout << "hard(h)" << endl;
	cout << "Note that a harder difficulty will reward more points." << endl;
	cout << "please enter 'e', 'm', or 'h' to select difficulty: "<<endl;
	cin>>difficulty;
	cin.clear();

	while(difficulty != "e" && difficulty != "m" && difficulty != "h"){
        cout<<"I'm sorry that isn't a valid input."<<endl;
        cout<<"pick if you'll be playing easy(e), medium(m), or hard(h) difficulty."<<endl;
        cin>>difficulty;
        cin.clear();
	}

	control adventureTree;
	if(difficulty == "e"){
		adventureTree.buildTreeEasy(100);
		adventureTree.buildTreeEasy(50);
		adventureTree.buildTreeEasy(20);
		adventureTree.buildTreeEasy(80);
		adventureTree.buildTreeEasy(150);
		adventureTree.buildTreeEasy(120);
		adventureTree.buildTreeEasy(180);
	}
	if(difficulty == "m"){
		adventureTree.buildTreeMedium(100);
		adventureTree.buildTreeMedium(50);
		adventureTree.buildTreeMedium(20);
		adventureTree.buildTreeMedium(80);
		adventureTree.buildTreeMedium(150);
		adventureTree.buildTreeMedium(120);
		adventureTree.buildTreeMedium(180);
		adventureTree.buildTreeMedium(10);
		adventureTree.buildTreeMedium(30);
		adventureTree.buildTreeMedium(70);
		adventureTree.buildTreeMedium(90);
		adventureTree.buildTreeMedium(110);
		adventureTree.buildTreeMedium(130);
		adventureTree.buildTreeMedium(170);
		adventureTree.buildTreeMedium(190);
	}
	if(difficulty == "h"){
		adventureTree.buildTreeHard(100);
		adventureTree.buildTreeHard(50);
		adventureTree.buildTreeHard(20);
		adventureTree.buildTreeHard(80);
		adventureTree.buildTreeHard(150);
		adventureTree.buildTreeHard(120);
		adventureTree.buildTreeHard(180);
		adventureTree.buildTreeHard(10);
		adventureTree.buildTreeHard(30);
		adventureTree.buildTreeHard(70);
		adventureTree.buildTreeHard(90);
		adventureTree.buildTreeHard(110);
		adventureTree.buildTreeHard(130);
		adventureTree.buildTreeHard(170);
		adventureTree.buildTreeHard(190);
		adventureTree.buildTreeHard(5);
		adventureTree.buildTreeHard(15);
		adventureTree.buildTreeHard(25);
		adventureTree.buildTreeHard(35);
		adventureTree.buildTreeHard(65);
		adventureTree.buildTreeHard(75);
		adventureTree.buildTreeHard(85);
		adventureTree.buildTreeHard(95);
		adventureTree.buildTreeHard(105);
		adventureTree.buildTreeHard(115);
		adventureTree.buildTreeHard(125);
		adventureTree.buildTreeHard(135);
        adventureTree.buildTreeHard(165);
        adventureTree.buildTreeHard(175);
        adventureTree.buildTreeHard(185);
        adventureTree.buildTreeHard(195);
	}

	cout<<"Welcome to Hero Journey. Please enter '1' to create player:"<<endl;
	cin>>createPlayer;
	cin.clear();
    while (cin.get() != '\n');
    adventureTree.createPlayer();
    cout << "" <<endl;
	help();
//<<<<<<< HEAD



//=======
bool stillRunning =true;
int task = 0;

while(stillRunning==true && adventureTree.player!=NULL){

    adventureTree.story(adventureTree.player->key);
    cout << "" << endl;
	cout<<"1. Avoid the task"<<endl;
	cout<<"2. Attempt the task"<<endl;
	cout<<"3. Change weapon"<<endl; //we should list of which weapons you have, and possible weapons swaps, with the option to keep the weapon you're holding. So you always have a way to check without changing it.
	cout<<"4. Status Check"<<endl;
	cout<<"5. Help"<<endl;
	cout<<"6. Quit"<<endl;
	task = 0;
	if(!cin>>task ||task > 6 || task <0){
        cout << "Not a valid input.  Please input the number next to the menu item you wish to select" << endl;
        cin.clear();
        while (cin.get() != '\n') ;
	}
	else{
	cin>>task;
	}




switch (task){
		case 1:
            adventureTree.traverseTree(task);
            adventureTree.recoverHealth();
            break;
		case 2:
            adventureTree.traverseTree(task);
            adventureTree.fightCost();
            if(adventureTree.player1.health<0){
                cout << "You died because you lost all health! Good try!" << endl;
                stillRunning=false;
            }
            break;

		case 3:
			adventureTree.changeWeapon();
            break;

		case 4:
			adventureTree.checkStats();
            break;

		case 5:
			help();
			break;

		case 6:
            stillRunning =false;
            break;
}

}


bool stillRunning2 = true;
int task2=0;
while(stillRunning2==true){
    cout << "" <<endl;
	cout<<"Thank you for playing! If you'd like to see how you did here are some options:"<<endl;
	cout<<"1. See character path"<<endl;
	cout<<"2. See best path"<<endl;
	cout<<"3. Check final points/health"<<endl;
	cout<<"4. Close game"<<endl;
	cin>>task2;
	cin.clear();

	switch(task2){

		case 1:
			adventureTree.printPlayerPath();
			break;

        case 2:
            adventureTree.printBestPath();
            break;

        case 3:
            adventureTree.checkStats();
            break;

		case 4:
            cout << "Thanks for playing Goodbye!" << endl;
            stillRunning2=false;
            break;
        }

    }

	return 0;
}
