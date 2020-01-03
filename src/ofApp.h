#pragma once

#include "ofMain.h"
#include "ofxGuiExtended.h"

class ofApp : public ofBaseApp{
  
public:
  void setup();
  void update();
  void draw();
  ofVec2f getVector(int i);
  
  void keyPressed(int key);
  void keyReleased(int key);
  void mouseMoved(int x, int y );
  void mouseDragged(int x, int y, int button);
  void mousePressed(int x, int y, int button);
  void mouseReleased(int x, int y, int button);
  void mouseEntered(int x, int y);
  void mouseExited(int x, int y);
  void windowResized(int w, int h);
  void dragEvent(ofDragInfo dragInfo);
  void gotMessage(ofMessage msg);
  
  
  ofParameter<int> modulo = 10;
  ofParameter<float> multiplier = 0;
  ofParameter<float> radius;
  ofParameter<bool> ANIME = false;
  
  ofxGui gui;
  ofxGuiPanel* panelONE;
};
