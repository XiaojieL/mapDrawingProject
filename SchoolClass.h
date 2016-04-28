#ifndef _SCHOOLCLASS_H_
#define _SCHOOLCLASS_H_


//Programmer: Xiaojie Liu
//Date: April 17 2016
//Purpose: Provide a class that will represent a school, which is a specific
//         type of map entity that will be able to be drawn onto a map
//         image via a description of the school.


#include <string>
#include <sstream>
using namespace std;

#include "RectangularEntityClass.h"

//Some school-specific global constants..
const string SCHOOL_TYPE_STR = "School";
const ColorClass SCHOOL_COLOR = ColorClass(63, 63, 255);
const int STUDENT_NUM_PER_PIXEL = 50;

class SchoolClass : public RectangularEntityClass
{
  private:
  	int numStudents;
  public:
  	SchoolClass(
  		const PixelLocationClass &inPixLoc,
      int inNumStudents
  		) : RectangularEntityClass (inPixLoc, SCHOOL_COLOR)
  	{
      numStudents = inNumStudents;
  	}

    //Simply creates a printable string from a school object, making sure
    //to only be responsible for those attributes directly associated
    //with the actual HouseClass, and leaving higher-level attributes to
    //higher-level classes.
    string toString() const
    {
      ostringstream oss;
      oss.clear();
      oss.str("");

      oss << SCHOOL_TYPE_STR << " #Students: " << numStudents << " " 
          << MapEntityClass::toString();
      return (oss.str());
    }

    //The required polymorphic interface for getting the type of a
    //map entity as a string.
    string getType() const
    {
      return SCHOOL_TYPE_STR;
    }
  	
  	int getNumRows() const;
  	int getNumCols() const;
};

#endif // _SCHOOLCLASS_H_
