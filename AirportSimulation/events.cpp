#include "events.h"



void Event::set_time(unsigned double time) {
	_time = time;
}

unsigned double Event::get_time() {
	return _time;
}

unsigned short FlightArrivalEvent::idx = 1;


FlightArrivalEvent::FlightArrivalEvent(string flightID, unsigned short num_pax, unsigned double time) {
	_flightID = flightID;
	_num_pax = num_pax;
	_id = idx++;
	_time = time;
}

unsigned short ImmigrationArrivalEvent::idx = 1;
ImmigrationArrivalEvent::ImmigrationArrivalEvent(unsigned double time) {
	_id = idx++;
	_time = time;
}


unsigned short ImmigrationDepartureEvent::idx = 1;
ImmigrationDepartureEvent::ImmigrationDepartureEvent(unsigned double time) {
	_id = idx++;
	_time = time;
}
