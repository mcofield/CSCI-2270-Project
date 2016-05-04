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
    int key;
};

class control
{
    public:
        control();
        virtual ~control();
        void buildTreeEasy(int inKey);
        void buildTreeMedium(int inKey);
        void buildTreeHard(int Key);
        void createPlayer();
        void printPlayerPath();
        void printBestPath();
        void traverseTree(int command);
        void checkStats();
        void changeWeapon();
        void recoverHealth();
        void story(int inKey);
        playerNode player1;
        int choices[16];
        TreeNode *player;
        void fightCost(string difficulty, int task);

    protected:
    private:
        TreeNode *root;
        int x;

};

#endif // CONTROL_H
