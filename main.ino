// Created by: Alexander James
// Created on: Oct 2023

// Alternates blink colour in an RGB LED

void setup()

{

  pinMode(9, OUTPUT);

  pinMode(10, OUTPUT);

  pinMode(12, OUTPUT);

}

void loop()
{

  digitalWrite(9, HIGH);
  digitalWrite(10, LOW);
  digitalWrite(12, LOW);

  delay(1000); // Wait for 1 second
  
  digitalWrite(9, LOW);
  digitalWrite(10, HIGH);
  digitalWrite(12, LOW);

  delay(1000); // Wait for 1 second
  
  digitalWrite(9, LOW);
  digitalWrite(10, LOW);
  digitalWrite(12, HIGH);

  delay(1000); // Wait for 1 second
  
  digitalWrite(9, HIGH);
  digitalWrite(10, HIGH);
  digitalWrite(12, LOW);

  delay(1000); // Wait for 1 second
  
  digitalWrite(9, LOW);
  digitalWrite(10, HIGH);
  digitalWrite(12, HIGH);

  delay(1000); // Wait for 1 second
  
  digitalWrite(9, HIGH);
  digitalWrite(10, LOW);
  digitalWrite(12, HIGH);

  delay(1000); // Wait for 1 second
  
  digitalWrite(9, HIGH);
  digitalWrite(10, HIGH);
  digitalWrite(12, HIGH);

  
  delay(1000); // Wait for 1 second

}
