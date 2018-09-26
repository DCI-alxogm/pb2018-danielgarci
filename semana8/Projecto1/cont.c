
FILE *mercury;
FILE *venus;
FILE *earth;
FILE *mars;
FILE *jupiter;
FILE *saturn;
FILE *uranus;
FILE *neptune;
FILE *pluto;
float mass;
float stelar_mass;
double Vx[delta_temp];
double Vy[delta_temp];
double Vz[delta_temp];
int opcion;

printf("Presiona 1 para obtener la óbita de mercurio\n");
printf("Presiona 2 para obtener la óbita de venus\n");
printf("Presiona 3 para obtener la óbita de tierra\n");
printf("Presiona 4 para obtener la óbita de marte\n");
printf("Presiona 5 para obtener la óbita de jupiter\n");
printf("Presiona 6 para obtener la óbita de saturno\n");
printf("Presiona 7 para obtener la óbita de urano\n");
printf("Presiona 8 para obtener la óbita de neptuno\n");
printf("Presiona 9 para obtener la óbita de plutón\n");

scanf("%i",opcion);
switch(opcion)
	{
	case 1:
		mercury=fopen("mercury.dat","r");
		fscanf(mercury,"%lf %lf %lf %lf %lf %lf %f %f %i %f",&x[i],&y[i],&z[i],&Vx[i],&Vy[i],&Vz[i],&mass,&stelar_mass,&t_evol,&h);
		fclose(mercury);
	break;
	case 2:
		venus=fopen("venus.dat","r");
		fscanf(venus,"%lf %lf %lf %lf %lf %lf %f %f %i %f",&x[i],&y[i],&z[i],&Vx[i],&Vy[i],&Vz[i],&mass,&stelar_mass,&t_evol,&h);
		fclose(venus);
	break;
	case 3:
		earth=fopen("earth.dat","r");
		fscanf(earth,"%lf %lf %lf %lf %lf %lf %f %f %i %f",&x[i],&y[i],&z[i],&Vx[i],&Vy[i],&Vz[i],&mass,&stelar_mass,&t_evol,&h);
		fclose(earth);
	break:
	case 4:
		mars=fopen("mars.dat","r");
		fscanf(mars,"%lf %lf %lf %lf %lf %lf %f %f %i %f",&x[i],&y[i],&z[i],&Vx[i],&Vy[i],&Vz[i],&mass,&stelar_mass,&t_evol,&h);
		fclose(mars);
	break;
	case 5:
		jupiter=fopen("jupiter.dat","r");
		fscanf(jupiter,"%lf %lf %lf %lf %lf %lf %f %f %i %f",&x[i],&y[i],&z[i],&Vx[i],&Vy[i],&Vz[i],&mass,&stelar_mass,&t_evol,&h);
		fclose(jupiter);
	break;
	case 6:
		saturn=fopen("saturn.dat","r");
		fscanf(saturn,"%lf %lf %lf %lf %lf %lf %f %f %i %f",&x[i],&y[i],&z[i],&Vx[i],&Vy[i],&Vz[i],&mass,&stelar_mass,&t_evol,&h);
		fclose(saturn);
	break;
	case 7:
		uranus=fopen("uranus.dat","r");
		fscanf(uranus,"%lf %lf %lf %lf %lf %lf %f %f %i %f",&x[i],&y[i],&z[i],&Vx[i],&Vy[i],&Vz[i],&mass,&stelar_mass,&t_evol,&h);
		fclose(uranus);
	break;
	case 8:
		neptune=fopen("neptune.dat","r");
		fscanf(neptune,"%lf %lf %lf %lf %lf %lf %f %f %i %f",&x[i],&y[i],&z[i],&Vx[i],&Vy[i],&Vz[i],&mass,&stelar_mass,&t_evol,&h);
		fclose(neptune);
	break;
	case 9:
		pluto=fopen("pluto.dat","r");
		fscanf(pluto,"%lf %lf %lf %lf %lf %lf %f %f %i %f",&x[i],&y[i],&z[i],&Vx[i],&Vy[i],&Vz[i],&mass,&stelar_mass,&t_evol,&h);
		fclose(pluto);
	break;
	default:
		printf("NOT DEFINED DOMAIN\n");
	}
