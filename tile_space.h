


using namespace std;


class object_tile
{
  public:
    int direction1 = 0; // None = 0, North = 1, South = 2..., Up = 5, Down = 6.
    int direction2 = 0;
    int tile_type = 0; //None = 0, function tile = 1, pipe = 2, storage = 3.
    int input_sides[5];

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
