#include "Device.h"

std::string Device::getOS() const
{
	return OS;
}

bool Device::isActive()  const
{
	return activation;
}

void Device::activate()
{
	activation = true;
}

void Device::deactivate()
{
	activation = false;
}

void Device::init(unsigned int ID, DeviceType Type, std::string os)
{
	this->type = Type;
	this->OS = os;
	this->id = ID;
}

unsigned int Device::getID() const
{
	return id;
}

DeviceType Device::getType() const
{
	return type;
}