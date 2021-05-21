﻿#include "pch.h"
#include <iostream>
#include <stdio.h>

typedef int32_t TypeIndex;
typedef int32_t TypeDefinitionIndex;
typedef int32_t FieldIndex;
typedef int32_t DefaultValueIndex;
typedef int32_t DefaultValueDataIndex;
typedef int32_t CustomAttributeIndex;
typedef int32_t ParameterIndex;
typedef int32_t MethodIndex;
typedef int32_t GenericMethodIndex;
typedef int32_t PropertyIndex;
typedef int32_t EventIndex;
typedef int32_t GenericContainerIndex;
typedef int32_t GenericParameterIndex;
typedef int16_t GenericParameterConstraintIndex;
typedef int32_t NestedTypeIndex;
typedef int32_t InterfacesIndex;
typedef int32_t VTableIndex;
typedef int32_t InterfaceOffsetIndex;
typedef int32_t RGCTXIndex;
typedef int32_t StringIndex;
typedef int32_t StringLiteralIndex;
typedef int32_t GenericInstIndex;
typedef int32_t ImageIndex;
typedef int32_t AssemblyIndex;
typedef int32_t InteropDataIndex;

typedef struct Il2CppStringLiteral
{
	uint32_t length;
	StringLiteralIndex dataIndex;
} Il2CppStringLiteral;

typedef struct Il2CppMethodDefinition
{
	StringIndex nameIndex;
	TypeDefinitionIndex declaringType;
	TypeIndex returnType;
	ParameterIndex parameterStart;
	GenericContainerIndex genericContainerIndex;
	MethodIndex methodIndex;
	MethodIndex invokerIndex;
	MethodIndex reversePInvokeWrapperIndex;
	RGCTXIndex rgctxStartIndex;
	int32_t rgctxCount;
	uint32_t token;
	uint16_t flags;
	uint16_t iflags;
	uint16_t slot;
	uint16_t parameterCount;
} Il2CppMethodDefinition;

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

int length(const unsigned char* s)
{
	int i = 0;
	while (s[i] != '\0')
	{
		i++;
	}
	return i;
}

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
	printf("stringLiteral count %d 0x%X\n", header->stringLiteralCount, header->stringLiteralOffset);
	printf("stringLiteralData count %d offset 0x%X\n", header->stringLiteralDataCount, header->stringLiteralDataOffset);
	printf("string count %d offset 0x%X\n", header->stringCount, header->stringOffset);
	printf("events count %d offset 0x%X\n", header->eventsCount, header->eventsOffset);
	printf("properties count offset 0x%X %d\n", header->propertiesCount, header->propertiesOffset);
	printf("methods count offset 0x%X %d\n", header->methodsCount, header->methodsOffset);
	printf("parameterDefaultValues count %d offset 0x%X\n", header->parameterDefaultValuesCount, header->parameterDefaultValuesOffset);
	printf("fieldDefaultValues count %d\n", header->fieldDefaultValuesCount);
	printf("fieldAndParameterDefaultValueData count %d offset 0x%X\n", header->fieldAndParameterDefaultValueDataCount, header->fieldAndParameterDefaultValueDataOffset);
	printf("fieldMarshaledSizes count %d offset 0x%X\n", header->fieldMarshaledSizesCount, header->fieldMarshaledSizesOffset);
	printf("parameters count %d offset 0x%X\n", header->parametersCount, header->parametersOffset);
	printf("fields count %d offset 0x%X\n", header->fieldsCount, header->fieldsOffset);
	printf("genericParameters count %d offset 0x%X\n", header->genericParametersCount, header->genericParameterConstraintsOffset);
	printf("genericParameterConstraintscount %d offset 0x%X\n", header->genericParameterConstraintsCount, header->genericParameterConstraintsOffset);
	printf("genericContainersCount count %d offset 0x%X\n", header->genericContainersCount, header->genericContainersOffset);
	printf("nestedTypesCount count %d offset 0x%X\n", header->nestedTypesCount, header->nestedTypesOffset);
	printf("interfacesCount count %d offset 0x%X\n", header->interfacesCount, header->interfacesOffset);
	printf("vtableMethodsCount count %d offset 0x%X\n", header->vtableMethodsCount, header->vtableMethodsOffset);
	printf("interfaceOffsetsCount count %d offset 0x%X\n", header->interfaceOffsetsCount, header->interfaceOffsetsOffset);
	printf("typeDefinitionsCount count %d offset 0x%X\n", header->typeDefinitionsCount, header->typeDefinitionsOffset);
	printf("rgctxEntriesCount count %d offset 0x%X\n", header->rgctxEntriesCount, header->rgctxEntriesOffset);
	printf("imagesCount count %d offset 0x%X\n", header->imagesCount, header->imagesOffset);
	printf("assembliesCount count %d offset 0x%X\n", header->assembliesCount, header->assembliesOffset);
	printf("metadataUsageListsCount count %d offset 0x%X\n", header->metadataUsageListsCount, header->metadataUsageListsOffset);
	printf("metadataUsagePairsCount count %d offset 0x%X\n", header->metadataUsagePairsCount, header->metadataUsagePairsOffset);
	printf("fieldRefsCount count %d offset 0x%X\n", header->fieldRefsCount, header->fieldRefsOffset);
	printf("referencedAssembliesCount count %d offset 0x%X\n", header->referencedAssembliesCount, header->referencedAssembliesOffset);
	printf("attributesInfoCount count %d offset 0x%X\n", header->attributesInfoCount, header->attributesInfoOffset);
	printf("attributeTypesCount count %d offset 0x%X\n", header->attributeTypesCount, header->attributeTypesOffset);
	printf("unresolvedVirtualCallParameterTypesCount count %d offset 0x%X\n", header->unresolvedVirtualCallParameterTypesCount, header->unresolvedVirtualCallParameterTypesOffset);
	printf("unresolvedVirtualCallParameterRangesCount count %d offset 0x%X\n", header->unresolvedVirtualCallParameterRangesCount, header->unresolvedVirtualCallParameterRangesOffset);
	printf("windowsRuntimeTypeNamesSize %d offset 0x%X\n", header->windowsRuntimeTypeNamesSize, header->windowsRuntimeTypeNamesOffset);
	printf("exportedTypeDefinitionsCount count %d offset 0x%X\n", header->exportedTypeDefinitionsCount, header->exportedTypeDefinitionsOffset);

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
		//printf("%s [0x%X]\n", stringLiteral, stringLiteralTable[i].dataIndex);
		delete[] stringLiteral;
	}

	int methodInfoDefinitionTableCount = header->methodsCount / sizeof(Il2CppMethodDefinition);
	printf("method size %d\n", methodInfoDefinitionTableCount);

	for (int i = 0; i < methodInfoDefinitionTableCount; i++)
	{
	}

	for (int i = 0; i < header->stringCount; i++)
	{
		const unsigned char* string = metadata + header->stringOffset + i;
		int l = length(string);
		i += l;
	}

	delete[] metadata;
	return 0;
}


