/*
 *  ofxTimestamp.h
 *  ofxTimestampExample
 *
 *  Created by Paulo Barcelos on 8/9/11.
 *  Copyright 2011 paulobarcelos.com. All rights reserved.
 *
 */
#pragma once

#include "ofMain.h"

class ofxTimestamp {
public:
	
	void	setup(float interval = 1.f, string filename = "timestamp");
	void	update();
	
private:
	
	string	filename;
	float	interval;
	float	lastElapsedTime;
};

