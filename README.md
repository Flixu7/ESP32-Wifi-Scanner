# ESP32-Wifi-Scanner
Guide how to made wifi scanner with ESP32 module


INSTALATION:

Arduino IDE Setup:
1. Open Arduino IDE.

Go to File > Preferences and in the "Additional Board Manager URLs" field paste:
https://dl.espressif.com/dl/package_esp32_index.json
Click OK.

2. Go to Tools > Board > Board Manager, search for "ESP32" and install the ESP32 library.

Select the ESP32 board in the Tools > Board > ESP32 Arduino menu (e.g. "DOIT ESP32 Devkit V1").

3. Set the appropriate COM port for the connected ESP32 in the Tools > Port menu.

4. Uploading the code:
5.Copy the above code to a new sketch in Arduino IDE.

Click the Verify (checkmark) button and make sure the code compiles without errors.
Click the Upload button (arrow) and wait for the code to be uploaded to the ESP32.
6. Testing:
Open the Serial Port Monitor in the Arduino IDE (Tools > Serial Port Monitor).
Set the communication speed to 115200 baud.
