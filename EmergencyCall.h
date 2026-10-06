#ifndef EMERGENCY_CALL_H
#define EMERGENCY_CALL_H

#include <string>
using namespace std;

class EmergencyCall
{
private:
    int callId;
    string location;
    string description;
    int priority;

public:
    EmergencyCall(int id, string loc, string desc, int p);

    void displayCall();

    int getCallId();
    string getLocation();
    int getPriority();
};

#endif
