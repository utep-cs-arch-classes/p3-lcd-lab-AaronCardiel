#define C3 131
#define CS3 139
#define D3 147
#define DS3 156
#define E3 165
#define F3 175
#define FS3 185
#define G3 196
#define GS3 208
#define A3 220
#define AS3 233
#define B3 247
#define C4 262
#define CS4 277
#define D4 293
#define DS4 311
#define E4 329
#define F4 349
#define FS4 369
#define G4 392
#define GS4 415
#define A4 440
#define AS4 466
#define B4 493
#define C5 523
#define CS5 554
#define D5 587
#define DS5 622
#define E5 659
#define F5 698
#define FS5 739
#define G5 783
#define GS5 830
#define A5 880
#define AS5 932
#define B5 987
#define C6 1046
#define CS6 1108
#define D6 1174
#define DS6 1244
#define E6 1318
#define F6 1396
#define FS6 1479

// extern int timer = 0;

// Song players for current state
void playCarelessWhisper();
void playDayNNite();
void playLaCancion();
void playSmellsLikeTeenSpirit();

// Helps play song
void quaterNote(int note);
void eightNote(int note);
void halfNote(int note);
void wholeNote(int note);
