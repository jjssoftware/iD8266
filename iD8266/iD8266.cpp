/*
  iD8266 - defines the main entry points for setup() and loop() in this project
*/

#include "flashAppData.h"
#include "utils.h"
#include "webserver.h"
#include "build_defs.h"
#include "NetworkServices.h"

void setup() {

	WiFi.persistent(false);

	rst_info *resetInfo = ESP.getResetInfoPtr();
	if (resetInfo->reason == rst_reason::REASON_EXCEPTION_RST) {

		//try a clean restart on unexpected exception
		ESP.restart();

	} else {

#ifdef APP_SERIAL_DEBUG
		Serial.begin(115200, SERIAL_8N1);
#endif
		APP_SERIAL_DEBUG("\n");
		APP_SERIAL_DEBUG("System startup\n");
		APP_SERIAL_DEBUG("Last reset reason: %s\n", ESP.getResetInfo().c_str());
		APP_SERIAL_DEBUG("SDK version: %s\n", ESP.getSdkVersion());

		FlashAppDataMngr.initFlash();

		bool servicesStarted = NetworkSvcMngr.startNetworkServices(resetInfo);
		if(!servicesStarted) {
			APP_SERIAL_DEBUG("Network services failed to start. Restarting the device now.\n");
			ESP.restart();
		}
	}
}

void loop() {

  NetworkSvcMngr.processRequests();
  
}
