#include "User.h"

void User::init(unsigned int ID, std::string username, unsigned int Age)
{
	id = ID;
	userName = username;
	age = Age;
}

void User::clear()
{
    userDevices.clear();
}

unsigned int User::getID() const
{
	return id;
}

std::string User::getUserName() const
{
	return userName;
}

unsigned int User::getAge() const
{
	return age;
}

DevicesList& User::getDevices() 
{
	DevicesList& userDevicesRef = userDevices;
	return userDevicesRef;
}

void User::addDevice(Device newDevice)
{
	userDevices.add(newDevice);
}

bool User::checkIfDevicesAreOn() const
{
    DeviceNode* curr = userDevices.get_first();

    if (curr == nullptr)
    {
        return true;
    }

    while (curr != nullptr)
    {
        if (curr->get_data().isActive() == false)
        {
            return false;
        }
        curr = curr->get_next();

    }

    return true;
}