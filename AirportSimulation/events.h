#ifndef EVENTS_H
#define EVENTS_H
#include<string>
/*
At a Minimum an event should have an id
a timestamp and a comparator
*/

class Event
{
protected:
	unsigned short _id;
	unsigned double _time;
public:
	void set_time(unsigned double time);
	unsigned double get_time();
	bool operator<(Event e) const {
		return (_time < e._time);
	};
	bool operator>(Event e) const {
		return (_time > e._time);
	};
	bool Event::operator==(const Event& e) const {
		return (_id == e._id);
	};
	bool Event::operator!=(const Event& e) const {
		return !(_id == e._id);
	};
}; // Base class


// all of the children
class FlightArrivalEvent : Event
{
private:
	std::string _flightID;
	unsigned short _num_pax;
public:
	FlightArrivalEvent(std::string flightID, unsigned short num_pax, unsigned double time);
	static unsigned short idx;
};


class ImmigrationArrivalEvent : Event {
private:
	string _immigration_zone;
public:
	static unsigned short idx;
};

class ImmigrationDepartureEvent : public Event {
private:
	string _immigration_zone;
public:
	static unsigned short idx;
};
#endif