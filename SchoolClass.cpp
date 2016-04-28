#include <iostream>
#include <cmath>
using namespace std;

#include "SchoolClass.h"


//get the number of rows of a school object
int SchoolClass::getNumRows(
  ) const
{
  int rowNum;
  //Note: +1 because from 0 to the value should be 1 pixel, then
  //      an additional pixel for every multiple after that
  rowNum = numStudents / STUDENT_NUM_PER_PIXEL + 1;
  return rowNum;
}

//get the number of columns of a school object
int SchoolClass::getNumCols(
  ) const 
{
  int colNum;
  //Note: +1 because from 0 to the value should be 1 pixel, then
  //      an additional pixel for every multiple after that
  colNum = numStudents / STUDENT_NUM_PER_PIXEL + 1;
  return colNum;
}