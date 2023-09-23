#ifndef TIME_H
#define TIME_H

class Time{
	public:
		Time();
		Time(int, int, int);
		~Time();
		void SetTime(int, int, int);
		void GetTime() const;
	private:
		int hours, minutes, seconds;
};
#endif
#include "Time.cpp"
