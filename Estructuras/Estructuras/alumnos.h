
typedef struct
{
    int legajo;
    char nombre[50];
    float altura;
    int nota;
}eAlumno;

void cargarListadoDeAlumnos(eAlumno[], int);
void mostrarListadoDeAlumnos(eAlumno[], int);
void mostrarUnAlumno(eAlumno);
eAlumno cargarAlumno();

