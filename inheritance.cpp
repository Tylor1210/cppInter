Goal: Learn how to implement subclasses.

Assignment: You are developing a smart home system that is comprised of several types of smart devices. 
Assume the existence of a SmartDevice class, defined as such:

class SmartDevice
{
private:
    string deviceName;
public:
    SmartDevice() 
    { deviceName = "General Smart Device"; }

    string getDeviceName() 
    { return deviceName; }

    void setDeviceName(string name) 
    { deviceName = name; }
}


Your task is to create a class named SmartThermostat that is derived from the SmartDevice class. 
The class should have the following members:





A private double member variable named temperature



A public member function named getTemperature that takes no arguments and returns a double



A public constructor that sets temperature to 20 degrees, and deviceName to "Smart Thermostat" 
(Hint: Look at the member functions in the SmartDevice class)




#include <string> 

class SmartThermostat : public SmartDevice {
private:
    double temperature;

public:
    SmartThermostat() {
        temperature = 20.0;
        setDeviceName("Smart Thermostat");
    }

    double getTemperature() {
        return temperature;
    }
};