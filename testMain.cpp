#include <algorithm>
#include <iostream>
#include "Hungarian.h"


int main(void)
{
    // please use "-std=c++11" for this initialization of vector.
    vector< vector<double> > costMatrix = { { 10, 19, 8, 15, 0 },
										  { 10, 18, 7, 17, 0 }, 
										  { 13, 16, 9, 14, 0 }, 
                                          { 12, 19, 8, 18, 0 } };


    HungarianAlgorithm hungarianAlgo;
	vector<int> assignment;

    double cost = hungarianAlgo.solveAssignment(costMatrix, assignment, true); // Set 3rd parameter to True to Mmximize, False (default) to mimimize
    if (!assignment.empty())
    {
        for (unsigned int x = 0; x < costMatrix.size(); x++)
            std::cout << x << "," << assignment[x] << "\t";
    }
	std::cout << "\ncost: " << cost << std::endl;

	return 0;
}
