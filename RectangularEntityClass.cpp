#include <iostream>
#include <cmath>
using namespace std;

#include "RectangularEntityClass.h"

//Draw rectangular entities on a map
void RectangularEntityClass::drawOnMap(
     MapClass *mapObj
     ) const
{
  int rowNum;
  int colNum;
  bool hadAProblem;
  hadAProblem = false;
  rowNum = getNumRows();
  colNum = getNumCols();


  for (int rInd = 0; rInd < rowNum; rInd++)
  {
    for (int cInd = 0; cInd < colNum; cInd++)
    {
      //catch exceptions inside the loops so we can continue
      //trying to set additional pixels as appropriate...
      try
      {
        mapObj->setMapPixel(location + PixelLocationClass(rInd, cInd), color);
      }
      catch (MapExceptionClass mapExcep)
      {
        cout << "RectangularEntityClass::drawOnMap caught exception: " <<
                mapExcep.toString() << endl;
        hadAProblem = true;
      }      
    }
  }
    //Our protocol is that if any problems were detected, this function
    //throws an exception after working through all the possible pixels,
    //so if there was a problem, throw an exception from here..
    if (hadAProblem)
    {
        ostringstream excOSS;
        
        excOSS.clear();
        excOSS.str("");
        excOSS << "Attempted to draw out of bounds";
        
        throw MapExceptionClass(excOSS.str());
    }
}