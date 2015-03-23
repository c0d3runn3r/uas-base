#include <iostream>
#include <string>
#include "joystick/joystick.hh"
//#include <boost/shared_ptr.hpp>
//#include "Fastcache.h"

using namespace std;
// using namespace active911;
// using boost::shared_ptr;

// class TestClass {
// public:
// 	int id;
// 	string name;
// };

int main(int argc, char **argv) {

	Joystick joy;

	if(!joy.isFound()) {

		cout << "Joystick not found!" << endl;
		return 1;
	}


	JoystickEvent event;
	if(joy.sample(&event)) {

		cout << "Event!" << endl;
	}


	return 0;
}



