//SISTEMA EMBARCADO
#include <stdio.h>

int main(void) {
  int hora, min, seg;
  int luz = 0;
  int stop;

  printf("Digite o horário atual: ");
  scanf("%d", &hora);
  scanf("%d", &min);
  scanf("%d", &seg);
  printf("\nO horário atual é %d:%d:%d",hora,min,seg);

  if((hora>=0 && hora<=24)||(min>=0 && min<=59)||(seg>=0 && seg<=59)){
    for(;;seg += 10){
      if(seg>60){
        ++min;
        seg = seg - 60;
        if(min >= 60){
          min = 00;
          ++hora;
          if(hora>24){
            hora = hora - 24;
            break;
          }
        }
      }
    }
    if(hora>=18 && hora<=5){
      luz = 1; //Luz ligada das 18:00 às 05:00
    }else{
      luz = 0; //Luz desligada das 06:00 às 17:00
    }
    printf("\nO horário atual é %d:%d:%d",hora,min,seg);
  }else{
    printf("INVÁLIDO");
    return 1;
  }
  return 0;
}
