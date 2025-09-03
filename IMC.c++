int main() {
     float peso;
     float altura;
     float imc;
     
     printf ("Escreva seu peso: ");
     scanf ("%f", &peso);
     
     printf ("Escreva sua altura ");
     scanf ("%f", &altura);
     
     imc = peso / (altura*altura);
     
     printf("seu imc é, %.2f", imc );
     
       if (imc < 18) {
        printf("Abaixo do peso\n");
    }
    else if (imc < 25) {
        printf("Peso normal\n");
    }
    else if (imc < 30) {
        printf("Sobrepeso\n");
    }
    else {
        printf("Obesidade\n");
    }
     

    return 0;
}