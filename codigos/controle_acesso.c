#include <stdio.h>

int main() {
    int tipo_usuario, dia_semana, turno;
    
    printf("tipo de usuario: 1-administrador, 2-funcionario, 3-visitante = ");
    scanf("%d", &tipo_usuario);
    
    printf("Dia Da Semana 1=domingo, 2=segunda, ... 7=sabado = ");
    scanf("%d", &dia_semana);
    
    printf("Turno Do Dia: 1=manha, 2=tarde, 3=noite = ");
    scanf("%d", &turno);
    
    switch (tipo_usuario){
        case 1:
          switch (turno) {
             case 1:
             printf("Acesso total ao sistema e relatorios");
             break;
               case 2: 
                 printf("Acesso total ao sistema");
                 break;
                    case 3:
                    printf("Acesso limitado ao sistema");
                    break;
                    default:
                    printf("invalido");
                    break;
          }
          case 2:
          if (dia_semana >=1 && dia_semana <=5) {
              switch (turno) {
                  case 1:
                  printf("Registro de ponto e leitura de tarefas");
                  break;
                  case 2:
                  printf("Execucao de tarefas");
                  break;
                  case 3:
                  printf("Acesso negado");
                  break;
                  default:
                  printf("invalido");
                 
              }
          } else {
              printf("voce e um merdao");
          }
          break;
          
          case 3:
          if (dia_semana == 6 || dia_semana == 7) {
              switch (turno) {
                  case 1:
                  case 2:
                  printf("Acesso ao modo visitante");
                  break;
                  case 3:
                  printf("acesso Negado dog");
                  break;
                  default:
                  printf("invalido");
              }
          } else {
              printf("Dia da semana invalido\n");
          }
          break;
          default:
          printf("tipo de usuario invalido\n");  
          
    }
    
    

    return 0;
}