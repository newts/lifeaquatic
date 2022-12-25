

#define YELLOW_PIN 13
#define PINK_PIN 12
#define WHITE_PIN 11
#define PURPLE_PIN 10


int yellow = 0;
int pink = 0;
int white = 0;
int purple = 0;

int yellowAmount = 4;
int pinkAmount = 5;
int whiteAmount = 6;
int purpleAmount = 7;

void setup() {
  pinMode(YELLOW_PIN, OUTPUT);
  pinMode(PINK_PIN, OUTPUT);
  pinMode(WHITE_PIN, OUTPUT);
  pinMode(PURPLE_PIN, OUTPUT);
}

void loop() {

  analogWrite(YELLOW_PIN, yellow); 
  yellow = yellow + yellowAmount;
  if (yellow <= 0 || yellow >= 255) {
    yellowAmount = -yellowAmount;
    yellow = yellow + yellowAmount;
  }

  analogWrite(PINK_PIN, pink); 
  pink = pink + pinkAmount;
  if (pink <= 0 || pink >= 255) {
    pinkAmount = -pinkAmount;
    pink = pink + pinkAmount;
  }

  analogWrite(WHITE_PIN, white);
  white = white + whiteAmount;
  if (white <= 0 || white >= 255) {
    whiteAmount = -whiteAmount;
    white = white + whiteAmount;
  }

  analogWrite(PURPLE_PIN, purple);
  purple = purple + purpleAmount; 
  if (purple <= 0 || purple >= 255) {
    purpleAmount = -purpleAmount;
    purple = purple + purpleAmount;
  }
  
  // wait for 30 milliseconds to see the dimming effect
  delay(30);
}
