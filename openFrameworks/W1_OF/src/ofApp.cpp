#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    mCircleRadius = 5;
    height = 1;
    mAcceleration = 0;
    mPos = ofVec2f(ofGetWindowWidth()* 10, height);
    
    
    mPressed = false;
    mAcceleration = 10;
    ofSetBackgroundColor(255, 204, 204);
}

//--------------------------------------------------------------
void ofApp::update(){
    /*if (mPressed) {
     mAcceleration += 1;
     height += mAcceleration;
     if (height> ofGetWindowHeight()){
     height = ofGetWindowHeight();
     }
     mPos = ofVec2f(ofGetWindowWidth()* 0.5, height);
     }*/
    
    
}

//--------------------------------------------------------------
void ofApp::draw(){
    ofSetColor(240,248,255);
    ofSetBoxResolution(200);
    ofDrawCircle(mPos, mCircleRadius);
    ofPushMatrix();
    ofTranslate(ofGetWindowWidth()* 0.5,ofGetWindowHeight()* 0.5,0);
    ofSetHexColor(0xF0FFFF);
    ofFill();
    ofSetPolyMode(OF_POLY_WINDING_ODD);
    ofRotate(ofGetFrameNum() * 3, mPos.x, mPos.y, 3);
    ofBeginShape();
    float angleStep 	= TWO_PI/(0.0f + sin(40/5.0f) * 100);
    float radiusAdder 	= 0.99f;
    float radius 		= 200;
    for (int i = 0; i < 300; i++){
        float anglef = (i) * angleStep;
        float x = radius * sin(anglef);
        float y = radius * cos(anglef);
        //x += ofRandom(-1,3);
        //y += ofRandom(-2,3);
        ofVertex(x,y);
        radius 	+= radiusAdder;
    }
    ofEndShape(OF_CLOSE);
    ofPopMatrix();
    ofDrawBitmapString("x" +ofToString(mPos.x) + "y" + ofToString(mPos.y), mPos +ofVec2f(10, -20));
}

//--------------------------------------------------------------
void ofApp::keyPressed(int key){
    
}

//--------------------------------------------------------------
void ofApp::keyReleased(int key){
    
}

//--------------------------------------------------------------
void ofApp::mouseMoved(int x, int y ){
    mPos.x = x;
    mPos.y = y;
}

//--------------------------------------------------------------
void ofApp::mouseDragged(int x, int y, int button){
    
}

//--------------------------------------------------------------
void ofApp::mousePressed(int x, int y, int button){
    mPressed = true;
    
}

//--------------------------------------------------------------
void ofApp::mouseReleased(int x, int y, int button){
    
}

//--------------------------------------------------------------
void ofApp::mouseEntered(int x, int y){
    
}

//--------------------------------------------------------------
void ofApp::mouseExited(int x, int y){
    
}

//--------------------------------------------------------------
void ofApp::windowResized(int w, int h){
    
}

//--------------------------------------------------------------
void ofApp::gotMessage(ofMessage msg){
    
}

//--------------------------------------------------------------
void ofApp::dragEvent(ofDragInfo dragInfo){
    
}
