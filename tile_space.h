#include "items.h"


using namespace std;


class object_tile
{
  public:
    int direction1 = 0; // North = 0, South = 1..., Up = 4, Down = 5.
    int direction2 = 0;
    int tile_type = 0; //None = 0, function tile = 1, pipe = 2, storage = 3.
    bool input_sides[6];
    int pipe_input_side = 5;
    bool output_sides[6];
    int pipe_output_side = 4;
    bool auto_pull = false;
    bool auto_push = false;
    bool inventory_full = false;
    item function_tile_inventory[2];
    item pipe_inventory[1];
    item storage_inventory[5][5];
    void rotate_output_dir(const int dir);
    void rotate_input_dir(const int dir);


};

class box
{
  public:
     const int box_width = 10;
     const int box_lenght = 10;
     const int box_height = 10;
     int box_index = 0;
     object_tile workspace [10][10][10];



};
