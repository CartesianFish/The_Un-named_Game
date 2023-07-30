#include "tile_space.h"


using namespace std;

void object_tile::rotate_input_dir(const int dir)
{
  if (tile_type == 2)
  {
    if (dir == 7)
    {
      pipe_input_side++;
      if (pipe_input_side == 7)
      {
        pipe_input_side = 1;
      }
    }

    else
    {
      pipe_input_side = dir;
    }
  }

  if (tile_type == 1)
  {
    input_sides[dir] == true;
    if (input_sides[dir] == true)
    {
      input_sides[dir] == false;
    }
  }
}

void object_tile::rotate_output_dir(const int dir)
{
  if (tile_type == 2)
  {
    if (dir == 7)
    {
      pipe_output_side++;
      if (pipe_output_side == 7)
      {
        pipe_output_side = 1;
      }
    }

    else
    {
      pipe_input_side = dir;
    }
  }
}

gameField::gameField()
{
  int x = 0;
  for(int i = 0; i < 10; i++)
  {
    for(int j = 0; j < 10; j++)
    {
      matrix[i][j].box_index = (x);
      x++;
    }
  }
}


void printField()
{
  
}