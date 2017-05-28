#include "ofApp.h"

static bool show_grid = false;

//--------------------------------------------------------------
void ofApp::setup(){
   //ofBackground(255,255,255);
 	ofSetVerticalSync(true);

	vid.load("ppap.mp4");//dataフォルダ内の映像データの読み込み
	vid.setLoopState(OF_LOOP_NORMAL);
	vid.play();

}

//--------------------------------------------------------------
void ofApp::update(){

     vid.update();//毎フレーム更新

}

//--------------------------------------------------------------
void ofApp::draw(){
    //vid.draw(0,0,ofGetWidth(),ofGetHeight());//描画

    ofPixels & pixels = vid.getPixels();

    int vidWidth = pixels.getWidth();
    int vidHeight = pixels.getHeight();
    int nChannels = pixels.getNumChannels();


   if(show_grid) vid.draw(0,0,ofGetWidth(),ofGetHeight());//描画
   //else 


    // let's move through the "RGB(A)" char array
    // using the red pixel to control the size of a circle.
  //  for (int i = 4; i < vidWidth; i+=8){
//        for (int j = 4; j < vidHeight; j+=8){
//            unsigned char r = pixels[(j * 320 + i)*nChannels];
//            float val = 1 - ((float)r / 255.0f);
//			ofDrawCircle(400 + i,20+j,10*val);
//        }
//    }
//

}

//--------------------------------------------------------------
void ofApp::keyPressed(int key){
	if (key == ' ')
	{
		show_grid = show_grid ? false : true;
	}
	
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
