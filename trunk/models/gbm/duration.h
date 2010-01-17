/*
 Copyright (c) 2008 by contributors:

 * Damitha Premadasa
 * Nilendra Weerasinghe
 * Thilina Dampahala
 * Waruna Ranasinghe - (http://warunapw.blogspot.com)

 Licensed under the Apache License, Version 2.0 (the "License");
 you may not use this file except in compliance with the License.
 You may obtain a copy of the License at

    http://www.apache.org/licenses/LICENSE-2.0

 Unless required by applicable law or agreed to in writing, software
 distributed under the License is distributed on an "AS IS" BASIS,
 WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 See the License for the specific language governing permissions and
 limitations under the License.
*/

#ifndef _DURATION_H_
#define _DURATION_H_

#include <time.h>
#include <sys/time.h>

class Duration
{
private:
	struct timeval tvStart;
	struct timeval tvEnd;
	struct tm *tmStart;
	struct tm *tmEnd;
public:
	void setStart();
	void setEnd();
	double getPassedTime();
	long int getCurrTime();
	char* getSysTime();
};

#endif //_DURATION_H_
