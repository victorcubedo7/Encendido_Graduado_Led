int led = 3;  //¡¡¡Es necesario colocar el led en este pin!!!

int brillo;


void setup() {

  pinMode(led, OUTPUT);
}

void loop() {

 for ( brillo = 0; brillo < 256; brillo++){
    analogWrite(led,brillo);
    delay(20);
 }

   for ( brillo = 255; brillo >=0; brillo--){
    analogWrite(led,brillo);
    delay(20);
 }



}
