eAlumno cargarAlumno()
{
    eAlumno miAlumno;

    printf("Ingrese legajo: ");
    scanf("%d", &miAlumno.legajo);

    printf("Ingrese nombre: ");
    fflush(stdin);
    gets(miAlumno.nombre);

    printf("Ingrese altura: ");
    scanf("%f", &miAlumno.altura);

    printf("Ingrese nota: ");
    scanf("%d", &miAlumno.nota);

    mostrarUnAlumno(miAlumno);

    return miAlumno;

}

void mostrarUnAlumno(eAlumno miAlumno)
{
        printf("%d--%s--%f--%d\n", miAlumno.legajo, miAlumno.nombre, miAlumno.altura, miAlumno.nota);
}
