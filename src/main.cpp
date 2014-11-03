#include "ofMain.h"
#include "ofApp.h"
#include "ofAppNowindow.h"

int main() {
  ofAppNoWindow window;
  ofSetupOpenGL(&window,500,500,OF_WINDOW);
	ofRunApp(new ofApp());
}
