#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
  ofBackground(0);
  ofSetFrameRate(20);
  
  panelONE = gui.addPanel("VARS");
  panelONE->setPosition(ofPoint(20,20));
  panelONE->add(modulo.set("modulo", 100, 10, 300));
  panelONE->add(multiplier.set("multiplier", 2, 2, 200));
  panelONE->add(radius.set("radius", ofGetWidth()  * .25, 2, ofGetWidth()  * .5));
  panelONE->add(ANIME.set("animate", false));
}

//--------------------------------------------------------------
void ofApp::update(){
  if(ANIME) multiplier += 0.01;
}

ofVec2f ofApp::getVector(int i){
  float a = ofMap(i % modulo, 0, modulo, 0, PI * 2);
  ofVec2f v = ofVec2f(float(cos(a)), float(sin(a)));
  v *=(radius);
  return v;
};


//--------------------------------------------------------------
void ofApp::draw(){
  ofPushMatrix();
  ofTranslate(ofGetWidth() * .5, ofGetHeight() * .5);
  
  for (unsigned int i = 0; i < modulo; i++) {
    ofVec2f a = ofApp::getVector(i);
    ofVec2f b = ofApp::getVector(i * multiplier);
    
    ofSetColor(255);
    ofDrawLine(a.x, a.y, b.x, b.y);
  }
  
  for (unsigned int i = 0; i < modulo; i++) {
    ofVec2f v = ofApp::getVector(i);
    
    ofSetColor(250, 125, 255);
    ofDrawCircle(v.x, v.y, 2);
  }
  
  ofPopMatrix();
}

//--------------------------------------------------------------
void ofApp::keyPressed(int key){

}

//--------------------------------------------------------------
void ofApp::keyReleased(int key){

}

//--------------------------------------------------------------
void ofApp::mouseMoved(int x, int y ){

}

//--------------------------------------------------------------
void ofApp::mouseDragged(int x, int y, int button){

}

//--------------------------------------------------------------
void ofApp::mousePressed(int x, int y, int button){

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
