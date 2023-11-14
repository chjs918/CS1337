// Jisoo Choi
// CS 1337
// Lab 65

#include <lab65.h>

 // Function addSecond - adds one second to the time represented by
  // *this
 void Time::addSecond() {
	setTime(getHour(), getMinute(), getSecond() + 1);
	
	if( getSecond() == 0){
		setTime(getHour(), getMinute() + 1, 0);
		if(getMinute() == 0)
			setTime(getHour() + 1, 0, 0);
	}
 }
	

  // Function isEqualTo - returns true if the time represented by
  // *this is equal to the time represented by secondTime
 bool Time::isEqualTo(const Time& secondTime) const
 {
	 if(getTime() == secondTime.getTime())
		return true;
	 return false;
 }
  

 // Function isEarlierThan - returns true if the time represented by
 // *this is earlier than the time represented by secondTime
 bool Time::isEarlierThan(const Time& secondTime) const
 {
	 if(getHour() < second.getHour())
	{
		return true;
	}
	else if(getHour() == second.getHour())
	{
		if(getMinute() < second.getMinute())
		{
			return true;
		}
		else if(getMinute() == second.getMinute())
		{
			if(getSecond() < second.getSecond())
			{
				return true;
			}
		}
	}
	return false;
 }
