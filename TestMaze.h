#ifndef TESTMAZE_H
#define TESTMAZE_H

#include <fstream>
#include "Maze.h"

using namespace std;

class TestMaze : public Maze {
	public:
		TestMaze();	// Constructor
        bool isEmpty(const Point& ponto) const;
	    int  getWidth();
	    int  getHeight();
	    void loadMaze(string arquivo);
        int  getRobot();
        char getCharAt(int i, int j);
        bool CanIGoThere(const Point& ponto) const;
        Point getIniPos();
	private:
		int dimx, dimy;		// Maze size
        char lab[100][100];	// The maze
        int robot;
        Point posIni;
};

#endif
