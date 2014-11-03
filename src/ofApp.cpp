#include "ofApp.h"

void ofApp::setup() {
  ofSetFrameRate(5);
  createNewPlayer();
}

void ofApp::update() {
  if (!player->getIsPlaying()) {
    ofLogNotice("ofApp") << "Removing player at " << ofGetElapsedTimef();
    player->unloadSound();
    delete player;
    createNewPlayer();
  }
}

void ofApp::createNewPlayer() {
  ofLogNotice("ofApp") << "Creating new player at " << ofGetElapsedTimef();
  player = new ofSoundPlayer();
  player->loadSound("sound.wav");
  player->play();
}