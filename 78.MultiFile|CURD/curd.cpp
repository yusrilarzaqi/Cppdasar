#include <iostream>
#include <fstream>
#include "curd.h"

void curd::writeData(std::fstream &data, int posisi, curd::Mahasiswa &inputMahasiswa){
	data.seekp((posisi - 1)*sizeof(curd::Mahasiswa), std::ios::beg);
	data.write(reinterpret_cast<char*>(&inputMahasiswa),sizeof(curd::Mahasiswa));
}
int curd::getDataSize(std::fstream &data){
	int start, end;
	data.seekg(0,std::ios::beg);
	start = data.tellg();
	data.seekg(0,std::ios::end);
	end = data.tellg();
	return (end-start)/sizeof(Mahasiswa);
}

curd::Mahasiswa curd::readData(std::fstream &data, int posisi){
	curd::Mahasiswa readMahasiswa;
	data.seekg((posisi - 1)*sizeof(curd::Mahasiswa),std::ios::beg);
	data.read(reinterpret_cast<char*>(&readMahasiswa),sizeof(curd::Mahasiswa));
	return readMahasiswa;
}

void curd::displayDataMahasiswa(std::fstream &data){
	int size = curd::getDataSize(data);
	curd::Mahasiswa showMahasiswa;
	std::cout << "no.\tpk.\tNIM.\tNama.\tJurusan." << std::endl;
	for(int i = 1; i <= size; i++){
		showMahasiswa = curd::readData(data,i);
		std::cout << i << "\t";
		std::cout << showMahasiswa.pk << "\t";
		std::cout << showMahasiswa.NIM << "\t";
		std::cout << showMahasiswa.nama << "\t";
		std::cout << showMahasiswa.jurusan << std::endl;
	}
}

void curd::deleteRecord(std::fstream &data){
	int nomor,size,offset;
	curd::Mahasiswa blankMahasiswa, tempMahasiswa;
	std::fstream dataSementara;

	size = curd::getDataSize(data);
	// 1. pilih nomor
	std::cout << "Hapus nomor: ";
  std::cin >> nomor;
	// 2. di posisi ini diisi dengan data kosong
	curd::writeData(data,nomor,blankMahasiswa);
	// 3. kita cek data yang ada dari file data.bin, kalau ada data
	//    kita pindahkan ke file sementara
	dataSementara.open("temp.dat", std::ios::trunc|std::ios::out|std::ios::in|std::ios::binary);

	offset = 0;

	for (int i=1 ; i <=size ; i++){
		tempMahasiswa = curd::readData(data,i);

		if (!tempMahasiswa.nama.empty()){
			curd::writeData(dataSementara,i - offset,tempMahasiswa);
		} else {
			offset++;
			std::cout << "deleted item" << std::endl;
		}
	}
	// 4. kita pindahkan data dari file sementara ke data.bin
	size = curd::getDataSize(dataSementara);
	data.close();
	data.open("data.bin",std::ios::trunc|std::ios::out|std::ios::binary);
	data.close();
	data.open("data.bin",std::ios::out|std::ios::in|std::ios::binary);

	for(int i = 1; i <= size; i++){
		tempMahasiswa = curd::readData(dataSementara,i);
		curd::writeData(data,i,tempMahasiswa);
	}
}

void curd::updateRecord(std::fstream &data){
	int nomor;
	curd::Mahasiswa updateMahasiswa;
	std::cout << "pilih no: ";
	std::cin >> nomor;
	std::cin.ignore(std::numeric_limits<std::streamsize>::max(),'\n');

	updateMahasiswa = curd::readData(data,nomor);
	
	std::cout << "\n\npilihan data: " << std::endl;
	std::cout << "NIM : " << updateMahasiswa.NIM << std::endl;
	std::cout << "nama : " << updateMahasiswa.nama << std::endl;
	std::cout << "jurusan : " << updateMahasiswa.jurusan << std::endl;

	std::cout << "\nMerubah data: "<< std::endl;
	std::cout << "NIM:";
	std::getline(std::cin,updateMahasiswa.NIM);
	std::cout << "nama:";
	std::getline(std::cin,updateMahasiswa.nama);
	std::cout << "jurusan:";
	std::getline(std::cin,updateMahasiswa.jurusan);

	curd::writeData(data,nomor,updateMahasiswa);
}

void curd::checkDatabase(std::fstream &data){
	data.open("data.bin", std::ios::out | std::ios::in | std::ios::binary);

	// check file ada atau tidak
	if (data.is_open()){
		std::cout << "database ditemukan" << std::endl;
	} else {
		std::cout << "database tidak ditemukan, buat database baru" << std::endl;
		data.close();
		data.open("data.bin", std::ios::trunc | std::ios::out | std::ios::in | std::ios::binary);
	}
}

int curd::getOption(){
	int input;
	system("clear");
	// system("cls");
	std::cout << "\nProgram CRUD data mahasiswa" << std::endl;
	std::cout << "=============================" << std::endl;
	std::cout << "1. Tambah data mahasiswa" << std::endl;
	std::cout << "2. Tampilkan data mahasiswa" << std::endl;
	std::cout << "3. Ubah data mahasiswa" << std::endl;
	std::cout << "4. Hapus data mahasiswa" << std::endl;
	std::cout << "5. Selesai" << std::endl;
	std::cout << "=============================" << std::endl;
	std::cout << "pilih [1-5]? : ";
	std::cin >> input;
	std::cin.ignore(std::numeric_limits<std::streamsize>::max(),'\n');
	return input;
}

void curd::addDataMahasiswa(std::fstream &data){
	
	curd::Mahasiswa inputMahasiswa, lastMahasiswa;

	int size = curd::getDataSize(data);
	
	std::cout << "ukuran data : " << size << std::endl;

	if(size == 0){
		inputMahasiswa.pk = 1;
	} else {
		lastMahasiswa = curd::readData(data,size);
		std::cout << "pk = " << lastMahasiswa.pk << std::endl;
		inputMahasiswa.pk = lastMahasiswa.pk + 1;
	}

	std::cout << "Nama: ";
	std::getline(std::cin, inputMahasiswa.nama);
	std::cout << "Jurusan: ";
	std::getline(std::cin, inputMahasiswa.jurusan);
	std::cout << "NIM: ";
	std::getline(std::cin, inputMahasiswa.NIM);

	curd::writeData(data,size+1,inputMahasiswa);
}

