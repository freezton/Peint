//#include <windows.h>

#pragma once

using namespace System;
using namespace System::Windows::Forms;
using namespace System::Drawing;
using namespace System::Drawing::Imaging;
using namespace System::IO;

public ref class FileManager {

	/// <summary>����������� ������ FileManager.</summary>
public: FileManager() {
	needSave = false;
	isOpen = false;
	fileName = L"����������.png";
	filePath = L"";
	saveFileDialog = gcnew SaveFileDialog();
	openFileDialog = gcnew OpenFileDialog();
	bmp = gcnew Bitmap(1, 1);
}

public: FileManager(int width, int height) {
	needSave = false;
	isOpen = false;
	fileName = L"����������.png";
	filePath = L"";
	saveFileDialog = gcnew SaveFileDialog();
	openFileDialog = gcnew OpenFileDialog();
	bmp = gcnew Bitmap(width, height);
}

	  /// <summary>����������� ����� � ����������.</summary>
private: bool needSave;

	   /// <summary>������ ������������ ����.</summary>
private: bool isOpen;

	   /// <summary>��� �����.</summary>
private: String^ fileName;

	   /// <summary>���� � �����.</summary>
private: String^ filePath;

private: SaveFileDialog^ saveFileDialog;

private: OpenFileDialog^ openFileDialog;

private: Bitmap^ bmp;

public: bool isNeedSave();

public: Void setNeedSave(bool state);

public: Bitmap^ getBmp();

	  /// <summary>
	  /// ���������� � ����.
	  /// </summary>
	  /// <param name="img">����������� �����������.</param>
public: bool save(Image^ img);

	  /// <summary>
	  /// ���������� � ���� � ��������� ������ �����.
	  /// </summary>
	  /// <param name="img">����������� �����������.</param>
public: bool saveAs(Image^ img);

	  /// <summary>
	  /// ������ ����������� �� �����.
	  /// </summary>
	  /// <returns>
	  /// true, ���� ����������� ��������� �������.
	  /// false, ���� �������� ������ ��� ������.
	  /// </returns>
public: bool open();

	  /// <returns>
	  ///	��� �����.
	  /// </returns>
public: String^ getFileName();

	  /// <returns>
	  ///	���� � �����.
	  /// </returns>
public: String^ getFilePath();
};

