#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
	font.load("ArchivoBlack-Regular.ttf", 100, true, true, true);
}

//--------------------------------------------------------------
void ofApp::update(){

}

//--------------------------------------------------------------
void ofApp::draw(){
	ofBackground(255);
	ofScale(1.15, 1.5);

	int n_texture = 1000;
	int radius = 1;
	ofSeedRandom(6);

	ofTranslate(100, 200);
	std::string mit[3] = { "M", "I", "T" };
	int mitspace[3] = { 0, 130, 50 };
	for (int i = 0; i < 3; i++) {
		ofSetColor(230, 200-70*i, 13);
		vector < ofPath > paths = font.getStringAsPoints(mit[i]);
		ofTranslate(mitspace[i], 0);
		for (int m = 0; m < paths.size(); m++) {
			paths[m].draw();

			paths[m].setPolyWindingMode(OF_POLY_WINDING_ODD);
			vector < ofPolyline > lines = paths[m].getOutline();

			for (int j = 0; j < lines.size(); j++) {

				lines[j].setClosed(true);
				lines[j] = lines[j].getResampledBySpacing(3);
				lines[j] = lines[j].getSmoothed(1200 * 0.01);

				for (int k = 0; k < lines[j].size(); k++) {

					if (lines[j][k].y > -50 * i*0.1) {
						for (int n = 0; n < 190; n++) {
							ofSetColor(255, 255, 255);
							ofDrawCircle(lines[j][k].x + ofRandom(0, 3) * sin(lines[j][k].x*i), lines[j][k].y - ofRandom(1.18, 4.3) * sin(lines[j][k].y*0.04 + 2 * n), 0.125);
							ofDrawCircle(lines[j][k].x + ofRandom(0, 2) * sin(lines[j][k].x*i), lines[j][k].y - ofRandom(1.18, 5.3) * sin(lines[j][k].y*0.4 + 2 * n), 0.124);
							ofDrawCircle(lines[j][k].x + ofRandom(0, 4) * sin(lines[j][k].x*i), lines[j][k].y - ofRandom(1.18, 9.3) * sin(lines[j][k].y*0.9 + 2 * n), 0.128);
							ofDrawCircle(lines[j][k].x + ofRandom(0, 0.2) * sin(lines[j][k].x*i), lines[j][k].y - ofRandom(1.18, 13) * sin(lines[j][k].y*0.09 + 2 * n), 0.24);

							ofDrawCircle(lines[j][k].x + ofRandom(0, 2) * cos(lines[j][k].x*i), lines[j][k].y - ofRandom(1.18, 7.3) * sin(lines[j][k].y*0.04 + 2 * n), 0.25);
							ofDrawCircle(lines[j][k].x + ofRandom(0, 1.2) * cos(lines[j][k].x*i), lines[j][k].y - ofRandom(1.18, 8.3) * sin(lines[j][k].y*0.4 + 2 * n), 0.29);
							ofDrawCircle(lines[j][k].x + ofRandom(0, 3.4) * cos(lines[j][k].x*i), lines[j][k].y - ofRandom(1.18, 13) * sin(lines[j][k].y*0.9 + 2 * n), 0.27);
							ofDrawCircle(lines[j][k].x + ofRandom(0, 1.2) * sin(lines[j][k].x*i), lines[j][k].y - ofRandom(1.18,9.3) * sin(lines[j][k].y*0.09 + 2 * n), 0.28);
						}

					}

					if (lines[j][k].y > -60) {
						for (int n = 0; n < 30; n++) {
							ofSetColor(230, 200 - 70 * i, 13);
							ofDrawCircle(lines[j][k].x + ofRandom(0, 1 * 3) *sin(lines[j][k].x*i) + n, lines[j][k].y + ofRandom(0, 2 * 3) * 3 * sin(lines[j][k].y*0.04 + ofRandom(0, 2 * 4.2) * 2 * n), 0.21);
							ofDrawCircle(lines[j][k].x + ofRandom(0, 0.2 * 3) *sin(lines[j][k].x*i), lines[j][k].y + ofRandom(0, 2 * 2) * 3 * sin(lines[j][k].y*0.4 + ofRandom(0, 2 * 3.2) * 2 * n), 0.21);
							ofDrawCircle(lines[j][k].x + ofRandom(0, 0.12 * 3) *sin(lines[j][k].x*i), lines[j][k].y + ofRandom(0, 2 * 4) * 3 * sin(lines[j][k].y*0.9 + ofRandom(0, 2 * 4.2) * 2 * n), 0.31);
							ofDrawCircle(lines[j][k].x + ofRandom(0, 2.1 * 3) *sin(lines[j][k].x*i), lines[j][k].y + ofRandom(0, 2 * 0.2) * 3 * sin(lines[j][k].y*0.09 + ofRandom(0, 2 * 5.2) * 2 * n), 0.21);

							ofDrawCircle(lines[j][k].x + ofRandom(0, 0.8 * 3) *cos(lines[j][k].x*i) + n, lines[j][k].y + ofRandom(0, 2 * 2) * 3 * sin(lines[j][k].y*0.04 + ofRandom(0, 2 * 6.2) * 3 * n), 0.21);
							ofDrawCircle(lines[j][k].x + ofRandom(0, 1.2 * 3) *cos(lines[j][k].x*i), lines[j][k].y + ofRandom(0, 2 * 1.2) * 3 * sin(lines[j][k].y*0.4 + ofRandom(0, 2 * 3.2) * 2 * 2 * n), 0.311);
							ofDrawCircle(lines[j][k].x + ofRandom(0, 2.03 * 3) *cos(lines[j][k].x*i), lines[j][k].y + ofRandom(0, 2 * 3.4) * 3 * sin(lines[j][k].y*0.9 + ofRandom(0, 2 * 4.2) * 3 * n), 0.17);
							ofDrawCircle(lines[j][k].x + ofRandom(0, 1.02 * 3) *sin(lines[j][k].x*i), lines[j][k].y + ofRandom(0, 2 * 1.2) * 3 * sin(lines[j][k].y*0.09 + ofRandom(0, 2 * 5.2) * 5 * n), 0.28);
						}
					}

				}
			}
		}
	}

	ofTranslate(-180, 170);
	std::string media[5] = { "M", "E", "D", "I", "A"};
	int mediaspace[5] = { 0, 130, 105, 105, 50};
	for (int i = 0; i < 5; i++) {
		ofSetColor(220-45*i, 50-6*i, 10 + 35 * i);
		vector < ofPath > paths = font.getStringAsPoints(media[i]);
		ofTranslate(mediaspace[i], 0);
		for (int m = 0; m < paths.size(); m++) {
			paths[m].draw();

			paths[m].setPolyWindingMode(OF_POLY_WINDING_ODD);
			vector < ofPolyline > lines = paths[m].getOutline();

			for (int j = 0; j < lines.size(); j++) {
				
				lines[j].setClosed(true);
				lines[j] = lines[j].getResampledBySpacing(3);
				lines[j] = lines[j].getSmoothed(700*0.01);

				for (int k = 0; k < lines[j].size(); k++) {
				
					if (lines[j][k].y > -50*i*0.1) {
						for (int n = 0; n < 120; n++) {
							ofSetColor(255, 255, 255);
							ofDrawCircle(lines[j][k].x + ofRandom(0, 3) * sin(lines[j][k].x*i), lines[j][k].y - ofRandom(1.18, 13) * sin(lines[j][k].y*0.04 + 2*n), 0.15);
							ofDrawCircle(lines[j][k].x + ofRandom(0, 2) * sin(lines[j][k].x*i), lines[j][k].y - ofRandom(1.18, 6) * sin(lines[j][k].y*0.4 + 2*n), 0.24);
							ofDrawCircle(lines[j][k].x + ofRandom(0, 4) * sin(lines[j][k].x*i), lines[j][k].y - ofRandom(1.18,  9)* sin(lines[j][k].y*0.9 + 2*n), 0.28);
							ofDrawCircle(lines[j][k].x + ofRandom(0, 0.2) * sin(lines[j][k].x*i), lines[j][k].y - ofRandom(1.18, 2) * sin(lines[j][k].y*0.09 + 2*n), 0.24);

							ofDrawCircle(lines[j][k].x + ofRandom(0, 2) * cos(lines[j][k].x*i), lines[j][k].y - ofRandom(1.18, 4) * sin(lines[j][k].y*0.04 + 2*n), 0.15);
							ofDrawCircle(lines[j][k].x + ofRandom(0, 1.2) * cos(lines[j][k].x*i), lines[j][k].y - ofRandom(1.18, 13) * sin(lines[j][k].y*0.4 + 2*n), 0.19);
							ofDrawCircle(lines[j][k].x + ofRandom(0, 3.4) * cos(lines[j][k].x*i), lines[j][k].y - ofRandom(1.18, 23) * sin(lines[j][k].y*0.9 + 2*n), 0.27);
							ofDrawCircle(lines[j][k].x + ofRandom(0, 1.2) * sin(lines[j][k].x*i), lines[j][k].y - ofRandom(1.18, 7.3) * sin(lines[j][k].y*0.09 + 2*n), 0.28);
						}

					}

					if (lines[j][k].y > -60) {
						for (int n = 0; n < 30; n++) {
							ofSetColor(220 - 45 * i, 50 - 6 * i, 10 + 35 * i);
							ofDrawCircle(lines[j][k].x + ofRandom(0, 1 * 3) *sin(lines[j][k].x*i)+n, lines[j][k].y + ofRandom(0, 2 * 3) * 3 * sin(lines[j][k].y*0.04 + ofRandom(0, 2 * 7.2) * 2*n), 0.21);
							ofDrawCircle(lines[j][k].x + ofRandom(0, 0.2* 3) *sin(lines[j][k].x*i), lines[j][k].y + ofRandom(0, 2 * 2) * 3 * sin(lines[j][k].y*0.4 + ofRandom(0, 2 * 8.2) * 2 * n), 0.21);
							ofDrawCircle(lines[j][k].x + ofRandom(0, 0.12 * 3) *sin(lines[j][k].x*i), lines[j][k].y + ofRandom(0, 2 * 4) * 3 * sin(lines[j][k].y*0.9 + ofRandom(0, 2 * 3.2) * 2 * n), 0.31);
							ofDrawCircle(lines[j][k].x + ofRandom(0, 2.1 * 3) *sin(lines[j][k].x*i), lines[j][k].y + ofRandom(0, 2 * 0.2) * 3 * sin(lines[j][k].y*0.09 + ofRandom(0, 2 * 2.2) * 2 * n), 0.21);

							ofDrawCircle(lines[j][k].x + ofRandom(0, 0.8 * 3) *cos(lines[j][k].x*i)+n, lines[j][k].y + ofRandom(0, 2 * 2) * 3 * sin(lines[j][k].y*0.04 + ofRandom(0, 2 * 5.2) * 3 * n), 0.21);
							ofDrawCircle(lines[j][k].x + ofRandom(0, 1.2 * 3) *cos(lines[j][k].x*i), lines[j][k].y + ofRandom(0, 2 * 1.2) * 3 * sin(lines[j][k].y*0.4 + ofRandom(0, 2 * 1.2) * 2*2 * n), 0.311);
							ofDrawCircle(lines[j][k].x + ofRandom(0, 2.03 * 3) *cos(lines[j][k].x*i), lines[j][k].y + ofRandom(0, 2 * 3.4) * 3 * sin(lines[j][k].y*0.9 + ofRandom(0, 2 * 6.2) * 3 * n), 0.17);
							ofDrawCircle(lines[j][k].x + ofRandom(0, 1.02 * 3) *sin(lines[j][k].x*i), lines[j][k].y + ofRandom(0, 2 * 1.2) * 3 * sin(lines[j][k].y*0.09 + ofRandom(0, 2 * 4.2) * 5 * n), 0.28);
						}
					}
					
				}
				
			}
		}
	}

	ofTranslate(-390, 170);
	std::string lab[3] = { "L", "A", "B" };
	int labspace[5] = { 0, 105, 105 };
	for (int i = 0; i < 3; i++) {
		ofSetColor(5, 30 + 33 * i, 155 - 72 * i);
		vector < ofPath > paths = font.getStringAsPoints(lab[i]);
		ofTranslate(labspace[i], 0);
		for (int m = 0; m < paths.size(); m++) {
			paths[m].draw();

			paths[m].setPolyWindingMode(OF_POLY_WINDING_ODD);
			vector < ofPolyline > lines = paths[m].getOutline();

			for (int j = 0; j < lines.size(); j++) {

				lines[j].setClosed(true);
				lines[j] = lines[j].getResampledBySpacing(3);
				lines[j] = lines[j].getSmoothed(900 * 0.01);

				for (int k = 0; k < lines[j].size(); k++) {

					if (lines[j][k].y > -50 * i*0.1) {
						for (int n = 0; n < 120; n++) {
							ofSetColor(255, 255, 255);
							ofDrawCircle(lines[j][k].x + ofRandom(0, 3) * sin(lines[j][k].x*i), lines[j][k].y - ofRandom(1.18, 13) * sin(lines[j][k].y*0.04 + 2 * n), 0.25);
							ofDrawCircle(lines[j][k].x + ofRandom(0, 2) * sin(lines[j][k].x*i), lines[j][k].y - ofRandom(1.18, 13) * sin(lines[j][k].y*0.4 + 2 * n), 0.24);
							ofDrawCircle(lines[j][k].x + ofRandom(0, 4) * sin(lines[j][k].x*i), lines[j][k].y - ofRandom(1.18, 23) * sin(lines[j][k].y*0.9 + 2 * n), 0.18);
							ofDrawCircle(lines[j][k].x + ofRandom(0, 0.2) * sin(lines[j][k].x*i), lines[j][k].y - ofRandom(1.18, 3) * sin(lines[j][k].y*0.09 + 2 * n), 0.24);

							ofDrawCircle(lines[j][k].x + ofRandom(0, 2) * cos(lines[j][k].x*i), lines[j][k].y - ofRandom(1.18, 6) * sin(lines[j][k].y*0.04 + 2 * n), 0.25);
							ofDrawCircle(lines[j][k].x + ofRandom(0, 1.2) * cos(lines[j][k].x*i), lines[j][k].y - ofRandom(1.18, 8) * sin(lines[j][k].y*0.4 + 2 * n), 0.29);
							ofDrawCircle(lines[j][k].x + ofRandom(0, 3.4) * cos(lines[j][k].x*i), lines[j][k].y - ofRandom(1.18, 9) * sin(lines[j][k].y*0.9 + 2 * n), 0.17);
							ofDrawCircle(lines[j][k].x + ofRandom(0, 1.2) * sin(lines[j][k].x*i), lines[j][k].y - ofRandom(1.18, 10) * sin(lines[j][k].y*0.09 + 2 * n), 0.28);
						}

					}

					if (lines[j][k].y > -60) {
						for (int n = 0; n < 30; n++) {
							ofSetColor(5, 30 + 33 * i, 155 - 72 * i);
							ofDrawCircle(lines[j][k].x + ofRandom(0, 1 * 3) *sin(lines[j][k].x*i) + n, lines[j][k].y + ofRandom(0, 2 * 3) * 3 * sin(lines[j][k].y*0.04 + ofRandom(0, 2 * 5.2) * 2 * n), 0.21);
							ofDrawCircle(lines[j][k].x + ofRandom(0, 0.2 * 3) *sin(lines[j][k].x*i), lines[j][k].y + ofRandom(0, 2 * 2) * 3 * sin(lines[j][k].y*0.4 + ofRandom(0, 2 * 2.2) * 2 * n), 0.21);
							ofDrawCircle(lines[j][k].x + ofRandom(0, 0.12 * 3) *sin(lines[j][k].x*i), lines[j][k].y + ofRandom(0, 2 * 4) * 3 * sin(lines[j][k].y*0.9 + ofRandom(0, 2 * 3.2) * 2 * n), 0.31);
							ofDrawCircle(lines[j][k].x + ofRandom(0, 2.1 * 3) *sin(lines[j][k].x*i), lines[j][k].y + ofRandom(0, 2 * 0.2) * 3 * sin(lines[j][k].y*0.09 + ofRandom(0, 2 * 4.2) * 2 * n), 0.21);

							ofDrawCircle(lines[j][k].x + ofRandom(0, 0.8 * 3) *cos(lines[j][k].x*i) + n, lines[j][k].y + ofRandom(0, 2 * 2) * 3 * sin(lines[j][k].y*0.04 + ofRandom(0, 2 * 3.2) * 3 * n), 0.21);
							ofDrawCircle(lines[j][k].x + ofRandom(0, 1.2 * 3) *cos(lines[j][k].x*i), lines[j][k].y + ofRandom(0, 2 * 1.2) * 3 * sin(lines[j][k].y*0.4 + ofRandom(0, 2 * 4.2) * 2 * 2 * n), 0.311);
							ofDrawCircle(lines[j][k].x + ofRandom(0, 2.03 * 3) *cos(lines[j][k].x*i), lines[j][k].y + ofRandom(0, 2 * 3.4) * 3 * sin(lines[j][k].y*0.9 + ofRandom(0, 2 * 1.2) * 3 * n), 0.17);
							ofDrawCircle(lines[j][k].x + ofRandom(0, 1.02 * 3) *sin(lines[j][k].x*i), lines[j][k].y + ofRandom(0, 2 * 1.2) * 3 * sin(lines[j][k].y*0.09 + ofRandom(0, 2 * 2.2) * 5 * n), 0.28);
						}
					}

				}

				//lines[j].draw();

			}
		}
	}

}

//--------------------------------------------------------------
void ofApp::keyPressed(int key){

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
