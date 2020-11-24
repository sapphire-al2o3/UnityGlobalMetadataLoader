// UnityGlobalMetadataLoader.cpp : このファイルには 'main' 関数が含まれています。プログラム実行の開始と終了がそこで行われます。
//

#include "pch.h"
#include <iostream>
#include <stdio.h>

typedef int32_t StringLiteralIndex;

typedef struct Il2CppStringLiteral
{
	uint32_t length;
	StringLiteralIndex dataIndex;
} Il2CppStringLiteral;

#pragma pack(push, p1, 4)
typedef struct Il2CppGlobalMetadataHeader
{
	int32_t sanity;
	int32_t version;
	int32_t stringLiteralOffset; // string data for managed code
	int32_t stringLiteralCount;
	int32_t stringLiteralDataOffset;
	int32_t stringLiteralDataCount;
	int32_t stringOffset; // string data for metadata
	int32_t stringCount;
	int32_t eventsOffset; // Il2CppEventDefinition
	int32_t eventsCount;
	int32_t propertiesOffset; // Il2CppPropertyDefinition
	int32_t propertiesCount;
	int32_t methodsOffset; // Il2CppMethodDefinition
	int32_t methodsCount;
	int32_t parameterDefaultValuesOffset; // Il2CppParameterDefaultValue
	int32_t parameterDefaultValuesCount;
	int32_t fieldDefaultValuesOffset; // Il2CppFieldDefaultValue
	int32_t fieldDefaultValuesCount;
	int32_t fieldAndParameterDefaultValueDataOffset; // uint8_t
	int32_t fieldAndParameterDefaultValueDataCount;
	int32_t fieldMarshaledSizesOffset; // Il2CppFieldMarshaledSize
	int32_t fieldMarshaledSizesCount;
	int32_t parametersOffset; // Il2CppParameterDefinition
	int32_t parametersCount;
	int32_t fieldsOffset; // Il2CppFieldDefinition
	int32_t fieldsCount;
	int32_t genericParametersOffset; // Il2CppGenericParameter
	int32_t genericParametersCount;
	int32_t genericParameterConstraintsOffset; // TypeIndex
	int32_t genericParameterConstraintsCount;
	int32_t genericContainersOffset; // Il2CppGenericContainer
	int32_t genericContainersCount;
	int32_t nestedTypesOffset; // TypeDefinitionIndex
	int32_t nestedTypesCount;
	int32_t interfacesOffset; // TypeIndex
	int32_t interfacesCount;
	int32_t vtableMethodsOffset; // EncodedMethodIndex
	int32_t vtableMethodsCount;
	int32_t interfaceOffsetsOffset; // Il2CppInterfaceOffsetPair
	int32_t interfaceOffsetsCount;
	int32_t typeDefinitionsOffset; // Il2CppTypeDefinition
	int32_t typeDefinitionsCount;
	int32_t rgctxEntriesOffset; // Il2CppRGCTXDefinition
	int32_t rgctxEntriesCount;
	int32_t imagesOffset; // Il2CppImageDefinition
	int32_t imagesCount;
	int32_t assembliesOffset; // Il2CppAssemblyDefinition
	int32_t assembliesCount;
	int32_t metadataUsageListsOffset; // Il2CppMetadataUsageList
	int32_t metadataUsageListsCount;
	int32_t metadataUsagePairsOffset; // Il2CppMetadataUsagePair
	int32_t metadataUsagePairsCount;
	int32_t fieldRefsOffset; // Il2CppFieldRef
	int32_t fieldRefsCount;
	int32_t referencedAssembliesOffset; // int32_t
	int32_t referencedAssembliesCount;
	int32_t attributesInfoOffset; // Il2CppCustomAttributeTypeRange
	int32_t attributesInfoCount;
	int32_t attributeTypesOffset; // TypeIndex
	int32_t attributeTypesCount;
	int32_t unresolvedVirtualCallParameterTypesOffset; // TypeIndex
	int32_t unresolvedVirtualCallParameterTypesCount;
	int32_t unresolvedVirtualCallParameterRangesOffset; // Il2CppRange
	int32_t unresolvedVirtualCallParameterRangesCount;
	int32_t windowsRuntimeTypeNamesOffset; // Il2CppWindowsRuntimeTypeNamePair
	int32_t windowsRuntimeTypeNamesSize;
	int32_t exportedTypeDefinitionsOffset; // TypeDefinitionIndex
	int32_t exportedTypeDefinitionsCount;
} Il2CppGlobalMetadataHeader;
#pragma pack(pop, p1)

int main(int argc, char* argv[])
{
	if (argc < 2)
	{
		std::cout << argc << std::endl;
		return 0;
	}

	FILE* fp;
	fopen_s(&fp, argv[1], "rb");

	if (fp == nullptr)
	{
		return 0;
	}

	fseek(fp, 0, SEEK_END);
	size_t size = ftell(fp);

	unsigned char* metadata = new unsigned char[size];

	fseek(fp, 0, SEEK_SET);
	fread(metadata, size, 1, fp);
	fclose(fp);
	
	printf("size %d\n", size);

	Il2CppGlobalMetadataHeader* header = reinterpret_cast<Il2CppGlobalMetadataHeader*>(metadata);

	if (header->sanity != 0xFAB11BAF)
	{
		return 0;
	}

	if (header->version != 24)
	{
		return 0;
	}

	printf("%X\n", header->sanity);
	std::cout << header->version << std::endl;
	//std::cout << header->stringLiteralOffset << std::endl;
	printf("%d 0x%X\n", header->stringLiteralOffset, header->stringLiteralOffset);
	std::cout << header->stringLiteralCount << std::endl;
	//std::cout << header->stringLiteralDataOffset << std::endl;
	printf("%d 0x%X\n", header->stringLiteralDataOffset, header->stringLiteralDataOffset);
	std::cout << header->stringLiteralDataCount << std::endl;
	std::cout << header->stringOffset << std::endl;
	std::cout << header->stringCount << std::endl;
	
	int stringLiteralTableCount = header->stringLiteralCount / sizeof(Il2CppStringLiteral);

	printf("stringLiteral size %d\n", stringLiteralTableCount);

	Il2CppStringLiteral* stringLiteralTable = reinterpret_cast<Il2CppStringLiteral*>(metadata + header->stringLiteralOffset);

	// print stringLiteral
	for (int i = 0; i < stringLiteralTableCount; i++)
	{
		char* stringLiteral = new char[stringLiteralTable[i].length + 1];
		stringLiteral[stringLiteralTable[i].length] = '\0';
		unsigned char* stringLiteralData = metadata + header->stringLiteralDataOffset + stringLiteralTable[i].dataIndex;
		memcpy(stringLiteral, stringLiteralData, stringLiteralTable[i].length);
		printf("%s [0x%X]\n", stringLiteral, stringLiteralTable[i].dataIndex);
		delete[] stringLiteral;
	}

	//const unsigned char* stringTable = metadata + header->stringOffset;
	//printf("%s", stringTable);

	delete[] metadata;
	return 0;
}


