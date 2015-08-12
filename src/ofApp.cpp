#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    if (ofDirectory::doesDirectoryExist("/Volumes/ITWHA Ram Disk")) {
        cout << "found it" << endl;
    } else {
        string s = ofSystem("diskutil erasevolume HFS+ 'ITWHA Ram Disk' `hdiutil attach -nomount ram://1048576`");
        cout << s << endl;
    }
    
    ofSleepMillis(5000);
    ofSystem("cp -r ~/Desktop/ITWHA/ /Volumes/ITWHA\\ Ram\\ Disk/");
    ofSleepMillis(5000);
    
    if (ofDirectory::doesDirectoryExist("/Volumes/ITWHA Ram Disk/EyeWall_OverheadDebug.app")) {
        ofSystem("open -a Terminal /Volumes/ITWHA\\ Ram\\ Disk/EyeWall_OverheadDebug.app/Contents/MacOS/EyeWall_OverheadDebug");
    } else if (ofDirectory::doesDirectoryExist("/Volumes/ITWHA Ram Disk/EyeWall_Overhead.app")) {
        ofSystem("open -a Terminal /Volumes/ITWHA\\ Ram\\ Disk/EyeWall_Overhead.app/Contents/MacOS/EyeWall_Overhead");
    } else {
        cout << "could ot find ITWHA" << endl;
    }
    
    ofSleepMillis(5000);
    
    ofExit();
}

//--------------------------------------------------------------
void ofApp::update(){

}

//--------------------------------------------------------------
void ofApp::draw(){
    ofBackground(24);

}

//--------------------------------------------------------------
void ofApp::keyPressed(int key){
    if (key == 'r') {
        setup();
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
void ofApp::windowResized(int w, int h){

}

//--------------------------------------------------------------
void ofApp::gotMessage(ofMessage msg){

}

//--------------------------------------------------------------
void ofApp::dragEvent(ofDragInfo dragInfo){ 

}
