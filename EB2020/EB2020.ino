// NeoPixel test program showing use of the WHITE channel for RGBW
// pixels only (won't look correct on regular RGB NeoPixel strips).

#include <Adafruit_NeoPixel.h>
#ifdef __AVR__
 #include <avr/power.h> // Required for 16 MHz Adafruit Trinket
#endif

// Which pin on the Arduino is connected to the NeoPixels?
// On a Trinket or Gemma we suggest changing this to 1:
#define LED_PIN     6

// How many NeoPixels are attached to the Arduino?
#define LED_COUNT  237

// NeoPixel brightness, 0 (min) to 255 (max)
#define MAXBRIGHTNESS 125
#define C150 150
#define MAXREPETITION 10

//lados de la estrella
#define LADO4INICIO 0 //LED DONDE EMPIEZA EL LADO 4
#define LADO4FINAL 12 // LED DONDE ACABA EL LADO 4

#define LADO5INICIO 13 //LED DONDE EMPIEZA EL LADO 5
#define LADO5FINAL 23 // LED DONDE ACABA EL LADO 5

#define LADO6INICIO 24 //LED DONDE EMPIEZA EL LADO 6
#define LADO6FINAL 35 // LED DONDE ACABA EL LADO 6

#define LADO7INICIO 36 //LED DONDE EMPIEZA EL LADO 7
#define LADO7FINAL 46 // LED DONDE ACABA EL LADO 7

#define LADO8INICIO 47 //LED DONDE EMPIEZA EL LADO 8
#define LADO8FINAL 57 // LED DONDE ACABA EL LADO 8

#define LADO9INICIO 58 //LED DONDE EMPIEZA EL LADO 8
#define LADO9FINAL 68 // LED DONDE ACABA EL LADO 8


#define LADO10INICIO 69 //LED DONDE EMPIEZA EL LADO 8
#define LADO10FINAL 79 // LED DONDE ACABA EL LADO 8


#define LADO11INICIO 80 //LED DONDE EMPIEZA EL LADO 8
#define LADO11FINAL 90 // LED DONDE ACABA EL LADO 8

#define LADO12INICIO 91 //LED DONDE EMPIEZA EL LADO 8
#define LADO12FINAL 101 // LED DONDE ACABA EL LADO 8

#define LADO13INICIO 102 //LED DONDE EMPIEZA EL LADO 8
#define LADO13FINAL 111 // LED DONDE ACABA EL LADO 8
//#define LADO4EB 0 // id del lado 4 de la eb

#define ESTELA4INICIO 188
#define ESTELA4FINAL 236

#define ESTELA3INICIO 172
#define ESTELA3FINAL 187

#define ESTELA2INICIO 161
#define ESTELA2FINAL 172

#define ESTELA1INICIO 112
#define ESTELA1FINAL 160

#define FIN_LED 236
#define DEFAULTDELAY 100

#define DEFAULTMININTE 5
#define DEFAULTMAXINTE 255

#define BLUE 0
#define RED 1
#define GREEN 2
#define RANDOM 3
#define WHITE 4
#define OFF 5
#define COLOR1 6
#define COLOR2 7
#define COLOR3 8
#define COLOR4 9
#define COLOR5 10
#define COLOR6 11
#define COLOR7 12
#define COLOR8 13
#define COLOR9 14
#define COLOR10 15
#define COLOR11 16
#define COLOR12 17
#define COLOR13 18
#define COLOR14 19
#define COLOR15 20
#define COLOR16 21
#define COLOR17 22
#define COLOR18 23
#define COLOR19 24
#define COLOR20 25

#define OFFSET_UNO 23;

int iR = 0, iG = 0, iB = 0;
int iGR = 0, iGG = 0, iGB = 0;

// Declare our NeoPixel strip object:
Adafruit_NeoPixel strip(LED_COUNT, LED_PIN, NEO_GRB + NEO_KHZ800);
// Argument 1 = Number of pixels in NeoPixel strip
// Argument 2 = Arduino pin number (most are valid)
// Argument 3 = Pixel type flags, add together as needed:
//   NEO_KHZ800  800 KHz bitstream (most NeoPixel products w/WS2812 LEDs)
//   NEO_KHZ400  400 KHz (classic 'v1' (not v2) FLORA pixels, WS2811 drivers)
//   NEO_GRB     Pixels are wired for GRB bitstream (most NeoPixel products)
//   NEO_RGB     Pixels are wired for RGB bitstream (v1 FLORA pixels, not v2)
//   NEO_RGBW    Pixels are wired for RGBW bitstream (NeoPixel RGBW products)


void ApagarTodosLED(int iInitLed, int iEndLed)
{
    int j;
    for (j=iInitLed;j<=iEndLed;j++)
    {
        strip.setPixelColor(j, strip.Color(  0,   0, 0));
    }
    strip.show();
}
void SetUpColourGusano(int iColor)
{
  switch (iColor) {
    case BLUE:
      // statements
        iGR = 0; iGG = 0; iGB = C150;
      break;
    case COLOR1:
      // statements
        iGR = 0; iGG = C150; iGB = C150;
      break;
    case COLOR2:
      // statements
        iGR = C150; iGG = 0; iGB = C150;
      break;
    case COLOR3:
      // statements
        iGR = C150; iGG = C150; iGB = 0;
      break;
    case COLOR4:
      // statements
        iGR = 50; iGG = 100; iGB = C150;
      break;
    case COLOR5:
      // statements
        iGR = 100; iGG = 50; iGB = C150;
      break;  
    case COLOR6:
      // statements
        iGR = C150; iGG = 100; iGB = 50;
      break;  
    case COLOR7:
      // statements
        iGR = 200; iGG = 10; iGB = 125;
      break;  
    case COLOR8:
      // statements
        iGR = 255; iGG = 50; iGB = 125;
      break;
    case COLOR9:
      // statements
        iGR = 20; iGG = 100; iGB = 125;
      break;
    case COLOR10:
      // statements
        iGR = 0; iGG = 125; iGB = 125;
      break;
    case COLOR11:
      // statements
        iGR = 200; iGG = 10; iGB = 125;
      break;
    case COLOR12:
      // statements
        iGR = 10; iGG = 100; iGB = 125;
      break;
    case COLOR13:
      // statements
        iGR = 200; iGG = 0; iGB = 255;
      break;
    case COLOR14:
      // statements
        iGR = 20; iGG = 255; iGB = 125;
      break;
    case COLOR15:
      // statements
        iGR = 70; iGG = 140; iGB = 210;
      break;
    case COLOR16:
      // statements
        iGR = 255; iGG = 128; iGB = 0;
      break;
    case COLOR17:
      // statements
        iGR = 0; iGG = 255; iGB = 128;
      break;
    case COLOR18:
      // statements
        iGR = 127; iGG = 0; iGB = 255;
      break;
    case COLOR19:
      // statements
        iGR = 20; iGG = 120; iGB = 220;
      break;
    case COLOR20:
      // statements
        iGR = 10; iGG = 140; iGB = 150;
      break;
    case GREEN:
      // statements
        iGR = 0; iGG = C150; iGB = 0;
      break;
    case RED:
      // statements
        iGR = C150; iGG = 0; iGB = 0;
      break;
      case RANDOM:
      // statements
        iGR = random(255);
        iGG = random(255);
        iGB = random(255);
      break;
      case OFF:
      // statements
        iGR = 0; iGG = 0; iGB = 0;
      break;
      case WHITE:
      // statements
        iGR = C150;//random(255);
        iGG = C150;//random(255);
        iGB = C150;//random(255);
      break;

    default:
      // statements
      break;
  }
}
void SetUpColour(int iColor)
{
  switch (iColor) {
    case BLUE:
      // statements
        iR = 0; iG = 0; iB = C150;
      break;
      case OFF:
      // statements
        iR = 0; iG = 0; iB = 0;
      break;
    case COLOR1:
      // statements
        iR = 0; iG = C150; iB = C150;
      break;
    case COLOR2:
      // statements
        iR = C150; iG = 0; iB = C150;
      break;
    case GREEN:
      // statements
        iR = 0; iG = C150; iB = 0;
      break;
    case COLOR3:
      // statements
        iR = C150; iG = C150; iB = 0;
      break;
    case COLOR4:
      // statements
        iR = 50; iG = 100; iB = C150;
      break;
    case COLOR16:
      // statements
        iR = 255; iG = 128; iB = 0;
      break;
    case COLOR17:
      // statements
        iR = 0; iG = 255; iB = 128;
      break;
    case COLOR18:
      // statements
        iR = 127; iG = 0; iB = 255;
      break;
    case COLOR19:
      // statements
        iR = 20; iG = 120; iB = 220;
      break;
    case COLOR20:
      // statements
        iR = 10; iG = 140; iB = 150;
      break;  
    case COLOR7:
      // statements
        iR = 200; iG = 10; iB = 125;
      break;  
        case COLOR8:
      // statements
        iR = 255; iG = 50; iB = 125;
      break;
    case COLOR9:
      // statements
        iR = 20; iG = 100; iB = 125;
      break;
    case COLOR10:
      // statements
        iR = 0; iG = 125; iB = 125;
      break;
    case COLOR11:
      // statements
        iR = 200; iG = 10; iB = 125;
      break;
    case COLOR12:
      // statements
        iR = 10; iG = 100; iB = 125;
      break;
    case COLOR13:
      // statements
        iR = 200; iG = 0; iB = 255;
      break;
    case COLOR14:
      // statements
        iR = 20; iG = 255; iB = 125;
      break;
    case COLOR15:
      // statements
        iR = 70; iG = 140; iB = 210;
      break;
    case COLOR6:
      // statements
        iR = C150; iG = 100; iB = 50;
      break;  
    case COLOR5:
      // statements
        iR = 100; iG = 50; iB = C150;
      break;  
    case RED:
      // statements
        iR = C150; iG = 0; iB = 0;
      break;
      case RANDOM:
      // statements
        iR = random(255);
        iG = random(255);
        iB = random(255);
      break;
      case WHITE:
      // statements
        iR = C150;//random(255);
        iG = C150;//random(255);
        iB = C150;//random(255);
      break;

    default:
      // statements
      break;
  }
}
void setup() {
  // These lines are specifically to support the Adafruit Trinket 5V 16 MHz.
  // Any other board, you can remove this part (but no harm leaving it):
#if defined(__AVR_ATtiny85__) && (F_CPU == 16000000)
  clock_prescale_set(clock_div_1);
#endif
  // END of Trinket-specific code.

  strip.begin();           // INITIALIZE NeoPixel strip object (REQUIRED)
  strip.show();            // Turn OFF all pixels ASAP
  strip.setBrightness(MAXBRIGHTNESS); // Set BRIGHTNESS to about 1/5 (max = 255)

  // initialize serial communication at 9600 bits per second:
  Serial.begin(9600);
  PreTest();
}

void AumentaBrilloPocoaPocoTramoyTerminaApagado(int iInitLed, int iEndLed, int idelay, int iTypeColor, int iMinIntensity, int iMaxIntensity)
{
  unsigned int i,j;

  SetUpColour(iTypeColor);
  switch (iTypeColor) {
    case BLUE:
      // statements
        for (i=iMinIntensity;i<=iMaxIntensity;i++)
        {
          for (j=iInitLed;j<=iEndLed;j++)
          {
            if (i < iMaxIntensity)
            {
              strip.setPixelColor(j, strip.Color(  0,   0, i));
            } else 
            {
              strip.setPixelColor(j, strip.Color(  0,   0, 0));
            }
          }
          delay(idelay);
          strip.show();
        }
      break;
    case GREEN:
      // statements
        for (i=iMinIntensity;i<=iMaxIntensity;i++)
        {
          for (j=iInitLed;j<=iEndLed;j++)
          {
            if (i < iMaxIntensity)
            {
              strip.setPixelColor(j, strip.Color(  0,   i, 0));
            } else 
            {
              strip.setPixelColor(j, strip.Color(  0,   0, 0));
            }
          }          
          delay(idelay);
          strip.show();
        }      
      break;
    case RED:
      // statements
      for (i=iMinIntensity;i<=iMaxIntensity;i++)
        {
          for (j=iInitLed;j<=iEndLed;j++)
          {
            if (i < iMaxIntensity)
            {
              strip.setPixelColor(j, strip.Color(  i,   0, 0));
            } else 
            {
              strip.setPixelColor(j, strip.Color(  0,   0, 0));
            }
          }
          delay(idelay);
          strip.show();
        }
      break;
      case RANDOM:
      // statements
      for (i=iMinIntensity;i<=iMaxIntensity;i++)
        {
          for (j=iInitLed;j<=iEndLed;j++)
          {
            if (i < iMaxIntensity)
            {
              strip.setPixelColor(j, strip.Color(  random(255),  random(255), random(255)));
            } else 
            {
              strip.setPixelColor(j, strip.Color(  0,   0, 0));
            }
          }
          delay(idelay);
          strip.show();
        }
      break;
      case WHITE:
      // statements
      for (i=iMinIntensity;i<=iMaxIntensity;i++)
        {
          for (j=iInitLed;j<=iEndLed;j++)
          {
            if (i < iMaxIntensity)
            {
              strip.setPixelColor(j, strip.Color(i, i, i));
            } else 
            {
              strip.setPixelColor(j, strip.Color(  0,   0, 0));
            }
          }
          delay(idelay);
          strip.show();
        }
      break;
    default:
      // statements
      break;
  }
}


void EnciendeUnoaUnoLEDyTerminaApagado(int iInitLed, int iEndLed, int idelay, int iTypeColor, int iMaxIntensity)//LADO4INICIO, LADO8FINAL, random(0,DEFAULTDELAY), BLUE, 150)
{
  int j;

    SetUpColour(iTypeColor);
    for (j=iInitLed;j<=iEndLed;j++)
    {
      strip.setPixelColor(j, strip.Color(  iR,   iG, iB));
      delay(idelay);
      strip.show();
    }
    delay(250);
    ApagarTodosLED(iInitLed, iEndLed);
}

void EnciendeUnoaUnoLED(int iInitLed, int iEndLed, int idelay, int iTypeColor, int iMaxIntensity)//LADO4INICIO, LADO8FINAL, random(0,DEFAULTDELAY), BLUE, 150)
{
  int j;
    SetUpColour(iTypeColor);
    for (j=iInitLed;j<=iEndLed;j++)
    {
        strip.setPixelColor(j, strip.Color(  iR,   iG, iB));
        delay(idelay);
        strip.show();
    }
}

void EnciendeUnoaUnoLEDRANDOM(int iInitLed, int iEndLed, int idelay, int iTypeColor, int iMaxIntensity)//LADO4INICIO, LADO8FINAL, random(0,DEFAULTDELAY), BLUE, 150)
{
  int j;
    for (j=iInitLed;j<=iEndLed;j++)
    {
        strip.setPixelColor(j, strip.Color(  random(255),   random(255), random(255)));
        delay(idelay);
        strip.show();
    }
}


void ApagaUnoaUnoLED(int iInitLed,int iEndLed, int idelay)
{
  int j;
  
    for (j=iInitLed;j<=iEndLed;j++)
    {
      strip.setPixelColor(j, strip.Color(  0,   0, 0));
      delay(idelay);
      strip.show();
    }
}

void EnciendeTodaEstrella(int iInitLed, int iEndLed, int iTypeColor)
{
  int j;

    SetUpColour(iTypeColor);
    for (j=iInitLed;j<=iEndLed;j++)
    {
        strip.setPixelColor(j, strip.Color(  iR,   iG, iB));
    }  
    strip.show();
}
//Gusano(    LADO4INICIO, FIN_LED    , 8         , 5                   , BLUE           , 1);
void Gusano(int iInitLed, int iEndLed, int idelay, int iNumberLEDGusano, int iTypeColor, int iColorGusano)
{
    int j;
    int head=0;
    int tail=0;

    SetUpColour(iTypeColor);
    SetUpColourGusano(iColorGusano);
    EnciendeTodaEstrella(iInitLed, iEndLed, iTypeColor);   
  
    for (j=iInitLed;j<=iInitLed+iNumberLEDGusano;j++)
    {
      strip.setPixelColor(j, strip.Color(  iGR,  iGG, iGB));
      head=j;
      strip.show();
       delay(idelay);
    }
    
    tail = iInitLed;
    while (head<=iEndLed)
    {
       head++;
       strip.setPixelColor(head, strip.Color(  iGR,  iGG, iGB));
       strip.show();
       strip.setPixelColor(tail, strip.Color(  iR,   iG, iB));
       strip.show();
       tail++;
       delay(idelay);
    }
    for (j=tail;j<=iEndLed;j++)
    {
      strip.setPixelColor(j, strip.Color(  iR,   iG, iB));
      strip.show();
      delay(idelay);
    }
}


void DosGusano(int iInitLed, int iEndLed, int idelay, int iNumberLEDGusano, int iTypeColor, int iColorGusano)
{
    int j,k;
    int head_cero=0;
    int tail_cero=0;
    int head_last=0;
    int tail_last=0;

    SetUpColour(iTypeColor);
    SetUpColourGusano(iColorGusano);
    EnciendeTodaEstrella(iInitLed, iEndLed, iTypeColor);   
  
    for (j=iInitLed;j<=iInitLed+iNumberLEDGusano;j++)
    {
      strip.setPixelColor(j, strip.Color(  iGR,  iGG, iGB));
      strip.setPixelColor(iEndLed-j, strip.Color(  iGR,  iGG, iGB));
      head_cero = j;
      head_last = iEndLed-j;
      strip.show();
      delay(idelay);
    }
    
    tail_cero = iInitLed;
    tail_last = iEndLed;
    while (head_cero <= head_last)
    {
       head_cero++;
       head_last--;
       strip.setPixelColor(head_cero, strip.Color(  iGR,  iGG, iGB));
       strip.setPixelColor(tail_cero, strip.Color(  iR,   iG, iB));
       strip.show();
       strip.setPixelColor(head_last, strip.Color(  iGR,  iGG, iGB));
       strip.setPixelColor(tail_last, strip.Color(  iR,   iG, iB));
       strip.show();
       tail_cero++;
       tail_last--;
       delay(idelay);
    }

    while ((tail_cero >= iInitLed) || (tail_last <= iEndLed))
    {
       tail_cero--;
       tail_last++;
       strip.setPixelColor(head_cero, strip.Color(  iR,  iG, iB));
       strip.setPixelColor(tail_cero, strip.Color(  C150,   0, 0));
       strip.show();
       strip.setPixelColor(head_last, strip.Color(  iR,  iG, iB));
       strip.setPixelColor(tail_last, strip.Color(  C150,   0, 0));
       strip.show();
       head_cero--;
       head_last++;
       delay(idelay);
    }
    k=0;
    for (j=head_last;j<=iEndLed;j++)
    {
      strip.setPixelColor(j, strip.Color(  iR,   iG, iB));
      strip.setPixelColor(head_cero - k, strip.Color(  iR,   iG, iB));
      strip.show();
      delay(idelay);
      k++;
    }
}


void ParpadeoMismoColor(int iInitLed, int iEndLed, int idelay, int iTypeColor, int iMaxIntensity, int iRepetition)
{
  int j,i=0;

  SetUpColour(iTypeColor);
  while (i < iRepetition)
  {
      for (j=iInitLed;j<=iEndLed;j++)
      {
          strip.setPixelColor(j, strip.Color(  iR,  iG, iB));
      }    
      strip.show();
      delay(idelay);
      ApagarTodosLED(iInitLed, iEndLed);
      delay(idelay);
      i++;
  }
}


void EnciendeTodaEstrellaTramoaTramo(int idelay,int iTypeColor, int iNumberRepeti)
{
  int j,i=0;

  SetUpColour(iTypeColor);
  while (i < iNumberRepeti)
  {
      for (j=LADO4INICIO;j<=LADO4FINAL;j++)
      {
        strip.setPixelColor(j, strip.Color(  iR,  iG, iB));
      }    
      strip.show();
      delay(idelay);

      SetUpColour(iTypeColor);
      for (j=LADO5INICIO;j<=LADO5FINAL;j++)
      {
        strip.setPixelColor(j, strip.Color(  iR,  iG, iB));
      }    
      strip.show();
      delay(idelay);

      SetUpColour(iTypeColor);
      for (j=LADO6INICIO;j<=LADO6FINAL;j++)
      {
        strip.setPixelColor(j, strip.Color(  iR,  iG, iB));
      }    
      strip.show();
      delay(idelay);

      SetUpColour(iTypeColor);
      for (j=LADO7INICIO;j<=LADO7FINAL;j++)
      {
        strip.setPixelColor(j, strip.Color(  iR,  iG, iB));
      }    
      strip.show();
      delay(idelay);

      SetUpColour(iTypeColor);
      for (j=LADO8INICIO;j<=LADO8FINAL;j++)
      {
        strip.setPixelColor(j, strip.Color(  iR,  iG, iB));
      }    
      strip.show();
      delay(idelay);

      SetUpColour(iTypeColor);
      for (j=LADO9INICIO;j<=LADO9FINAL;j++)
      {
        strip.setPixelColor(j, strip.Color(  iR,  iG, iB));
      }    
      strip.show();
      delay(idelay);

      for (j=LADO10INICIO;j<=LADO10FINAL;j++)
      {
        strip.setPixelColor(j, strip.Color(  iR,  iG, iB));
      }    
      strip.show();
      delay(idelay);

      SetUpColour(iTypeColor);
      for (j=LADO11INICIO;j<=LADO11FINAL;j++)
      {
        strip.setPixelColor(j, strip.Color(  iR,  iG, iB));
      }    
      strip.show();
      delay(idelay);

      SetUpColour(iTypeColor);
      for (j=LADO12INICIO;j<=LADO12FINAL;j++)
      {
        strip.setPixelColor(j, strip.Color(  iR,  iG, iB));
      }    
      strip.show();
      delay(idelay);

      SetUpColour(iTypeColor);
      for (j=LADO13INICIO;j<=LADO13FINAL;j++)
      {
        strip.setPixelColor(j, strip.Color(  iR,  iG, iB));
      }    
      strip.show();
      delay(idelay);

      SetUpColour(iTypeColor);
      for (j=ESTELA1INICIO;j<=ESTELA1FINAL;j++)
      {
        strip.setPixelColor(j, strip.Color(  iR,  iG, iB));
      }    
      strip.show();
      delay(idelay);

      SetUpColour(iTypeColor);
      for (j=ESTELA2INICIO;j<=ESTELA2FINAL;j++)
      {
        strip.setPixelColor(j, strip.Color(  iR,  iG, iB));
      }    
      strip.show();
      delay(idelay);

      SetUpColour(iTypeColor);
      for (j=ESTELA3INICIO;j<=ESTELA3FINAL;j++)
      {
        strip.setPixelColor(j, strip.Color(  iR,  iG, iB));
      }    
      strip.show();
      delay(idelay);

      SetUpColour(iTypeColor);
      for (j=ESTELA4INICIO;j<=ESTELA4FINAL;j++)
      {
        strip.setPixelColor(j, strip.Color(  iR,  iG, iB));
      }    
      strip.show();
      delay(idelay);
      
      ApagarTodosLED(LADO4FINAL, ESTELA4FINAL);
      i++;
      delay(idelay);
  }
}


void EnciendeTodaEstrellaPicoaPico(int idelay,int iTypeColor, int iNumberRepeti)
{
  int j,i=0;

  SetUpColour(iTypeColor);
  while (i < iNumberRepeti)
  {
      for (j=LADO4INICIO;j<=LADO5FINAL;j++)
      {
        strip.setPixelColor(j, strip.Color(  iR,  iG, iB));
      }    
      strip.show();
      delay(idelay);

      SetUpColour(iTypeColor);
      for (j=LADO6INICIO;j<=LADO7FINAL;j++)
      {
        strip.setPixelColor(j, strip.Color(  iR,  iG, iB));
      }    
      strip.show();
      delay(idelay);

      SetUpColour(iTypeColor);
      for (j=LADO8INICIO;j<=LADO9FINAL;j++)
      {
        strip.setPixelColor(j, strip.Color(  iR,  iG, iB));
      }    
      strip.show();
      delay(idelay);

      SetUpColour(iTypeColor);
      for (j=LADO10INICIO;j<=LADO11FINAL;j++)
      {
        strip.setPixelColor(j, strip.Color(  iR,  iG, iB));
      }    
      strip.show();
      delay(idelay);

      SetUpColour(iTypeColor);
      for (j=LADO12INICIO;j<=LADO13FINAL;j++)
      {
        strip.setPixelColor(j, strip.Color(  iR,  iG, iB));
      }    
      strip.show();
      delay(idelay);

      SetUpColour(iTypeColor);
      for (j=ESTELA1INICIO;j<=ESTELA4FINAL;j++)
      {
        strip.setPixelColor(j, strip.Color(  iR,  iG, iB));
      }    
      strip.show();
      delay(idelay);
      
      ApagarTodosLED(LADO4FINAL, ESTELA4FINAL);
      i++;
      delay(idelay);
  }
}

void ApagaUnoaUnoLEDAlReves(int iInitLed, int iEndLed,int idelay)
{
    int j;

    for (j=iEndLed;j>=iInitLed;j--)
    {
      strip.setPixelColor(j, strip.Color(  0,   0, 0));
      delay(idelay);
      strip.show();
    }
}

void EnciendeUnoaUnoLEDyTerminaApagadoAlReves(int iInitLed, int iEndLed, int idelay, int iTypeColor, int iMaxIntensity)
{
  int j;

    SetUpColour(iTypeColor);
    for (j=iEndLed;j>=iInitLed;j--)
    {
      if (iTypeColor == BLUE)
      {
        strip.setPixelColor(j, strip.Color(  iR,  iG, iB));
      }
      delay(idelay);
      strip.show();
    }
    delay(100);
    ApagarTodosLED(iInitLed, iEndLed);
}

void EnciendeAtrasAlanteChocaneInverso(int iInitLed, int iEndLed, int idelay, int iTypeColor, int iTypeColorReverse, int iMinIntensity, int iMaxIntensity)//(LADO4INICIO, FIN_LED, DEFAULTDELAY, BLUE, WHITE, DEFAULTMININTE, 100)
{
  int j = iEndLed;
  int i = iInitLed;

    SetUpColour(iTypeColor);
    SetUpColourGusano(iTypeColorReverse);
    while (i < j)
    {
      strip.setPixelColor(j, strip.Color(  iR,  iG, iB));
      strip.setPixelColor(i, strip.Color(  iR,  iG, iB));
      delay(idelay);
      strip.show();
      i++; j--;
    }

    while ((i > iInitLed) && (j < iEndLed))
    {
      strip.setPixelColor(j, strip.Color(  iGR,  iGG, iGB));
      strip.setPixelColor(i, strip.Color(  iGR,  iGG, iGB));
      delay(idelay);
      strip.show();
      i--; j++;
    }
}

void EnciendeUnoaUnoconshiftdecolores(int iInitLed, int iEndLed, int idelay, int iTypeColor)
{
  //int j = iEndLed;
  int iFirst = iInitLed;
  int iSecond = iInitLed;
  int iThird = iInitLed;
  int iFourth = iInitLed;
  int iFifth =  iInitLed;
  int iSixth  =  iInitLed;

    while (iSixth <= iEndLed)
    {
    //  strip.setPixelColor(j, strip.Color(  0,   0, iMaxIntensity));
      strip.setPixelColor(iFirst, strip.Color(  0,   0, C150));
      if (iFirst >= 20)//OFFSET_UNO)       
      {
        strip.setPixelColor(iSecond, strip.Color(  0,   C150, 0));
        iSecond++;  
      }
      if (iSecond >= 20)//OFFSET_UNO)       
      {
        strip.setPixelColor(iThird, strip.Color(  0,   C150, C150));
        iThird++;  
      }

      if (iThird >= 20)//OFFSET_UNO)       
      {
        strip.setPixelColor(iFourth, strip.Color(  C150,   C150, 0));
        iFourth++;  
      } 

      if (iFourth >= 20)//OFFSET_UNO)       
      {
        strip.setPixelColor(iFifth, strip.Color(  C150,  0, 0));
        iFifth++;  
      }
      if (iFifth >= 20)//OFFSET_UNO)       
      {
        strip.setPixelColor(iSixth, strip.Color(  0,  0, C150));
        iSixth++;  
      } 
      delay(idelay);
      strip.show();
      iFirst++;// j--;
    }  
}

void PreTest(void)
{
  AumentaBrilloPocoaPocoTramoyTerminaApagado(LADO4INICIO, FIN_LED, DEFAULTDELAY, BLUE, DEFAULTMININTE, 100);
  EnciendeTodaEstrellaPicoaPico(150, BLUE, 8);
  EnciendeUnoaUnoLEDyTerminaApagado(LADO4INICIO, FIN_LED, 20, BLUE, 150);
  EnciendeTodaEstrella(LADO4INICIO, FIN_LED, BLUE);
  ApagaUnoaUnoLED(LADO4INICIO, FIN_LED, 35);
  EnciendeTodaEstrella(LADO4INICIO, FIN_LED, BLUE);
  ApagaUnoaUnoLEDAlReves(LADO4INICIO, FIN_LED, 20);
  EnciendeUnoaUnoLEDyTerminaApagadoAlReves(LADO4INICIO, FIN_LED, 30, BLUE, 150);  
  ParpadeoMismoColor(LADO4INICIO, FIN_LED, 500, BLUE, 125, 5);
  ParpadeoMismoColor(LADO4INICIO, FIN_LED, 50, BLUE, 125, 20);
  Gusano(LADO4INICIO, FIN_LED, 8, 5, BLUE, GREEN);
  Gusano(LADO4INICIO, FIN_LED, 8, 25, OFF, BLUE);
  DosGusano(LADO4INICIO, FIN_LED, 10, 10, BLUE, GREEN);
  EnciendeTodaEstrellaTramoaTramo(250, BLUE, 3);
  EnciendeTodaEstrellaTramoaTramo(DEFAULTDELAY, BLUE, 5);
  EnciendeUnoaUnoLED(LADO4INICIO, FIN_LED, 10, BLUE, 125);
  ApagarTodosLED(LADO4INICIO, FIN_LED);
  EnciendeAtrasAlanteChocaneInverso(LADO4INICIO, FIN_LED, 20, BLUE, GREEN, DEFAULTMININTE, 100);
  EnciendeUnoaUnoconshiftdecolores(LADO4INICIO, FIN_LED, 20, BLUE);
  ApagarTodosLED(LADO4INICIO, FIN_LED);
  EnciendeUnoaUnoLED(LADO4INICIO, FIN_LED, 10, BLUE, 125);
  EnciendeUnoaUnoLED(LADO4INICIO, FIN_LED, 10, RED, 125);
  EnciendeUnoaUnoLED(LADO4INICIO, FIN_LED, 10, GREEN, 125);
  EnciendeUnoaUnoLED(LADO4INICIO, FIN_LED, 10, RANDOM, 125);
  EnciendeUnoaUnoLEDRANDOM(LADO4INICIO, FIN_LED, 10, RANDOM, 125);
  EnciendeTodaEstrellaTramoaTramo(DEFAULTDELAY, RANDOM, 5);
  EnciendeTodaEstrellaPicoaPico(150, RANDOM, 8);
  AumentaBrilloPocoaPocoTramoyTerminaApagado(LADO4INICIO, FIN_LED, DEFAULTDELAY, RANDOM, DEFAULTMININTE, 100);
  rainbowFade2White(3, 3, 1);
  whiteOverRainbow(10, 8);  
}

void RandomEffect (int iefecto)
{
  switch (iefecto) {
    case 1:
      // statements
      AumentaBrilloPocoaPocoTramoyTerminaApagado(LADO4INICIO, FIN_LED, random(DEFAULTMININTE,DEFAULTMAXINTE), random(BLUE,COLOR20), DEFAULTMININTE, 100);
      break;
    case 2:
      // statements
      EnciendeTodaEstrellaPicoaPico(random(DEFAULTMININTE,DEFAULTMAXINTE), random(BLUE,COLOR20), random(0,MAXREPETITION));
      break;
    case 3:
      // statements
      EnciendeUnoaUnoLEDyTerminaApagado(LADO4INICIO, FIN_LED, random(DEFAULTMININTE,DEFAULTMAXINTE), random(BLUE,COLOR20), 150);
      break;
    case 4:
      // statements
      whiteOverRainbow(10, 8);  
      break;
    case 5:
      // statements
      rainbowFade2White(3, 3, 1);
      break;
    case 6:
      // statements
      EnciendeTodaEstrellaTramoaTramo(random(DEFAULTMININTE,DEFAULTMAXINTE), random(BLUE,COLOR20), random(0,MAXREPETITION));
      break;
    case 7:
      // statements
      EnciendeUnoaUnoLEDRANDOM(LADO4INICIO, FIN_LED, random(DEFAULTMININTE,DEFAULTMAXINTE), random(BLUE,COLOR20), 125);
      break;
    case 8:
      // statements
      EnciendeUnoaUnoLED(LADO4INICIO, FIN_LED, random(DEFAULTMININTE,DEFAULTMAXINTE), random(BLUE,COLOR20), 125);
      break;
    case 9:
      // statements
      EnciendeUnoaUnoLED(LADO4INICIO, FIN_LED, random(DEFAULTMININTE,8), random(BLUE,COLOR20), 125);
      break;
    case 10:
      // statements
      EnciendeUnoaUnoconshiftdecolores(LADO4INICIO, FIN_LED, 20, BLUE);
      break;
    case 11:
      // statements
      EnciendeAtrasAlanteChocaneInverso(LADO4INICIO, FIN_LED, random(DEFAULTMININTE,DEFAULTMAXINTE), random(BLUE,COLOR20), random(BLUE,COLOR20), 100, 100);
      break;
    case 12:
      // statements
      EnciendeAtrasAlanteChocaneInverso(LADO4INICIO, FIN_LED, random(DEFAULTMININTE,15), random(BLUE,COLOR20), random(BLUE,COLOR20), 100, 100);
      break;  
    case 13:
      // statements
      EnciendeTodaEstrella(LADO4INICIO, FIN_LED, random(BLUE,COLOR20));
      break;  
    case 14:
      // statements
      ApagaUnoaUnoLEDAlReves(LADO4INICIO, FIN_LED, 20);
      break;
    case 15:
      // statements
      EnciendeUnoaUnoLEDyTerminaApagadoAlReves(LADO4INICIO, FIN_LED, random(DEFAULTMININTE,DEFAULTMAXINTE), random(BLUE,COLOR20), 150);
      break;
    case 16:
      // statements
      ParpadeoMismoColor(LADO4INICIO, FIN_LED, random(DEFAULTMININTE,DEFAULTMAXINTE), random(BLUE,COLOR20), C150, random(0,MAXREPETITION));
      break;
    case 17:
      // statements
      Gusano(LADO4INICIO, FIN_LED, random(DEFAULTMININTE,DEFAULTMAXINTE), random(3,COLOR20), random(BLUE,COLOR20), random(BLUE,COLOR20));
      break;
    case 18:
      // statements
      Gusano(LADO4INICIO, FIN_LED, random(DEFAULTMININTE,10), random(3,COLOR20), random(BLUE,COLOR20), random(BLUE,COLOR20));
      break;
    case 19:
      // statements
      DosGusano(LADO4INICIO, FIN_LED, random(DEFAULTMININTE,DEFAULTMAXINTE), random(3,COLOR20), random(BLUE,COLOR20), random(BLUE,COLOR20));
      break;
    case 20:
      // statements
      DosGusano(LADO4INICIO, FIN_LED, random(DEFAULTMININTE,15), random(3,COLOR20), random(BLUE,COLOR20), random(BLUE,COLOR20));
      break;
    case 21:
      // statements
      EnciendeTodaEstrellaTramoaTramo(random(DEFAULTMININTE,DEFAULTMAXINTE), random(BLUE,COLOR20), random(0,MAXREPETITION));
      break;
    case 22:
      // statements
      EnciendeUnoaUnoLED(LADO4INICIO, FIN_LED, random(DEFAULTMININTE,DEFAULTMAXINTE), random(BLUE,COLOR20), C150);
      break;  
    case 23:
      // statements
      EnciendeUnoaUnoLED(LADO4INICIO, FIN_LED, random(DEFAULTMININTE,10), random(BLUE,COLOR20), C150);
      break;  
    case 24:
      // statements
      DosGusano(LADO4INICIO, FIN_LED, random(DEFAULTMININTE,15), random(3,COLOR20), random(BLUE,COLOR20), random(BLUE,COLOR20));
      break;
    default:
      // statements
      break;
  }     
}

void loop() {

  RandomEffect (random(1,25));

}

// Fill strip pixels one after another with a color. Strip is NOT cleared
// first; anything there will be covered pixel by pixel. Pass in color
// (as a single 'packed' 32-bit value, which you can get by calling
// strip.Color(red, green, blue) as shown in the loop() function above),
// and a delay time (in milliseconds) between pixels.
void colorWipe(uint32_t color, int wait) {
  for(int i=0; i<strip.numPixels(); i++) { // For each pixel in strip...
    strip.setPixelColor(i, color);         //  Set pixel's color (in RAM)
    strip.show();                          //  Update strip to match
    delay(wait);                           //  Pause for a moment
  }
}

void whiteOverRainbow(int whiteSpeed, int whiteLength) {

  if(whiteLength >= strip.numPixels()) whiteLength = strip.numPixels() - 1;

  int      head          = whiteLength - 1;
  int      tail          = 0;
  int      loops         = 3;
  int      loopNum       = 0;
  uint32_t lastTime      = millis();
  uint32_t firstPixelHue = 0;

  for(;;) { // Repeat forever (or until a 'break' or 'return')
    for(int i=0; i<strip.numPixels(); i++) {  // For each pixel in strip...
      if(((i >= tail) && (i <= head)) ||      //  If between head & tail...
         ((tail > head) && ((i >= tail) || (i <= head)))) {
        strip.setPixelColor(i, strip.Color(255, 255, 255)); // Set white
      } else {                                             // else set rainbow
        int pixelHue = firstPixelHue + (i * 65536L / strip.numPixels());
        strip.setPixelColor(i, strip.gamma32(strip.ColorHSV(pixelHue)));
      }
    }

    strip.show(); // Update strip with new contents
    // There's no delay here, it just runs full-tilt until the timer and
    // counter combination below runs out.

    firstPixelHue += 40; // Advance just a little along the color wheel

    if((millis() - lastTime) > whiteSpeed) { // Time to update head/tail?
      if(++head >= strip.numPixels()) {      // Advance head, wrap around
        head = 0;
        if(++loopNum >= loops) return;
      }
      if(++tail >= strip.numPixels()) {      // Advance tail, wrap around
        tail = 0;
      }
      lastTime = millis();                   // Save time of last movement
    }
  }
}

void pulseWhite(uint8_t wait) {
  for(int j=0; j<256; j++) { // Ramp up from 0 to 255
    // Fill entire strip with white at gamma-corrected brightness level 'j':
    strip.fill(strip.Color(0, 0, strip.gamma8(j)));
    strip.show();
    delay(wait);
  }

  for(int j=255; j>=0; j--) { // Ramp down from 255 to 0
    strip.fill(strip.Color(0, 0, 0, strip.gamma8(j)));
    strip.show();
    delay(wait);
  }
}

void rainbowFade2White(int wait, int rainbowLoops, int whiteLoops) {
  int fadeVal=0, fadeMax=100;

  // Hue of first pixel runs 'rainbowLoops' complete loops through the color
  // wheel. Color wheel has a range of 65536 but it's OK if we roll over, so
  // just count from 0 to rainbowLoops*65536, using steps of 256 so we
  // advance around the wheel at a decent clip.
  for(uint32_t firstPixelHue = 0; firstPixelHue < rainbowLoops*65536;
    firstPixelHue += 256) {

    for(int i=0; i<strip.numPixels(); i++) { // For each pixel in strip...

      // Offset pixel hue by an amount to make one full revolution of the
      // color wheel (range of 65536) along the length of the strip
      // (strip.numPixels() steps):
      uint32_t pixelHue = firstPixelHue + (i * 65536L / strip.numPixels());

      // strip.ColorHSV() can take 1 or 3 arguments: a hue (0 to 65535) or
      // optionally add saturation and value (brightness) (each 0 to 255).
      // Here we're using just the three-argument variant, though the
      // second value (saturation) is a constant 255.
      strip.setPixelColor(i, strip.gamma32(strip.ColorHSV(pixelHue, 255,
        255 * fadeVal / fadeMax)));
    }

    strip.show();
    delay(wait);

    if(firstPixelHue < 65536) {                              // First loop,
      if(fadeVal < fadeMax) fadeVal++;                       // fade in
    } else if(firstPixelHue >= ((rainbowLoops-1) * 65536)) { // Last loop,
      if(fadeVal > 0) fadeVal--;                             // fade out
    } else {
      fadeVal = fadeMax; // Interim loop, make sure fade is at max
    }
  }

//  for(int k=0; k<whiteLoops; k++) {
//    for(int j=0; j<256; j++) { // Ramp up 0 to 255
//      // Fill entire strip with white at gamma-corrected brightness level 'j':
//      strip.fill(strip.Color(0, 0, strip.gamma8(j) ));
//      strip.show();
//    }
//    delay(1000); // Pause 1 second
//    for(int j=255; j>=0; j--) { // Ramp down 255 to 0
//      strip.fill(strip.Color(0, strip.gamma8(j), 0));
//      strip.show();
//    }
//  }

  //delay(500); // Pause 1/2 second
}
