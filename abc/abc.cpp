#include <cmath>
#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>
#include <iomanip>

using namespace std;

// Nhap so la ma  1 toi 10
string lama(int a) {
    if (1 <= a <= 10) {
        switch (a)
        {
        case 1:
            return "I";
        case 2:
            return "II";
        case 3:
            return "II";
        case 4:
            return "IV";
        case 5:
            return "V";
        case 6:
            return "VI";
        case 7:
            return "VII";
        case 8:
            return "VIII";
        case 9:
            return "IX";
        case 10:
            return "X";
        }
    }
    else {
        return 0;
    }
}

// Tinh diem va duong tron
int DiemDuongTron() {
    float xCircle, yCircle, xPoint, yPoint, R;
    cout << "Nhap toa do tam:" << '\n';
    cin >> xCircle >> yCircle;
    cout << "Nhap ban kinh: " << '\n';
    cin >> R;
    cout << "Nhap toa do diem:" << '\n';
    cin >> xPoint >> yPoint;
    float Distance = sqrt(pow((xCircle - xPoint), 2) + pow((yCircle - yPoint), 2));
    if (Distance < R) {
        cout << "Nam trong duong tron!" << '\n';
    }
    else if (Distance > R) {
        cout << "Nam ngoai duong tron!" << '\n';
    }
    else {
        cout << "Nam tren duong tron!" << '\n';
    }
    system("pause");
    return 1;
}

// Phuong trinh bac 2
void Bac2(float a, float b, float c, float& sol1, float& sol2) {
    if (a != 0) {
        float delta = b * b - 4 * a * c;
        if (delta >= 0) {
            sol1 = (-b - sqrt(delta)) / (2 * a);
            sol2 = (-b + sqrt(delta)) / (2 * a);
        }
    }
}

// Tinh gia dien
float GiaDien(float soDien) {
    float tienDien;
    int bac1 = 1678, bac2 = 1734, bac3 = 2014, bac4 = 2536, bac5 = 2834, bac6 = 2927;
    if (soDien < 0) {
        return 0;
    }
    else if (soDien <= 50) {
        tienDien = soDien * bac1;
    }
    else if (soDien <= 100) {
        tienDien = 50 * bac1 + ((soDien - 50) * bac2);
    }
    else if (soDien <= 200) {
        tienDien = 50 * bac1 + (50 * bac2) + ((soDien - 100) * bac3);
    }
    else if (soDien <= 300) {
        tienDien = 50 * bac1 + (50 * bac2) + (100 * bac3) + ((soDien - 200) * bac4);
    }
    else if (soDien <= 400) {
        tienDien = 50 * bac1 + (50 * bac2) + (100 * bac3) + (100 * bac4) + ((soDien - 300) * bac5);
    }
    else if (soDien > 400) {
        tienDien = 50 * bac1 + (50 * bac2) + (100 * bac3) + (100 * bac4) + (100 * bac5) + ((soDien - 400) * bac6);
    }
    return tienDien;
}

// Nam Nhuan
bool checkNamNhuan(int year)
{
    if (year % 400 == 0)
        return true;

    if (year % 4 == 0 && year % 100 != 0)
        return true;

    return false;
}

// Ngay hop le
bool NgayHopLe(int ngay, int thang, int nam) {
    if (nam > 0) {
        switch (thang) {
        case 1:
        case 3:
        case 5:
        case 7:
        case 8:
        case 10:
        case 12:
            if (1 <= ngay && ngay <= 31) {
                return true;
            }
            else {
                return false;
            }
            break;
        case 4:
        case 6:
        case 9:
        case 11:
            if (1 <= ngay && ngay <= 30) {
                return true;
            }
            else {
                return false;
            }
            break;
        case 2:
            if (checkNamNhuan(nam)) {
                if (1 <= ngay && ngay <= 29) {
                    return true;
                }
                else {
                    return false;
                }
            }
            else {
                if (1 <= ngay && ngay <= 28) {
                    return true;
                }
                else {
                    return false;
                }
            }
            break;
        default:
            return false;
        }
    }
    else {
        return false;
    }
}

// Thu
int Thu()
{
    int thu;
    do {
        cout << "Nhap thu: ";
        cin >> thu;
    } while (thu < 1 || thu > 7);
    switch (thu)
    {
    case 1:
        cout << "Sunday" << '\n';
        break;
    case 2:
        cout << "Monday" << '\n';
        break;
    case 3:
        cout << "Tueday" << '\n';
        break;
    case 4:
        cout << "Wednesday" << '\n';
        break;
    case 5:
        cout << "Thursday" << '\n';
        break;
    case 6:
        cout << "Friday" << '\n';
        break;
    case 7:
        cout << "Saturday" << '\n';
        break;
    default:
        break;
    }
    system("pause");
    return 1;
}

// Thang
string Thang(int thang)
{
    switch (thang)
    {
    case 1:
        return "January";
    case 2:
        return "February";
    case 3:
        return "March";
    case 4:
        return "April";
    case 5:
        return "May";
    case 6:
        return "June";
    case 7:
        return "July";
    case 8:
        return "August";
    case 9:
        return "September";
    case 10:
        return "October";
    case 11:
        return "November";
    case 12:
        return "December";
    default:
        return "";
    }
}

// So nguyen to
bool laSoNguyenTo()
{
    int n;
    cin >> n;
    int i = 2;
    while (i <= n) {
        if (n % i == 0) {
            break;
        }
        i++;
    }
    if (i == n) {
        return true;
    }
    else
    {
        return false;
    }
}

//so nguyen to gan nhat
int nearestPrime(int number)
{
    if (number < 2)
    {
        return 2;
    }
    int numb1 = number;
    int numb2 = number;
    int condition1 = 0;
    int condition2 = 0;
    do				//Find positive side primenumber
    {
        numb1++;
        int count = 0;
        for (int i = 2; i < numb1; i++)
        {
            if (numb1 % i == 0)
            {
                count++;
            }
        }
        if (count == 0)
        {
            condition1 = 1;
        }
    } while (condition1 == 0);
    do				// Find negative side prime number
    {
        numb2--;
        int count = 0;
        for (int i = 2; i < numb2; i++)
        {
            if (numb2 % i == 0)
            {
                count++;
            }
        }
        if (count == 0)
        {
            condition2 = 1;
        }
    } while (condition2 == 0);
    if (number - numb2 >= numb1 - number)		// Compare two above prime number
    {
        return numb1;
    }
    else return numb2;
}

// So hoan hao
bool checkshh(int n)
{
    int sum = 0;
    for (int i = 1; i <= n / 2; i++)
    {
        if (n % i == 0)
            sum += i;
    }
    if (sum == n)
        return true;
    else
        return false;
}

// so may man
int luckyNumber(int lwrBound, int upprBound, int number)
{
    int sum = 0;
    int luckyNumber;
    int count = 0;
    for (int i = lwrBound; i <= upprBound; i++)
    {
        luckyNumber = i;
        sum = 0;
        do
        {
            sum += (luckyNumber % 10);
            luckyNumber /= 10;
        } while (luckyNumber > 0);
        if (sum == number)
        {
            count++;
        }
    }
    return count;
}

// So chu so
int SoChuSo(int n)
{
    if (n >= 10) {
        float k = 10;
        int a = n / k;
        int count = 0;
        do
        {
            a = n / k;
            k *= 10;
            count++;
        } while (a != 0);
        return count;
    }
    else {
        return 1;
    }
}

// UCLN
int UCLN(int a, int b) {
    while (a != b)
    {
        if (a > b) {
            a = a - b;
        }
        if (a < b) {
            b = b - a;
        }
    }
    return a;
}

// BCNN 
float BCNN(int a, int b)
{
    int bcnn = a * b / UCLN(a, b);
    return bcnn;
}

// Tim so chinh phuong
bool findSquare(double number)
{
    if (sqrt(double(number)) * sqrt(double(number)) == number)
        return true;
    else return false;
}

// Chen mang 
void Chen(int(&a)[100], int& n, int vt, int gt) {
    for (int i = n; i >= vt; i--)
    {
        swap(a[i + 1], a[i]);
    }
    a[vt] = gt;
    n++;
}

// Xoa man
void Xoa(int(&a)[100], int& n, int vt) {
    for (int i = vt; i < n; i++)
    {
        swap(a[i], a[i + 1]);
    }
    n--;
}

// Xoa Phan tu trung
void XoaTrung(int(&a)[100], int& n) {
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < (n - 1); j++)
        {
            if (a[i] == a[j]) {
                Xoa(a, n, j);
            }
        }
    }
}

// Tim kiem
int* TimKiem(int(&a)[100], int n, int x) {
    int ketqua[100];
    int j = 0;
    for (int i = 0; i < n; i++)
    {
        if (a[i] == x) {
            ketqua[j] = i;
            j++;
        }
    }
    return ketqua;
}

// Sap xep
void Sort(int(&a)[100], int n, bool tangDan) {
    if (tangDan) {
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < (n - 1); j++)
            {
                if (a[j] > a[j + 1]) {
                    swap(a[j], a[j + 1]);
                }
            }
        }
    }
    else {
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < (n - 1); j++)
            {
                if (a[j] < a[j + 1]) {
                    swap(a[j], a[j + 1]);
                }
            }
        }
    }
}

// Tim lon nhat
int Max(int a[100], int n) {
    int max = a[0];
    for (int i = 0; i < n; i++)
    {
        if (max < a[i]) {
            max = a[i];
        }
    }
    return max;
}

// Tim Lon Nhi 
int Second(int a[100], int n) {
    int firstMax, secondMax;
    if (a[0] > a[1]) {
        firstMax = a[0];
        secondMax = a[1];
    }
    else {
        firstMax = a[1];
        secondMax = a[0];
    }
    for (int i = 2; i < n; i++) {
        if (a[i] >= firstMax) {
            secondMax = firstMax;
            firstMax = a[i];
        }
        else if (a[i] > secondMax) {
            secondMax = a[i];
        }
    }
    return secondMax;
}

// Nhap mang 1 Chieu
void NhapMang1Chieu(int(&a)[100], int& n) {
    cout << "Nhap so phan tu: ";
    cin >> n;
    if (n != 0) {
        for (int i = 0; i < n; i++)
        {
            cout << "Nhap phan tu " << i << " : ";
            cin >> a[i];
        }
    }
}

// Xuat mang 1 Chieu
void XuatMang1Chieu(int a[100], int n) {
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << '\t';
    }
}

// Nhap Mang 2 Chieu
void NhapMang2Chieu(int(&a)[100][100], int& r, int& c) {
    cout << "Nhap so cot: ";
    cin >> c;
    cout << "Nhap so dong: ";
    cin >> r;
    for (int i = 0; i < r; i++)
    {
        cout << "Hang " << r << " : " << '\n';
        for (int j = 0; j < c; j++)
        {
            cin >> a[i][j];
        }
        cout << '\n';
    }
}

// Xuat mang 2 Chieu
void XuatMang2Chieu(int(a)[100][100], int r, int c) {
    cout << "Ma tran vua nhap la: ";
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            cout << a[i][j];
            cout << '\t';
        }
        cout << '\n';
    }
}

// Nhap string
void NhapString(string& str) {
    cout << "Nhap chuoi ky tu: ";
    cin.ignore();
    getline(cin, str);
}

// So ngau nhien 
int NgauNhien() {
    int res = rand();
    return res;
}

// So ngau nhien trong khoa a b
int SoNgauNhien(int min, int max) {
    int res = min + rand() % (max + 1 - min);
    return res;
}

// tach chu so trong so nguyen
void TachChuSo(int& x, int(&a)[100], int& length) {
    int rs[100];
    int i = 0;
    do {
        rs[i] = x % 10;
        x = (x - rs[i]) / 10;
        i++;
    } while (x >= 10);
    if (x >= 0 && x < 10) {
        rs[i] = x;
    }
    length = i + 1;
    for (int j = 0; j < length; j++)
    {
        a[j] = rs[i];
        i--;
    }
}

// Viet hoa toan bo
string VietHoa(string str) {
    for (int i = 0; i < str.length(); i++)
    {
        if (str[i] >= 97 && str[i] <= 142) {
            str[i] -= 32;
        }
    }
    return str;
}

// Viet thuong toan bo
string VietThuong(string str) {
    for (int i = 0; i < str.length(); i++)
    {
        if (str[i] >= 65 && str[i] <= 122) {
            str[i] += 32;
        }
    }
    return str;
}

void LamTronSo(int a, int sochuthapphan) {
    cout << setprecision(sochuthapphan) << a << '\n';
}

void GetWord(string str, string(&rs)[100], int & wordNum) {
    int i = 0;
    int j = 0;
    do {
        while ( (str[j] == ' ' || 
            !((str[j] >= 97 && str[j] <= 142) || (str[j] >= 65 && str[j] <= 122)))
            && j < str.length()) {
            j++;
        }
        while (str[j] != ' ' && 
            ((str[j] >= 97 && str[j] <= 142) || (str[j] >= 65 && str[j] <= 122)) 
            && j < str.length()) {

            rs[i] += str[j];
            j++;

        }
        wordNum++;
        i++;
    } while (j < str.length());
}

int main()
{
    srand((int)time(0)); // tao seed cho ham random
    
    string a[100];
    int wordNum = 0;
    string str = "Please put away unsuable things!";

    GetWord(str, a, wordNum);

    cout << "Word num: " << wordNum << '\n';
    for (int i = 0; i < wordNum; i++)
    {
        cout << a[i] << '\n';
    }

    return 1;
}
