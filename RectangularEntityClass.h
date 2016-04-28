#ifndef _RECTANGULARENTITYCLASS_H_
#define _RECTANGULARENTITYCLASS_H_

//Programmer: Xiaojie Liu
//Date: April 17 2016
//Purpose: Provide a generic class that will represent a rectangular entity, 
//         which is a generic type of map entity.

#include <string>
#include <sstream>
using namespace std;


#include "MapEntityClass.h"
#include "MapExceptionClass.h"


class RectangularEntityClass : public MapEntityClass
{
  
  public:
    RectangularEntityClass(
        const PixelLocationClass &inPixLoc,
        const ColorClass &inColor
        ) : MapEntityClass(inPixLoc, inColor)
    {
      ;
    }
    
    //method to draw entities on a map 
    void drawOnMap(MapClass *mapObj) const;
    
    //print out drawing related information 
    virtual string toString() const = 0;
    
    //Common interface for getting the type of a subclass as a string.
    virtual string getType() const = 0;

    //Common interface for getting the row numbers of a subclass.
    virtual int getNumRows() const = 0;

    //Common interface for getting the column numbers of a subclass.
    virtual int getNumCols() const = 0;
};

#endif // _RECTANGULARENTITYCLASS_H_
