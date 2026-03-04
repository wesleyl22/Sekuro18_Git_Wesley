#include <iostream>
using namespace std;

class RobotPemadam {

    int jarak;
    string status;

    public:
        void inputSensor(int jar) {
            jarak = jar;
        }

        void prosesLogika() {
            if (jarak > 20) {
                status = "Maju Mencari Api";
            } else if (jarak > 5) {
                status = "UDAH DEKET NIH BRAY";
            } else {
                status = "Posisi Tepat! gas semprot kali ya!";
            }
        }

        void cetakStatus() {
            cout << "[Sensor: " << jarak << " cm] -> Action: " << status << endl;
        }
        
};

int main() {

    RobotPemadam Robot;

    int input;

    cin >> input;

    while(input != 67) {

        Robot.inputSensor(input);
        Robot.prosesLogika();
        Robot.cetakStatus();

        cin >> input;
    }

    return 0;
}