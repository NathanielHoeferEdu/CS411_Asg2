//==============================================================================
// Assignment 2 - Trip Leg
//==============================================================================
/*
	File: TripLeg.hpp
    Project: Assignment 2
    Author: Nathaniel Hoefer
    Student ID: X529U639
    Class: CS411 - Spring 2017
	Date: 3/11/2017

******************************************************************************/

#ifndef TRIPLEG_HPP_
#define TRIPLEG_HPP_

class TripLeg
{
public:
	// Used to identify road type
	enum RoadType { HIGHWAY, CITY, DEFAULT };

	TripLeg();
	TripLeg(double distance, RoadType roadType);

	// Accessors
	double getDistance();
	RoadType getRoadType();

private:
	double mDistance;
	RoadType mRoadType;
};

#endif /* TRIPLEG_HPP_ */
