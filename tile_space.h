#include "items.h"


using namespace std;


class objectTile
{
public:
    unsigned short int direction1 = 0; // North = 0, South = 1..., Up = 4, Down = 5.
    unsigned short int direction2 = 0;
    unsigned short int tileType = 0; //None = 0, function tile = 1, pipe = 2, storage = 3.
    bool inputSides[6] = {};
    unsigned short int pipeInputSide = 5;
    bool outputSides[6] = {};
    unsigned short int pipeOutputSide = 4;
    bool autoPull = false; //if the tile can outopull
    bool autoPush = false; //if the tile can outopuch
    bool inventoryFull = false; //is the tiles inventory full? The reduces the need to call inventoryChecker.
    /*item function_tile_inventory[2];
    item pipe_inventory[1];
    item storage_inventory[5][5];*/
    item* inventory; //dynamilc inventory based on the tile type
    string visualRep = ""; //The ASCI charater(s) that represent the tile
    void rotate_output_dir(const int dir);
    void rotate_input_dir(const int dir);
    objectTile();
    ~objectTile();
};



class box
{
  public:
     const unsigned int box_width = 10;
     const unsigned int box_lenght = 10;
     const unsigned int box_height = 10;
     short int box_index = 0;
     objectTile workspace [10][10];
     string visualRep = "---";
     string visualRep1 = "| |";
     string visualRep2 = "---";

};

class gameField
{
  public:
      box matrix[10][10];
      string fieldArt[30];
      void populateField();
      void printField();
      gameField();
      
};
