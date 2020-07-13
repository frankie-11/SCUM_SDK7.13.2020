# SCUM_SDK7.13.2020


void OnAttach()
{
    Helper::OpenConsole();

    G::GameBase = (DWORD64)GetModuleHandleA(NULL);

    G::GameWnd = FindWindowA(E("UnrealWindow"), NULL);

	printf("Welcome frankie, starting things up...\n");

	auto address = FindPattern(GetModuleHandleW(nullptr), reinterpret_cast<const unsigned char*>("\x49\x63\xC8\x48\x8D\x14\x40\x48\x8B\x05\x00\x00\x00\x00\x48\x8B\x0C\xC8\x48\x8D\x04\xD1"), "xxxxxxxxxx????xxxxxxxx");
	if (address == -1)
		return;

	auto address2 = (DWORD64)((DWORD64)GetModuleHandleA(NULL) + uNamePool); // GNames
	if (address2 == -1)
		return;


	auto offset = *reinterpret_cast<uint32_t*>(address + 0xA);

	SDK::UObject::GObjects = reinterpret_cast<decltype(SDK::UObject::GObjects)>(address + 0xE + offset);

	SDK::FName::GNames = (SDK::TNameEntryArray*)address2;





	printf("SDK::UObject::GObjects - %p\n", (uint64_t)SDK::UObject::GObjects);
	printf("SDK::FName::GNames - %p\n", (uint64_t)SDK::FName::GNames);

	

	printf("Goodbye\n");

 

}
