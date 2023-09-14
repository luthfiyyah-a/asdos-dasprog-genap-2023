#include <stdio.h>
#include <string.h>

typedef struct pengunjung {
	int id;
	char nrp[11];
	char nama[21];
	int kunjungan;
} Pengunjung;


int main()
{
	int N;
	scanf("%d", &N);
	Pengunjung p[300];
	char kolom_target[10], kolom_input[10];
	int index_hasil;
	
	int i;
	for(i=0; i<N; i++)
	{
		scanf("%d %s %s %d", &p[i].id, &p[i].nrp, &p[i].nama, &p[i].kunjungan);
	}
	
	// input argumen 1 dan 2
	scanf("%s %s", kolom_target, kolom_input);
	
	// input argumen ke 3 dan pencarian
	if(strcmp(kolom_input, "id")==0)
	{
		int id_target;
		scanf("%d", &id_target);
		for(i=0; i<N; i++)
		{
			if(p[i].id == id_target){
				index_hasil = i;
				break;
			}			
		}
	}
	else if(strcmp(kolom_input, "nrp")==0)
	{
		char nrp_target[11];
		scanf("%s", nrp_target);
		for(i=0; i<N; i++)
		{
			if(strcmp(p[i].nrp, nrp_target)==0){
				index_hasil = i;
				break;
			}		
		}
	}
	else if(strcmp(kolom_input, "nama")==0)
	{
		char nama_target[20];
		scanf("%s", nama_target);
		for(i=0; i<N; i++)
		{
			if(strcmp(p[i].nama, nama_target)==0){
				index_hasil = i;
				break;
			}			
		}
	}
	

	// print hasil
	if(strcmp(kolom_target, ".")==0)
	{
		printf("id: %d\nnama: %s\nnrp: %s\njumlah kunjungan per bulan: %d\n", p[index_hasil].id, p[index_hasil].nama, p[index_hasil].nrp, p[index_hasil].kunjungan);
	}
	else{
		if(strcmp(kolom_target, "id")==0)
		{
			printf("%s: %d", kolom_target, p[index_hasil].id);
		}
		else if (strcmp(kolom_target, "nama")==0)
		{
			printf("%s: %s", kolom_target, p[index_hasil].nama);
		}
		else if (strcmp(kolom_target, "kunjungan")==0)
		{
			printf("%s: %d\n", kolom_target, p[index_hasil].kunjungan);
		}
		else if (strcmp(kolom_target, "nrp")==0)
		{
			printf("%s: %s", kolom_target, p[index_hasil].nrp);
		}
	}
}
