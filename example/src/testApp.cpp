#include "testApp.h"

//--------------------------------------------------------------
void testApp::setup(){
	timestamp.setup(1.f,			// Interval to save the timestamp, in seconds. Defaults to 1.f.
					"timestamp");	// Timestamp filename. Defaults to "timestamp" (saved in "data/timestamp.txt").
}

//--------------------------------------------------------------
void testApp::update(){
	timestamp.update();
}
