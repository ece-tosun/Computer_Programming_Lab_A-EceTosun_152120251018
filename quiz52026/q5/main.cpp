#include <iostream>

using namespace std;
 struct Sensor{
     int sensor_id;
     float sicaklik;
 };

int main()
{


   int student_id,N,E;
   struct Sensor read_data;

   cout<<"Please enter your student id: ";
   cin >> student_id;

   N=student_id %50;
   E=student_id %100;

   fstream bin_file("sensors.bin",ios::in | ios::out|ios::binary)

   int is_bin_open=bin_file.isopen()? 1:0;

   if (is_bin_open==0){

    cout <<"Error :Could not open sensors.bin"<<;
    return 1;
   }
   struct Sensor temp_sensor;

   bin_file.seekg(N * sizeof(struct Sensor),ios::beg);
   bin_file.read((char*)&temp_sensor,sizeof(struct Sensor));
   float first_temp=tempsensor.sicaklik;
   temp_sensor.sicaklik+=E;
   float new_temp=temp_sensor.sicaklik;
   bin_file.seekp(N* sizeof(struct Sensor))
   binFile.seekp(N * sizeof(struct Sensor), std::ios::beg);


    binFile.write((const char*)&tempSensor, sizeof(struct Sensor));


    binFile.close();


    std::string filename = std::to_string(student_id) + "_Quiz5.txt";

    std::ofstream reportFile(filename, std::ios::out);

    int isReportOpen = reportFile.is_open() ? 1 : 0;

    if (isReportOpen == 1) {

        reportFile << "Number: [" << student_id << "]\n";
        reportFile << "Sensor Index Used in the Process: [" << N << "]\n";
        reportFile << "First Temperature: [" << firstTemperature << "] -> New Temperature: [" << newTemperature << "]\n";

        reportFile.close();
        std::cout << "Process completed successfully. Report saved as " << filename << std::endl;
    } else {
        std::cout << "Error: Could not create the formatted report text file." << std::endl;
        return 1;
    }

    return 0;
}

