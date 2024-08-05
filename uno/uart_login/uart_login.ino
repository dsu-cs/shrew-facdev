
// Change me!
#define USERNAME "username"
#define PASSWORD "password"

#define PROMPT "arduino > "

#define clearScreen() Serial.print("\e[2J\e[H\r\n\r\n");

int loggedIn = 0;

void setup() {

  Serial.begin(9600);
//  Serial.setTimeout(10);

  clearScreen();

  Serial.println("Arduino online!");

}

String getString() {

  char c, buff[32];
  int i = 0;

  do {

    if (!Serial.available()) continue;

    c = Serial.read();
    Serial.write(c);
    buff[i++] = c;

  } while (c != '\n' && c != '\r');
  buff[i-1] = '\0';

  Serial.write("\r\n");

  return String(buff);

}

void login() {

  String username, password;

  while (1) {

    Serial.print("\n");
    Serial.print("Username: ");
    username = getString();
    Serial.print("Password: ");
    password = getString();

    if (username == USERNAME && password == PASSWORD) {
      Serial.println("Logged in!  Welcome " + username + ".\n");
      loggedIn = 1;
      return;
    } else {
      Serial.println("Incorrect username or password");
    }

  }

}

void printHelp() {
  Serial.println("Commands...");
  Serial.println(" - help           : show this help menu");
  Serial.println(" - exit           : exit the command shell and log out");
  Serial.println(" - clear          : clear the screen");
//  Serial.println(" - echo <text>    : echo some text back to the screen");
}

void cmdShell() {

  String cmd;

  while (1) {

    Serial.print(PROMPT);
    cmd = getString();

    if (cmd == "help" || cmd == "?") {
          printHelp();
    } else
    if (cmd == "clear") {
        clearScreen();
        delay(1000);
    } else
    if (cmd == "exit" || cmd == "quit" || cmd == "logout") { 
          loggedIn = 0;
          return;
    } else {
        Serial.println("Unknown command '" + cmd + "'.");
    }

  }

}

void loop() {

  if (!loggedIn) {
    login();
  } else {
    cmdShell();
    clearScreen();
  }

}
