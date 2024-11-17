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
		//getters
		unsigned int getID() const;
		std::string getUserName() const;
		unsigned int getAge() const;
		DevicesList& getDevices();
		bool checkIfDevicesAreOn() const;

		//setters
		void init(unsigned int id, std::string username, unsigned int age);
		void clear();
		void addDevice(Device newDevice);
};