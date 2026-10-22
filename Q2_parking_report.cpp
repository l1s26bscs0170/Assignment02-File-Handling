//
///*
// * Name       : Bilal Khalid
// * Reg No     : L1s26bscs0170
// * Assignment : 02 - File Handling
// * Question   : Q2 - Parking Report
// */
//
//#include <iostream>
//#include <fstream>
//#include <cstring>
//using namespace std;
//
//int main() {
//    ifstream inFile("parking.txt");
//    if (!inFile) {
//        cout << "parking.txt not found!" << endl;
//        return 1;
//    }
//
//    int d, m, y;
//    char slash;
//    inFile >> d >> slash >> m >> slash >> y;
//    inFile.ignore(100, '\n');
//    inFile.ignore(100, '\n');
//    ofstream outFile("receipts.txt");
//    if (!outFile) {
//        inFile.close();
//        return 1;
//    }
//
//    cout << "Parking report for "
//        << d << "/" << m << "/" << y << endl;
//
//    outFile << "Receipts for "
//        << d << "/" << m << "/" << y << endl;
//
//    char plate[15];
//    char longestPlate[15] = "";
//    char type;
//    char inColon, outColon;
//    int inHour, inMinute, outHour, outMinute;
//    int minutes, hoursCharged, fee;
//    int vehicles = 0, cars = 0, bikes = 0;
//    int totalCollected = 0;
//    int longestMinutes = -1;
//
//    while (vehicles < 30 &&
//        inFile >> plate >> type
//        >> inHour >> inColon >> inMinute
//        >> outHour >> outColon >> outMinute) {
//
//        int start = inHour * 60 + inMinute;
//        int finish = outHour * 60 + outMinute;
//
//        minutes = finish - start;
//
//       
//        hoursCharged = (minutes + 59) / 60;
//
//        if (hoursCharged == 0) {
//            hoursCharged = 1;
//        }
//
//        if (type == 'C') {
//            fee = hoursCharged * 100;
//            cars++;
//        }
//        else {
//            fee = hoursCharged * 40;
//            bikes++;
//        }
//
//        int actualHours = minutes / 60;
//        int actualMinutes = minutes % 60;
//
//        cout << plate << " ";
//
//        if (type == 'C') {
//            cout << "Car ";
//        }
//        else {
//            cout << "Bike ";
//        }
//
//        cout << actualHours << " h "
//            << actualMinutes << " min Fee: "
//            << fee << endl;
//
//        outFile << plate << " " << fee << endl;
//
//        vehicles++;
//        totalCollected += fee;
//
//        if (minutes > longestMinutes) {
//            longestMinutes = minutes;
//            strcpy_s(longestPlate, plate);
//        }
//    }
//
//    inFile.close();
//    outFile.close();
//
//    if (vehicles == 0) {
//        cout << "No vehicles found!" << endl;
//        return 0;
//    }
//
//    cout << "Vehicles: " << vehicles << endl;
//    cout << "Cars: " << cars << " Bikes: " << bikes << endl;
//    cout << "Total collected: " << totalCollected << endl;
//    cout << "Longest stay: " << longestPlate << " ("
//        << longestMinutes / 60 << " h "
//        << longestMinutes % 60 << " min)" << endl;
//
//    return 0;
//}
