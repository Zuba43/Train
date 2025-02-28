#include<iostream>
#include<conio.h>
#include<iomanip>
using namespace std;

/*
#This program demonstrates a standard
train booking system that issues
1. Tickets
2. Shows routes and their time
3. Calculates fees and fairs
4. Cargo handling and management
5. Onboard accomodation
feel frree to copy and duplicate this program
I will be glad if you provide feedback on errors or you make adjustments
Email: kateshumbwaj@gmail.com
Phone: +256 782 978 543
Jah bless
*/
class Train{
	int fees, qty,amount,roomNumber,destination;
	string name,station;
	
	public:
		void Tickets();
		void Cargo();
		void displayRoutes();
		void feesAndTaxes();
};
//initialize some destinations and
//their kilometers to compare and generate
//fees for transportation
int kampala=120,malaba=345,kasese=765,nairobi=2734,tororo=543,gulu=654,other=3400;
void Train::Tickets(){
	cout<<"-----------------------------------------------------\n";
	cout<<"WELCOME TO THE ONLINE TRAIN TICKET SYSTEM"<<endl;
	cout<<"-----------------------------------------------------\n";
	cout<<"Enter your name: "<<endl;
	getline(cin,name);
	cout<<"\nChoose destination:\n1.Kampala\n2.Malaba\n3.Kasese\n4.Gulu\n5.Nairobi\n6.Gulu\n7.Other\n";
	cin>>destination;
	if(destination==1){
		fees=kampala*120;
		cout<<"\n\t\tPassenger's receipt\n";
		cout<<"--------------------------------------------------------\n";
		cout<<"Passenger Name: \t\t"<<name<<endl;
		cout<<"Seat number: \t\t\t"<<120<<endl;
		cout<<"Destination: \t\t\tKampala Train station"<<endl;
		cout<<"Transport fees: \t\t"<<fees<<" Ugx"<<endl;
		cout<<"Departure time: \t\t"<<12<<":30pm"<<endl;
		cout<<"Arrival time: \t\t\t"<<04<<":15pm"<<endl;
		cout<<"\n\t\tSERVICE DETAILS"<<endl;
		cout<<"--------------------------------------------------------\n";
		cout<<"Serviced by \t\t"<<" Kateshumbwa Jacob"<<endl;
		cout<<"Staff Id\t\t"<<" 10134BAQ"<<endl;
		cout<<"We are pleased you tavelled with us. Hav a safe Journey"<<endl;
		getche();
		
	}
	else if(destination==2){
		fees=malaba*120;
		cout<<"\n\t\tPassenger's receipt\n";
		cout<<"--------------------------------------------------------\n";
		cout<<"Passenger Name: \t\t"<<name<<endl;
		cout<<"Seat number: \t\t\t"<<120<<endl;
		cout<<"Destination: \t\t\tMalaba old station"<<endl;
		cout<<"Transport fees: \t\t"<<fees<<" Ugx"<<endl;
		cout<<"Departure time: \t\t"<<12<<":30pm"<<endl;
		cout<<"Arrival time: \t\t\t"<<04<<":15pm"<<endl;
		cout<<"\n\t\tSERVICE DETAILS"<<endl;
		cout<<"--------------------------------------------------------\n";
		cout<<"Serviced by \t\t"<<" Mugaambe David"<<endl;
		cout<<"Staff Id\t\t"<<" 10132BAQ"<<endl;
		cout<<"We are pleased you tavelled with us. Hav a safe Journey"<<endl;
		getche();
		
	}
	else if(destination==4){
		fees=gulu*120;
		cout<<"\n\t\tPassenger's receipt\n";
		cout<<"--------------------------------------------------------\n";
		cout<<"Passenger Name: \t\t"<<name<<endl;
		cout<<"Seat number: \t\t\t"<<120<<endl;
		cout<<"Destination: \t\t\tGulu pateok station"<<endl;
		cout<<"Transport fees: \t\t"<<fees<<" Ugx"<<endl;
		cout<<"Departure time: \t\t"<<12<<":30pm"<<endl;
		cout<<"Arrival time: \t\t\t"<<04<<":15pm"<<endl;
		cout<<"\n\t\tSERVICE DETAILS"<<endl;
		cout<<"--------------------------------------------------------\n";
		cout<<"Serviced by \t\t"<<" Ssewanyana David"<<endl;
		cout<<"Staff Id\t\t"<<" 10131BAQ"<<endl;
		cout<<"We are pleased you tavelled with us. Hav a safe Journey"<<endl;
		getche();
		
	}
	else if(destination==3){
		fees=kasese*120;
		cout<<"\n\t\tPassenger's receipt\n";
		cout<<"--------------------------------------------------------\n";
		cout<<"Passenger Name: \t\t"<<name<<endl;
		cout<<"Seat number: \t\t\t"<<120<<endl;
		cout<<"Destination: \t\t\tKirembe mine station"<<endl;
		cout<<"Transport fees: \t\t"<<fees<<" Ugx"<<endl;
		cout<<"Departure time: \t\t"<<12<<":30pm"<<endl;
		cout<<"Arrival time: \t\t\t"<<04<<":15pm"<<endl;
		cout<<"\n\t\tSERVICE DETAILS"<<endl;
		cout<<"--------------------------------------------------------\n";
		cout<<"Serviced by \t\t"<<" Kabogoza Jolly"<<endl;
		cout<<"Staff Id\t\t"<<" 10130BAQ"<<endl;
		cout<<"We are pleased you tavelled with us. Hav a safe Journey"<<endl;
		getche();
		
	}
	else if(destination==5){
		fees=nairobi*120;
		cout<<"\n\t\tPassenger's receipt\n";
		cout<<"--------------------------------------------------------\n";
		cout<<"Passenger Name: \t\t"<<name<<endl;
		cout<<"Seat number: \t\t\t"<<120<<endl;
		cout<<"Destination: \t\t\tPortbell station"<<endl;
		cout<<"Transport fees: \t\t"<<fees<<" Ugx"<<endl;
		cout<<"Departure time: \t\t"<<12<<":30pm"<<endl;
		cout<<"Arrival time: \t\t\t"<<04<<":15pm"<<endl;
		cout<<"\n\t\tSERVICE DETAILS"<<endl;
		cout<<"--------------------------------------------------------\n";
		cout<<"Serviced by \t\t"<<" Kassande Evelyn"<<endl;
		cout<<"Staff Id\t\t"<<" 10129BAQ"<<endl;
		cout<<"We are pleased you tavelled with us. Hav a safe Journey"<<endl;
		getche();
		
	}
	else if(destination==6){
		fees=tororo*120;
		cout<<"\n\t\tPassenger's receipt\n";
		cout<<"--------------------------------------------------------\n";
		cout<<"Passenger Name: \t\t"<<name<<endl;
		cout<<"Seat number: \t\t\t"<<120<<endl;
		cout<<"Destination: \t\t\tTororo Millitary station"<<endl;
		cout<<"Transport fees: \t\t"<<fees<<" Ugx"<<endl;
		cout<<"Departure time: \t\t"<<12<<":30pm"<<endl;
		cout<<"Arrival time: \t\t\t"<<04<<":15pm"<<endl;
		cout<<"\n\t\tSERVICE DETAILS"<<endl;
		cout<<"--------------------------------------------------------\n";
		cout<<"Serviced by \t\t"<<" Kintu Hussinah"<<endl;
		cout<<"Staff Id\t\t"<<" 10133BAQ"<<endl;
		cout<<"We are pleased you tavelled with us. Hav a safe Journey"<<endl;
		getche();
		
	}
	else{
		fees=other*120;
		cout<<"\n\t\tPassenger's receipt\n";
		cout<<"--------------------------------------------------------\n";
		cout<<"Passenger Name: \t\t"<<name<<endl;
		cout<<"Seat number: \t\t\t"<<120<<endl;
		cout<<"Transport fees: \t\t"<<fees<<" Ugx"<<endl;
		cout<<"Departure time: \t\t"<<12<<":30pm"<<endl;
		cout<<"Arrival time: \t\t\t"<<04<<":15pm"<<endl;
		cout<<"\n\t\tSERVICE DETAILS"<<endl;
		cout<<"--------------------------------------------------------\n";
		cout<<"Serviced by \t\t"<<" Kansiime Julian"<<endl;
		cout<<"Staff Id\t\t"<<" 10135BAQ"<<endl;
		cout<<"We are pleased you tavelled with us. Hav a safe Journey"<<endl;
		getche();
		
	}
}

void Train::Cargo(){
	//cargo handling functions
	cout<<"How much cargo do you have (in kgs)?"<<endl;
	cin>>qty;
	cout<<"\nChoose destination:\n1.Kampala\n2.Malaba\n3.Kasese\n4.Gulu\n5.Nairobi\n6.Gulu\n7.Other\n";
	cin>>destination;
	float rate=18;
	int charge;
	if(destination==1){
		fees=qty*450+(rate*qty);
		charge=rate/100*fees;
		cout<<"\n\t\tCARGO RECEIPT\n";
		cout<<"--------------------------------------------------------\n";
		cout<<"Cargo Type    : \t\t\t"<<"Solid Banded Cargo"<<endl;
		cout<<"Cargo size    : \t\t\t"<<qty<<"kgs"<<endl;
		cout<<"Route         : \t\t\t\tKampala-Mukono Kisasi"<<endl;
		cout<<"Transport fees: \t\t"<<fees<<" Ugx"<<endl;
		cout<<"VAT Tax fees  : \t\t"<<charge<<" Ugx"<<endl;
		cout<<"Departure time: \t\t"<<12<<":30pm"<<endl;
		cout<<"Arrival time  : \t\t\t"<<04<<":15pm"<<endl;
		getche();
		
	}
	else if(destination==2){
		fees=qty*450+(rate*qty);
		charge=rate/100*fees;
		cout<<"\n\t\tCARGO RECEIPT\n";
		cout<<"--------------------------------------------------------\n";
		cout<<"Cargo Type: \t\t\t"<<"Solid Banded Cargo"<<endl;
		cout<<"Cargo size: \t\t\t"<<qty<<"kgs"<<endl;
		cout<<"Route: \t\t\t\tMalaba Arua Main enroute"<<endl;
		cout<<"Transport fees: \t\t"<<fees<<" Ugx"<<endl;
		cout<<"VAT Tax fees  : \t\t"<<charge<<" Ugx"<<endl;
		cout<<"Departure time: \t\t"<<12<<":30pm"<<endl;
		cout<<"Arrival time: \t\t\t"<<04<<":15pm"<<endl;
		getche();
		
	}
	else if(destination==4){
		fees=qty*450+(rate*qty);
		charge=rate/100*fees;
		cout<<"\n\t\tCARGO RECEIPT\n";
		cout<<"--------------------------------------------------------\n";
		cout<<"Cargo Type: \t\t\t"<<"Solid Banded Cargo"<<endl;
		cout<<"Cargo size: \t\t\t"<<qty<<"kgs"<<endl;
		cout<<"Route: \t\t\t\tGulu-Norwa Express"<<endl;
		cout<<"Transport fees: \t\t\t"<<fees<<" Ugx"<<endl;
		cout<<"VAT Tax fees  : \t\t"<<charge<<" Ugx"<<endl;
		cout<<"Departure time: \t\t"<<12<<":30pm"<<endl;
		cout<<"Arrival time: \t\t\t"<<04<<":15pm"<<endl;
		getche();
		
	}
	else if(destination==3){
		fees=qty*450+(rate*qty);
		charge=rate/100*fees;
		cout<<"\n\t\tCARGO RECEIPT\n";
		cout<<"--------------------------------------------------------\n";
		cout<<"Cargo Type: \t\t\t"<<"Solid Banded Cargo"<<endl;
		cout<<"Cargo size: \t\t\t"<<qty<<"kgs"<<endl;
		cout<<"Route: \t\t\t\tKasese-Kiruhura Main entrance"<<endl;
		cout<<"Transport fees: \t\t"<<fees<<" Ugx"<<endl;
		cout<<"VAT Tax fees  : \t\t"<<charge<<" Ugx"<<endl;
		cout<<"Departure time: \t\t"<<12<<":30pm"<<endl;
		cout<<"Arrival time: \t\t\t"<<04<<":15pm"<<endl;
		getche();
		
	}
	else if(destination==5){
		fees=qty*450+(rate*qty);
		charge=rate/100*fees;
		cout<<"\n\t\tCARGO RECEIPT\n";
		cout<<"--------------------------------------------------------\n";
		cout<<"Cargo Type: \t\t\t"<<"Solid Banded Cargo"<<endl;
		cout<<"Cargo size: \t\t\t"<<qty<<"kgs"<<endl;
		cout<<"Route: \t\t\t\tJinja-Nairobi Mombasa Enroute"<<endl;
		cout<<"Transport fees: \t\t"<<fees<<" Ugx"<<endl;
		cout<<"VAT Tax fees  : \t\t"<<charge<<" Ugx"<<endl;
		cout<<"Departure time: \t\t"<<12<<":30pm"<<endl;
		cout<<"Arrival time: \t\t\t"<<04<<":15pm"<<endl;
		getche();
		
	}
	else if(destination==6){
		fees=qty*450+(rate*qty);
		charge=rate/100*fees;
		cout<<"\n\t\tCARGO RECEIPT\n";
		cout<<"--------------------------------------------------------\n";
		cout<<"Cargo Type: \t\t\t"<<"Solid Banded Cargo"<<endl;
		cout<<"Cargo size: \t\t\t"<<qty<<"kgs"<<endl;
		cout<<"Route: \t\t\t\tTororo, Arua main rail"<<endl;
		cout<<"Transport fees: \t\t"<<fees<<" Ugx"<<endl;
		cout<<"VAT Tax fees  : \t\t"<<charge<<" Ugx"<<endl;
		cout<<"Departure time: \t\t"<<12<<":30pm"<<endl;
		cout<<"Arrival time: \t\t\t"<<04<<":15pm"<<endl;
		getche();
		
	}
	else{
		fees=qty*450+(rate*qty);
		charge=rate/100*fees;
		cout<<"\n\t\tCARGO RECEIPT\n";
		cout<<"--------------------------------------------------------\n";
		cout<<"Cargo Type: \t\t\t"<<"Solid Banded Cargo"<<endl;
		cout<<"Cargo size: \t\t\t"<<qty<<"kgs"<<endl;
		cout<<"Route: \t\t\t\tKampala metropolitan route"<<endl;
		cout<<"Transport fees: \t\t"<<fees<<" Ugx"<<endl;
		cout<<"VAT Tax fees  : \t\t"<<charge<<" Ugx"<<endl;
		cout<<"Departure time: \t\t"<<12<<":30pm"<<endl;
		cout<<"Arrival time: \t\t\t"<<04<<":15pm"<<endl;
		getche();
		
	}
	
}
void Train::displayRoutes(){
	//routes handling functions
	cout<<"\n\nTHESE ARE THE ROUTES AND THEIR DISTANCE IN KILOMETERS\nNOTE: We charge transport fares basing on routes and their distance"<<endl;
	cout<<"----------------------------------------------------------------------\n";
	cout<<"1.Kampala-Mukono kisasi"<<endl;
	cout<<"2.Kampala-Malaba"<<endl;
	cout<<"3.Kasese Kiruhura"<<endl;
	cout<<"4.Gulu norwa rail"<<endl;
	cout<<"5.Nairobi Mobasa Jinja"<<endl;
	cout<<"6.Tororo pakwatch"<<endl;
	cout<<"6.Kampala Nambole, Makindye"<<endl;
	cout<<"Please sit and relax. Go to the previous menu to choose your route"<<endl;
	getche();
}
void Train::feesAndTaxes(){
	//fees handling functions
	cout<<"\n\nTAX TYPE\t\t\tVALUE"<<endl;
	cout<<"----------------------------------------------------------------------\n";
	cout<<"VAT\t\t\t\t18%"<<endl;
	cout<<"OBT\t\t\t\t3%"<<endl;
	cout<<"Accomodation\t\t\t2%"<<endl;
	cout<<"Insurance \t\t\t2%"<<endl;

	cout<<"Please sit and relax. Go to the previous menu to choose your route"<<endl;
	getche();
	
}
int main(){
	Train train;
	int choice;
	while(true){
		cout<<"\n===============================================\n";
		cout<<"UGANDA RAILWAY COOPERATION. \nSelect an option\n";
		cout<<"===============================================\n";
		cout<<"\t1. Buy ticket\n";
		cout<<"\t2. Cargo transport\n";
		cout<<"\t3. Calculate fees and Taxes\n";
		cout<<"\t4. All routes\n";
		cout<<"\t5. Exit\n";
		cin>>choice;
		
		switch(choice){
			case 1:
				train.Tickets();
				break;
			case 2:
				train.Cargo();
				break;
			case 3:
				train.feesAndTaxes();
				break;
			case 4:
				train.displayRoutes();
				break;
			case 5:
				exit(1);
				
			deefault:
				cout<<"'\nInvalid option..'n";
		}
		break;			
	}
}
