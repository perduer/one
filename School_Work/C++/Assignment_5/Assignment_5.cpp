/*
 Roy Perdue
 C++
 Assignment 5
 4/8/2014
*/
#include <iostream>
#include <fstream>
#include <algorithm> 
#include <string>

using namespace std;

int main()
{
    int pixels[9];
    ifstream input[9];
    ofstream output;
    string paths[9] = {"Pesky1.ppm", "Pesky2.ppm", "Pesky3.ppm", "Pesky4.ppm", 
    		       "Pesky5.ppm", "Pesky6.ppm", "Pesky7.ppm", "Pesky8.ppm", "Pesky9.ppm"};

    for (int h = 0; h < 557; h++)
    {
	for (int w = 0; w < 495*3; w++)
	{
	     for(int i = 0; i < 9; i++)
	     {
		  if(h == 0 && w == 0)
		  {
		        input[i].open(paths[i].c_str());
		   	if(i == 8)
		   	{
		   	      output.open("NewImage.ppm");
		   	      output << "P3" << endl 
				<< "# CREATOR: Assignment_5.cpp" << endl 
				<< "495" << " " <<  "557" << endl 
				<< "255" << endl;
		   	}	
		  }
		  if(input[i].is_open())
		  {
	        	string value;
			getline(input[i], value);
			int num = atoi(value.c_str());
			pixels[i] = num;
	          }
		  else 
		  {
			cout << "Input file "<< i << " not found." << endl;
		  }
		}
		sort(pixels, pixels + 9);
		if(output.is_open())
   		{
       		   output << pixels[4] << endl;
  		}
   	        else 
   		{
	             cout << "Output file not found." << endl;
   		}
	  }
    }
    for(int i = 0; i < 9; i++)
    {
    	input[i].close();
    }
    output.close();
}


