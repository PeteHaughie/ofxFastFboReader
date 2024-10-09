#include "ofMain.h"

#include "testApp.h"

int main() {
	//Use ofGLFWWindowSettings for more options like multi-monitor fullscreen
	ofGLWindowSettings settings;
	settings.setSize(1024, 768);
	settings.windowMode = OF_WINDOW; //can also be OF_FULLSCREEN
    settings.setGLVersion(4, 1); // OpenGL 3.1 version
	auto window = ofCreateWindow(settings);

	ofRunApp(window, make_shared<testApp>());
	ofRunMainLoop();
}
