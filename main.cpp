#include <iostream>
#include <iostream>
#include <conio.h>
#include <string.h>

using namespace std;
int main(){
int i;	

	cout<<"ingrese el nombre de las 5 personas: "<<endl;
	
	char nombre[20];
	char name[20];
	char nom[20];
	char nome[20];
	char namn[20];
	cin.getline(nombre,20,'\n'); 
	cin.getline(name,20,'\n');
	cin.getline(nom,20,'\n');
	cin.getline(nome,20,'\n');
	cin.getline(namn,20,'\n');	
				
	cout<<nombre<<endl;
	int distancia1 = strlen(nombre); 
	cout<<"\ncantidad de espacios usados: "<<distancia1<<endl;
	
		cout<<name<<endl;
	int distancia2 = strlen(name);
	cout<<"\ncantidad de espacios usados: "<<distancia2<<endl;
	
		cout<<nom<<endl;
	int distancia3 = strlen(nom);  
	cout<<"\ncantidad de espacios usado: "<<distancia3<<endl;
	
		cout<<nome<<endl;
	int distancia4 = strlen(nome);  
	cout<<"\ncantidad de espacios usados: "<<distancia4<<endl;
	
		cout<<namn<<endl;
	int distancia5 = strlen(namn);  
	cout<<"\ncantidad de espacios usados: "<<distancia5<<endl;
	
	
	return 0;
}
