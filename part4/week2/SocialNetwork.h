#pragma once
#include "ProfileList.h"

class SocialNetwork
{
	private:
		std::string networkName;
		int minAge;
		ProfileList profiles;

	public:
		//getters
		std::string getNetworkName() const;
		int getMinAge() const;
		std::string getWindowsDevices();

		//setters
		void init(std::string networkName, int minAge);
		void clear();
		bool addProfile(Profile profileToAdd);


};