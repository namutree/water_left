#include "cinder/app/AppNative.h"
#include "cinder/gl/gl.h"

using namespace ci;
using namespace ci::app;
using namespace std;

class water_leftApp : public AppNative {
  public:
	void setup();
	void mouseDown( MouseEvent event );	
	void update();
	void draw();
};

void water_leftApp::setup()
{
}

void water_leftApp::mouseDown( MouseEvent event )
{
}

void water_leftApp::update()
{
}

void water_leftApp::draw()
{
	// clear out the window with black
	gl::clear( Color( 0, 0, 0 ) ); 
}

CINDER_APP_NATIVE( water_leftApp, RendererGl )
