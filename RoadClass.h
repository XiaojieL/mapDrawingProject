#ifndef _ROADCLASS_H_
#define _ROADCLASS_H_


//Programmer: Xiaojie Liu
//Date: April 17 2016
//Purpose: Provide a class that will represent a house, which is a specific
//         type of map entity that will be able to be drawn onto a map
//         image via a description of the house.

#include <string>
#include <sstream>
using namespace std;

#include "RectangularEntityClass.h"

//Some road-specific global constants..
const string ROAD_TYPE_STR = "Road";
const ColorClass ROAD_COLOR = ColorClass(127, 127, 127);
const int PIXELS_PER_LANE = 3;

class RoadClass : public RectangularEntityClass
{
  private:
    //represents the length of a road
  	int length; 
    // represents the number of lanes of a road
    int numLanes; 
    //represent the road direction (vertical or horizontal)
    bool isVertical; 
  public:
  	RoadClass(
  		const PixelLocationClass &inPixLoc,
      int inLength,
      int inNumLanes,
      bool inIsVertical
  		) : RectangularEntityClass (inPixLoc, ROAD_COLOR)
  	{
      length = inLength;
  		numLanes = inNumLanes;
      isVertical = inIsVertical;
  	}

    //Simply creates a printable string from a road object, making sure
    //to only be responsible for those attributes directly associated
    //with the actual HouseClass, and leaving higher-level attributes to
    //higher-level classes.
    string toString() const
    {
      ostringstream oss;
      oss.clear();
      oss.str("");

      string verticalType = " ";
      if (isVertical)
      {
        verticalType = "Vertical";
      }
      else
      {
        verticalType = "Horizontal";
      }

      oss << ROAD_TYPE_STR << " Len: " << length << " " 
          << "Lanes: " << numLanes << " "
          << "Runs: " << verticalType << " "
          << MapEntityClass::toString();
      return (oss.str());
    }

    //The required polymorphic interface for getting the type of a
    //map entity as a string.
    string getType() const
    {
      return ROAD_TYPE_STR;
    }
  	
  	int getNumRows() const;
  	int getNumCols() const;
};

#endif // _ROADCLASS_H_
