
#pragma once

using namespace System;
using namespace System::Windows::Forms;
using namespace System::Drawing;
using namespace System::Drawing::Imaging;
using namespace System::IO;

public ref class FileManager {

public: FileManager() {
	needSave = false;
	isOpen = false;
	fileName = L"Untitled.png";
	filePath = L"";
	saveFileDialog = gcnew SaveFileDialog();
	openFileDialog = gcnew OpenFileDialog();
	bmp = gcnew Bitmap(1, 1);
}

public: FileManager(int width, int height) {
	needSave = false;
	isOpen = false;
	fileName = L"Untitled.png";
	filePath = L"";
	saveFileDialog = gcnew SaveFileDialog();
	openFileDialog = gcnew OpenFileDialog();
	bmp = gcnew Bitmap(width, height);
}

private: bool needSave;

private: bool isOpen;

private: String^ fileName;

private: String^ filePath;

private: SaveFileDialog^ saveFileDialog;

private: OpenFileDialog^ openFileDialog;

private: Bitmap^ bmp;

public: bool isNeedSave();

public: Void setNeedSave(bool state);

public: Bitmap^ getBmp();

public: bool save(Image^ img);

public: bool saveAs(Image^ img);

public: bool open();

public: String^ getFileName();

public: String^ getFilePath();
};

