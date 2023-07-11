#include<stdio.h>
#include<windows.h>

int i, j, p;
int cupo[6]{0,5,8,10,5,20}, clase[5][6], opcion1, opcion2=0, repe=0, repe2=0;

main()
{
do
{
	repe=0;
	printf("\nIngrese el numero equivalente a la clase a la que quiera asistir entre las siguientes opciones: \n"); //presenta las clases
	printf("1-Top Ride\n2-Zumba\n3-Entrenamiento\n4-Abdominales\n");
	scanf("%d", &opcion1); //Lee clase
	

	if(opcion1 <= 4 && opcion1 >= 1) //se asegura que sea un numero valido
	{
			switch(opcion1)
			case 1: //En caso de Top ride
				while(repe2=0)
				{
					repe2=0;
					p=0;
					printf("Ingrese el numero equivalente al horario de la clase de Top Ride que le gustaria reservar: \n");
					printf("1- Horario 1\n2- Horario 2\n3- Horario 3\n4- Horario 4\n5- Horario 5\n");
					scanf("%d", &opcion2);
					if(cupo[opcion2] == 0) //Revisa si hay cupos 
					{
						printf("Este horario ya llego a su capacidad limite de participantes para este horario!\n"); //En caso de estar llena
						printf("Ingrese otro horario o ingrese cero para volver a elegir una clase: ");
						scanf("%d", &p);
						if(p==0)
						{
							repe=1;
							repe2=1;
							system("CLS");
						}
					}
					else //En caso de quedar cupos
					{
						cupo[opcion2] == cupo[opcion2] - 1;
						repe=1;
					}
				};
				break;
	}
	else //En caso que no se ingrese un numero de clase valido
	{
		system("CLS");
		printf("---El numero que ingreso no es valido.---");
		repe=1;
	}
}while(repe==1);

}
