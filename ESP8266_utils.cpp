#ifdef TARGET_8266
#include <ESP8266WiFi.h>

void WiFiOff()
{
	// disable WIFI altogether
	WiFi.disconnect(true); delay(1);
	WiFi.mode(WIFI_OFF); delay(1);
	WiFi.forceSleepBegin(); delay(1);
}

#else

void WiFiOff()
{
}

#endif