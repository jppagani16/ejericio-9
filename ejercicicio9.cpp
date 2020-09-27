void IngresoFiesta (char &tipo, string &Date, int &QPersonas, int &menu){
	int FIESTA;
	while (FIESTA=1){
		cout<<"Ingrese Fecha de Fiesta: ";
		cin>>Date;
		cout<<endl<<"Ingrese Tipo de Fiesta (C, S, O): ";
		cin>>tipo;
		cout<<endl<<"Ingrese Cantidad de Personas de la fiesta: ";
		cin>>QPersonas;
		cout<<endl<<"Ingrese Tipo de Menu (1 o 2): ";
		cin>>menu;
		cout<<("Quiere ingresar otra fiesta para el mismo día (1-SI / 2-NO): ");
		cin>>FIESTA;
	}

}


void MostrarResumenFiestas (){

}

void ContarFiestasxTipo (){

}

void MostrarQFiestasxTipo(){
}

int main(){
cout<<"Por favor ingrese las fiestas planificadas (salir con -1 en fecha)"<<endl;
IngresoFiesta ();
MostrarResumenFiestas ();
ContarFiestasxTipo();
MostrarQFiestasxTipo();
HolaMundo ();


}
