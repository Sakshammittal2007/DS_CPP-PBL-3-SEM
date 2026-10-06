#include "EmergencyCall.h"
#include <iostream>

using namespace std;

EmergencyCall::EmergencyCall(int id, string loc, string desc, int p)
{
    callId = id;
    location = loc;
    description = desc;
    priority = p;
}

void EmergencyCall::displayCall()
{
    cout << "Call ID: " << callId << endl;
    cout << "Location: " << location << endl;
    cout << "Description: " << description << endl;
    cout << "Priority: " << priority << endl;
}

int EmergencyCall::getCallId()
{
    return callId;
}

string EmergencyCall::getLocation()
{
    return location;
}

int EmergencyCall::getPriority()
{
    return priority;
}
