#include <iostream>
using namespace std;

struct PHANSO
{
    int tu;
    int mau;
};

void NhapMotPhanSo(PHANSO &ps)
{
    cout << "Nhap tu so: ";
    cin >> ps.tu;

    cout << "Nhap mau so: ";
    cin >> ps.mau;

    while (ps.mau == 0)
    {
        cout << "Mau so phai khac 0. Nhap lai mau so: ";
        cin >> ps.mau;
    }
}

void XuatMotPhanSo(PHANSO ps)
{
    cout << ps.tu << "/" << ps.mau;
}

int TimUocChungLonNhat(int a, int b)
{
    if (a < 0)
    {
        a = -a;
    }

    if (b < 0)
    {
        b = -b;
    }

    if (a == 0)
    {
        return b;
    }

    if (b == 0)
    {
        return a;
    }

    while (a != b)
    {
        if (a > b)
        {
            a = a - b;
        }
        else
        {
            b = b - a;
        }
    }

    return a;
}

void RutGonPhanSo(PHANSO &ps)
{
    int uc;

    uc = TimUocChungLonNhat(ps.tu, ps.mau);
    ps.tu = ps.tu / uc;
    ps.mau = ps.mau / uc;

    if (ps.mau < 0)
    {
        ps.tu = -ps.tu;
        ps.mau = -ps.mau;
    }
}

PHANSO TinhTongHaiPhanSo(PHANSO ps1, PHANSO ps2)
{
    PHANSO kq;
    kq.tu = ps1.tu * ps2.mau + ps2.tu * ps1.mau;
    kq.mau = ps1.mau * ps2.mau;
    RutGonPhanSo(kq);
    return kq;
}

PHANSO TinhHieuHaiPhanSo(PHANSO ps1, PHANSO ps2)
{
    PHANSO kq;
    kq.tu = ps1.tu * ps2.mau - ps2.tu * ps1.mau;
    kq.mau = ps1.mau * ps2.mau;
    RutGonPhanSo(kq);
    return kq;
}

PHANSO TinhTichHaiPhanSo(PHANSO ps1, PHANSO ps2)
{
    PHANSO kq;
    kq.tu = ps1.tu * ps2.tu;
    kq.mau = ps1.mau * ps2.mau;
    RutGonPhanSo(kq);
    return kq;
}

PHANSO TinhThuongHaiPhanSo(PHANSO ps1, PHANSO ps2)
{
    PHANSO kq;
    kq.tu = ps1.tu * ps2.mau;
    kq.mau = ps1.mau * ps2.tu;
    RutGonPhanSo(kq);
    return kq;
}

int KiemTraPhanSoToiGian(PHANSO ps)
{
    if (TimUocChungLonNhat(ps.tu, ps.mau) == 1)
    {
        return 1;
    }

    return 0;
}

void QuyDongHaiPhanSo(PHANSO ps1, PHANSO ps2, PHANSO &a, PHANSO &b)
{
    a.tu = ps1.tu * ps2.mau;
    a.mau = ps1.mau * ps2.mau;

    b.tu = ps2.tu * ps1.mau;
    b.mau = ps2.mau * ps1.mau;
}

int KiemTraPhanSoAmHayDuong(PHANSO ps)
{
    if (ps.tu == 0)
    {
        return 0;
    }

    if ((ps.tu > 0 && ps.mau > 0) || (ps.tu < 0 && ps.mau < 0))
    {
        return 1;
    }

    return -1;
}

int SoSanhHaiPhanSo(PHANSO ps1, PHANSO ps2)
{
    int trai, phai;

    trai = ps1.tu * ps2.mau;
    phai = ps2.tu * ps1.mau;

    if (trai > phai)
    {
        return 1;
    }

    if (trai < phai)
    {
        return -1;
    }

    return 0;
}

int main()
{
    PHANSO ps1, ps2;
    PHANSO kq, qd1, qd2;
    int kt;

    cout << "Nhap phan so thu nhat:\n";
    NhapMotPhanSo(ps1);

    cout << "Nhap phan so thu hai:\n";
    NhapMotPhanSo(ps2);

    cout << "\nPhan so thu nhat: ";
    XuatMotPhanSo(ps1);
    cout << "\nPhan so thu hai: ";
    XuatMotPhanSo(ps2);

    cout << "\n\nPhan so thu nhat sau khi rut gon: ";
    kq = ps1;
    RutGonPhanSo(kq);
    XuatMotPhanSo(kq);

    cout << "\nPhan so thu hai sau khi rut gon: ";
    kq = ps2;
    RutGonPhanSo(kq);
    XuatMotPhanSo(kq);

    cout << "\n\nTong hai phan so: ";
    kq = TinhTongHaiPhanSo(ps1, ps2);
    XuatMotPhanSo(kq);

    cout << "\nHieu hai phan so: ";
    kq = TinhHieuHaiPhanSo(ps1, ps2);
    XuatMotPhanSo(kq);

    cout << "\nTich hai phan so: ";
    kq = TinhTichHaiPhanSo(ps1, ps2);
    XuatMotPhanSo(kq);

    cout << "\nThuong hai phan so: ";
    if (ps2.tu == 0)
    {
        cout << "Khong tinh duoc vi phan so thu hai bang 0";
    }
    else
    {
        kq = TinhThuongHaiPhanSo(ps1, ps2);
        XuatMotPhanSo(kq);
    }

    cout << "\n\nKiem tra phan so toi gian:";
    cout << "\nPhan so thu nhat: ";
    if (KiemTraPhanSoToiGian(ps1) == 1)
    {
        cout << "La phan so toi gian";
    }
    else
    {
        cout << "Khong la phan so toi gian";
    }

    cout << "\nPhan so thu hai: ";
    if (KiemTraPhanSoToiGian(ps2) == 1)
    {
        cout << "La phan so toi gian";
    }
    else
    {
        cout << "Khong la phan so toi gian";
    }

    QuyDongHaiPhanSo(ps1, ps2, qd1, qd2);
    cout << "\n\nHai phan so sau khi quy dong:";
    cout << "\nPhan so thu nhat: ";
    XuatMotPhanSo(qd1);
    cout << "\nPhan so thu hai: ";
    XuatMotPhanSo(qd2);

    cout << "\n\nXet dau phan so thu nhat: ";
    kt = KiemTraPhanSoAmHayDuong(ps1);
    if (kt == 1)
    {
        cout << "Phan so duong";
    }
    else if (kt == -1)
    {
        cout << "Phan so am";
    }
    else
    {
        cout << "Phan so bang 0";
    }

    cout << "\nXet dau phan so thu hai: ";
    kt = KiemTraPhanSoAmHayDuong(ps2);
    if (kt == 1)
    {
        cout << "Phan so duong";
    }
    else if (kt == -1)
    {
        cout << "Phan so am";
    }
    else
    {
        cout << "Phan so bang 0";
    }

    cout << "\n\nSo sanh hai phan so: ";
    kt = SoSanhHaiPhanSo(ps1, ps2);
    if (kt == 1)
    {
        XuatMotPhanSo(ps1);
        cout << " > ";
        XuatMotPhanSo(ps2);
    }
    else if (kt == -1)
    {
        XuatMotPhanSo(ps1);
        cout << " < ";
        XuatMotPhanSo(ps2);
    }
    else
    {
        XuatMotPhanSo(ps1);
        cout << " = ";
        XuatMotPhanSo(ps2);
    }

    cout << endl;
    return 0;
}
