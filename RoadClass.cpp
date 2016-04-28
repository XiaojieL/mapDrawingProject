#include <iostream>
#include <cmath>
using namespace std;

#include "RoadClass.h"


//Get the number of rows of a road object
int RoadClass::getNumRows(
  ) const 
{
  int rowNum;

  if (isVertical)
  {
    rowNum = length;
  }
  else
  {
    rowNum = numLanes * PIXELS_PER_LANE;
  }
  return rowNum;
}

//Get the number of columns of a road object
int RoadClass::getNumCols(
  ) const
{
  int colNum;
  if (isVertical)
  {
    colNum = numLanes * PIXELS_PER_LANE;
  }
  else
  {
    colNum = length;
  }
  return colNum;
}