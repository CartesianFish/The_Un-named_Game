#include "tile_space.h"


using namespace std;

void objectTile::rotate_input_dir(const int dir)
{
    if (tileType == 2)
    {
        if (dir == 7)
        {
            pipeInputSide++;
            if (pipeInputSide == 7)
            {
                pipeInputSide = 1;
            }
        }
        else
        {
            pipeInputSide = dir;
        }
    }

    if (tileType == 1)
    {
        inputSides[dir] = true;
        if (inputSides[dir] == true)
        {
            inputSides[dir] = false;
        }
    }
}

void objectTile::rotate_output_dir(const int dir)
{
    if (tileType == 2)
    {
        if (dir == 7)
        {
            pipeOutputSide++;
            if (pipeOutputSide == 7)
            {
                pipeOutputSide = 1;
            }
        }

        else
        {
            pipeOutputSide = dir;
        }
    }
}

objectTile::objectTile()
{
    switch (tileType)
    {
        case 1:
            inventory = new item[2];
        case 2:
            inventory = new item[1];
    }
}
objectTile::~objectTile()
{
    switch (tileType)
    {
        case 0:
            delete inventory;
        case 1:
            delete[] inventory;
        case 2:
            delete[] inventory;
        case 3:
            delete[] inventory;
    }
        
}

gameField::gameField()
{
    unsigned int x = 0;
    for(int i = 0; i < 10; i++)
    {
        for(int j = 0; j < 10; j++)
        {
            matrix[i][j].box_index = (x);
            x++;
        }
    }
}


void gameField::printField()
{
    return;
}