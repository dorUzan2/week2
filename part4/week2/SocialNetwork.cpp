#include "SocialNetwork.h"

void SocialNetwork::init(std::string networkName, int minAge)
{
	this->networkName = networkName;
	this->minAge = minAge;
}
void SocialNetwork::clear()
{
	profiles.clear();
}
std::string SocialNetwork::getNetworkName() const
{
	return networkName;
}
int SocialNetwork::getMinAge() const
{
	return minAge;
}
bool SocialNetwork::addProfile(Profile profileToAdd)
{
	return profiles.add(profileToAdd);
}
std::string SocialNetwork::getWindowsDevices()
{
	std::string result = "";
	ProfileNode* curr = profiles.get_first();
	while (curr)
	{
		Profile temp = curr->get_data();
		User temp2 = temp.getOwner();
		DevicesList& temp3 = temp2.getDevices();
		DeviceNode* tempDevice = temp3.get_first();
		while (tempDevice)
		{
			std::string OS = tempDevice->get_data().getOS();
			if (OS.find("Windows") != -1)
			{
				std::string x = ", ";
				result += "[";
				result += std::to_string(tempDevice->get_data().getID());
				result += x + OS + "], ";
			}
			tempDevice = tempDevice->get_next();
		}
		curr = curr->get_next();
	}
	if (!result.empty()) {
		result.erase(result.size() - 1);
	}
	if (!result.empty()) {
		result.erase(result.size() - 1);
	}
	return result;
}