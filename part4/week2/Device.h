#pragma once
#include <string>

///////////////////////////////////////////////////////////
/*														 //
	Those definitions are used for tests,                //
	you can add your own, but please do not delete any.  //
*/														 //
enum DeviceType { PHONE, PC, LAPTOP, TABLET };		     //
//
#define UbuntuOS "UbuntuLinux"                           //						
#define RedHatOS "RedHatLinux"							 //
#define MacOS "MacOS"									 //
#define IOS "IOS"										 //
#define WINDOWS7 "Windows7"                              //
#define WINDOWS10 "Windows10"                            //
#define WINDOWS11 "Windows11"                            //
#define ANDROID "Android"                                //
														 //
/// ///////////////////////////////////////////////////////


class Device
{
	private:
		std::string OS;
		bool activation;
		DeviceType type;
		unsigned int id;

	public:
		//getters
		std::string getOS() const;
		bool isActive() const;
		unsigned int getID() const;
		DeviceType getType() const;

		//setters
		void init(unsigned int id, DeviceType type, std::string os);
		void activate();
		void deactivate();
};
