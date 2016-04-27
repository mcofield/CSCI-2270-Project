#include "control.h"
#include <string>
#include <iostream>

using namespace std;

void help(){
//<<<<<<< HEAD

//=======

//>>>>>>> origin/master
	cout<< "The goal of this game is to get to your home while achieving the highest amount of points possible. "<<endl;
	cout<< "Depending on the difficutly you chose your path home may be more rigorous. "<<endl;
	cout<< "In every adventure you will be given various tasks to complete, all of which have an easy option and a hard option. "<<endl;
	cout<< "If you take the easy way on any given task, you will not lose any health when completing the task but will not gain any points. "<<endl;
//<<<<<<< HEAD
	cout<< "Each instance will be a yes or no choice as to whether or not you'd like to attempt the task, and points/health will be updated accordingly. "<<endl;
	cout<< "At any point in the game you may stop to check the status of your character, change the weapon they are weilding, and much more as represented by the main menu. "<<endl;
//=======
	cout<< "Each task will give you a choice of as to whether or not you'd like to attempt the task, and points/health will be updated accordingly. "<<endl;
	cout<< "At any point in the game you may stop to check the status of your character, change the weapon they are weilding, and much more as represented by the main menu. "<<endl;
	cout<< "That is all the information i have for your, this help window is always available under the Help tab in the main menu. "<<endl;
//>>>>>>> origin/master
	cout<< "Good luck hero, and have fun!"<<endl;
}


int main(){
//<<<<<<< HEAD

//=======

//>>>>>>> origin/master
	string difficulty;
	cout<<"Before the game starts, pick if you'll be playing easy(e), medium(m), or hard(h) difficulty. Note that a harder difficulty will reward more points:"<<endl;
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
		adventureTree.buildTreeEasy();
	}
	if(difficulty == "m"){
		adventureTree.buildTreeMedium();
	}
	if(difficulty == "h"){
		adventureTree.buildTreeHard();
	}

	adventureTree.createPlayer();

	cout<<"Welcome to Hero Journey"<<endl;
	help();
//<<<<<<< HEAD



//=======
	int task = 0;

	adventureTree.printCurrentTask();
	cout<<"1. Attempt the task"<<endl;
	cout<<"2. Avoid the task"<<endl;
	cout<<"3. Change weapon"<<endl; //we should list of which weapons you have, and possible weapons swaps, with the option to keep the weapon you're holding. So you always have a way to check without changing it.
	cout<<"4. Status Check"<<endl;
	cout<<"5. Help"<<endl;
	cout<<"6. Quit"<<endl;
	cin>>task;

	//These are all the menu options i could think of, if you guys think of anymore it'd be super easy to add them.



	while(task!=6){


		if(task == 1){

			//really not sure what I'm supposed to do here. once the functions and trees are built it'll be more clear

		}

		if(task == 2){


			//same as above
			adventureTree.recoverHealth();

		}

		if(task == 3){

			adventureTree.changeWeapon();

		}

		if(task == 4){

			adventureTree.checkStats();

		}

		if(task == 5){

			help();

		}

		adventureTree.printCurrentTask();
		cout<<"1. Attempt the task"<<endl;
		cout<<"2. Avoid the task"<<endl;
		cout<<"3. Change weapon"<<endl;
		cout<<"4. Status Check"<<endl;
		cout<<"5. Help"<<endl;
		cout<<"6. Quit"<<endl;
		cin>>task;
		cin.clear();

	}

	//We could also put a final status report in the destructor, but it's here just for now.

	cout<<"Thank you for playing! If you'd like to see how you did here are some options:"<<endl;
	cout<<"1. See character path"<<endl;
	cout<<"2. See best path"<<endl;
	cout<<"3. Check final points/health"<<endl;
	cout<<"4. Close game"<<endl;
	int task2;
	cin>>task2;
	cin.clear();

	while(task2 !=4){

		if(task2 == 1){
			adventureTree.printPlayerPath();
		}

		if(task2 == 2){
			adventureTree.printBestPath();
		}

		if(task2 == 3){
			adventureTree.checkStats();
		}


	cout<<"1. See character path"<<endl;
	cout<<"2. See best path"<<endl;
	cout<<"3. Check final points/health"<<endl;
	cout<<"4. Close game"<<endl;
	cin>>task2;
	cin.clear();
	}
//>>>>>>> origin/master



	return 0;
}
