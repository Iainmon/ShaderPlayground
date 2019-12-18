#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    // create new ofxGLSLSandbox instance
    glslSandbox = new ofxGLSLSandbox();
    
    // setup shader width and height
    glslSandbox->setResolution(WINDOW_WIDTH, WINDOW_HIEGHT);
    
    // load fragment shader file (must put in bin/data folder)
    glslSandbox->loadFile("shader");
}

//--------------------------------------------------------------
void ofApp::update(){
    
}

//--------------------------------------------------------------
void ofApp::draw(){
    glslSandbox->draw();
    
    ofSetHexColor(0xffffff);
    ofDrawBitmapString("[f] Toggle fullscreen, [o] Open shader file on external editor, [r] Reload shader", 10, 15);
    ofDrawBitmapString(ofToString(ofGetFrameRate(), 4), 10, 30);
}

//--------------------------------------------------------------
void ofApp::keyPressed(int key){
    
    if (key == 'r') {
        compileShader("program.frag", "../../../data/", "shader.frag");
    }
    
    glslSandbox->keyPressed(key);

}

//--------------------------------------------------------------
void ofApp::keyReleased(int key){
    
}

//--------------------------------------------------------------
void ofApp::mouseMoved(int x, int y ){
    glslSandbox->mouseMoved(mouseX, mouseY);
    
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
    glslSandbox->setResolution(w, h);
}

//--------------------------------------------------------------
void ofApp::gotMessage(ofMessage msg){
    
}

//--------------------------------------------------------------
void ofApp::dragEvent(ofDragInfo dragInfo){ 
    
}
