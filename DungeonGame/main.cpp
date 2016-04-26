#include "control.h"
#include <string>
#include <iostream>

using namespace std;

void help(){

	cout<< "The goal of this game is to get to your home while achieving the highest amount of points possible. "<<endl;
	cout<< "Depending on the difficutly you chose your path home may be more rigorous. "<<endl;
	cout<< "In every adventure you will be given various tasks to complete, all of which have an easy option and a hard option. "<<endl;
	cout<< "If you take the easy way on any given task, you will not lose any health when completing the task but will not gain any points. "<<endl;
	cout<< "Each instance will be a yes or no choice as to whether or not you'd like to attempt the task, and points/health will be updated accordingly. "<<endl;
	cout<< "At any point in the game you may stop to check the status of your character, change the weapon they are weilding, and much more as represented by the main menu. "<<endl;
	cout<< "Good luck hero, and have fun!"<<endl;
}


int main(){

	string difficulty;
	cout<<"Before the game starts, pick if you'll be playing easy(e), medium(m), or hard(h) difficulty. Note that a harder difficulty will reward more points:"<<endl;
	cin>>difficulty;
	cin.clear;
	control adventureTree;
	if(difficulty == "e"){
		adventureTree->buildTreeEasy;
	}
	if(difficulty == "m"){
		adventureTree->buildTreeMedium;
	}
	if(difficulty == "h"){
		adventureTree->buildTreeHard;
	}
	cout<<"Welcome to Hero Journey"<<endl;
	help();






	return 0;
}
