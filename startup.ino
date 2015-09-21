void getName() {
  Serial.println ("Please enter a unique header, 3-10 characters, containing no spaces.");
  while (true) {
    if(Serial.available() > 0) {
      bufferSend = Serial.readStringUntil('\n'); // blocks here till we hit a newline
      if (bufferSend.length() < 3 || bufferSend.length() > 10 || bufferSend.indexOf(" ") != -1) {  
        Serial.println("\nFail.  Let's try that again.");
        Serial.println ("Please enter a unique <= 10 char name containing no spaces.");
        bufferSend = "";
      } 
      else {
        break;
      }    
    }
  }
}
