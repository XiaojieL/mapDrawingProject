drawMap.exe: ColorClass.o PixelLocationClass.o MapClass.o MapEntityClass.o MapExceptionClass.o RectangularEntityClass.o HouseClass.o RoadClass.o SchoolClass.o ParkClass.o main.o 
	g++ ColorClass.o PixelLocationClass.o MapClass.o MapEntityClass.o MapExceptionClass.o RectangularEntityClass.o HouseClass.o RoadClass.o SchoolClass.o ParkClass.o main.o  -o drawMap.exe

MapClass.o: MapClass.cpp MapClass.h MapEntityClass.h ColorClass.h PixelLocationClass.h
	g++ -c MapClass.cpp -o MapClass.o
	
MapEntityClass.o: MapEntityClass.h MapClass.h ColorClass.h PixelLocationClass.h
	g++ -c MapEntityClass.cpp -o MapEntityClass.o
	
MapExceptionClass.o: MapExceptionClass.h 
	g++ -c MapExceptionClass.cpp -o MapExceptionClass.o
  
RectangularEntityClass.o: RectangularEntityClass.cpp RectangularEntityClass.h MapEntityClass.h
	g++ -c RectangularEntityClass.cpp -o RectangularEntityClass.o
  
HouseClass.o: HouseClass.cpp HouseClass.h RectangularEntityClass.h
	g++ -c HouseClass.cpp -o HouseClass.o

RoadClass.o: RoadClass.cpp RoadClass.h RectangularEntityClass.h
	g++ -c RoadClass.cpp -o RoadClass.o

ParkClass.o: ParkClass.cpp ParkClass.h MapEntityClass.h
	g++ -c ParkClass.cpp -o ParkClass.o

SchoolClass.o: SchoolClass.cpp SchoolClass.h RectangularEntityClass.h
	g++ -c SchoolClass.cpp -o SchoolClass.o

main.o: main.cpp 
	g++ -c main.cpp -o main.o

drawMap.o: drawMap.cpp 
	g++ -c drawMap.cpp -o drawMap.o 

clean:
	rm *.o 
	
	

