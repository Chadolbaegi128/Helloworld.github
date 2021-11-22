#include <iostream>
#include <string>

using namespace std;

class TV {
private:
	string _ModelName;
	int _ChannelCount;
	float _PowerSupply;

public:
	TV(string ModelName, int ChannelCount, float PowerSupply) {
		_ModelName = ModelName;
		_ChannelCount = ChannelCount;
		_PowerSupply = PowerSupply;
	}

	void SetModelName(string ModelName) {
		_ModelName = ModelName;
	}

	string GetModelName() {
		return _ModelName;
	}

	void SetChannelCount(int ChannelCount) {
		_ChannelCount = ChannelCount;
	}

	int GetChannelCount() {
		return _ChannelCount;
	}

	void SetPowerSupply(float PowerSupply) {
		_PowerSupply = PowerSupply;
	}

	float GetPowerSupply() {
		return _PowerSupply;
	}

	void info() {
		cout << "�𵨸�: " <<_ModelName<< "\n";
		cout << "ä�ΰ���: " <<_ChannelCount<< "\n";
		cout << "����: " <<_ModelName<<"kw" << "\n";
	}
};

class SmartPhone {
private:
	string _ModelName;
	string _productdate;
	int _ModelNumber;
	int _CameraPixel;

public:
	SmartPhone(string ModelName, string productdate, int ModelNumber, int CameraPixel)
	{
		_ModelName = ModelName;
		_productdate = productdate;
		_ModelNumber = ModelNumber;
		_CameraPixel = CameraPixel;
	}

	void SetModelName(string ModelName) {
		_ModelName = ModelName;
	}

	string GetModelName() {
		return _ModelName;
	}

	void Setproductdate(string productdate) {
		_productdate = productdate;
	}

	string Getproductdate() {
		return _productdate;
	}

	void SetModelNumber(int ModelNumber) {
		_ModelNumber = ModelNumber;
	}

	int GetModelNumber() {
		return _ModelNumber;
	}

	void SetCameraPixel(int CameraPixel) {
		_CameraPixel = CameraPixel;
	}

	int GetCameraPixel() {
		return _CameraPixel;
	}

	void info() {
		cout << "\n" << "\n";
		cout << "�𵨸�: " << _ModelName << "\n";
		cout << "��������: " << _productdate << "\n";
		cout << "�𵨹�ȣ: " << _ModelNumber << "\n";
		cout << "ī�޶�ȭ��: " << _CameraPixel<<"��ȭ��" << "\n";

	}
};

class VacuumCleaner {
private:
	string _ModelName;
	string _productdate;
	int _ModelNumber;
	int _Suction;

public:
	VacuumCleaner(string ModelName, string productdate, int ModelNumber, int Suction)
	{
		_ModelName = ModelName;
		_productdate = productdate;
		_ModelNumber = ModelNumber;
		_Suction = Suction;
	}

	void SetModelName(string ModelName){
		_ModelName = ModelName;
	}

	string GetModelName() {
		return _ModelName;
	}

	void Setproductdate(string productdate) {
		_productdate = productdate;
	}

	string Getproductdate() {
		return _productdate;
	}

	void SetModelNumber(int ModelNumber) {
		_ModelNumber = ModelNumber;
	}

	int GetModelNumber() {
		return _ModelNumber;
	}

	void SetSuction(int Suction) {
		_Suction = Suction;
	}

	int GetSuction() {
		return _Suction;
	}

	void info() {
		cout << "\n" << "\n";
		cout << "�𵨸�: " << _ModelName << "\n";
		cout << "��������: " << _productdate << "\n";
		cout << "�𵨹�ȣ: " << _ModelNumber << "\n";
		cout << "���Է�: " << _Suction <<"AW" << "\n";
	}
};

int main() {
	TV t("�Ｚ �ĺ�", 56, 160);
	SmartPhone s("������12", "2021/07/29", 12314515, 1200);
	VacuumCleaner v("���̽�V11", "2019/04/03", 1215132412, 200);

	t.info();
	s.info();
	v.info();

	return 0;

}