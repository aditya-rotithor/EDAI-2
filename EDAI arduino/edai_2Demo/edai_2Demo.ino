void normal()
{
  int ldr_status = analogRead(ldr);
  int pir_status = digitalRead(pir);

  if (pir_status == 1)
  {


            if (ldr_status >= 450)
            {
              digitalWrite(led1, HIGH);
              digitalWrite(led2, LOW);
              digitalWrite(led3, HIGH);
              digitalWrite(led4, LOW);
              digitalWrite(led5, HIGH);
              delay(10000);
            }
        
            else if (ldr_status >= 650)
            {
              digitalWrite(led1, HIGH);
              digitalWrite(led2, LOW);
              digitalWrite(led3, LOW);
              digitalWrite(led4, LOW);
              digitalWrite(led5, HIGH);
              delay(10000);
            }
        
        
            else if (ldr_status >= 1000)
            {
              digitalWrite(led1, HIGH);
              digitalWrite(led2, HIGH);
              digitalWrite(led3, HIGH);
              digitalWrite(led4, HIGH);
              digitalWrite(led5, HIGH);
            }
        
        
          }


  else
  {
    digitalWrite(led1, LOW);
    digitalWrite(led2, LOW);
    digitalWrite(led3, LOW);
    digitalWrite(led4, LOW);
    digitalWrite(led5, LOW);
  }

}


void powerSaving()
{
  int ldr_status = analogRead(ldr);
  int pir_status = digitalRead(pir);


  if (pir_status == 1)
  {


            if (ldr_status >= 450)
            {
              digitalWrite(led1, LOW);
              digitalWrite(led2, LOW);
              digitalWrite(led3, LOW);
              digitalWrite(led4, LOW);
              digitalWrite(led5, LOW);
            }
        
            else if (ldr_status >= 650)
            {
              digitalWrite(led1, LOW);
              digitalWrite(led2, LOW);
              digitalWrite(led3, HIGH);
              digitalWrite(led4, LOW);
              digitalWrite(led5, LOW);
            }
        
            else if (ldr_status >= 850)
            {
              digitalWrite(led1, HIGH);
              digitalWrite(led2, LOW);
              digitalWrite(led3, LOW);
              digitalWrite(led4, LOW);
              digitalWrite(led5, HIGH);
            }
        
        
            else if (ldr_status >= 1000)
            {
              digitalWrite(led1, HIGH);
              digitalWrite(led2, LOW);
              digitalWrite(led3, HIGH);
              digitalWrite(led4, LOW);
              digitalWrite(led5, HIGH);
            }
        


    else
    {
      digitalWrite(led1, LOW);
      digitalWrite(led2, LOW);
      digitalWrite(led3, LOW);
      digitalWrite(led4, LOW);
      digitalWrite(led5, LOW);
    }


  }
}


void study()
{
  int ldr_status = analogRead(ldr);
  int pir_status = digitalRead(pir);


  if (pir_status == 1)
  {


          if (ldr_status >= 450 && pir_status == 1)
          {
            digitalWrite(led1, HIGH);
            digitalWrite(led2, LOW);
            digitalWrite(led3, HIGH);
            digitalWrite(led4, LOW);
            digitalWrite(led5, HIGH);
          }
      
          else if (ldr_status >= 650)
          {
            digitalWrite(led1, HIGH);
            digitalWrite(led2, HIGH);
            digitalWrite(led3, LOW);
            digitalWrite(led4, HIGH);
            digitalWrite(led5, HIGH);
          }
      
          else if (ldr_status >= 850)
          {
            digitalWrite(led1, HIGH);
            digitalWrite(led2, HIGH);
            digitalWrite(led3, HIGH);
            digitalWrite(led4, HIGH);
            digitalWrite(led5, HIGH);
          }
      
      
          else if (ldr_status >= 1000)
          {
            digitalWrite(led1, HIGH);
            digitalWrite(led2, HIGH);
            digitalWrite(led3, HIGH);
            digitalWrite(led4, HIGH);
            digitalWrite(led5, HIGH);
          }
      


    else
    {
      digitalWrite(led1, LOW);
      digitalWrite(led2, LOW);
      digitalWrite(led3, LOW);
      digitalWrite(led4, LOW);
      digitalWrite(led5, LOW);
    }


  }

  






  void setup() {
    // put your setup code here, to run once:

  }

  void loop() {
    // put your main code here, to run repeatedly:

  }
