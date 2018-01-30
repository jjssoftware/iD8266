# iD8266
web based firmware for ESP8266 boards

Some background information here: https://jjssoftware.github.io/id8266-aka-skynet/

Some videos here: https://www.youtube.com/channel/UCa_exk34O_W2tTnGeHXw5Og

Library dependencies:

* https://github.com/esp8266/Arduino 
* https://github.com/jjssoftware/cpp-base32
* https://github.com/jjssoftware/ESP8266Complexify
* https://github.com/knolleary/pubsubclient
* https://github.com/PaulStoffregen/Time
* https://github.com/jjssoftware/ESP8266TrueRandom
* https://github.com/jjssoftware/arduinoWebSockets
* https://github.com/jjssoftware/Cryptosuite
* https://github.com/jjssoftware/ESP8266TOTP
* https://github.com/jjssoftware/DHT-sensor-library
* https://github.com/jjssoftware/NexaCtrl

Project features:

1. Everything is or should be configurable via the web UI
2. Web application authentication with 2 factor TOTP
2. Web application session management
3. Complexify for strong passwords
4. Web pages built with efficient HTML/CSS/JS 
5. Web pages served from SPIFFS
6. Web pages built with jquery and bootstrap for a nice user experience
7. Web socket server support
8. Supports AP/STA/AP+STA modes
9. Supports DHCP / static IP addressing
10. NTP client support built in
11. MQTT pubsub client support built in
12. Onboard GPIO support
13. Worcester Bosch Digistat MK2 433MHz device support
14. DHT22 support
15. Nexactrl / HomeEasy 433MHz device support
16. Deep sleep support
17. gulpfile.js included for inlining and minification of HTML/CSS/JS
18. OTA update support
