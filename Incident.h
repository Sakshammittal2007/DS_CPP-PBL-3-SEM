#ifndef INCIDENT_H
#define INCIDENT_H

#include <iostream>
#include <string>
#include <vector>

using namespace std;

class Incident
{
private:
    int incidentId;
    string emergencyType;
    string location;

    vector<int> callIds;

    int severity;
    int priority;

    bool lowInformation;
    bool conflicting;

public:

    Incident()
    {
        incidentId = 0;
        emergencyType = "";
        location = "";
        severity = 0;
        priority = 0;
        lowInformation = false;
        conflicting = false;
    }

    Incident(
        int id,
        string type,
        string loc,
        int sev,
        int p
    )
    {
        incidentId = id;
        emergencyType = type;
        location = loc;
        severity = sev;
        priority = p;

        lowInformation = false;
        conflicting = false;
    }

    void addCall(int callId)
    {
        callIds.push_back(callId);
    }

    int getIncidentId()
    {
        return incidentId;
    }

    string getEmergencyType()
    {
        return emergencyType;
    }

    string getLocation()
    {
        return location;
    }

    int getSeverity()
    {
        return severity;
    }

    int getPriority()
    {
        return priority;
    }

    int getNumberOfCalls()
    {
        return callIds.size();
    }

    void setLowInformation(bool value)
    {
        lowInformation = value;
    }

    void setConflicting(bool value)
    {
        conflicting = value;
    }

    void display()
    {
        cout << "\n================================\n";

        cout << "Incident ID: "
             << incidentId << endl;

        cout << "Type: "
             << emergencyType << endl;

        cout << "Location: "
             << location << endl;

        cout << "Number of Reports: "
             << callIds.size() << endl;

        cout << "Severity: "
             << severity << "/10" << endl;

        cout << "Priority Score: "
             << priority << endl;

        if (lowInformation)
        {
            cout << "Warning: Low Information Report"
                 << endl;
        }

        if (conflicting)
        {
            cout << "Warning: Conflicting Reports"
                 << endl;
        }

        cout << "================================\n";
    }
};

#endif