// Jisoo Choi
// CS 1337
// Lab 63

#include <lab63.h>
#include <iomanip>

Time::Time(int hr, int min, int sec) {
	setTime(hr, min, sec);
}

int Time::getHour() const {
	return hour;
}

int Time::getMinute() const {
	return minute;
}

int Time::getSecond() const {
	return second;
}

void Time::setTime(int hr, int min, int sec) {
	if(hr >= 0 && hr <= 23)
		hour = hr;
	else
		hour = 0;
	
	if(min >= 0 && min <= 59)
		minute = min;
	else
		minute = 0;

	if(sec >= 0 && sec <= 59)
		second = sec;
	else
		second = 0;
}

bool Time::isAM() const {
	if(getHour() >= 0 && getHour() <= 12)
		return true;
	return false;
}

void Time::printStandard(ostream& os) const {
	char ch = os.fill(); //save the current fill character
	os << setfill(' ') << setw(2);
	
	if(getHour() == 0)
		os << 12;
	else if(getHour() <= 12)
		os << getHour();
	else 
		os << getHour() - 12;
	
	os << ':';
	os << setfill('0') << setw(2) << getMinute();
	
	os << ':';
	os << setfill('0') << setw(2) << getSecond();
	
	if(isAM())
		os << " A.M.";
	else 
		os << " P.M.";
	
	os.fill(ch);
	
}

int Time::timeToSeconds() const {
	return getHour() * 3600 + getMinute() * 60 + getSecond();
}
