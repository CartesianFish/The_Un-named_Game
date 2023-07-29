//#ifndef ART_H

//#define ART_H

#include <string>
//#include <fstream>
using namespace std;

class artPrint
{
  public:
    artPrint(); //Constructor
    ~artPrint(); //Destructor
    const int HOUSE_TYPE0_X = 25;
    const int HOUSE_TYPE0_Y = 13;
    const int HOUSE_TYPE1_XY = 25;
    void printArt(const int artIndex);
};

 //#endif