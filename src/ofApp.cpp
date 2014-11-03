#include "ofApp.h"

ofApp::ofApp():bCanLoad(true) {};

void ofApp::setup() {
  ofSetFrameRate(5);
}

void ofApp::update() {
  if (bCanLoad) {
    createNewPlayer();
    bCanLoad = false;
  } else {
    if (!player->getIsPlaying()) {
      removePlayer();
      bCanLoad = true;
    }
  }
}

void ofApp::createNewPlayer() {
  ofLogNotice("ofApp") << "Creating new player at " << ofGetElapsedTimef();
  player = new ofSoundPlayer();
  player->loadSound("sound.wav");
  player->play();
}

void ofApp::removePlayer() {
  ofLogNotice("ofApp") << "Removing player at " << ofGetElapsedTimef();
  player->unloadSound();
  delete player;
}