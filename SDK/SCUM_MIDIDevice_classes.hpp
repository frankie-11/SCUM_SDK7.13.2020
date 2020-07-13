#pragma once

// SCUM (4.24) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// Class MIDIDevice.MIDIDeviceController
// 0x0038 (0x0060 - 0x0028)
class UMIDIDeviceController : public UObject
{
public:
	struct FScriptMulticastDelegate                    OnMidiEvent;                                              // 0x0028(0x0001) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	unsigned char                                      UnknownData00[0xF];                                       // 0x0028(0x000F) FIX WRONG TYPE SIZE OF PREVIUS PROPERTY
	int                                                DeviceID;                                                 // 0x0038(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FString                                     DeviceName;                                               // 0x0040(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	unsigned char                                      UnknownData01[0x10];                                      // 0x0050(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class MIDIDevice.MIDIDeviceController");
		return ptr;
	}

};


// Class MIDIDevice.MIDIDeviceInputController
// 0x0098 (0x00C0 - 0x0028)
class UMIDIDeviceInputController : public UObject
{
public:
	struct FScriptMulticastDelegate                    OnMIDINoteOn;                                             // 0x0028(0x0001) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	unsigned char                                      UnknownData00[0xF];                                       // 0x0028(0x000F) FIX WRONG TYPE SIZE OF PREVIUS PROPERTY
	struct FScriptMulticastDelegate                    OnMIDINoteOff;                                            // 0x0038(0x0001) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	unsigned char                                      UnknownData01[0xF];                                       // 0x0038(0x000F) FIX WRONG TYPE SIZE OF PREVIUS PROPERTY
	struct FScriptMulticastDelegate                    OnMIDIPitchBend;                                          // 0x0048(0x0001) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	unsigned char                                      UnknownData02[0xF];                                       // 0x0048(0x000F) FIX WRONG TYPE SIZE OF PREVIUS PROPERTY
	struct FScriptMulticastDelegate                    OnMIDIAftertouch;                                         // 0x0058(0x0001) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	unsigned char                                      UnknownData03[0xF];                                       // 0x0058(0x000F) FIX WRONG TYPE SIZE OF PREVIUS PROPERTY
	struct FScriptMulticastDelegate                    OnMIDIControlChange;                                      // 0x0068(0x0001) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	unsigned char                                      UnknownData04[0xF];                                       // 0x0068(0x000F) FIX WRONG TYPE SIZE OF PREVIUS PROPERTY
	struct FScriptMulticastDelegate                    OnMIDIProgramChange;                                      // 0x0078(0x0001) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	unsigned char                                      UnknownData05[0xF];                                       // 0x0078(0x000F) FIX WRONG TYPE SIZE OF PREVIUS PROPERTY
	struct FScriptMulticastDelegate                    OnMIDIChannelAftertouch;                                  // 0x0088(0x0001) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	unsigned char                                      UnknownData06[0xF];                                       // 0x0088(0x000F) FIX WRONG TYPE SIZE OF PREVIUS PROPERTY
	int                                                DeviceID;                                                 // 0x0098(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FString                                     DeviceName;                                               // 0x00A0(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	unsigned char                                      UnknownData07[0x10];                                      // 0x00B0(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class MIDIDevice.MIDIDeviceInputController");
		return ptr;
	}

};


// Class MIDIDevice.MIDIDeviceManager
// 0x0000 (0x0028 - 0x0028)
class UMIDIDeviceManager : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class MIDIDevice.MIDIDeviceManager");
		return ptr;
	}

};


// Class MIDIDevice.MIDIDeviceOutputController
// 0x0020 (0x0048 - 0x0028)
class UMIDIDeviceOutputController : public UObject
{
public:
	int                                                DeviceID;                                                 // 0x0028(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FString                                     DeviceName;                                               // 0x0030(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0040(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class MIDIDevice.MIDIDeviceOutputController");
		return ptr;
	}


	void SendMIDIProgramChange(int* Channel, int* ProgramNumber);
	void SendMIDIPitchBend(int* Channel, int* Pitch);
	void SendMIDINoteOn(int* Channel, int* Note, int* Velocity);
	void SendMIDINoteOff(int* Channel, int* Note, int* Velocity);
	void SendMIDINoteAftertouch(int* Channel, int* Note, float* Amount);
	void SendMIDIEvent(EMIDIEventType* EventType, int* Channel, int* data1, int* data2);
	void SendMIDIControlChange(int* Channel, int* Type, int* Value);
	void SendMIDIChannelAftertouch(int* Channel, float* Amount);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
