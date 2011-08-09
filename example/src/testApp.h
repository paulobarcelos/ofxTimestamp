#pragma once

#include "ofMain.h"
#include "ofxTimestamp.h"

class testApp : public ofBaseApp{

	public:
		void setup();
		void update();
	
		ofxTimestamp timestamp;
		
};
