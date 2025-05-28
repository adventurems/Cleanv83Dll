#pragma once

class Memory
{
	public:
		static bool SetHook(bool attach, void** ptrTarget, void* ptrDetour);
		static void FillBytes(DWORD dwOriginAddress, unsigned char ucValue, int nCount);
		static void WriteString(DWORD dwOriginAddress, const char* sContent);
		static void WriteByte(DWORD dwOriginAddress, unsigned char ucValue);
		static void WriteValue(DWORD dwBase, const unsigned int dwValue); // AdventureMS
		static void PatchNop(DWORD address, UINT count); // AdventureMS
		static void WriteShort(DWORD dwOriginAddress, unsigned short usValue);
		static void WriteInt(DWORD dwOriginAddress, unsigned int dwValue);
		static void WriteDouble(DWORD dwOriginAddress, double dwValue);
		static void CodeCave(void* ptrCodeCave, DWORD dwOriginAddress, int nNOPCount);
		static void WriteByteArray(DWORD dwOriginAddress, unsigned char* ucValue, const int ucValueSize);
		static bool UseVirtuProtect;

        // Rechargeable Arrows - Gwen
		static unsigned int FindAoB(const char* sAoB, DWORD dwStartAddress, DWORD dwEndAddress, int nSkip);
		static unsigned int ReadAoB(const char* sAoB, unsigned char* pBuff, bool* pMask);
};