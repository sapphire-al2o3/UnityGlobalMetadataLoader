# UnityGlobalMetadataLoader

Unityのglobal-metadata.datに含まれるヘッダを表示する

## Target Unity Version

Unity2020.3
Unity2019.4
Unity2018.4

## Example

```
> UnityGlobalMetadataLoader.exe gloabl-metadata.dat

size 1323264
sanity FAB11BAF
version 27
stringLiteral count 23600 offset 0x100
stringLiteralData count 71992 offset 0x5D30
string count 210140 offset 0x17668
events count 96 offset 0x4AB44
properties count 29800 offset 0x4ABA4
methods count 334176 offset 0x5200C
parameterDefaultValues count 180 offset 0xA396C
fieldDefaultValues count 33432 offset 0xA3A20
fieldAndParameterDefaultValueData count 65208 offset 0xABCB8
fieldMarshaledSizes count 5640 offset 0xBBB70
parameters count 158880 offset 0xBD178
fields count 80832 offset 0xE3E18
genericParameters count 4448 offset 0xF8B38
genericParameterConstraints count 92 offset 0xF8B38
genericContainers count 3456 offset 0xF8B94
nestedTypes count 1564 offset 0xF9914
interfaces count 2360 offset 0xF9F30
vtableMethods count 68604 offset 0xFA868
interfaceOffsets count 13896 offset 0x10B464
typeDefinitions count 164472 offset 0x10EAAC
images count 520 offset 0x136D24
assemblies count 832 offset 0x136F2C
fieldRefs count 832 offset 0x13726C
referencedAssemblies count 156 offset 0x1375AC
attributesInfo count 26856 offset 0x137648
attributeTypes count 15216 offset 0x13DF30
unresolvedVirtualCallParameterTypes count 2316 offset 0x141AA0
unresolvedVirtualCallParameterRanges count 1496 offset 0x1423AC
windowsRuntimeTypeNames size 0 offset 0x142984
exportedTypeDefinitions count 1916 offset 0x142984
-------------------------------------------
data size 1323008
header size 256
total size 1323264
```

