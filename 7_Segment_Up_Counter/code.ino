int i;

void DisplayNumber(int);

void setup() 
{
  for(i=2;i<=9;i++)
  {
    pinMode(i,OUTPUT);  
  }  
}

void loop() 
{ 
  for(i=0;i<=9;i++)
  {
    DisplayNumber(i);
    delay(1000);
  }
}

void DisplayNumber(int num)
{
  switch(num)
  {
    case 0:
      digitalWrite(9,HIGH);
      digitalWrite(8,HIGH); 
      digitalWrite(7,HIGH);
      digitalWrite(6,HIGH);
      digitalWrite(5,HIGH);
      digitalWrite(4,HIGH);
      digitalWrite(3,LOW);
      digitalWrite(2,LOW);
      break;

    case 1:
      digitalWrite(9,LOW);
      digitalWrite(8,HIGH); 
      digitalWrite(7,HIGH);
      digitalWrite(6,LOW);
      digitalWrite(5,LOW);
      digitalWrite(4,LOW);
      digitalWrite(3,LOW);
      digitalWrite(2,LOW);
      break;

    case 2:
      digitalWrite(9,HIGH);
      digitalWrite(8,HIGH); 
      digitalWrite(7,LOW);
      digitalWrite(6,HIGH);
      digitalWrite(5,HIGH);
      digitalWrite(4,LOW);
      digitalWrite(3,HIGH);
      digitalWrite(2,LOW);
      break;

     case 3:
      digitalWrite(9,HIGH);
      digitalWrite(8,HIGH); 
      digitalWrite(7,HIGH);
      digitalWrite(6,HIGH);
      digitalWrite(5,LOW);
      digitalWrite(4,LOW);
      digitalWrite(3,HIGH);
      digitalWrite(2,LOW);
      break;

    case 4:
      digitalWrite(9,LOW);
      digitalWrite(8,HIGH); 
      digitalWrite(7,HIGH);
      digitalWrite(6,LOW);
      digitalWrite(5,LOW);
      digitalWrite(4,HIGH);
      digitalWrite(3,HIGH);
      digitalWrite(2,LOW);
      break;

    case 5:
      digitalWrite(9,HIGH);
      digitalWrite(8,LOW); 
      digitalWrite(7,HIGH);
      digitalWrite(6,HIGH);
      digitalWrite(5,LOW);
      digitalWrite(4,HIGH);
      digitalWrite(3,HIGH);
      digitalWrite(2,LOW);
      break;

    case 6:
      digitalWrite(9,HIGH);
      digitalWrite(8,LOW); 
      digitalWrite(7,HIGH);
      digitalWrite(6,HIGH);
      digitalWrite(5,HIGH);
      digitalWrite(4,HIGH);
      digitalWrite(3,HIGH);
      digitalWrite(2,LOW);
      break; 

    case 7:
      digitalWrite(9,HIGH);
      digitalWrite(8,HIGH); 
      digitalWrite(7,HIGH);
      digitalWrite(6,LOW);
      digitalWrite(5,LOW);
      digitalWrite(4,LOW);
      digitalWrite(3,LOW);
      digitalWrite(2,LOW);
      break; 

    case 8:
      digitalWrite(9,HIGH);
      digitalWrite(8,HIGH); 
      digitalWrite(7,HIGH);
      digitalWrite(6,HIGH);
      digitalWrite(5,HIGH);
      digitalWrite(4,HIGH);
      digitalWrite(3,HIGH);
      digitalWrite(2,LOW);
      break; 

    case 9:
      digitalWrite(9,HIGH);
      digitalWrite(8,HIGH); 
      digitalWrite(7,HIGH);
      digitalWrite(6,HIGH);
      digitalWrite(5,LOW);
      digitalWrite(4,HIGH);
      digitalWrite(3,HIGH);
      digitalWrite(2,LOW);
      break;
       
    default:
      break;
  }  
}
