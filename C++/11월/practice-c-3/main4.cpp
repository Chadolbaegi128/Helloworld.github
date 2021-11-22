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
		cout << "모델명: " <<_ModelName<< "\n";
		cout << "채널갯수: " <<_ChannelCount<< "\n";
		cout << "전력: " <<_ModelName<<"kw" << "\n";
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
		cout << "모델명: " << _ModelName << "\n";
		cout << "생산일자: " << _productdate << "\n";
		cout << "모델번호: " << _ModelNumber << "\n";
		cout << "카메라화소: " << _CameraPixel<<"만화소" << "\n";

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
		cout << "모델명: " << _ModelName << "\n";
		cout << "생산일자: " << _productdate << "\n";
		cout << "모델번호: " << _ModelNumber << "\n";
		cout << "흡입력: " << _Suction <<"AW" << "\n";
	}
};

int main() {
	TV t("삼성 파브", 56, 160);
	SmartPhone s("아이폰12", "2021/07/29", 12314515, 1200);
	VacuumCleaner v("다이슨V11", "2019/04/03", 1215132412, 200);

	t.info();
	s.info();
	v.info();

	return 0;

}