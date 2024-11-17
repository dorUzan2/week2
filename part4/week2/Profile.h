#pragma once
#include "UserList.h"
#include "Page.h"

class Profile
{
	private:
		User owner;
		Page userPage;
		UserList friends;

	public:
		//getters
		std::string getPage() const;
		std::string getFriends() const;
		std::string getFriendsWithSameNameLength() const;
		User getOwner() const;

		//setters
		void init(User owner);
		void clear();
		void setStatus(std::string new_status);
		void addPostToProfilePage(std::string post);
		void addFriend(User friend_to_add);


};