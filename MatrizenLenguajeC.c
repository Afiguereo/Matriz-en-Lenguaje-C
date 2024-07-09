int main() {
   
    float calificaciones[4][4];

    printf("Ingrese las calificaciones de 20 estudiantes:\n");
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            printf("Calificación del estudiante %d-%d: ", i + 1, j + 1);
            scanf("%f", &calificaciones[i][j]);
        }
    }

    
    printf("\nMatriz de calificaciones:\n");
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            printf("%.1f\t", calificaciones[i][j]);
        }
        printf("\n");
    }

    return 0;
}
