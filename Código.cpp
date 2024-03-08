#define botao 3
#define tempo 10
#define buzzer 5

#define foto A0

int i;
int estado = HIGH;
int estadoReativacao = LOW;

void setup()
{
    pinMode(botao, INPUT);
    pinMode(foto, INPUT);
    pinMode(buzzer, OUTPUT);

    Serial.begin(9600);
}

void loop()
{
    Serial.print("Botao: ");
    Serial.println(digitalRead(botao));
    Serial.print("Foto Resistor: ");
    Serial.println(analogRead(foto));

    if (analogRead(foto) > 500 && estadoReativacao)
    {
        for (i = 150; i < 1800; i++)
        {
            if (digitalRead(botao))
            {
                estado = LOW;
                estadoReativacao = LOW;
                break;
            }else{
                estado = HIGH;
            }

            if (estado)
            {
                tone(buzzer, i, tempo);
                delay(1);
            }
        }
        for (i = 1800; i > 150; i--)
        {
            if (digitalRead(botao))
            {
                estado = LOW;
                estadoReativacao = LOW;
                break;
            }else{
                estado = HIGH;
            }

            if (estado)
            {
                tone(buzzer, i, tempo);
                delay(1);
            }
        }
    }

    if (analogRead(foto) <= 500)
    {
        estadoReativacao = HIGH;
    }
}