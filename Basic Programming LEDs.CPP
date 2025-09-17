int merah = 7;
int kuning = 6;
int hijau = 5;
int biru = 4;
int putih = 3;

int led[5] = {merah, kuning, hijau, biru, putih};
int time[5] = {270, 440, 710, 1330, 1850};
unsigned long prev[5];
bool state[5];

void setup() {
  for (int i = 0; i <= 4; i++) {
    pinMode(led[i], OUTPUT);
    state[i] = LOW;
    prev[i] = 0;
  }
}

void loop() {
  unsigned long now = millis();
  for (int i = 0; i <= 4; i++) {
    if (now - prev[i] >= time[i]) {
      prev[i] = now;
      state[i] = !state[i];
      digitalWrite(led[i], state[i]);
    }
  }
}
