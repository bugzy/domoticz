#pragma once
#include "NotificationBase.h"

#include "../json/json.h"

class CNotificationLogitechMediaServer : public CNotificationBase {
public:
	CNotificationLogitechMediaServer();
	~CNotificationLogitechMediaServer();
	virtual bool IsConfigured();
protected:
	virtual bool SendMessageImplementation(const std::string &Subject, const std::string &Text, const std::string &ExtraData, const int Priority, const std::string &Sound, const bool bFromNotification);
private:
	std::string _PlayerMac;
	int _Duration;
};
