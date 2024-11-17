#pragma once
#include "DeviceList.h"

class User
{
	private:
		unsigned int id;
		std::string userName;
		unsigned int age;
		DevicesList userDevices;

	public:
		void init(unsigned int id, std::string username, unsigned int age);
		void clear();
		unsigned int getID() const;
		std::string getUserName() const;
		unsigned int getAge() const;
		DevicesList& getDevices();
		void addDevice(Device newDevice);
		bool checkIfDevicesAreOn() const;
};