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

typedef struct Il2CppMethodDefinition_v24_2018_4
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
} Il2CppMethodDefinition_v24_2018_4;

typedef struct Il2CppMethodDefinition_v24_2019_4
{
    StringIndex nameIndex;
    TypeDefinitionIndex declaringType;
    TypeIndex returnType;
    ParameterIndex parameterStart;
    GenericContainerIndex genericContainerIndex;
    uint32_t token;
    uint16_t flags;
    uint16_t iflags;
    uint16_t slot;
    uint16_t parameterCount;
} Il2CppMethodDefinition_v24_2019_4;

typedef struct Il2CppMethodDefinition_v27
{
    StringIndex nameIndex;
    TypeDefinitionIndex declaringType;
    TypeIndex returnType;
    ParameterIndex parameterStart;
    GenericContainerIndex genericContainerIndex;
    uint32_t token;
    uint16_t flags;
    uint16_t iflags;
    uint16_t slot;
    uint16_t parameterCount;
} Il2CppMethodDefinition_v27;

typedef struct Il2CppTypeDefinition_v24_2018_4
{
    StringIndex nameIndex;
    StringIndex namespaceIndex;
    TypeIndex byvalTypeIndex;
    TypeIndex byrefTypeIndex;

    TypeIndex declaringTypeIndex;
    TypeIndex parentIndex;
    TypeIndex elementTypeIndex; // we can probably remove this one. Only used for enums

    RGCTXIndex rgctxStartIndex;
    int32_t rgctxCount;

    GenericContainerIndex genericContainerIndex;

    uint32_t flags;

    FieldIndex fieldStart;
    MethodIndex methodStart;
    EventIndex eventStart;
    PropertyIndex propertyStart;
    NestedTypeIndex nestedTypesStart;
    InterfacesIndex interfacesStart;
    VTableIndex vtableStart;
    InterfacesIndex interfaceOffsetsStart;

    uint16_t method_count;
    uint16_t property_count;
    uint16_t field_count;
    uint16_t event_count;
    uint16_t nested_type_count;
    uint16_t vtable_count;
    uint16_t interfaces_count;
    uint16_t interface_offsets_count;

    // bitfield to portably encode boolean values as single bits
    // 01 - valuetype;
    // 02 - enumtype;
    // 03 - has_finalize;
    // 04 - has_cctor;
    // 05 - is_blittable;
    // 06 - is_import_or_windows_runtime;
    // 07-10 - One of nine possible PackingSize values (0, 1, 2, 4, 8, 16, 32, 64, or 128)
    uint32_t bitfield;
    uint32_t token;
} Il2CppTypeDefinition_v24_2018_4;

typedef struct Il2CppTypeDefinition_v24_2019_4
{
    StringIndex nameIndex;
    StringIndex namespaceIndex;
    TypeIndex byvalTypeIndex;
    TypeIndex byrefTypeIndex;

    TypeIndex declaringTypeIndex;
    TypeIndex parentIndex;
    TypeIndex elementTypeIndex; // we can probably remove this one. Only used for enums

    GenericContainerIndex genericContainerIndex;

    uint32_t flags;

    FieldIndex fieldStart;
    MethodIndex methodStart;
    EventIndex eventStart;
    PropertyIndex propertyStart;
    NestedTypeIndex nestedTypesStart;
    InterfacesIndex interfacesStart;
    VTableIndex vtableStart;
    InterfacesIndex interfaceOffsetsStart;

    uint16_t method_count;
    uint16_t property_count;
    uint16_t field_count;
    uint16_t event_count;
    uint16_t nested_type_count;
    uint16_t vtable_count;
    uint16_t interfaces_count;
    uint16_t interface_offsets_count;

    // bitfield to portably encode boolean values as single bits
    // 01 - valuetype;
    // 02 - enumtype;
    // 03 - has_finalize;
    // 04 - has_cctor;
    // 05 - is_blittable;
    // 06 - is_import_or_windows_runtime;
    // 07-10 - One of nine possible PackingSize values (0, 1, 2, 4, 8, 16, 32, 64, or 128)
    // 11 - PackingSize is default
    // 12 - ClassSize is default
    // 13-16 - One of nine possible PackingSize values (0, 1, 2, 4, 8, 16, 32, 64, or 128) - the specified packing size (even for explicit layouts)
    uint32_t bitfield;
    uint32_t token;
} Il2CppTypeDefinition_v24_2019_4;

typedef struct Il2CppTypeDefinition_v27
{
    StringIndex nameIndex;
    StringIndex namespaceIndex;
    TypeIndex byvalTypeIndex;

    TypeIndex declaringTypeIndex;
    TypeIndex parentIndex;
    TypeIndex elementTypeIndex; // we can probably remove this one. Only used for enums

    GenericContainerIndex genericContainerIndex;

    uint32_t flags;

    FieldIndex fieldStart;
    MethodIndex methodStart;
    EventIndex eventStart;
    PropertyIndex propertyStart;
    NestedTypeIndex nestedTypesStart;
    InterfacesIndex interfacesStart;
    VTableIndex vtableStart;
    InterfacesIndex interfaceOffsetsStart;

    uint16_t method_count;
    uint16_t property_count;
    uint16_t field_count;
    uint16_t event_count;
    uint16_t nested_type_count;
    uint16_t vtable_count;
    uint16_t interfaces_count;
    uint16_t interface_offsets_count;

    // bitfield to portably encode boolean values as single bits
    // 01 - valuetype;
    // 02 - enumtype;
    // 03 - has_finalize;
    // 04 - has_cctor;
    // 05 - is_blittable;
    // 06 - is_import_or_windows_runtime;
    // 07-10 - One of nine possible PackingSize values (0, 1, 2, 4, 8, 16, 32, 64, or 128)
    // 11 - PackingSize is default
    // 12 - ClassSize is default
    // 13-16 - One of nine possible PackingSize values (0, 1, 2, 4, 8, 16, 32, 64, or 128) - the specified packing size (even for explicit layouts)
    uint32_t bitfield;
    uint32_t token;
} Il2CppTypeDefinition_v27;

#pragma pack(push, p1, 4)
struct Header
{
    int32_t sanity;
    int32_t version;
};
#pragma pack(pop, p1)

#pragma pack(push, p1, 4)
typedef struct Il2CppGlobalMetadataHeader_v24_2018_4
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
} Il2CppGlobalMetadataHeader_v24_2018_4;
#pragma pack(pop, p1)

#pragma pack(push, p1,4)
typedef struct Il2CppGlobalMetadataHeader_v24_2019_4
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
} Il2CppGlobalMetadataHeader_v24_2019_4;
#pragma pack(pop, p1)

#pragma pack(push, p1,4)
typedef struct Il2CppGlobalMetadataHeader_v27
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
    int32_t imagesOffset; // Il2CppImageDefinition
    int32_t imagesCount;
    int32_t assembliesOffset; // Il2CppAssemblyDefinition
    int32_t assembliesCount;
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
    int32_t unresolvedVirtualCallParameterRangesOffset; // Il2CppMetadataRange
    int32_t unresolvedVirtualCallParameterRangesCount;
    int32_t windowsRuntimeTypeNamesOffset; // Il2CppWindowsRuntimeTypeNamePair
    int32_t windowsRuntimeTypeNamesSize;
    int32_t windowsRuntimeStringsOffset; // const char*
    int32_t windowsRuntimeStringsSize;
    int32_t exportedTypeDefinitionsOffset; // TypeDefinitionIndex
    int32_t exportedTypeDefinitionsCount;
} Il2CppGlobalMetadataHeader_v27;
#pragma pack(pop, p1)

#pragma pack(push, p1,4)
typedef struct Il2CppGlobalMetadataHeader_v29
{
    int32_t sanity;
    int32_t version;
    int32_t stringLiteralOffset; // string data for managed code
    int32_t stringLiteralSize;
    int32_t stringLiteralDataOffset;
    int32_t stringLiteralDataSize;
    int32_t stringOffset; // string data for metadata
    int32_t stringSize;
    int32_t eventsOffset; // Il2CppEventDefinition
    int32_t eventsSize;
    int32_t propertiesOffset; // Il2CppPropertyDefinition
    int32_t propertiesSize;
    int32_t methodsOffset; // Il2CppMethodDefinition
    int32_t methodsSize;
    int32_t parameterDefaultValuesOffset; // Il2CppParameterDefaultValue
    int32_t parameterDefaultValuesSize;
    int32_t fieldDefaultValuesOffset; // Il2CppFieldDefaultValue
    int32_t fieldDefaultValuesSize;
    int32_t fieldAndParameterDefaultValueDataOffset; // uint8_t
    int32_t fieldAndParameterDefaultValueDataSize;
    int32_t fieldMarshaledSizesOffset; // Il2CppFieldMarshaledSize
    int32_t fieldMarshaledSizesSize;
    int32_t parametersOffset; // Il2CppParameterDefinition
    int32_t parametersSize;
    int32_t fieldsOffset; // Il2CppFieldDefinition
    int32_t fieldsSize;
    int32_t genericParametersOffset; // Il2CppGenericParameter
    int32_t genericParametersSize;
    int32_t genericParameterConstraintsOffset; // TypeIndex
    int32_t genericParameterConstraintsSize;
    int32_t genericContainersOffset; // Il2CppGenericContainer
    int32_t genericContainersSize;
    int32_t nestedTypesOffset; // TypeDefinitionIndex
    int32_t nestedTypesSize;
    int32_t interfacesOffset; // TypeIndex
    int32_t interfacesSize;
    int32_t vtableMethodsOffset; // EncodedMethodIndex
    int32_t vtableMethodsSize;
    int32_t interfaceOffsetsOffset; // Il2CppInterfaceOffsetPair
    int32_t interfaceOffsetsSize;
    int32_t typeDefinitionsOffset; // Il2CppTypeDefinition
    int32_t typeDefinitionsSize;
    int32_t imagesOffset; // Il2CppImageDefinition
    int32_t imagesSize;
    int32_t assembliesOffset; // Il2CppAssemblyDefinition
    int32_t assembliesSize;
    int32_t fieldRefsOffset; // Il2CppFieldRef
    int32_t fieldRefsSize;
    int32_t referencedAssembliesOffset; // int32_t
    int32_t referencedAssembliesSize;
    int32_t attributeDataOffset;
    int32_t attributeDataSize;
    int32_t attributeDataRangeOffset;
    int32_t attributeDataRangeSize;
    int32_t unresolvedIndirectCallParameterTypesOffset; // TypeIndex
    int32_t unresolvedIndirectCallParameterTypesSize;
    int32_t unresolvedIndirectCallParameterRangesOffset; // Il2CppMetadataRange
    int32_t unresolvedIndirectCallParameterRangesSize;
    int32_t windowsRuntimeTypeNamesOffset; // Il2CppWindowsRuntimeTypeNamePair
    int32_t windowsRuntimeTypeNamesSize;
    int32_t windowsRuntimeStringsOffset; // const char*
    int32_t windowsRuntimeStringsSize;
    int32_t exportedTypeDefinitionsOffset; // TypeDefinitionIndex
    int32_t exportedTypeDefinitionsSize;
} Il2CppGlobalMetadataHeader;
#pragma pack(pop, p1)

template <typename T>
struct GetMethodDefinition
{
};

template <>
struct GetMethodDefinition<Il2CppGlobalMetadataHeader_v29>
{
    using Method = Il2CppMethodDefinition_v27;
    using Type = Il2CppTypeDefinition_v27;
};

template <>
struct GetMethodDefinition<Il2CppGlobalMetadataHeader_v27>
{
    using Method = Il2CppMethodDefinition_v27;
    using Type = Il2CppTypeDefinition_v27;
};

template <>
struct GetMethodDefinition<Il2CppGlobalMetadataHeader_v24_2019_4>
{
    using Method = Il2CppMethodDefinition_v24_2019_4;
    using Type = Il2CppTypeDefinition_v24_2019_4;
};

template <>
struct GetMethodDefinition<Il2CppGlobalMetadataHeader_v24_2018_4>
{
    using Method = Il2CppMethodDefinition_v24_2018_4;
    using Type = Il2CppTypeDefinition_v24_2018_4;
};

int length(const unsigned char* s)
{
    int i = 0;
    while (s[i] != '\0')
    {
        i++;
    }
    return i;
}

int getTotalSize(const Il2CppGlobalMetadataHeader_v24_2018_4* header)
{
    int totalSize = 0;
    totalSize += header->stringLiteralCount;
    totalSize += header->stringLiteralDataCount;
    totalSize += header->stringCount;
    totalSize += header->eventsCount;
    totalSize += header->propertiesCount;
    totalSize += header->methodsCount;
    totalSize += header->parameterDefaultValuesCount;
    totalSize += header->fieldDefaultValuesCount;
    totalSize += header->fieldAndParameterDefaultValueDataCount;
    totalSize += header->fieldMarshaledSizesCount;
    totalSize += header->parametersCount;
    totalSize += header->fieldsCount;
    totalSize += header->genericParametersCount;
    totalSize += header->genericParameterConstraintsCount;
    totalSize += header->genericContainersCount;
    totalSize += header->nestedTypesCount;
    totalSize += header->interfacesCount;
    totalSize += header->vtableMethodsCount;
    totalSize += header->interfaceOffsetsCount;
    totalSize += header->typeDefinitionsCount;
    totalSize += header->rgctxEntriesCount;
    totalSize += header->imagesCount;
    totalSize += header->assembliesCount;
    totalSize += header->metadataUsageListsCount;
    totalSize += header->metadataUsagePairsCount;
    totalSize += header->fieldRefsCount;
    totalSize += header->referencedAssembliesCount;
    totalSize += header->attributesInfoCount;
    totalSize += header->attributeTypesCount;
    totalSize += header->unresolvedVirtualCallParameterTypesCount;
    totalSize += header->unresolvedVirtualCallParameterRangesCount;
    totalSize += header->windowsRuntimeTypeNamesSize;
    totalSize += header->exportedTypeDefinitionsCount;
    return totalSize;
}

void printHeader(const Il2CppGlobalMetadataHeader_v24_2018_4* header, int dataSize)
{
    printf("sanity 0x%X\n", header->sanity);
    printf("version %d\n", header->version);
    printf("stringLiteral count %d offset 0x%X %.2f%%\n", header->stringLiteralCount, header->stringLiteralOffset, header->stringLiteralCount * 100.0f / dataSize);
    printf("stringLiteralData count %d offset 0x%X %.2f%%\n", header->stringLiteralDataCount, header->stringLiteralDataOffset, header->stringLiteralDataCount * 100.0f / dataSize);
    printf("string count %d offset 0x%X %.2f%%\n", header->stringCount, header->stringOffset, header->stringCount * 100.0f / dataSize);
    printf("events count %d offset 0x%X %.2f%%\n", header->eventsCount, header->eventsOffset, header->eventsCount * 100.0f / dataSize);
    printf("properties count %d offset 0x%X %.2f%%\n", header->propertiesCount, header->propertiesOffset, header->propertiesCount * 100.0f / dataSize);
    printf("methods count %d offset 0x%X %.2f%%\n", header->methodsCount, header->methodsOffset, header->methodsCount * 100.0f / dataSize);
    printf("parameterDefaultValues count %d offset 0x%X %.2f%%\n", header->parameterDefaultValuesCount, header->parameterDefaultValuesOffset, header->parameterDefaultValuesCount * 100.0f / dataSize);
    printf("fieldDefaultValues count %d offset 0x%X %.2f%%\n", header->fieldDefaultValuesCount, header->fieldDefaultValuesOffset, header->fieldDefaultValuesCount * 100.0f / dataSize);
    printf("fieldAndParameterDefaultValueData count %d offset 0x%X %.2f%%\n", header->fieldAndParameterDefaultValueDataCount, header->fieldAndParameterDefaultValueDataOffset, header->fieldAndParameterDefaultValueDataCount * 100.0f / dataSize);
    printf("fieldMarshaledSizes count %d offset 0x%X %.2f%%\n", header->fieldMarshaledSizesCount, header->fieldMarshaledSizesOffset, header->fieldMarshaledSizesCount * 100.0f / dataSize);
    printf("parameters count %d offset 0x%X %.2f%%\n", header->parametersCount, header->parametersOffset, header->parametersCount * 100.0f / dataSize);
    printf("fields count %d offset 0x%X %.2f%%\n", header->fieldsCount, header->fieldsOffset, header->fieldsCount * 100.0f / dataSize);
    printf("genericParameters count %d offset 0x%X %.2f%%\n", header->genericParametersCount, header->genericParameterConstraintsOffset, header->genericParametersCount * 100.0f / dataSize);
    printf("genericParameterConstraints count %d offset 0x%X %.2f%%\n", header->genericParameterConstraintsCount, header->genericParameterConstraintsOffset, header->genericParameterConstraintsCount * 100.0f / dataSize);
    printf("genericContainers count %d offset 0x%X %.2f%%\n", header->genericContainersCount, header->genericContainersOffset, header->genericContainersCount * 100.0f / dataSize);
    printf("nestedTypes count %d offset 0x%X %.2f%%\n", header->nestedTypesCount, header->nestedTypesOffset, header->nestedTypesCount * 100.0f / dataSize);
    printf("interfaces count %d offset 0x%X %.2f%%\n", header->interfacesCount, header->interfacesOffset, header->interfacesCount * 100.0f / dataSize);
    printf("vtableMethods count %d offset 0x%X %.2f%%\n", header->vtableMethodsCount, header->vtableMethodsOffset, header->vtableMethodsCount * 100.0f / dataSize);
    printf("interfaceOffsets count %d offset 0x%X %.2f%%\n", header->interfaceOffsetsCount, header->interfaceOffsetsOffset, header->interfaceOffsetsCount * 100.0f / dataSize);
    printf("typeDefinitions count %d offset 0x%X %.2f%%\n", header->typeDefinitionsCount, header->typeDefinitionsOffset, header->typeDefinitionsCount * 100.0f / dataSize);
    printf("rgctxEntries count %d offset 0x%X %.2f%%\n", header->rgctxEntriesCount, header->rgctxEntriesOffset, header->rgctxEntriesCount * 100.0f / dataSize);
    printf("images count %d offset 0x%X %.2f%%\n", header->imagesCount, header->imagesOffset, header->imagesCount * 100.0f / dataSize);
    printf("assemblies count %d offset 0x%X %.2f%%\n", header->assembliesCount, header->assembliesOffset, header->assembliesCount * 100.0f / dataSize);
    printf("metadataUsageLists count %d offset 0x%X %.2f%%\n", header->metadataUsageListsCount, header->metadataUsageListsOffset, header->metadataUsageListsCount * 100.0f / dataSize);
    printf("metadataUsagePairs count %d offset 0x%X %.2f%%\n", header->metadataUsagePairsCount, header->metadataUsagePairsOffset, header->metadataUsagePairsCount * 100.0f / dataSize);
    printf("fieldRefs count %d offset 0x%X %.2f%%\n", header->fieldRefsCount, header->fieldRefsOffset, header->fieldRefsCount * 100.0f / dataSize);
    printf("referencedAssemblies count %d offset 0x%X %.2f%%\n", header->referencedAssembliesCount, header->referencedAssembliesOffset, header->referencedAssembliesCount * 100.0f / dataSize);
    printf("attributesInfo count %d offset 0x%X %.2f%%\n", header->attributesInfoCount, header->attributesInfoOffset, header->attributesInfoCount * 100.0f / dataSize);
    printf("attributeTypes count %d offset 0x%X %.2f%%\n", header->attributeTypesCount, header->attributeTypesOffset, header->attributeTypesCount * 100.0f / dataSize);
    printf("unresolvedVirtualCallParameterTypes count %d offset 0x%X %.2f%%\n", header->unresolvedVirtualCallParameterTypesCount, header->unresolvedVirtualCallParameterTypesOffset, header->unresolvedVirtualCallParameterTypesCount * 100.0f / dataSize);
    printf("unresolvedVirtualCallParameterRanges count %d offset 0x%X %.2f%%\n", header->unresolvedVirtualCallParameterRangesCount, header->unresolvedVirtualCallParameterRangesOffset, header->unresolvedVirtualCallParameterRangesCount * 100.0f / dataSize);
    printf("windowsRuntimeTypeNames size %d offset 0x%X %.2f%%\n", header->windowsRuntimeTypeNamesSize, header->windowsRuntimeTypeNamesOffset, header->windowsRuntimeTypeNamesSize * 100.0f / dataSize);
    printf("exportedTypeDefinitions count %d offset 0x%X %.2f%%\n", header->exportedTypeDefinitionsCount, header->exportedTypeDefinitionsOffset, header->exportedTypeDefinitionsCount * 100.0f / dataSize);
}

int getTotalSize(const Il2CppGlobalMetadataHeader_v24_2019_4* header)
{
    int totalSize = 0;
    totalSize += header->stringLiteralCount;
    totalSize += header->stringLiteralDataCount;
    totalSize += header->stringCount;
    totalSize += header->eventsCount;
    totalSize += header->propertiesCount;
    totalSize += header->methodsCount;
    totalSize += header->parameterDefaultValuesCount;
    totalSize += header->fieldDefaultValuesCount;
    totalSize += header->fieldAndParameterDefaultValueDataCount;
    totalSize += header->fieldMarshaledSizesCount;
    totalSize += header->parametersCount;
    totalSize += header->fieldsCount;
    totalSize += header->genericParametersCount;
    totalSize += header->genericParameterConstraintsCount;
    totalSize += header->genericContainersCount;
    totalSize += header->nestedTypesCount;
    totalSize += header->interfacesCount;
    totalSize += header->vtableMethodsCount;
    totalSize += header->interfaceOffsetsCount;
    totalSize += header->typeDefinitionsCount;
    totalSize += header->imagesCount;
    totalSize += header->assembliesCount;
    totalSize += header->metadataUsageListsCount;
    totalSize += header->metadataUsagePairsCount;
    totalSize += header->fieldRefsCount;
    totalSize += header->referencedAssembliesCount;
    totalSize += header->attributesInfoCount;
    totalSize += header->attributeTypesCount;
    totalSize += header->unresolvedVirtualCallParameterTypesCount;
    totalSize += header->unresolvedVirtualCallParameterRangesCount;
    totalSize += header->windowsRuntimeTypeNamesSize;
    totalSize += header->exportedTypeDefinitionsCount;
    return totalSize;
}

void printHeader(const Il2CppGlobalMetadataHeader_v24_2019_4* header, int dataSize)
{
    printf("sanity 0x%X\n", header->sanity);
    printf("version %d\n", header->version);
    printf("stringLiteral count %d offset 0x%X %.2f%%\n", header->stringLiteralCount, header->stringLiteralOffset, header->stringLiteralCount * 100.0f / dataSize);
    printf("stringLiteralData count %d offset 0x%X %.2f%%\n", header->stringLiteralDataCount, header->stringLiteralDataOffset, header->stringLiteralDataCount * 100.0f / dataSize);
    printf("string count %d offset 0x%X %.2f%%\n", header->stringCount, header->stringOffset, header->stringCount * 100.0f / dataSize);
    printf("events count %d offset 0x%X %.2f%%\n", header->eventsCount, header->eventsOffset, header->eventsCount * 100.0f / dataSize);
    printf("properties count %d offset 0x%X %.2f%%\n", header->propertiesCount, header->propertiesOffset, header->propertiesCount * 100.0f / dataSize);
    printf("methods count %d offset 0x%X %.2f%%\n", header->methodsCount, header->methodsOffset, header->methodsCount * 100.0f / dataSize);
    printf("parameterDefaultValues count %d offset 0x%X %.2f%%\n", header->parameterDefaultValuesCount, header->parameterDefaultValuesOffset, header->parameterDefaultValuesCount * 100.0f / dataSize);
    printf("fieldDefaultValues count %d offset 0x%X %.2f%%\n", header->fieldDefaultValuesCount, header->fieldDefaultValuesOffset, header->fieldDefaultValuesCount * 100.0f / dataSize);
    printf("fieldAndParameterDefaultValueData count %d offset 0x%X %.2f%%\n", header->fieldAndParameterDefaultValueDataCount, header->fieldAndParameterDefaultValueDataOffset, header->fieldAndParameterDefaultValueDataCount * 100.0f / dataSize);
    printf("fieldMarshaledSizes count %d offset 0x%X %.2f%%\n", header->fieldMarshaledSizesCount, header->fieldMarshaledSizesOffset, header->fieldMarshaledSizesCount * 100.0f / dataSize);
    printf("parameters count %d offset 0x%X %.2f%%\n", header->parametersCount, header->parametersOffset, header->parametersCount * 100.0f / dataSize);
    printf("fields count %d offset 0x%X %.2f%%\n", header->fieldsCount, header->fieldsOffset, header->fieldsCount * 100.0f / dataSize);
    printf("genericParameters count %d offset 0x%X %.2f%%\n", header->genericParametersCount, header->genericParameterConstraintsOffset, header->genericParametersCount * 100.0f / dataSize);
    printf("genericParameterConstraints count %d offset 0x%X %.2f%%\n", header->genericParameterConstraintsCount, header->genericParameterConstraintsOffset, header->genericParameterConstraintsCount * 100.0f / dataSize);
    printf("genericContainers count %d offset 0x%X %.2f%%\n", header->genericContainersCount, header->genericContainersOffset, header->genericContainersCount * 100.0f / dataSize);
    printf("nestedTypes count %d offset 0x%X %.2f%%\n", header->nestedTypesCount, header->nestedTypesOffset, header->nestedTypesCount * 100.0f / dataSize);
    printf("interfaces count %d offset 0x%X %.2f%%\n", header->interfacesCount, header->interfacesOffset, header->interfacesCount * 100.0f / dataSize);
    printf("vtableMethods count %d offset 0x%X %.2f%%\n", header->vtableMethodsCount, header->vtableMethodsOffset, header->vtableMethodsCount * 100.0f / dataSize);
    printf("interfaceOffsets count %d offset 0x%X %.2f%%\n", header->interfaceOffsetsCount, header->interfaceOffsetsOffset, header->interfaceOffsetsCount * 100.0f / dataSize);
    printf("typeDefinitions count %d offset 0x%X %.2f%%\n", header->typeDefinitionsCount, header->typeDefinitionsOffset, header->typeDefinitionsCount * 100.0f / dataSize);
    printf("images count %d offset 0x%X %.2f%%\n", header->imagesCount, header->imagesOffset, header->imagesCount * 100.0f / dataSize);
    printf("assemblies count %d offset 0x%X %.2f%%\n", header->assembliesCount, header->assembliesOffset, header->assembliesCount * 100.0f / dataSize);
    printf("metadataUsageLists count %d offset 0x%X %.2f%%\n", header->metadataUsageListsCount, header->metadataUsageListsOffset, header->metadataUsageListsCount * 100.0f / dataSize);
    printf("metadataUsagePairs count %d offset 0x%X %.2f%%\n", header->metadataUsagePairsCount, header->metadataUsagePairsOffset, header->metadataUsagePairsCount * 100.0f / dataSize);
    printf("fieldRefs count %d offset 0x%X %.2f%%\n", header->fieldRefsCount, header->fieldRefsOffset, header->fieldRefsCount * 100.0f / dataSize);
    printf("referencedAssemblies count %d offset 0x%X %.2f%%\n", header->referencedAssembliesCount, header->referencedAssembliesOffset, header->referencedAssembliesCount * 100.0f / dataSize);
    printf("attributesInfo count %d offset 0x%X %.2f%%\n", header->attributesInfoCount, header->attributesInfoOffset, header->attributesInfoCount * 100.0f / dataSize);
    printf("attributeTypes count %d offset 0x%X %.2f%%\n", header->attributeTypesCount, header->attributeTypesOffset, header->attributeTypesCount * 100.0f / dataSize);
    printf("unresolvedVirtualCallParameterTypes count %d offset 0x%X %.2f%%\n", header->unresolvedVirtualCallParameterTypesCount, header->unresolvedVirtualCallParameterTypesOffset, header->unresolvedVirtualCallParameterTypesCount * 100.0f / dataSize);
    printf("unresolvedVirtualCallParameterRanges count %d offset 0x%X %.2f%%\n", header->unresolvedVirtualCallParameterRangesCount, header->unresolvedVirtualCallParameterRangesOffset, header->unresolvedVirtualCallParameterRangesCount * 100.0f / dataSize);
    printf("windowsRuntimeTypeNames size %d offset 0x%X %.2f%%\n", header->windowsRuntimeTypeNamesSize, header->windowsRuntimeTypeNamesOffset, header->windowsRuntimeTypeNamesSize * 100.0f / dataSize);
    printf("exportedTypeDefinitions count %d offset 0x%X %.2f%%\n", header->exportedTypeDefinitionsCount, header->exportedTypeDefinitionsOffset, header->exportedTypeDefinitionsCount * 100.0f / dataSize);
}

int getTotalSize(const Il2CppGlobalMetadataHeader_v27* header)
{
    int totalSize = 0;
    totalSize += header->stringLiteralCount;
    totalSize += header->stringLiteralDataCount;
    totalSize += header->stringCount;
    totalSize += header->eventsCount;
    totalSize += header->propertiesCount;
    totalSize += header->methodsCount;
    totalSize += header->parameterDefaultValuesCount;
    totalSize += header->fieldDefaultValuesCount;
    totalSize += header->fieldAndParameterDefaultValueDataCount;
    totalSize += header->fieldMarshaledSizesCount;
    totalSize += header->parametersCount;
    totalSize += header->fieldsCount;
    totalSize += header->genericParametersCount;
    totalSize += header->genericParameterConstraintsCount;
    totalSize += header->genericContainersCount;
    totalSize += header->nestedTypesCount;
    totalSize += header->interfacesCount;
    totalSize += header->vtableMethodsCount;
    totalSize += header->interfaceOffsetsCount;
    totalSize += header->typeDefinitionsCount;
    totalSize += header->imagesCount;
    totalSize += header->assembliesCount;
    totalSize += header->fieldRefsCount;
    totalSize += header->referencedAssembliesCount;
    totalSize += header->attributesInfoCount;
    totalSize += header->attributeTypesCount;
    totalSize += header->unresolvedVirtualCallParameterTypesCount;
    totalSize += header->unresolvedVirtualCallParameterRangesCount;
    totalSize += header->windowsRuntimeTypeNamesSize;
    totalSize += header->windowsRuntimeStringsSize;
    totalSize += header->exportedTypeDefinitionsCount;
    return totalSize;
}

void printHeader(const Il2CppGlobalMetadataHeader_v27* header, int dataSize)
{
    printf("sanity 0x%X\n", header->sanity);
    printf("version %d\n", header->version);
    printf("stringLiteral count %d offset 0x%X %.2f%%\n", header->stringLiteralCount, header->stringLiteralOffset, header->stringLiteralCount * 100.0f / dataSize);
    printf("stringLiteralData count %d offset 0x%X %.2f%%\n", header->stringLiteralDataCount, header->stringLiteralDataOffset, header->stringLiteralDataCount * 100.0f / dataSize);
    printf("string count %d offset 0x%X %.2f%%\n", header->stringCount, header->stringOffset, header->stringCount * 100.0f / dataSize);
    printf("events count %d offset 0x%X %.2f%%\n", header->eventsCount, header->eventsOffset, header->eventsCount * 100.0f / dataSize);
    printf("properties count %d offset 0x%X %.2f%%\n", header->propertiesCount, header->propertiesOffset, header->propertiesCount * 100.0f / dataSize);
    printf("methods count %d offset 0x%X %.2f%%\n", header->methodsCount, header->methodsOffset, header->methodsCount * 100.0f / dataSize);
    printf("parameterDefaultValues count %d offset 0x%X %.2f%%\n", header->parameterDefaultValuesCount, header->parameterDefaultValuesOffset, header->parameterDefaultValuesCount * 100.0f / dataSize);
    printf("fieldDefaultValues count %d offset 0x%X %.2f%%\n", header->fieldDefaultValuesCount, header->fieldDefaultValuesOffset, header->fieldDefaultValuesCount * 100.0f / dataSize);
    printf("fieldAndParameterDefaultValueData count %d offset 0x%X %.2f%%\n", header->fieldAndParameterDefaultValueDataCount, header->fieldAndParameterDefaultValueDataOffset, header->fieldAndParameterDefaultValueDataCount * 100.0f / dataSize);
    printf("fieldMarshaledSizes count %d offset 0x%X %.2f%%\n", header->fieldMarshaledSizesCount, header->fieldMarshaledSizesOffset, header->fieldMarshaledSizesCount * 100.0f / dataSize);
    printf("parameters count %d offset 0x%X %.2f%%\n", header->parametersCount, header->parametersOffset, header->parametersCount * 100.0f / dataSize);
    printf("fields count %d offset 0x%X %.2f%%\n", header->fieldsCount, header->fieldsOffset, header->fieldsCount * 100.0f / dataSize);
    printf("genericParameters count %d offset 0x%X %.2f%%\n", header->genericParametersCount, header->genericParameterConstraintsOffset, header->genericParametersCount * 100.0f / dataSize);
    printf("genericParameterConstraints count %d offset 0x%X %.2f%%\n", header->genericParameterConstraintsCount, header->genericParameterConstraintsOffset, header->genericParameterConstraintsCount * 100.0f / dataSize);
    printf("genericContainers count %d offset 0x%X %.2f%%\n", header->genericContainersCount, header->genericContainersOffset, header->genericContainersCount * 100.0f / dataSize);
    printf("nestedTypes count %d offset 0x%X %.2f%%\n", header->nestedTypesCount, header->nestedTypesOffset, header->nestedTypesCount * 100.0f / dataSize);
    printf("interfaces count %d offset 0x%X %.2f%%\n", header->interfacesCount, header->interfacesOffset, header->interfacesCount * 100.0f / dataSize);
    printf("vtableMethods count %d offset 0x%X %.2f%%\n", header->vtableMethodsCount, header->vtableMethodsOffset, header->vtableMethodsCount * 100.0f / dataSize);
    printf("interfaceOffsets count %d offset 0x%X %.2f%%\n", header->interfaceOffsetsCount, header->interfaceOffsetsOffset, header->interfaceOffsetsCount * 100.0f / dataSize);
    printf("typeDefinitions count %d offset 0x%X %.2f%%\n", header->typeDefinitionsCount, header->typeDefinitionsOffset, header->typeDefinitionsCount * 100.0f / dataSize);
    printf("images count %d offset 0x%X %.2f%%\n", header->imagesCount, header->imagesOffset, header->imagesCount * 100.0f / dataSize);
    printf("assemblies count %d offset 0x%X %.2f%%\n", header->assembliesCount, header->assembliesOffset, header->assembliesCount * 100.0f / dataSize);
    printf("fieldRefs count %d offset 0x%X %.2f%%\n", header->fieldRefsCount, header->fieldRefsOffset, header->fieldRefsCount * 100.0f / dataSize);
    printf("referencedAssemblies count %d offset 0x%X %.2f%%\n", header->referencedAssembliesCount, header->referencedAssembliesOffset, header->referencedAssembliesCount * 100.0f / dataSize);
    printf("attributesInfo count %d offset 0x%X %.2f%%\n", header->attributesInfoCount, header->attributesInfoOffset, header->attributesInfoCount * 100.0f / dataSize);
    printf("attributeTypes count %d offset 0x%X %.2f%%\n", header->attributeTypesCount, header->attributeTypesOffset, header->attributeTypesCount * 100.0f / dataSize);
    printf("unresolvedVirtualCallParameterTypes count %d offset 0x%X %.2f%%\n", header->unresolvedVirtualCallParameterTypesCount, header->unresolvedVirtualCallParameterTypesOffset, header->unresolvedVirtualCallParameterTypesCount * 100.0f / dataSize);
    printf("unresolvedVirtualCallParameterRanges count %d offset 0x%X %.2f%%\n", header->unresolvedVirtualCallParameterRangesCount, header->unresolvedVirtualCallParameterRangesOffset, header->unresolvedVirtualCallParameterRangesCount * 100.0f / dataSize);
    printf("windowsRuntimeTypeNames size %d offset 0x%X %.2f%%\n", header->windowsRuntimeTypeNamesSize, header->windowsRuntimeTypeNamesOffset, header->windowsRuntimeTypeNamesSize * 100.0f / dataSize);
    printf("exportedTypeDefinitions count %d offset 0x%X %.2f%%\n", header->exportedTypeDefinitionsCount, header->exportedTypeDefinitionsOffset, header->exportedTypeDefinitionsCount * 100.0f / dataSize);
}

template <typename T>
int getStringLiteralCount(const T* header)
{
    return header->stringLiteralCount;
}

int getStringLiteralCount(const Il2CppGlobalMetadataHeader_v29* header)
{
    return header->stringLiteralSize;
}

template <typename T>
void printStringLiteral(const unsigned char* metadata, const T* header)
{
    int stringLiteralTableCount = getStringLiteralCount(header) / sizeof(Il2CppStringLiteral);
    const Il2CppStringLiteral* stringLiteralTable = reinterpret_cast<const Il2CppStringLiteral*>(metadata + header->stringLiteralOffset);

    // print stringLiteral
    for (int i = 0; i < stringLiteralTableCount; i++)
    {
        char* stringLiteral = new char[stringLiteralTable[i].length + 1];
        stringLiteral[stringLiteralTable[i].length] = '\0';
        const unsigned char* stringLiteralData = metadata + header->stringLiteralDataOffset + stringLiteralTable[i].dataIndex;
        memcpy(stringLiteral, stringLiteralData, stringLiteralTable[i].length);
        printf("%s [0x%X]\n", stringLiteral, header->stringLiteralDataOffset + stringLiteralTable[i].dataIndex);
        delete[] stringLiteral;
    }
    printf("stringLiteral count %d\n", stringLiteralTableCount);
}

template <typename T>
int getStringCount(const T* header)
{
    return header->stringCount;
}

int getStringCount(const Il2CppGlobalMetadataHeader_v29* header)
{
    return header->stringSize;
}

template <typename T>
void printString(const unsigned char* metadata, const T* header)
{
    int count = 0;
    for (int i = 0; i < getStringCount(header); i++)
    {
        const unsigned char* string = metadata + header->stringOffset + i;
        int l = length(string);
        printf("%s [0x%X]\n", string, header->stringOffset + i);
        i += l;
        count++;
    }
    printf("string count %d\n", count);
}

template <typename T>
int getTypeDefinitionsCount(const T* header)
{
    return header->typeDefinitionsCount;
}

int getTypeDefinitionsCount(const Il2CppGlobalMetadataHeader_v29* header)
{
    return header->typeDefinitionsSize;
}

template <typename T>
bool checkType(const unsigned char* metadata, const T* header)
{
    using V = typename GetMethodDefinition<T>::Type;
    return (getTypeDefinitionsCount(header) % sizeof(V)) == 0;
}

template <typename T>
int getMethodsCount(const T* header)
{
    return header->methodsCount;
}

int getMethodsCount(const Il2CppGlobalMetadataHeader_v29* header)
{
    return header->methodsSize;
}

template <typename T>
void printMethod(const unsigned char* metadata, const T* header)
{
    using U = typename GetMethodDefinition<T>::Method;
    using V = typename GetMethodDefinition<T>::Type;
    int count = getMethodsCount(header) / sizeof(U);
    auto methodTable = reinterpret_cast<const U*>(metadata + header->methodsOffset);
    auto typeTable = reinterpret_cast<const V*>(metadata + header->typeDefinitionsOffset);
    bool validTypeTable = checkType(metadata, header);

    for (int i = 0; i < count; i++)
    {
        const unsigned char* name = metadata + header->stringOffset + methodTable[i].nameIndex;
        if (validTypeTable)
        {
            const unsigned char* typeName = metadata + header->stringOffset + typeTable[methodTable[i].declaringType].nameIndex;
            printf("%s::%s\n", typeName, name);
        }
        else
        {
            printf("%s\n", name);
        }
    }
    printf("method count %d\n", count);
}

template <typename T>
void printType(const unsigned char* metadata, const T* header)
{
    using V = typename GetMethodDefinition<T>::Type;
    int count = getTypeDefinitionsCount(header) / sizeof(V);
    auto typeTable = reinterpret_cast<const V*>(metadata + header->typeDefinitionsOffset);

    for (int i = 0; i < count; i++)
    {
        const unsigned char* typeName = metadata + header->stringOffset + typeTable[i].nameIndex;
        const unsigned char* namespaceName = metadata + header->stringOffset + typeTable[i].namespaceIndex;
        if (namespaceName[0] == '\0')
        {
            printf("%s\n", typeName);
        }
        else
        {
            printf("%s.%s\n", namespaceName, typeName);
        }
    }
    printf("type count %d\n", count);
}

int wmain(int argc, wchar_t* argv[])
{
    if (argc < 2)
    {
        std::cout << argc << std::endl;
        printf("-l string lteral\n");
        printf("-s string\n");
        printf("-m method\n");
        printf("-t type\n");
        return 0;
    }

    auto path = argv[1];
    FILE* fp;
    _wfopen_s(&fp, path, L"rb");

    if (fp == nullptr)
    {
        printf("%ls\n", path);
        printf("cannot open\n");
        return 0;
    }

    bool printStringLiteralOption = false;
    bool printStringOption = false;
    bool printMethodOption = false;
    bool printTypeOption = false;

    for (int i = 2; i < argc; i++)
    {
        if (argv[i][0] == '-')
        {
            switch (argv[i][1])
            {
            case 'l':
                printStringLiteralOption = true;
                break;
            case 's':
                printStringOption = true;
                break;
            case 'm':
                printMethodOption = true;
                break;
            case 't':
                printTypeOption = true;
                break;
            }
        }
    }

    fseek(fp, 0, SEEK_END);
    size_t size = ftell(fp);

    unsigned char* metadata = new unsigned char[size];
    
    fseek(fp, 0, SEEK_SET);
    fread_s(metadata, size, size, 1, fp);
    fclose(fp);

    printf("size %d\n", (int)size);

    Header* check = reinterpret_cast<Header*>(metadata);

    if (check->sanity != 0xFAB11BAF)
    {
        printf("sanity 0x%X\n", check->sanity);
        printf("version %d\n", check->version);
        return 0;
    }

    if (check->version == 29)
    {
        Il2CppGlobalMetadataHeader_v29* header_v29 = reinterpret_cast<Il2CppGlobalMetadataHeader_v29*>(metadata);
        
        printf("header size %d byte\n", sizeof(Il2CppGlobalMetadataHeader_v29));

        if (printStringLiteralOption)
        {
            printStringLiteral(metadata, header_v29);
        }

        if (printStringOption)
        {
            printString(metadata, header_v29);
        }

        if (printMethodOption)
        {
            printMethod(metadata, header_v29);
        }

        if (printTypeOption)
        {
            printType(metadata, header_v29);
        }
    }
    else if (check->version == 27)
    {
        Il2CppGlobalMetadataHeader_v27* header_v27 = reinterpret_cast<Il2CppGlobalMetadataHeader_v27*>(metadata);
        int dataSize = getTotalSize(header_v27);

        printHeader(header_v27, dataSize);

        printf("-------------------------------------------\n");
        printf("data size %d byte\n", dataSize);
        printf("header size %d byte\n", sizeof(Il2CppGlobalMetadataHeader_v27));
        printf("total size %d byte\n", dataSize + sizeof(Il2CppGlobalMetadataHeader_v27));
        
        if (printStringLiteralOption)
        {
            printStringLiteral(metadata, header_v27);
        }

        if (printStringOption)
        {
            printString(metadata, header_v27);
        }

        if (printMethodOption)
        {
            printMethod(metadata, header_v27);
        }

        if (printTypeOption)
        {
            printType(metadata, header_v27);
        }
    }
    else if (check->version == 24)
    {
        Il2CppGlobalMetadataHeader_v24_2019_4* header = reinterpret_cast<Il2CppGlobalMetadataHeader_v24_2019_4*>(metadata);
        int dataSize = getTotalSize(header);

        if (dataSize == (int)size + sizeof(Il2CppGlobalMetadataHeader_v24_2019_4))
        {
            printHeader(header, dataSize);

            printf("-------------------------------------------\n");
            printf("data size %d byte\n", dataSize);
            printf("header size %d byte\n", sizeof(Il2CppGlobalMetadataHeader_v24_2019_4));
            printf("total size %d byte\n", dataSize + sizeof(Il2CppGlobalMetadataHeader_v24_2019_4));

            if (printStringLiteralOption)
            {
                printStringLiteral(metadata, header);
            }

            if (printStringOption)
            {
                printString(metadata, header);
            }

            if (printMethodOption)
            {
                printMethod(metadata, header);
            }

            if (printTypeOption)
            {
                printType(metadata, header);
            }
        }
        else
        {
            Il2CppGlobalMetadataHeader_v24_2018_4* header_v24_2018_4 = reinterpret_cast<Il2CppGlobalMetadataHeader_v24_2018_4*>(metadata);
            dataSize = getTotalSize(header_v24_2018_4);
            printHeader(header_v24_2018_4, dataSize);

            printf("-------------------------------------------\n");
            printf("data size %d byte\n", dataSize);
            printf("header size %d byte\n", sizeof(Il2CppGlobalMetadataHeader_v24_2018_4));
            printf("total size %d byte\n", dataSize + sizeof(Il2CppGlobalMetadataHeader_v24_2018_4));

            if (printStringLiteralOption)
            {
                printStringLiteral(metadata, header_v24_2018_4);
            }

            if (printStringOption)
            {
                printString(metadata, header_v24_2018_4);
            }

            if (printMethodOption)
            {
                printMethod(metadata, header_v24_2018_4);
            }

            if (printTypeOption)
            {
                printType(metadata, header_v24_2018_4);
            }
        }
    }
    else
    {
        printf("version %d\n", check->version);
        return 0;
    }

    delete[] metadata;
    return 0;
}


