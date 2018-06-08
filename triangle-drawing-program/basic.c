/*Triangle drawing program
Draws a triangle whenever the mouse button is not pressed.
Erases when the mouse button is pressed. */

float redValue = 0;
float greenValue = 0;
float blueValue = 0;

void setup() {
    size(320, 240);
    background(0);
    fill(0);
    smooth();
}

void draw() {
    redValue = random(255);
    greenValue = random(255);
    blueValue = random(255);

    stroke(redValue, greenValue, blueValue);

    if (mousePressed == false) {
        triangle(mouseX, mouseY, width/2, height/2,pmouseX, pmouseY);
    }
    else {
        background(0);
        fill(0);
    }
}