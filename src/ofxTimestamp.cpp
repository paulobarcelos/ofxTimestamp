/*
 *  ofxTimestamp.cpp
 *  ofxTimestampExample
 *
 *  Created by Paulo Barcelos on 8/9/11.
 *  Copyright 2011 paulobarcelos.com. All rights reserved.
 *
 */

#include "ofxTimestamp.h"

///////////////////////////////////////////////////////////////////////////////////
// setup --------------------------------------------------------------------------
///////////////////////////////////////////////////////////////////////////////////
void ofxTimestamp::setup(float interval, string filename){
	this->interval = interval;
	this->filename = filename;
	
	lastElapsedTime = ofGetElapsedTimef();
}

///////////////////////////////////////////////////////////////////////////////////
// update -------------------------------------------------------------------------
///////////////////////////////////////////////////////////////////////////////////
void ofxTimestamp::update(){
	if ((ofGetElapsedTimef() - lastElapsedTime) > interval) {
		lastElapsedTime = ofGetElapsedTimef();
		
		FILE * f = fopen( ofToDataPath(filename+".txt", TRUE).c_str() ,"w");
		
		if ( f == nil )
			return;
		
		fprintf (f,"%i\n", ofGetElapsedTimeMillis());
		fclose(f);
	}
}