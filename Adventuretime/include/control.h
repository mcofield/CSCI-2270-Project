#ifndef CONTROL_H
#define CONTROL_
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
    //TreeNode *root;
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
        void createPlayer(playerNode player1);
        void printPlayerPath();
        void printBestPath();
        void traverseTree(TreeNode *root, int command);
        void checkStats(playerNode player1);
        void changeWeapon(int weaponKey);
        void recoverHealth();
        void restart();
        void story(int num);

    protected:
    private:
        void modifyStats();
        bool beatDragon();

};

#endif // CONTROL_H
