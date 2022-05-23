#include <iostream>
using namespace std;

int main()
	
{
	int referencia, talla, costo, precio, cantidad, utilidad_unidad, utilidad_total;
	char descripcion[50], disponibles, tipo;
	double costo_total, precio_total, porcentaje_utilidad;

	cout<<"Digite la referencia del zapato...";
	cin>>referencia;
	cout<<"Digite una descripción del zapato...";
	cin.getline(descripcion, 50);
	cin>>descripcion;
	cout<<"Digite la talla...";
	cin>>talla;
	cout<<"Digite la letra S si esta disponible para la venta, de lo contrario la letra N  S/N...";
	cin>>disponibles;
	cout<<"Digita la cantidad...";
	cin>>cantidad;
	cout<<"Digite el costo del zapato...";
	cin>>costo;
	cout<<"Digita el precio de venta del zapato...";
	cin>>precio;
	
	costo_total=costo*cantidad;
	precio_total=precio*cantidad;
	utilidad_unidad=precio-costo;
	utilidad_total= utilidad_unidad*cantidad;
	porcentaje_utilidad=(costo_total/precio_total)*100;
	
	if(costo<=30000)
	{
		tipo = char ('A');
		
	}
	else if(costo>30000 and costo<=60000 )
	{
		tipo = 'B';
		
	}
	else if(costo>60000)
	{
		tipo = 'C';
		
	}
	

				
	system("cls");

	cout<<"ADMINISTRAR VENTA DE ZAPATOS"<<endl;
	cout<<"REFERENCIA: "<<referencia <<endl;
	cout<<"TIPO: "<<tipo <<endl;
	cout<<"DESCRIPCIÓN: "<<descripcion <<endl;
	cout<<"TALLA: "<<talla <<endl;
	cout<<"DISPONIBILIDAD: "<<disponibles <<endl;
	cout<<"CANTIDAD DE ZAPATOS: "<<cantidad <<endl;
	cout<<"COSTO UNIDAD: "<<costo <<endl;
	cout<<"PRECIO TOTAL: "<<precio <<endl;
	cout<<"UTILIDAD POR UNIDAD: "<<utilidad_unidad <<endl;
	cout<<"UTILIDAD TOTAL: "<<utilidad_total <<endl;
	cout<<"PORCENTAJE DE UTILIDAD: "<<porcentaje_utilidad <<endl;
	cout<<"\nHecho por: Julian Castellanos Dulcey"<<endl;
	
	
	system("pause");
	return EXIT_SUCCESS;
}