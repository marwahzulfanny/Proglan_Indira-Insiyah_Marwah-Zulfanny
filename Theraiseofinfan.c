#include <stdlib.h>
#include <stdio.h>
#include <windows.h>

													//* D E C L A R E  G E N E R A L *//

void menu_akhir(), menu_akhir1(), orderhistory();
int terimakasih(order_id,driver_id), terimakasih1(order_id,driver_id), order_id, driver_id;
void menu_awal();
int main();

													//* D E C L A R E  K A N J E K *//

int a, harga, jumlah, total, saldo, kembali, Uang, b, totalsemua=0, n, menu, c;
void Back_kanjek(), totalbill(), bill(), kanjek();
void burgerking(), chatime(), wingstop(), bebekkaleyo(), iamgeprek(), baksoboedjangan();
void ask(), ask1(), ask2(), ask3(), ask4(), ask5();

													//* D E C L A R E  K U Y J E K *//
													
int order(order_id,driver_id), terimakasih(order_id,driver_id), i, j, arr[12][1], harga, angka, t, jam_pilih,jam1[1][4]={11,13,17,21},jam2[1][2]={13,17},jam3[1][4]={12,15,18,21}, b, a, arr1[4][1];
void kuyjek();

													//* D E C L A R E  K E T J E K *//

int bill1(order_id,mall,i,jam_pilih,t,harga), beli(order_id,mall,i,jam_pilih), penvil(order_id,mall), dmall(order_id,mall), detos(order_id,mall), margo(order_id,mall), order1(order_id), terimakasih1(order_id), mall;
void ketjek();


void orderhistory()
{
    FILE *fptr;
    fptr = fopen("history.txt","r");
	fscanf(fptr,"%d", &order_id);
	printf("Anda sudah pernah order %d kali",order_id);
}

void menu_akhir()   //*Modular Menu Akhir*//
{
	FILE *fptr;// variabel pointer
	system("color 6B");
	printf("\nAda Lagi? \n1. Ya \n2. Tidak ");
    printf("\nPilihanmu: ");
    b=0;
    scanf("%d", &b);
    getch();
    		switch(b)
    		{
    			case 1:
    				totalsemua=0;
    				fptr = fopen("history.txt","w");      //*Memasukkan data ke file History.txt*//
                       if(fptr == NULL)                   //*Perintah jika file tidak ada maka akan Error dan Keluar*//
                       {
                          printf("Error!");
                          exit(1);
                          printf("Masukan Uang Anda: ");
                        }
                    order_id=order_id+1;
                    fprintf(fptr,"%d",order_id); // masukin ke file
                    fclose(fptr);
       				driver_id++;
        			menu_awal();
    				break;
    			case 2:
    				menu_awal();
    				break;
    			default:
            	printf("Maaf, Lagu yang anda pilih tidak ada didalam menu..!! Silahkan Coba lagi :)\n");
           		system("pause");
           		getchar();
           		system("cls");
           }
}

void menu_akhir1()
{
	system("color 6B");
	printf("\nAda Lagi? \n1. Ya \n2. Tidak ");
    		printf("\nPilihanmu: ");
    		b=0;
    		scanf("%d", &b);
    		switch(b)
    		{
    			case 1:
    				order_id++;
       				driver_id++;
        			order1(order_id,driver_id);
    				break;
    			case 2:
    				menu_awal();
    				break;
    			case 3:
    				about();
    				break;
    			default:
            	printf("Maaf, Lagu yang anda pilih tidak ada didalam menu..!! Silahkan Coba lagi :)\n");
           		system("pause");
           		getchar();
           		system("cls");
           }
           system("pause");
}

int terimakasih(order_id,driver_id)   //*Modular Tampilan Akhir*//
{
	system("color 5F");
	menu_akhir();
	terimakasih(order_id,driver_id);		
}

int terimakasih1(order_id)
{
	system("color 5F");
	menu_akhir1();
	terimakasih1(order_id);		
}

                                                        //* F U N G S I  K A N J E K *//
                                                           
void Back_kanjek()   //*Menu Sebelum Memesan Makanan*//
{
	FILE *fptr;
	printf("\n\t\t\t 1. Mulai Pilih\n\t\t\t 2. Kembali kemenu sebelumnya\n");
	printf("\n\t\t\tPilihan anda: ");
	n=0;
	scanf("%d",&n);
	getchar();
			switch(n)
			{
				case 1:
					system("cls");
					fptr = fopen("history.txt","r");
                    fscanf(fptr,"%d", &order_id);
                    printf("order ke:%d",order_id);
					break;
				case 2:
					system("cls");
					kanjek();
				default:
            		printf("Maaf, Pilihan anda tidak tersedia..!! Silahkan Coba lagi :)\n");
           			system("pause");
           			getchar();
           			system ("cls");
           			Back_kanjek();
			}
}

void ask()   //*Modular Pesan Lagi*//
{
	printf("\nAda Lagi? \n1. Ya \n2. Bayar ");
    		printf("\nPilihanmu: ");
    		b=0;
    		scanf("%d", &b);
    		switch(b)
    		{
    			case 1:
    				system("cls");
    				burgerking();   //*Menu Makanan Restoran*//
    				break;	
    			case 2:
    				system("cls");
    				totalbill();    //*Modular Pembayaran*//
    				break;	
    			default:
            	printf("Maaf, Lagu yang anda pilih tidak ada didalam menu..!! Silahkan Coba lagi :)\n");
           		system("pause");
           		getchar();
           		system("cls");
				return ask();		
			}
}

void ask1()
{
	printf("\nAda Lagi? \n1. Ya \n2. Bayar ");
    		printf("\nPilihanmu: ");
    		b=0;
    		scanf("%d", &b);
    		switch(b)
    		{
    			case 1:
    				system("cls");
    				chatime();
    				break;	
    			case 2:
    				system("cls");
    				totalbill();
    				break;	
    			default:
            	printf("Maaf, Lagu yang anda pilih tidak ada didalam menu..!! Silahkan Coba lagi :)\n");
           		system("pause");
           		getchar();
           		system("cls");
				return ask1();		
			}
}

void ask2()
{
	printf("\nAda Lagi? \n1. Ya \n2. Bayar ");
    		printf("\nPilihanmu: ");
    		b=0;
    		scanf("%d", &b);
    		switch(b)
    		{
    			case 1:
    				system("cls");
    				wingstop();
    				break;
    				
    			case 2:
    				system("cls");
    				totalbill();
    				break;
    				
    			default:
            	printf("Maaf, Lagu yang anda pilih tidak ada didalam menu..!! Silahkan Coba lagi :)\n");
           		system("pause");
           		getchar();
           		system("cls");
				return ask2();		
			}
}

void ask3()
{
	printf("\nAda Lagi? \n1. Ya \n2. Bayar ");
    		printf("\nPilihanmu: ");
    		b=0;
    		scanf("%d", &b);
    		switch(b)
    		{
    			case 1:
    				system("cls");
    				bebekkaleyo();
    				break;
    			case 2:
    				system("cls");
    				totalbill();
    				break;
    			default:
            	printf("Maaf, Lagu yang anda pilih tidak ada didalam menu..!! Silahkan Coba lagi :)\n");
           		system("pause");
           		getchar();
           		system("cls");
				return ask3();		
			}
}

void ask4()
{
	printf("\nAda Lagi? \n1. Ya \n2. Bayar ");
    		printf("\nPilihanmu: ");
    		b=0;
    		scanf("%d", &b);
    		switch(b)
    		{
    			case 1:
    				system("cls");
    				iamgeprek();
    				break;
    			case 2:
    				system("cls");
    				totalbill();
    				break;
    			default:
            	printf("Maaf, Lagu yang anda pilih tidak ada didalam menu..!! Silahkan Coba lagi :)\n");
           		system("pause");
           		getchar();
           		system("cls");
				return ask4();		
			}
}

void ask5()
{
	printf("\nAda Lagi? \n1. Ya \n2. Bayar ");
    		printf("\nPilihanmu: ");
    		b=0;
    		scanf("%d", &b);
    		switch(b)
    		{
    			case 1:
    				system("cls");
    				baksoboedjangan();
    				break;
    			case 2:
    				system("cls");
    				totalbill();
    				break;
    			default:
            	printf("Maaf, Lagu yang anda pilih tidak ada didalam menu..!! Silahkan Coba lagi :)\n");
           		system("pause");
           		getchar();
           		system("cls");
				return ask5();		
			}
}

void bill()    //*Modular Pembelian*//
{
			printf("\nMasukkan Jumlah: ");
    		jumlah=0;
    		scanf("%d", &jumlah);
    		total = harga*jumlah;
    		totalsemua=totalsemua+total;
    		printf("\nTotal Harga orderan: Rp. %d", total);
    		printf("\nTotal Harga: Rp. %d", totalsemua);  		
}

void totalbill()   //*Modular Pembayaran*//
{
	FILE *fptr;                                                   //*variabel pointer*//
	printf("\nTotal Harga: Rp. %d\n", totalsemua);
	fptr = fopen("orderhistory.txt","r");                         //*Membaca data dari file OrderHistory.txt*//
	fscanf(fptr,"%d", &saldo);
	printf("Saldo:%d",saldo);
	if(saldo!=totalsemua){
	printf("\nMasukkan Jumlah Uang Anda: Rp.");
    fptr = fopen("orderhistory.txt","w");                         //*Memasukkan data ke file OrderHistory.txt*//

       if(fptr == NULL)                                           //*Perintah jika file tidak ada maka akan Error dan Keluar*//
       {
          printf("Error!");
          exit(1);
          printf("Masukan Uang Anda: ");                          //*User Memasukkan Jumlah Uang*//
       }
   scanf("%d",&Uang);
   saldo=saldo+Uang;
   fprintf(fptr,"%d",saldo);                                      //*Masukkan User disimpan dalam File txt.*//
   fclose(fptr);}// nutup file
   if ((fptr = fopen("orderhistory.txt","r")) == NULL){
       printf("Error! opening file");

       exit(1);
   }

   fscanf(fptr,"%d", &saldo);                                     //*Perintah Menscan isi file*//

   printf("Hasil=%d",saldo);                                      //*Perintah Menampilkan isi file*//
   fclose(fptr);                                                  //*Perintah Menutup file*//
   kembali = saldo-totalsemua;
    printf("\nSisa Saldo: Rp. %d", kembali);
    saldo=kembali;
    fptr = fopen("orderhistory.txt","w");
    fprintf(fptr,"%d",saldo);
    printf("\n\n\n\n\t\t\t\t  T E R I M A   K A S I H\n\t\t\tT E L A H  M E N G G U N A K A N  K A N J E K\n\n\n\n");
    menu_akhir();                                                 //*Tampilan Menu Service*//		
}

void burgerking()   //*Menu Makanan Restoran*//
{
			printf("\t\t\t\t===================\n");
			printf("\t\t\t\t     \n");
			printf("\t\t\t\tB U R G E R  K I N G\n");   //*Restoran*//
			printf("\t\t\t\t     \n");
			printf("\t\t\t\t===================\n");  
			
			printf("\t\t\t--------------------------------------------------------------\n");    //*Menu Restoran*//
			printf("\t\t\t|  N O  |             M E N U               |    H A R G A   |\n");
			printf("\t\t\t--------------------------------------------------------------\n");
			printf("\t\t\t|   1   | Whopper Meal Large                | 62.000         |\n");
			printf("\t\t\t|   2   | BBQ Steakhouse Beef Meal Large    | 73.000         |\n");
			printf("\t\t\t|   3   | Quattro Cheese Whopper Meal Large | 73.000         |\n");
			printf("\t\t\t|   4   | Cheeseburger XL Meal Large        | 62.000         |\n");
			printf("\t\t\t|   5   | Mushroom Swiss XL Meal Large      | 69.000         |\n");
			printf("\t\t\t|   6   | Chicken Tendercrisp Meal Large    | 51.000         |\n");	 
			printf("\t\t\t|   7   | Steakhouse Tendercrisp Meal Large | 68.000         |\n");
			printf("\t\t\t|   8   | Fish Fillet Burger Meal Large     | 43.000         |\n");
			printf("\t\t\t|   9   | 1 Pc Ayam Meal Medium             | 31.000         |\n");   
			printf("\t\t\t--------------------------------------------------------------\n");
			printf("\n");
			printf("\nKet : Pilih 10, untuk kembali ke menu sebelumnya.");
			
			int array_harga []={0, 62000, 73000, 73000, 62000, 69000, 51000, 68000, 43000, 31000};   //*Array Harga Menu*//
			printf("\nPilihan anda: ");
    		a=0;
    		scanf("%d", &a);
   	
    	switch(a)
    {
    	case 1:
    		printf("\nWhopper Meal Large");    //*Menu Pilihan*//
    		harga=array_harga[a];              //*Pengambilan Harga Menu dari Array*//
    		bill();                            //*Modular Pembelian*//
    		ask();                             //*Modular Pesan Lagi*//
    		break;
    	case 2:
    		printf("\nBBQ Steakhouse Beef Meal Large");
    		harga=array_harga[a];
    		bill();
    		ask();
    		break;
    	case 3:
    		printf("\nQuattro Cheese Whopper Meal Large");
    		harga=array_harga[a];
    		bill();
    		ask();
    		break;	
    	case 4:
    		printf("\nCheeseburger XL Meal Large");
    		harga=array_harga[a];
    		bill();
    		ask();
    		break;
    	case 5:
    		printf("\nMushroom Swiss XL Meal Large");
    		harga=array_harga[a];
    		bill();
    		ask();
    		break;	
    	case 6:
    		printf("\nChicken Tendercrisp Meal Large");
    		harga=array_harga[a];
    		bill();
    		ask();
    		break;	
    	case 7:
    		printf("\nSteakhouse Tendercrisp Meal Large");
    		harga=array_harga[a];
    		bill();
    		ask();
    		break;
    	case 8:
    		printf("\n1 Pc Ayam Meal Medium");
    		harga=array_harga[a];
    		bill();
    		ask();
    		break;
    	case 9:
    		printf("\nFish Fillet Burger Meal Large");
    		harga=array_harga[a];;
    		bill();
    		ask();
    		break;
    	case 10:
    		system("cls");
    		kanjek();
    		break;	
    	default:
            printf("Maaf, Menu yang anda pilih tidak tersedia..!! Silahkan Coba lagi :)\n");
           	system("pause");
           	getchar();
           	system("cls");
			return burgerking();
	}
}

void chatime()
{
			printf("\t\t\t\t===================\n");
			printf("\t\t\t\t     \n");
			printf("\t\t\t\tC H A T I M E\n");
			printf("\t\t\t\t     \n");
			printf("\t\t\t\t===================\n");  
			
			printf("\t\t\t--------------------------------------------------------------\n");
			printf("\t\t\t|  N O  |             M E N U               |    H A R G A   |\n");
			printf("\t\t\t--------------------------------------------------------------\n");
			printf("\t\t\t|   1   | Roasted Milk Tea (R)              | 21.000         |\n");
			printf("\t\t\t|   2   | Genmaicha Green Milk Tea (R)      | 21.000         |\n");
			printf("\t\t\t|   3   | Oolong Milk Tea (R)               | 21.000         |\n");
			printf("\t\t\t|   4   | Taiwan Mango Juice QQ (R)         | 26.000         |\n");
			printf("\t\t\t|   5   | Passiom Fruit Juice QQ (R)        | 26.000         |\n");
			printf("\t\t\t|   6   | Grapefruit Juice QQ (R)           | 26.000         |\n");	 
			printf("\t\t\t|   7   | QQ Milk Tea                       | 26.000         |\n");
			printf("\t\t\t|   8   | Mango Smoothie (R)                | 24.000         |\n");
			printf("\t\t\t|   9   | Strawberry Smoothie (R)           | 24.000         |\n");   
			printf("\t\t\t--------------------------------------------------------------\n");
			printf("\n");
			printf("\nKet : Pilih 10, untuk kembali ke menu sebelumnya.");
			
			int array_harga []={0, 21000, 21000, 21000, 26000, 26000, 26000, 26000, 24000, 24000};
			printf("\nPilihan anda: ");
    		a=0;
    		scanf("%d", &a);
    	
    	switch(a)
    {
    	case 1:
    		printf("\nRoasted Milk Tea (R)");
    		harga=array_harga[a];
    		bill();
    		ask1();
    		break;
    	case 2:
    		printf("\nGenmaicha Green Milk Tea (R)");
    		harga=array_harga[a];
    		bill();
    		ask1();
    		break;
    	case 3:
    		printf("\nOolong Milk Tea (R)");
    		harga=array_harga[a];
    		bill();
    		ask1();
    		break;
    	case 4:
    		printf("\nTaiwan Mango Juice QQ (R)");
    		harga=array_harga[a];
    		bill();
    		ask1();
    		break;
    	case 5:
    		printf("\nPassiom Fruit Juice QQ (R)");
    		harga=array_harga[a];
    		bill();
    		ask1();
    		break;
    	case 6:
    		printf("\nGrapefruit Juice QQ (R)");
    		harga=array_harga[a];
    		bill();
    		ask1();
    		break;
    	case 7:
    		printf("\nQQ Milk Tea ");
    		harga=array_harga[a];
    		bill();
    		ask1();
    		break;
    	case 8:
    		printf("\nMango Smoothie (R)");
    		harga=array_harga[a];
    		bill();
    		break;
    	case 9:
    		printf("\nStrawberry Smoothie (R)");
    		harga=array_harga[a];
    		bill();
    		ask1();
    		break;
		case 10:
			kanjek();
			break;	
    	default:
            printf("Maaf, Menu yang anda pilih tidak tersedia..!! Silahkan Coba lagi :)\n");
           	system("pause");
           	getchar();
           	system("cls");
			return chatime();
	}
}

void wingstop()
{	
			printf("\t\t\t\t===================\n");
			printf("\t\t\t\t     \n");
			printf("\t\t\t\tW I N G S T O P\n");
			printf("\t\t\t\t     \n");
			printf("\t\t\t\t===================\n");  
			printf("\t\t\t--------------------------------------------------------------\n");
			printf("\t\t\t|  N O  |             M E N U               |    H A R G A   |\n");
			printf("\t\t\t--------------------------------------------------------------\n");
			printf("\t\t\t|   1   | Crunchy Wings 5 Pcs               | 44.000         |\n");
			printf("\t\t\t|   2   | Classic Wings 5 Pcs               | 40.000         |\n");
			printf("\t\t\t|   3   | Boneless Wings 5 Pcs              | 40.000         |\n");
			printf("\t\t\t|   4   | Drumsticks 2 Pcs                  | 38.000         |\n");
			printf("\t\t\t|   5   | Boneless Strips 3 Pcs             | 38.000         |\n");
			printf("\t\t\t|   6   | Chicken Strip Roll                | 35.000         |\n");	 
			printf("\t\t\t|   7   | Tea Shake                         | 21.000         |\n");
			printf("\t\t\t|   8   | Soft Drinks Medium                | 17.000         |\n");
			printf("\t\t\t|   9   | Soft Drinks Large                 | 20.000         |\n");   
			printf("\t\t\t--------------------------------------------------------------\n");
			printf("\n");
			printf("\nKet : Pilih 10, untuk kembali ke menu sebelumnya.");
			
			int array_harga []={0, 44000, 40000, 40000, 38000, 38000, 35000, 21000, 17000, 20000};
			printf("\nPilihan anda: ");
    		a=0;
    		scanf("%d", &a);
    	
    	switch(a)
    {
    	case 1:
    		printf("\nCrunchy Wings 5 Pcs");
    		harga=array_harga[a];
    		bill();
    		ask2();
    		break;
    	case 2:
    		printf("\nClassic Wings 5 Pcs");
    		harga=array_harga[a];
    		bill();
    		ask2();
    		break;
    	case 3:
    		printf("\nBoneless Wings 5 Pcs");
    		harga=array_harga[a];
    		bill();
    		ask2();
    		break;
    	case 4:
    		printf("\nDrumsticks 2 Pcs");
    		harga=array_harga[a];
    		bill();
    		ask2();
    		break;
    	case 5:
    		printf("\nBoneless Strips 3 Pcs");
    		harga=array_harga[a];
    		bill();
    		ask2();
    		break;
    	case 6:
    		printf("\nChicken Strip Roll");
    		harga=array_harga[a];
    		bill();
    		ask2();
    		break;
    	case 7:
    		printf("\nTea Shake ");
    		harga=array_harga[a];
    		bill();
    		ask2();
    		break;
    	case 8:
    		printf("\nSoft Drinks Medium");
    		harga=array_harga[a];
    		bill();
    		ask2();
    		break;
    	case 9:
    		printf("\nSoft Drinks Large");
    		harga=array_harga[a];
    		bill();
    		ask2();
    		break;
    	case 10:
    		kanjek();
    		break;
    	default:
            printf("Maaf, Menu yang anda pilih tidak tersedia..!! Silahkan Coba lagi :)\n");
           	system("pause");
           	getchar();
           	system("cls");
			return wingstop();
	}
}

void bebekkaleyo()
{	
			printf("\t\t\t\t======================\n");
			printf("\t\t\t\t     \n");
			printf("\t\t\t\tB E B E K  K A L E Y O\n");
			printf("\t\t\t\t     \n");
			printf("\t\t\t\t======================\n");  
			
			printf("\t\t\t--------------------------------------------------------------\n");
			printf("\t\t\t|  N O  |             M E N U               |    H A R G A   |\n");
			printf("\t\t\t--------------------------------------------------------------\n");
			printf("\t\t\t|   1   | Bebek Muda 1/2 Ekor Goreng        | 32.000         |\n");
			printf("\t\t\t|   2   | Bebek Muda 1/2 Ekor Cabe Ijo      | 32.000         |\n");
			printf("\t\t\t|   3   | Bebek Muda 1/2 Ekor Cetar Madura  | 34.000         |\n");
			printf("\t\t\t|   4   | Bebek Muda 1/2 Ekor Rica          | 34.000         |\n");
			printf("\t\t\t|   5   | Ayam Negeri Goreng (Paha/Dada)    | 19.000         |\n");   
			printf("\t\t\t--------------------------------------------------------------\n");
			printf("\n");
			printf("\nKet : Pilih 6, untuk kembali ke menu sebelumnya.");
			
			int array_harga []={0, 32000, 32000, 34000, 34000, 19000};
			printf("\nPilihan anda: ");
    		a=0;
    		scanf("%d", &a);
    	
    	switch(a)
    {
    	case 1:
    		printf("\nBebek Muda 1/2 Ekor Goreng");
    		harga=array_harga[a];
    		bill();
    		ask3();
    		break;
    	case 2:
    		printf("\nBebek Muda 1/2 Ekor Cabe Ijo");
    		harga=array_harga[a];
    		bill();
    		ask3();
    		break;
    	case 3:
    		printf("\nBebek Muda 1/2 Ekor Cetar Madura");
    		harga=array_harga[a];
    		bill();
    		ask3();
    		break;
    	case 4:
    		printf("\nBebek Muda 1/2 Ekor Rica");
    		harga=array_harga[a];
    		bill();
    		ask3();
    		break;
    	case 5:
    		printf("\nAyam Negeri Goreng (Paha/Dada)");
    		harga=array_harga[a];
    		bill();
    		ask3();
    		break;
    	case 6:
    		kanjek();
    		break;
    	default:
            printf("Maaf, Menu yang anda pilih tidak tersedia..!! Silahkan Coba lagi :)\n");
           	system("pause");
           	getchar();
           	system("cls");
			return bebekkaleyo();
	}
}
	
void iamgeprek()	
{
	play_5:		
			printf("\t\t\t\t===================\n");
			printf("\t\t\t\t     \n");
			printf("\t\t\t\tI  A M  G E P R E K\n");
			printf("\t\t\t\t     \n");
			printf("\t\t\t\t===================\n");  
			
			printf("\t\t\t--------------------------------------------------------------\n");
			printf("\t\t\t|  N O  |             M E N U               |    H A R G A   |\n");
			printf("\t\t\t--------------------------------------------------------------\n");
			printf("\t\t\t|   1   | Paket Ayam Geprek Leleh           | 31.000         |\n");
			printf("\t\t\t|   2   | Paket Ayam Geprek                 | 19.000         |\n");
			printf("\t\t\t|   3   | Paket Ayam Geprek Keju            | 25.000         |\n");
			printf("\t\t\t|   4   | Paket Ayam Geprek Telor Asin      | 25.000         |\n");
			printf("\t\t\t|   5   | Paket Indomie Geprek Telor Asin   | 27.000         |\n");
			printf("\t\t\t|   6   | Paket Indomie Geprek Sambel Matah | 21.000         |\n");	 
			printf("\t\t\t|   7   | Paket Indomie Geprek Leleh        | 33.000         |\n");
			printf("\t\t\t|   8   | Paket Indomie Geprek Sambel Teri  | 27.000         |\n");
			printf("\t\t\t|   9   | Paket Ayam Geprek Sambel Matah    | 19.000         |\n");   
			printf("\t\t\t--------------------------------------------------------------\n");
			printf("\n");
			printf("\nKet : Pilih 10, untuk kembali ke menu sebelumnya.");
			
			int array_harga []={0, 31000, 19000, 25000, 25000, 27000, 21000, 33000, 27000, 19000};
			printf("\nPilihan anda: ");
    		a=0;
    		scanf("%d", &a);
    	
    	switch(a)
    {
    	case 1:
    		printf("\nPaket Ayam Geprek Leleh");
    		harga=array_harga[a];
    		bill();
    		ask4();
    		break;
    	case 2:
    		printf("\nPaket Ayam Geprek");
    		harga=array_harga[a];
    		bill();
    		ask4();
    		break;
    	case 3:
    		printf("\nPaket Ayam Geprek Keju");
    		harga=array_harga[a];
    		bill();
    		ask4();
    		break;
    	case 4:
    		printf("\nPaket Ayam Geprek Telor Asin");
    		harga=array_harga[a];
    		bill();
    		ask4();
    		break;
    	case 5:
    		printf("\nPaket Indomie Geprek Telor Asin");
    		harga=array_harga[a];
    		bill();
    		ask4();
    		break;
    	case 6:
    		printf("\nPaket Indomie Geprek Sambel Matah");
    		harga=array_harga[a];
    		bill();
    		ask4();
    		break;
    	case 7:
    		printf("\nPaket Indomie Geprek Leleh ");
    		harga=array_harga[a];
    		bill();
    		ask4();
    		break;
    	case 8:
    		printf("\nPaket Indomie Geprek Sambel Teri");
    		harga=array_harga[a];
    		bill();
    		ask4();
    		break;
    	case 9:
    		printf("\nPaket Ayam Geprek Sambel Matah");
    		harga=array_harga[a];
    		bill();
    		ask4();
    		break;
    	case 10:
    		kanjek();
    		break;
    	default:
            printf("Maaf, Menu yang anda pilih tidak tersedia..!! Silahkan Coba lagi :)\n");
           	system("pause");
           	getchar();
           	system("cls");
			return iamgeprek();
	}
}

void baksoboedjangan()
{
	play_6:		
			printf("\t\t\t\t==============================\n");
			printf("\t\t\t\t     \n");
			printf("\t\t\t\tB A K S O  B O E D J A N G A N\n");
			printf("\t\t\t\t     \n");
			printf("\t\t\t\t==============================\n");  
			
			printf("\t\t\t-------------------------------------------\n");
			printf("\t\t\t|  N O  |    M E N U     |    H A R G A   |\n");
			printf("\t\t\t-------------------------------------------\n");
			printf("\t\t\t|   1   | Bakso Original | 10.000         |\n");
			printf("\t\t\t|   2   | Bakso Urat     | 12.000         |\n");
			printf("\t\t\t|   3   | Bakso Keju     | 15.000         |\n");
			printf("\t\t\t|   4   | Mie Yamin      | 13.000         |\n");
			printf("\t\t\t|   5   | Mie Yamin+Baso | 15.000         |\n");
			printf("\t\t\t|   6   | Teh Panas      | 2.000          |\n");	 
			printf("\t\t\t|   7   | Es Teh         | 3.000          |\n");   
			printf("\t\t\t-------------------------------------------\n");
			printf("\n");
			printf("\nKet : Pilih 8, untuk kembali ke menu sebelumnya.");
			
			int array_harga []={0, 10000, 12000, 15000, 13000, 15000, 2000, 3000};
			printf("\nPilihan anda: ");
    		a=0;
    		scanf("%d", &a);
    	
    	switch(a)
    {
    	case 1:
    		printf("\nBakso Original");
    		harga=array_harga[a];
    		bill();
    		ask5();
    		break;
    	case 2:
    		printf("\nBakso Urat");
    		harga=array_harga[a];
    		bill();
    		ask5();
    		break;
    	case 3:
    		printf("\nBakso Keju");
    		harga=array_harga[a];
    		bill();
    		ask5();
    		break;
    	case 4:
    		printf("\nMie Yamin");
    		harga=array_harga[a];
    		bill();
    		ask5();
    		break;
    	case 5:
    		printf("\nMie Yamin+Baso");
    		harga=array_harga[a];
    		bill();
    		ask5();
    		break;
    	case 6:
    		printf("\nTeh Panas");
    		harga=array_harga[a];
    		bill();
    		ask5();
    		break;
    	case 7:
    		printf("\nEs Teh ");
    		harga=array_harga[a];
    		bill();
    		ask5();
    		break;
    	case 8:
    		kanjek();
    		break;
    	default:
            printf("Maaf, Menu yang anda pilih tidak tersedia..!! Silahkan Coba lagi :)\n");
           	system("pause");
           	getchar();
           	system("cls");
			return baksoboedjangan();
	}
}

void kanjek()   //*Modular Fitur*//
{
	system("color 7C");                                                               //*Perintah Warna Background Program*//
	printf("\n\n\n");
    printf("\t\t\t========================================================\n");
    printf("\t\t\t\t\tSELAMAT DATANG DI KANJEK\n");                                   //*Judul Fitur*//
    printf("\t\t\t========================================================\n\n\n");
    printf("\nM E N U : \n");
    printf("1. Burger King\n");
    printf("2. Chatime\n");
    printf("3. Wingstop\n");
    printf("4. Bebek Kaleyo\n");
    printf("5. Iam Geprek\n");
    printf("6. Bakso Boedjangan\n");
    printf("7. Kembali kemenu sebleumnya\n");                                          //*Perintah Kembali ke Menu Utama*//
    printf("Silakan pilih lagu yang disukai :");                                       //*User Menginput Pilihan*//
    menu=0;                                                                            //*Return*//
    scanf("%d",&menu);
    printf("\n");
    system("cls");                                                                     //*Perintah Menghapus Tampilan Sebelumnya pada Layar*//
    
     switch (menu)
	{
           case 1 :
           			Back_kanjek();                                                     //*Menu Sebelum Memesan Makanan*//
           			burgerking();                                                      //*Menu Makanan Restoran*//
           			break;
			case 2 :
					Back_kanjek();
					chatime();
					break;
			case 3 :
					Back_kanjek();
					wingstop();
					break;
			case 4 :
					Back_kanjek();
					bebekkaleyo();
					break;
			case 5 :
					Back_kanjek();
					iamgeprek();
					break;
			case 6 :
					Back_kanjek();
					baksoboedjangan();
					break;
			case 7 :
					system("cls");
					menu_awal();
					break;
			default:
            		printf("Maaf, Restoran yang anda pilih tidak ada didalam menu..!! Silahkan Coba lagi :)\n");   //*Keterangan Error*//
           			system("pause");
           			getchar();                                                                                     //*Error Handling Huruf*//
           			system("cls");
           			kanjek();
	}
}
												
														//* F U N G S I  K U Y J E K *//			

int order(order_id,driver_id)   //*Modular Order Jarak*//
{
    printf("\n\n\tTITIK ANTAR-JEMPUT\n");
    printf("\t  0        1        2        3       4       5       6        7        8       9      10     11\n");
    printf("\t _x________x________x________x_______x_______x_______x________x________x_______x_______x______x_\n");
    printf("\t FT    Vokasi   Pusgiwa    FMIPA    FIK     FKM      RIK   Balairung    FH    FPsi    FIB     FE \n");        //*Tampilan Pilihan Jarak Order*//
    printf("\t|                       |                        |                          |                    |\n");
    printf("\t|       ZONA 1          |          ZONA 2        |           ZONA 3         |         ZONA 4     |\n\n\n");
    printf("\t==================================================================================================\t\n\n");
    int i,j,arr[12][1];
    printf("\tPilih nomor titik penjemputan:");                                      //*User Input Lokasi Jemput*//
    scanf("%d",&i);
    if (i==0||i==1||i==2)
    {
        arr[i][0]=1;
    }
    else if (i==3||i==4||i==5)
    {
        arr[i][0]=2;
    }
    else if (i==6||i==7||i==8)
    {
        arr[i][0]=3;
    }
    else if (i==9||i==10||i==11)
    {
        arr[i][0]=4;
    }
    else
    {
        system("cls");
        printf("\t\t\tNOMOR YANG ANDA MASUKKAN TIDAK TERDAFTAR. COBA LAGI!\n\n\n");   //*Keterangan Error*//
        order(order_id,driver_id);                                                    //*Pilih Order Jarak*//
    }
    printf("\tPilih nomor titik tujuan:");                                            //*User Input Lokasi Tujuan*//
    scanf("%d",&j);
    if (j==0||j==1||j==2)
    {
        arr[j][0]=1;
    }
    else if (j==3||j==4||j==5)
    {
        arr[j][0]=2;
    }
    else if (j==6||j==7||j==8)
    {
        arr[j][0]=3;
    }
    else if (j==9||j==10||j==11)
    {
        arr[j][0]=4;
    }
    else
    {
        system("cls");
        printf("\t\t\tNOMOR YANG ANDA MASUKKAN TIDAK TERDAFTAR\n\t\t\t\t COBA LAGI.\n\n\n");   //*Keterangan Error*//
        order(order_id,driver_id);                                                             //*Pilih Order Jarak*//
    }
    int harga;
    if (arr[i][0]>arr[j][0])
    {
        harga=(arr[i][0]-arr[j][0])*3000;
    }
    else  if (arr[j][0]>arr[i][0])
    {
        harga=(arr[j][0]-arr[i][0])*3000;
    }
    else
    {
        harga=2000;
    }
    system("cls");                                                                              //*Perintah Menghapus Tampilan Sebelumnya pada Layar*//
    char f0[17]={"Fakultas Teknik"};
    char f1[7]={"Vokasi"};
    char f2[8]={"Pusgiwa"};
    char f3[15]={"Fakultas MIPA"};
    char f4[27]={"Fakultas Ilmu Keperawatan"};
    char f5[31]={"Fakultas Kesehatan Masyarakat"};
    char f6[4]={"RIK"};
    char f7[10]={"Balairung"};
    char f8[16]={"Fakultas Hukum"};
    char f9[20]={"FakultasPsikologi"};
    char f10[22]={"Fakultas Ilmu Budaya"};
    char f11[18]={"Fakultas Ekonomi"};
    printf("\t\t\t========================================================================================\n");
    printf("\t\t\t|\t\t\t\tOrder and Payment Details\t\t               |\n");                                       //*Bill Pemesanan*//
    printf("\t\t\t|\t\t\t\t      K U Y J E K\t\t\t               |\n");
    printf("\t\t\t|______________________________________________________________________________________|\n");
    printf("\t\t\t|%-30s    \t%-11d%|%-34s |\n", "Order ID",order_id,"","","");
    printf("\t\t\t|%-30s    \t%-11d%|%-34s |\n", "Driver ID number",driver_id,"","","");
    if(i==0){printf("\t\t\t|%-30s    \t%-5s%d     |%-35s|\n", "Tempat Penjemputan","Zona",arr[i][0],f0);}
    else if(i==1){printf("\t\t\t|%-30s    \t%-5s%d     |%-35s|\n", "Tempat Penjemputan","Zona",arr[i][0],f1);}
    else if(i==2){printf("\t\t\t|%-30s    \t%-5s%d     |%-35s|\n", "Tempat Penjemputan","Zona",arr[i][0],f2);}
    else if(i==3){printf("\t\t\t|%-30s    \t%-5s%d     |%-35s|\n", "Tempat Penjemputan","Zona",arr[i][0],f3);}
    else if(i==4){printf("\t\t\t|%-30s    \t%-5s%d     |%-35s|\n", "Tempat Penjemputan","Zona",arr[i][0],f4);}
    else if(i==5){printf("\t\t\t|%-30s    \t%-5s%d     |%-35s|\n", "Tempat Penjemputan","Zona",arr[i][0],f5);}
    else if(i==6){printf("\t\t\t|%-30s    \t%-5s%d     |%-35s|\n", "Tempat Penjemputan","Zona",arr[i][0],f6);}
    else if(i==7){printf("\t\t\t|%-30s    \t%-5s%d     |%-35s|\n", "Tempat Penjemputan","Zona",arr[i][0],f7);}
    else if(i==8){printf("\t\t\t|%-30s    \t%-5s%d     |%-35s|\n", "Tempat Penjemputan","Zona",arr[i][0],f8);}
    else if(i==9){printf("\t\t\t|%-30s    \t%-5s%d     |%-35s|\n", "Tempat Penjemputan","Zona",arr[i][0],f9);}
    else if(i==10){printf("\t\t\t|%-30s    \t%-5s%d     |%-35s|\n", "Tempat Penjemputan","Zona",arr[i][0],f10);}
    else if(i==11){printf("\t\t\t|%-30s    \t%-5s%d     |%-35s|\n", "Tempat Penjemputan","Zona",arr[i][0],f11);}
    if(j==0){printf("\t\t\t|%-30s    \t%-5s%d     |%-35s|\n", "Tempat Tujuan", "Zona",arr[j][0],f0);}
    else if(j==1){printf("\t\t\t|%-30s    \t%-5s%d     |%-35s|\n", "Tempat Tujuan", "Zona",arr[j][0],f1);}
    else if(j==2){printf("\t\t\t|%-30s    \t%-5s%d     |%-35s|\n", "Tempat Tujuan", "Zona",arr[j][0],f2);}
    else if(j==3){printf("\t\t\t|%-30s    \t%-5s%d     |%-35s|\n", "Tempat Tujuan", "Zona",arr[j][0],f3);}
    else if(j==4){printf("\t\t\t|%-30s    \t%-5s%d     |%-35s|\n", "Tempat Tujuan", "Zona",arr[j][0],f4);}
    else if(j==5){printf("\t\t\t|%-30s    \t%-5s%d     |%-35s|\n", "Tempat Tujuan", "Zona",arr[j][0],f5);}
    else if(j==6){printf("\t\t\t|%-30s    \t%-5s%d     |%-35s|\n", "Tempat Tujuan", "Zona",arr[j][0],f6);}
    else if(j==7){printf("\t\t\t|%-30s    \t%-5s%d     |%-35s|\n", "Tempat Tujuan", "Zona",arr[j][0],f7);}
    else if(j==8){printf("\t\t\t|%-30s    \t%-5s%d     |%-35s|\n", "Tempat Tujuan", "Zona",arr[j][0],f8);}
    else if(j==9){printf("\t\t\t|%-30s    \t%-5s%d     |%-35s|\n", "Tempat Tujuan", "Zona",arr[j][0],f9);}
    else if(j==10){printf("\t\t\t|%-30s    \t%-5s%d     |%-35s|\n", "Tempat Tujuan", "Zona",arr[j][0],f10);}
    else if(j==11){printf("\t\t\t|%-30s    \t%-5s%d     |%-35s|\n", "Tempat Tujuan", "Zona",arr[j][0],f11);}
    printf("\t\t\t----------------------------------------------------------------------------------------\n");
    printf("\t\t\t|%-30s    \t%-27d%-18s  |\n", "Total Pembayaran",harga,"");
    printf("\t\t\t----------------------------------------------------------------------------------------\n");
    system("pause");
    system("cls");
    printf("\n\n\n\n\t\t\t\t  T E R I M A   K A S I H\n\t\t\tT E L A H  M E N G G U N A K A N  K U Y J E K\n\n\n\n");
    return terimakasih(order_id,driver_id);                                                                              //*Modular Tampilan Akhir*//
}

void kuyjek()   //*Modular Fitur*//
{
	FILE *fptr;                                                                            //*variabel pointer*//
	system("color 4A");                                                                    //*Perintah Warna Background Program*//
    printf("\n\n\n");
    printf("\t\t\t========================================================\n");
    printf("\t\t\t\t\tSELAMAT DATANG DI KUYJEK\n");                                        //*Judul Fitur*//
    printf("\t\t\t========================================================\n\n\n");
    printf("\nM E N U : \n1. Order KUY \n2. Menu Sebelumnya ");
    		printf("\nPilihanmu: ");
    		b=0;
    		scanf("%d", &b);
    		switch(b)
    		{
    			case 1:
    				system("cls");
                    fptr = fopen("history.txt","r");
                    fscanf(fptr,"%d", &order_id);
                    printf("order ke:%d",order_id);
				    driver_id=1110;                                                         //*Declare Kode Driver sesuai banyak Pesanan*//
				    driver_id++;
				    order(order_id,driver_id);
    				break;	
    			case 2:
    				system("cls");
    				menu_awal();
    				break;	
    			default:
            	printf("Maaf, Lagu yang anda pilih tidak ada didalam menu..!! Silahkan Coba lagi :)\n");   //*Keterangan Error*//
           		system("pause");
           		getchar();                                                                                 //*Error Handling Huruf*//
           		system("cls");
				kuyjek();		
			}
    
}

														//* F U N G S I  K E T J E K *//
													
int bill1(order_id,mall,i,jam_pilih,t,harga)
{
    char mall1[15]={"MARGO CITY XXI"};    //*Lokasi Mall*//
    char mall2[15]={"CINEMAXX DETOS"};
    char mall3[15]={"CGV DEPOK MALL"};
    char mall4[12]={"PENVILL XXI"};
    char film1[6]={"VENOM"};               //*Judul Film*//
    char film2[10]={"SMALLFOOT"};
    char film3[17]={"ARUNA & LIDAHNYA"};
    char film4[17]={"JHONNY ENGLISH 2"};
    char film5[10]={"MUNAFIK 2"};
    char film6[18]={"CRAZY RICH ASIANS"};
    system("cls");
    printf("\t\t\t======================================================================\n");
    printf("\t\t\t|\t\t\tOrder and Payment Details\t\t     |\n");                                                     //*Bill Pemesanan*//
    printf("\t\t\t|\t\t\t      K E T J E K\t\t\t     |\n");
    printf("\t\t\t|____________________________________________________________________|\n");
    printf("\t\t\t|%-30s|    \t%-20d%-9s|\n", "Order ID",order_id,"","","");
    if(mall==1){printf("\t\t\t|%-30s|    \t%-20s%-9s|\n","TEMPAT:",mall1,"","","");}
    else if(mall==2){printf("\t\t\t|%-30s|    \t%-20s%-9s|\n","TEMPAT:",mall2,"","","");}
    else if(mall==3){printf("\t\t\t|%-30s|    \t%-20s%-9s|\n","TEMPAT:",mall3,"","","");}
    else if(mall==4){printf("\t\t\t|%-30s|    \t%-20s%-9s|\n","TEMPAT:",mall4,"","","");}
    if(i==1){printf("\t\t\t|%-30s|    \t%-20s%-9s|\n", "FILM", film1,"");}
    else if(i==2){printf("\t\t\t|%-30s|    \t%-20s%-9s|\n", "FILM", film2,"");}
    else if(i==3){printf("\t\t\t|%-30s|    \t%-20s%-9s|\n", "FILM", film3,"");}
    else if(i==4){printf("\t\t\t|%-30s|    \t%-20s%-9s|\n", "FILM", film4,"");}
    else if(i==5){printf("\t\t\t|%-30s|    \t%-20s%-9s|\n", "FILM", film5,"");}
    else if(i==6){printf("\t\t\t|%-30s|    \t%-20s%-9s|\n", "FILM", film6,"");}
    printf("\t\t\t|%-30s|    \t%-2d%-18s%-9s|\n", "JAM",jam_pilih,".00","","");
    printf("\t\t\t|%-30s|    \t%-20d%-9s|\n", "JUMLAH TIKET",t,"","","");
    printf("\t\t\t----------------------------------------------------------------------\n");
    printf("\t\t\t|%-30s     \t%-27d  |\n", "Total Pembayaran",harga);
    printf("\t\t\t----------------------------------------------------------------------\n");
    printf("\n\n\n\t\t\tOrder and Payment Details Telah Dikirimkan ke Nomor Handphonemu Via MMS!\n\n\n");               //*Pesan Program*//
    system("pause");
    system("cls");
    printf("\n\n\n\n\t\t\t\t  T E R I M A   K A S I H\n\t\t\tT E L A H  M E N G G U N A K A N  K E T J E K\n\n\n\n");
    terimakasih1(order_id);                                                                                             //*Modular Tampilan Akhir*//
}

int beli(order_id,mall,i,jam_pilih)
{
    int harga,t,nomor;
    printf("\n\t\t\tBerapa tiket yang dibeli:");      //*User Memasukkan Jumlah Tiket*//
    scanf("%d",&t);
    harga=t*40000;
    printf("\n\t\t\tMasukkan Nomor Handphonemu :");    //*User Memasukkan Nomor Handphone*//
    scanf("%d",&nomor);
    system("pause");
    bill1(order_id,mall,i,jam_pilih,t,harga);
}

int penvil(order_id,mall)    //*Modula Mall*//
{
    printf("\t\t\t=====================================================================================\n");
    printf("\t\t\t\t\t\t\tPEJATEN VILLAGE XXI\n");                                                                             //*Mall*//
    printf("\t\t\t=====================================================================================\n");
    printf("\t\t\t|%s|%-16s   |\t%-12s|\t%-12s|\t%-12s|\t%-12s|\n","1","ARUNA & LIDAHNYA","11.00","13.00","17.00","21.00");    //*List Film dan Jam Tayang*//
    printf("\t\t\t|%s|%-16s   |\t%-12s|\t%-12s|\t%-12s|\t%-12s|\n","2","VENOM","","13.00","17.00","");
    printf("\t\t\t|%s|%-16s   |\t%-12s|\t%-12s|\t%-12s|\t%-12s|\n","3","JHONNY ENGLISH","12.00","15.00","18.00","21.00");
    printf("\t\t\t-------------------------------------------------------------------------------------\n");
    int i,j,jam_pilih,jam1[1][4]={11,13,17,21},jam2[1][2]={13,17},jam3[1][4]={12,15,18,21};
    printf("\n\n\n\t\t\tPilihan film:");                                                                                       //*User Memasukkan Pilihan Film*//
    scanf("%d",&i);
    if(i==1)
    {
        i=3;
        printf("\n\t\t\tPilihan jam:");                                                                                         //*User Memasukkan Pilihan Jam*//
        scanf("%d",&jam_pilih);
        for(j=0;j<4;j++)
        {
            if(jam_pilih==jam1[0][j])
            {
                beli(order_id,mall,i,jam_pilih);
                break;
            }
             else if(jam_pilih!=11&&jam_pilih!=13&&jam_pilih!=17&&jam_pilih!=21)
            {
                printf("WAKTU YANG ANDA PILIH TIDAK TERSEDIA. KEMBALI KE PEMILIHAN FILM\n");
                penvil(order_id,mall);
                break;
            }
            else
            {printf("\t");}

        }

    }
    else if(i==2)
    {
        i=1;
        printf("\n\t\t\tPilihan jam:");
        scanf("%d",&jam_pilih);
        for(j=0;j<2;j++)
        {
            if(jam_pilih==jam2[0][j])
            {
                beli(order_id,driver_id,mall,i,jam_pilih);
                break;
            }
            else if(jam_pilih!=13&&jam_pilih!=17)
            {
                printf("WAKTU YANG ANDA PILIH TIDAK TERSEDIA. KEMBALI KE PEMILIHAN FILM\n");
                penvil(order_id,mall);
                break;
            }
            else
            {printf("\t");}
        }
    }

    else if(i==3)
    {
        i=4;
        printf("\n\t\t\tPilihan jam:");
        scanf("%d",&jam_pilih);
        for(j=0;j<4;j++)
        {
            if(jam_pilih==jam3[0][j])
            {
                beli(order_id,driver_id,mall,i,jam_pilih);
                break;
            }
            else if(jam_pilih!=12&&jam_pilih!=15&&jam_pilih!=18&&jam_pilih!=21)
            {
                printf("WAKTU YANG ANDA PILIH TIDAK TERSEDIA. KEMBALI KE PEMILIHAN FILM\n");
                penvil(order_id,mall);
                break;
            }
            else
            {printf("\t");}

        }
    }
     else
    {
        printf("PILIHAN ANGKA SALAH.SILAHKAN PILIH KEMBALI\n");
        penvil(order_id,mall);
    }
}

int dmall(order_id,mall)
{
    printf("\t\t\t=====================================================================================\n");
    printf("\t\t\t\t\t\t\tCGV DEPOK MALL\n");
    printf("\t\t\t=====================================================================================\n");
    printf("\t\t\t|%s|%-16s   |\t%-12s|\t%-12s|\t%-12s|\t%-12s|\n","1","CRAZY RICH ASIANS","11.00","13.00","17.00","21.00");
    printf("\t\t\t|%s|%-16s   |\t%-12s|\t%-12s|\t%-12s|\t%-12s|\n","2","ARUNA & LIDAHNYA","","13.00","17.00","");
    printf("\t\t\t|%s|%-16s   |\t%-12s|\t%-12s|\t%-12s|\t%-12s|\n","3","SMALLFOOT","12.00","15.00","18.00","21.00");
    printf("\t\t\t-------------------------------------------------------------------------------------\n");
    int i,j,jam_pilih,jam1[1][4]={11,13,17,21},jam2[1][2]={13,17},jam3[1][4]={12,15,18,21};
    printf("\n\n\n\t\t\tPilihan film:");
    scanf("%d",&i);
    if(i==1)
    {
        i=6;
        printf("\n\t\t\tPilihan jam:");
        scanf("%d",&jam_pilih);
        for(j=0;j<4;j++)
        {
            if(jam_pilih==jam1[0][j])
            {
                beli(order_id,mall,i,jam_pilih);
                break;
            }
            else if(jam_pilih!=11&&jam_pilih!=13&&jam_pilih!=17&&jam_pilih!=21)
            {
                printf("WAKTU YANG ANDA PILIH TIDAK TERSEDIA. KEMBALI KE PEMILIHAN FILM\n");
                dmall(order_id,mall);
                break;
            }
            else
            {printf("\t");}
        }

    }
    else if(i==2)
    {
        i=3;
        printf("\n\t\t\tPilihan jam:");
        scanf("%d",&jam_pilih);
        for(j=0;j<2;j++)
        {
            if(jam_pilih==jam2[0][j])
            {
                beli(order_id,driver_id,mall,i,jam_pilih);
                break;
            }
            else if(jam_pilih!=13&&jam_pilih!=17)
            {
                printf("WAKTU YANG ANDA PILIH TIDAK TERSEDIA. KEMBALI KE PEMILIHAN FILM\n");
                dmall(order_id,mall);
                break;
            }
            else
            {printf("\t");}
        }

    }
    else if(i==3)
    {
        i=2;
        printf("\n\t\t\tPilihan jam:");
        scanf("%d",&jam_pilih);
        for(j=0;j<4;j++)
        {
            if(jam_pilih==jam3[0][j])
            {
                beli(order_id,driver_id,mall,i,jam_pilih);
                break;
            }
             else if(jam_pilih!=12&&jam_pilih!=15&&jam_pilih!=18&&jam_pilih!=21)
            {
                printf("WAKTU YANG ANDA PILIH TIDAK TERSEDIA. KEMBALI KE PEMILIHAN FILM\n");
                dmall(order_id,mall);
                break;
            }
            else
            {printf("\t");}
        }
    }
    else
    {
        printf("PILIHAN ANGKA SALAH.SILAHKAN PILIH KEMBALI\n");
        dmall(order_id,mall);
    }
}

int detos(order_id,mall)
{
    printf("\t\t\t=====================================================================================\n");
    printf("\t\t\t\t\t\t\tCINEMAXX DEPOK TOWN SQUARES\n");
    printf("\t\t\t=====================================================================================\n");
    printf("\t\t\t|%s|%-16s   |\t%-12s|\t%-12s|\t%-12s|\t%-12s|\n","1","JHONNY ENGLISH","11.00","13.00","17.00","21.00");
    printf("\t\t\t|%s|%-16s   |\t%-12s|\t%-12s|\t%-12s|\t%-12s|\n","2","MUNAFIK 2","","13.00","17.00","");
    printf("\t\t\t|%s|%-16s   |\t%-12s|\t%-12s|\t%-12s|\t%-12s|\n","3","VENOMS","12.00","15.00","18.00","21.00");
    printf("\t\t\t-------------------------------------------------------------------------------------\n");
    int i,j,jam_pilih,jam1[1][4]={11,13,17,21},jam2[1][2]={13,17},jam3[1][4]={12,15,18,21};
    printf("\n\n\n\t\t\tPilihan film:");
    scanf("%d",&i);
    if(i==1)
    {
        i=4;
        printf("\n\t\t\tPilihan jam:");
        scanf("%d",&jam_pilih);
        for(j=0;j<4;j++)
        {
            if(jam_pilih==jam1[0][j])
            {
                beli(order_id,driver_id,mall,i,jam_pilih);
                break;
            }
            else if(jam_pilih!=11&&jam_pilih!=13&&jam_pilih!=17&&jam_pilih!=21)
            {
                printf("WAKTU YANG ANDA PILIH TIDAK TERSEDIA. KEMBALI KE PEMILIHAN FILM\n");
                detos(order_id,mall);
                break;
            }
            else
            {printf("\t");}
        }

    }
    else if(i==2)
    {
        i=5;
        printf("\n\t\t\tPilihan jam:");
        scanf("%d",&jam_pilih);
        for(j=0;j<2;j++)
        {
            if(jam_pilih==jam2[0][j])
            {
                beli(order_id,mall,i,jam_pilih);
                break;
            }
            else if(jam_pilih!=13&&jam_pilih!=17)
            {
                printf("WAKTU YANG ANDA PILIH TIDAK TERSEDIA. KEMBALI KE PEMILIHAN FILM\n");
                detos(order_id,mall);
                break;
            }
            else
            {printf("\t");}
        }

    }
    else if(i==3)
    {
        i=1;
        printf("\n\t\t\tPilihan jam:");
        scanf("%d",&jam_pilih);
        for(j=0;j<4;j++)
        {
            if(jam_pilih==jam3[0][j])
            {
                beli(order_id,mall,i,jam_pilih);
                break;
            }
             else if(jam_pilih!=12&&jam_pilih!=15&&jam_pilih!=18&&jam_pilih!=21)
            {
                printf("WAKTU YANG ANDA PILIH TIDAK TERSEDIA. KEMBALI KE PEMILIHAN FILM\n");
                detos(order_id,mall);
                break;
            }
            else
            {printf("\t");}
        }
    }
    else
    {
        printf("PILIHAN ANGKA SALAH.SILAHKAN PILIH KEMBALI\n");
        detos(order_id,mall);
    }

}

int margo(order_id,mall)
{
    printf("\t\t\t=====================================================================================\n");
    printf("\t\t\t\t\t\t\tMARGO PLATINUM XXI\n");
    printf("\t\t\t=====================================================================================\n");
    printf("\t\t\t|%s|%-16s   |\t%-12s|\t%-12s|\t%-12s|\t%-12s|\n","1","VENOM","11.00","13.00","17.00","21.00");
    printf("\t\t\t|%s|%-16s   |\t%-12s|\t%-12s|\t%-12s|\t%-12s|\n","2","SMALLFOOT","","13.00","17.00","");
    printf("\t\t\t|%s|%-16s   |\t%-12s|\t%-12s|\t%-12s|\t%-12s|\n","3","ARUNA & LIDAHNYA","12.00","15.00","18.00","21.00");
    printf("\t\t\t-------------------------------------------------------------------------------------\n");
    int i,j,jam_pilih,jam1[1][4]={11,13,17,21},jam2[1][2]={13,17},jam3[1][4]={12,15,18,21};
    printf("\n\n\n\t\t\tPilihan film:");
    scanf("%d",&i);
    if(i==1)
    {
        printf("\n\t\t\tPilihan jam:");
        scanf("%d",&jam_pilih);
        for(j=0;j<4;j++)
        {
            if(jam_pilih==jam1[0][j])
            {
                beli(order_id,mall,i,jam_pilih);
                break;
            }
             else if(jam_pilih!=11&&jam_pilih!=13&&jam_pilih!=17&&jam_pilih!=21)
            {
                printf("WAKTU YANG ANDA PILIH TIDAK TERSEDIA. KEMBALI KE PEMILIHAN FILM\n");
                margo(order_id,mall);
                break;
            }
            else
            {printf("\t");}

        }

    }
    else if(i==2)
    {
        printf("\n\t\t\tPilihan jam:");
        scanf("%d",&jam_pilih);
        for(j=0;j<2;j++)
        {
            if(jam_pilih==jam2[0][j])
            {
                beli(order_id,driver_id,mall,i,jam_pilih);
                break;
            }
            else if(jam_pilih!=13&&jam_pilih!=17)
            {
                printf("WAKTU YANG ANDA PILIH TIDAK TERSEDIA. KEMBALI KE PEMILIHAN FILM\n");
                margo(order_id,mall);
                break;
            }
            else
            {printf("\t");}
        }
    }

    else if(i==3)
    {
        printf("\nt\t\tPilihan jam:");
        scanf("%d",&jam_pilih);
        for(j=0;j<4;j++)
        {
            if(jam_pilih==jam3[0][j])
            {
                beli(order_id,i,jam_pilih);
                break;
            }
            else if(jam_pilih!=12&&jam_pilih!=15&&jam_pilih!=18&&jam_pilih!=21)
            {
                printf("WAKTU YANG ANDA PILIH TIDAK TERSEDIA. KEMBALI KE PEMILIHAN FILM\n");
                margo(order_id,mall);
                break;
            }
            else
            {printf("\t");}

        }
    }
    else
    {
        printf("PILIHAN ANGKA SALAH.SILAHKAN PILIH KEMBALI\n");
        margo(order_id,mall);
    }


}

int order1(order_id)
{
    printf("\n\n\n");
    printf("\t\t\t========================================================\n");
    printf("\t\t\t\t\tSELAMAT DATANG DI KETJEK\n");                                                                           //*Judul Fitur*//
    printf("\t\t\t========================================================\n\n\n");
    printf("\nM E N U : \n1. Margo City \n2. Depok Town Square \n3. Depok Mall \n4. Pejaten Village \n5. Menu Sebelumnya ");
    		printf("\nPilihanmu: ");
    		b=0;
    		scanf("%d", &b);
    		switch(b)
    {
		    case 1:
		    	system("cls");
		        margo(order_id,mall);   //*Modula Mall*//
		        break;
		    case 2:
		    	system("cls");
		        detos(order_id,mall);
		        break;
		    case 3:
		    	system("cls");
		        dmall(order_id,mall);
		        break;
		    case 4:
		    	system("cls");
		        penvil(order_id,mall);
		        break;
		    case 5:
		    	system("cls");
		    	ketjek();
		    	break;
		    default:
            	printf("Maaf, Lagu yang anda pilih tidak ada didalam menu..!! Silahkan Coba lagi :)\n");
           		system("pause");
           		getchar();
           		system("cls");
				order1(order_id);
    }
}

void ketjek()   //*Modular Fitur*//
{
	FILE *fptr;                                                                       //*variabel pointer
	system("pause");
	system("cls");
	system("color 5A");                                                               //*Perintah Warna Background Program*//
    printf("\n\n\n");
    printf("\t\t\t========================================================\n");
    printf("\t\t\t\t\tSELAMAT DATANG DI KETJEK\n");                                   //*Judul Fitur*//
    printf("\t\t\t========================================================\n\n\n");
    printf("\nM E N U : \n1. Pesan Tiket \n2. Menu Sebelumnya ");
    		printf("\nPilihanmu: ");
    		c=0;
    		scanf("%d", &c);
    		switch(c)
  		  {
			case 1:
			    fptr = fopen("history.txt","r");
                fscanf(fptr,"%d", &order_id);
                printf("order ke:%d",order_id);
			    order1(order_id);
			    break;
			case 2:
				system("cls");
				menu_awal();
				break;
		    default:
            	printf("Maaf, Lagu yang anda pilih tidak ada didalam menu..!! Silahkan Coba lagi :)\n");   //*Keterangan Error*//
           		system("pause");
           		getchar();                                                                                 //*Error Handling Huruf*//
           		system("cls");
				ketjek();
    	}
}

													//* F U N G S I  A P L I K A S I *//

void about() //*Penjelasan mengenai program*//
{
	system("color 4D");
	printf("Ojekin Aja adalah fitur yang akan melayani kamu dalam menunjang kegiatn sehari-harimu!\n Aplikasi ini akan mempermudah kamu walu kamu lagi sibuk-sibuknya dan tetap membuat semua jadwalmu OnTime!\n\n");
	printf("Ojekin Aja menyediakan beberapa fasilitas yang bakal bikin kamu nyaman, Let's Check It Out!\n'");
	printf("\n KuyJek :   Kini dengan Ojekin Aja, kamu bisa go kemana aja tanpa worry harus desek-desekan bikin badan lepek dijalan  \n");
	printf("\n KanJek :   Saatnya makan ni!! Enaknya makan yang kane yegak sih?? Kini dengan Ojekin Aja, kamu bisa order mkanann kane yang bakal buat perut kenyang dan hati senang\n");
	printf("\n KetJek :   Kamu yakin bakal gapapa kalau film favotire perdanamu sampai terlewat?! Plis deh yakali hari gini masih belum Up To Date.. Kini dengan Ojekin Aja, kamu bisa booking seat bioskop biar bisa seru-seruan tanpa harus pusing-pusing ngantri cuy!\n");
	system("pause");
	menu_awal();
}

void help() //*Petunjuk penggunaan program*//
{
	system("color 3E");
	printf("Berikut merupakan langkah-langkah menggunkan Aplikasi Ojekin Aja\n");
	printf("\n[1] User memilih fasilitas yang akan digunakan");
	printf("\n[2] User memilih Restoran / Jarak Tempuh / Mall yang diinginkan");
	printf("\n[3] User memilih menu yang ditampilkan");
	printf("\n[4] User memesan sesuai keinginan");
	printf("\n[5] User melakukan pembayran dan mendapatkan bukti payment");
	printf("\n[6] Warning : User salah menginput angka sesuai pilihan");
	printf("\n[7] About : Penjelasan Tentang Program");
	printf("\n[8] Help : Penjelasan Mekanisme berjalannya program");
	printf("\n[9] Exit : Menu untuk keluar dari program\n");
	system("pause");
	menu_awal();
}

void gambarHelm() //*Interface program*//
{
	printf("\t\t==========================================================================\n");  //* J U D U L  P R O G R A M *//
	printf("\t\t||                                                                      ||\n");
	printf("\t\t||\t\t\tO J E K I N  A J S  B R A D S\t\t\t||\n");
	printf("\t\t||                                                                      ||\n");
	printf("\t\t==========================================================================\n");
	printf("      ,\n");
	printf("\t\t\t\t\t       ------------         \n");  //* L O G O *//
	printf("\t\t\t\t\t      /            \\       \n");
	printf("\t\t\t\t\t     /              \\      \n");
	printf("\t\t\t\t\t    /       _________\\     \n");
	printf("\t\t\t\t\t    |       |               \n");
	printf("\t\t\t\t\t    |       |               \n");
	printf("\t\t\t\t\t    |        \\________     \n");
	printf("\t\t\t\t\t    \\                |     \n");
	printf("\t\t\t\t\t     \\_______________|     \n");
}

void menu_awal() //*Tampilan Menu Service*//
{	
	system("cls");
	printf("Y O G S  G O J E K I N  A J S ! ! !\n");
	printf("============\n");
	printf("\nPilih: \n [1] KAN JEK\n [2] KUY JEK\n [3] KET JEK\n [4] About\n [5] Help\n [6] Exit\n");
	printf("\nPilihan Anda: ");
	n=0;                              //*Return, sebagai salah satu error handling apabila input yang dimasukkan salah*//
	scanf("%d",&n);

	switch (n)
	{
		case 1:
			system("cls");
			kanjek();     
			break;
		case 2:
			system("cls");
			kuyjek();
			break;
		case 3:
			system("cls");
			ketjek();
			break;
		case 4:                        //*Memanggil modular penjelasan mengenai program*//
			system("cls");
			about();
			break;
		case 5:                       //*Memanggil modular petunjuk penggunaan program*//
			system("cls");
    		help();
    		break;
		case 6:                      //*Keluar dari program*//
    		printf("EXIT\n");
    		break;
		default:
            printf("Maaf, Lagu yang anda pilih tidak ada didalam menu..!! Silahkan Coba lagi :)\n");       //*Warning input salah*//
         	system("pause");
         	getchar();               //*Mendata input karakter, sebagai salah satu error handling sebab tidak sesuai input yang disediakan*//
         	menu_awal();
	}
}

int main() //*Fungsi utama*//
{
	system("color 3F");    //*Pengaturan warna background program*//
	system ("date");      //*Keterangan tanggal program dijalankan*//
	gambarHelm();
	printf("\n\nPress ENTER to continue.. ");
	getch();
    menu_awal();         //*Implementasi Modular*//
   
           return 0;
}
