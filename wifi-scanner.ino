#include <WiFi.h>

void setup() {
  Serial.begin(115200);
  Serial.println("Starting WiFi Scanner...");

  // Initialize WiFi in station mode
  WiFi.mode(WIFI_STA);
  WiFi.disconnect();
  delay(100);
}

void loop() {
  Serial.println("Scanning for networks...");

  // Perform WiFi network scan
  int networkCount = WiFi.scanNetworks();
  Serial.println("Scan complete.");
  
  if (networkCount == 0) {
    Serial.println("No networks found.");
  } else {
    Serial.printf("Found %d networks:\n", networkCount);
    for (int i = 0; i < networkCount; i++) {
      // Display network details
      Serial.printf("%d: SSID: %s, RSSI: %d dBm, Channel: %d, Security: %s\n", 
                    i + 1, 
                    WiFi.SSID(i).c_str(), 
                    WiFi.RSSI(i), 
                    WiFi.channel(i),
                    WiFi.encryptionType(i) == WIFI_AUTH_OPEN ? "Open" : "Secured");
    }
  }

  // Wait before scanning again
  delay(5000);
}
