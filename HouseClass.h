#ifndef _HOUSECLASS_H_
#define _HOUSECLASS_H_


//Programmer: Xiaojie Liu
//Date: April 17 2016
//Purpose: Provide a class that will represent a house, which is a specific
//         type of map entity that will be able to be drawn onto a map
//         image via a description of the house.
  

#include <string>
#include <sstream>
using namespace std;

#include "RectangularEntityClass.h"


//Some house-specific global constants..
const string HOUSE_TYPE_STR = "House";
const ColorClass HOUSE_COLOR = ColorClass(255, 0, 0);
const int HOUSE_VALUE_PER_PIXEL = 15000;

class HouseClass : public RectangularEntityClass
{
  private:
  	int dollarValue;
  public:
    HouseClass(
         const PixelLocationClass &inPixLoc,
         int inDollarValue
         ) : RectangularEntityClass(inPixLoc, HOUSE_COLOR)
    {
      dollarValue = inDollarValue;
    }

    //Simply creates a printable string from a house object, making sure
    //to only be responsible for those attributes directly associated
    //with the actual HouseClass, and leaving higher-level attributes to
    //higher-level classes.
    string toString() const
    {
      ostringstream oss;
      oss.clear();
      oss.str("");
      oss << HOUSE_TYPE_STR << " Value: " << dollarValue << " " <<
             MapEntityClass::toString();
      return (oss.str());
    }

    //The required polymorphic interface for getting the type of a
    //map entity as a string.
    string getType() const
    {
      return HOUSE_TYPE_STR;
    }
  	
  	int getNumRows() const;
  	int getNumCols() const;
};

#endif // _HOUSECLASS_H_
