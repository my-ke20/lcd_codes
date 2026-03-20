//////////// CODE 1 ////////////

/*#include <LiquidCrystal.h>
const int numRows = 2;
const int numCols = 16;

LiquidCrystal lcd(12,11,5,4,3,2);

void setup()
{
  lcd.begin(numCols, numRows);
  lcd.print("It's alivee!!");
}

void loop()
{
  lcd.setCursor(0,1);
  lcd.print(millis()/1000);
}
*/



//////////// CODE 2 ////////////

/*const int numRows = 2;
const int numCols = 16;

int count;
LiquidCrystal lcd(12,11,5,4,3,2);

void setup()
{
  lcd.begin(numCols, numRows);
  lcd.print("Allahu akba!!!");
  for(int i=9; i>0; i--)
  {
    lcd.setCursor(15,0);
  	lcd.print(i);
    delay(1000);
  }
}

void loop()
{
  int columnWidth = 4;
  int displayColumns = 3;
  
  lcd.clear();
  for(int col=0; col<displayColumns; col++)
  {
    lcd.setCursor(col * columnWidth, 0);
    count = count + 1;
    lcd.print(count);
  }
  delay(1000);
}*/


//////////// CODE 3 ////////////

//TEXT SCROLLING 1
/*#include <LiquidCrystal.h>
const int numRows = 2;
const int numCols = 16;
LiquidCrystal lcd(12,11,5,4,3,2);

const int tiltPin = 7;
const char textString[] = "Tilt to scroll";
const int textLen = sizeof(textString) -1;
bool isTilted = false;

void setup()
{
  lcd.begin(numCols,numRows);
  pinMode(tiltPin, INPUT_PULLUP);
  lcd.print(textString);
}

void loop()
{
  if(digitalRead(tiltPin) == LOW && isTilted == false)
  {
    isTilted = true;
    for(int position = 0; position < textLen; position++)
    {
      lcd.scrollDisplayLeft();
      delay(150);
    }
  }
  if(digitalRead(tiltPin) == HIGH && isTilted == true)
    isTilted = true;
    for(int position = 0; position < textLen; position++)
    {
      lcd.scrollDisplayRight();
      delay(150);
    }
}*/


//////////// CODE 4 ////////////
//TEXT SCROLLING 2
#include <LiquidCrystal.h>
const int numRows = 2;
const int numCols = 16;
LiquidCrystal lcd(12,11,5,4,3,2);

void setup()
{
  lcd.begin(numCols,numRows);
  marquee("This is a long text that will scroll for sure... this time");
}
void loop()
{
}
void marquee(char *text)
{
  int length = strlen(text);
  if(length < numCols)
    lcd.print(text);
  else
  {
    int pos;
    for(pos =0;pos < numCols; pos++)
      lcd.print(text[pos]);
    delay(1000);
    pos=1;
    while(pos <= length - numCols)
    {
      lcd.setCursor(0,0);
      for(int i=0;i < numCols; i++)
        lcd.print(text[pos+i]);
      delay(300);
      pos=pos+1;
    }
  }
}


