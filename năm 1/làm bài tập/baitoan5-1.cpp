using namespace std;
#include <iostream>
int main()
{
    float sd, td1, td2, td3, td4, ttd, ttddt;
    cout<<"Nhap vao so ki dien da dung: ";
    cin>>sd;
    if (sd <= 100)
    {
        td1 = sd * 1242;
        ttd = td1;
    }
    else if (sd > 100 && sd <= 150)
    {
        td1 = 100 * 1242;
        td2 = (sd - 100) * 1304;
        ttd = td1 + td2;
    }
    else if (sd > 150 && sd <= 200)
    {
        td1 = 100 * 1242;
        td2 = 50 * 1304;
        td3 = (sd - 150) * 1651;
        ttd = td1 + td2 + td3;
    }
    else
    {
        td1 = 100 * 1242;
        td2 = 50 * 1304;
        td3 = 50 * 1651;
        td4 = (sd - 200) * 1912;
        ttd = td1 + td2 + td3 + td4;
    }
    ttddt = ttd + (ttd / 10);
    cout<<"So tien phai tra la "<<ttddt<<" dong"<<endl;
    return 0;
}