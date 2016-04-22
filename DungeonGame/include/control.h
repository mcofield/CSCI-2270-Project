#ifndef CONTROL_H
#define CONTROL_H

#include <string>
#include <vector>

using namespace std;

struct playerNode{
    int health;
    string name;
    int points;
    int weapon;
};

struct TreeNode{
    TreeNode *left;
    TreeNode *right;
    TreeNode *root;
    int key;
};

class control
{
    public:
        control();
        virtual ~control();
        void buildTreeEasy();
        void buildTreeMedium();
        void buildTreeHard();
        void createPlayer();
        void printPlayerPath();
        void printBestPath();
        void traverseTree(int command);
        void checkStats();
        void changeWeapon(int weaponKey);
        void recoverHealth();
        //void restart();
        void printCurrentTask();//Restart might be messy for the game flow, plus we don't have any function that deals with traversing the current task. Just a thought.

    protected:
    private:
        void modifyStats();
        bool beatDragon();

};

#endif // CONTROL_H
