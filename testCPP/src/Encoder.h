/*
 * Encoder.h
 *
 *  Created on: 30-12-2012
 *      Author: user
 */

#ifndef ENCODER_H_
#define ENCODER_H_

#include <iostream>
#include <cmath>
using namespace std;

class Encoder {
public:
	Encoder() {
		lastValue = 0;
		newValue = 0;
		dt = 1;
		speed = 0;
		q=false;
	}

	int lastValue;
	int newValue;
	float speed;

	void write(int value) {
		newValue = value;
		countSpeed();
	}

	void countSpeed() {
		if(q){
		if(abs(newValue-lastValue)>300){
			if(newValue<lastValue) speed = (float)((newValue+360-lastValue)/dt); //zgodnie z ruchem wskazowek
			else speed = (float)((newValue-lastValue-360)/dt);	//przeciwnie do ruchu wskazowek
		}
		else speed = (float)((newValue-lastValue)/dt);
		}
		else q=true;
		lastValue = newValue;
	}

private:
	int dt;
	bool q;
};

#endif /* ENCODER_H_ */
