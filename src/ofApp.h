#pragma once

#include "ofMain.h"

class ofApp : public ofBaseApp {
public:
  ofApp();
  void setup();
  void update();
  void createNewPlayer();
  void removePlayer();
  ofSoundPlayer* player;
  bool bCanLoad;
};
