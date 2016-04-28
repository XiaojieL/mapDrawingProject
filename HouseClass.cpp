#include <iostream>
#include <cmath>
using namespace std;

#include "HouseClass.h"

//Get number of rows of a house object
int HouseClass::getNumRows(
  ) const 
{
  int rowNum;

  //Note: +1 because from 0 to the value should be 1 pixel, then
  //      an additional pixel for every multiple after that
  rowNum = dollarValue / HOUSE_VALUE_PER_PIXEL + 1;
  return rowNum;
}

//Get number of columns of a house object
int HouseClass::getNumCols (
  ) const 
{
  int colNum;

   //Note: +1 because from 0 to the value should be 1 pixel, then
  //      an additional pixel for every multiple after that
  colNum = dollarValue / HOUSE_VALUE_PER_PIXEL + 1;
  return colNum;
}