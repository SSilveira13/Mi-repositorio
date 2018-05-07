float suma(float n1, float n2){//Funcion que toma 2 numeros y los suma
    float resultado;
    resultado=n1+n2;
    return resultado;
}

float resta(float n1, float n2){//Funcion que toma 2 numeros y los resta
    float resultado;
    resultado=n1-n2;
    return resultado;
}

float multiplicacion(float n1, float n2){//Funcion que toma 2 numeros y los multiplica
    float resultado;
    resultado=n1*n2;
    return resultado;
}

float division(float n1, float n2){//Funcion que toma 2 numeros y los divide, si el segundo numero es 0 se evita la divicion
    float resultado;
    float retorno=0;
    if(n2!=0){
        resultado=n1/n2;
        retorno=resultado;
    }
    else
    {
        printf("No puede dividir por 0");
        retorno=0;
    }
    return retorno;
}

int factorial(int n1){//Funcion que toma el primer numero y muestra su factorial
    int factorial=1, i;
    for(i=n1;i>0;i--){
        factorial=factorial*i;
    }
    return factorial;
}
