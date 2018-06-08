/*
Sneaky button
Moves a button when you click it
*/

var myButton, responseDiv;
function setup() {
    createCanvas(windowWidth, windowHeight);
    myButton = createButton('click me');
    myButton.touchEnded(changedButton);
    myButton.position(10, 10);
    responseDiv = createDiv('catch me');
    responseDiv.position(10, 40);
}

function changeButton() {
    var x = random(windowWidth) - myButton.width;
    var y = random(windowHeight) - myButton.height;
    myButton.position(x, y);
    responseDiv.html(x + ',' + y);
}