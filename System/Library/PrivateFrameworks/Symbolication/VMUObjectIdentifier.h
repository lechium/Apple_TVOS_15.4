//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSHashTable, NSMapTable, NSMutableArray, NSMutableDictionary, NSMutableSet, VMUClassInfo, VMUClassInfoMap, VMUNonOverlappingRangeArray, VMURangeArray, VMUSwiftRuntimeInfo, VMUTaskMemoryScanner;

@interface VMUObjectIdentifier : NSObject
{
    unsigned int _task;	// 8 = 0x8
    struct _CSTypeRef _symbolicator;	// 16 = 0x10
    struct _CSTypeRef _libobjcSymbolOwner;	// 32 = 0x20
    CDUnknownBlockType _memoryReader;	// 48 = 0x30
    VMUTaskMemoryScanner *_scanner;	// 56 = 0x38
    unsigned int _objcABI;	// 64 = 0x40
    _Bool _taskIsDriverKit;	// 68 = 0x44
    struct libSwiftRemoteMirrorWrapper *_swiftMirror;	// 72 = 0x48
    struct _VMUSwiftRemoteMirrorReaderContext _swiftMirrorReaderContext;	// 80 = 0x50
    NSMutableDictionary *_libSwiftRemoteMirrors;	// 152 = 0x98
    VMUSwiftRuntimeInfo *_swiftRuntimeInfoStableABI;	// 160 = 0xa0
    VMUSwiftRuntimeInfo *_swiftRuntimeInfoPreABI;	// 168 = 0xa8
    _Bool _debugSwiftRemoteMirror;	// 176 = 0xb0
    unsigned int _objectContentLevel;	// 180 = 0xb4
    VMURangeArray *_readonlyRegionRanges;	// 184 = 0xb8
    VMUClassInfoMap *_realizedIsaToClassInfo;	// 192 = 0xc0
    VMUClassInfoMap *_unrealizedClassInfos;	// 200 = 0xc8
    VMUClassInfoMap *_cfTypeIDToClassInfo;	// 208 = 0xd0
    VMUClassInfoMap *_coreMediaFigBaseClassToClassInfo;	// 216 = 0xd8
    NSMutableDictionary *_nonobjectClassInfosDict;	// 224 = 0xe0
    NSMutableArray *_objCClassStructureClassInfoIndexes;	// 232 = 0xe8
    unsigned long long _coreFoundationCFTypeIsa;	// 240 = 0xf0
    unsigned long long _objCClassCount;	// 248 = 0xf8
    unsigned long long _swiftClassCount;	// 256 = 0x100
    unsigned long long _cfClassCount;	// 264 = 0x108
    CDUnknownBlockType _isaTranslator;	// 272 = 0x110
    _Bool _fragileNonPointerIsas;	// 280 = 0x118
    unsigned long long _lastCPlusPlusIsa;	// 288 = 0x120
    VMUClassInfo *_lastCPlusPlusClassInfo;	// 296 = 0x128
    NSHashTable *_nonObjectIsaHash;	// 304 = 0x130
    NSMapTable *_isaToObjectLabelHandlerMap;	// 312 = 0x138
    NSMapTable *_itemCountToLabelStringUniquingMap;	// 320 = 0x140
    id *_labelStringUniquingMaps;	// 328 = 0x148
    id *_stringTypeDescriptions;	// 336 = 0x150
    NSMutableSet *_stringUniquingSet;	// 344 = 0x158
    NSMutableDictionary *_pidToProcessNameDict;	// 352 = 0x160
    NSMutableDictionary *_moduleNameToBinaryPathDict;	// 360 = 0x168
    VMUNonOverlappingRangeArray *_targetProcessVMranges;	// 368 = 0x170
    _Bool _targetProcessContainsMallocStackLoggingLiteZone;	// 376 = 0x178
    unsigned long long _cfBooleanTrueAddress;	// 384 = 0x180
    unsigned long long _cfBooleanFalseAddress;	// 392 = 0x188
    unsigned long long _figBaseObjectFinalizeAddress;	// 400 = 0x190
    unsigned int _osDispatchMachOffsetInOSXPCConnection;	// 408 = 0x198
    unsigned long long _taggedPointerMask;	// 416 = 0x1a0
    unsigned long long _taggedPointerObfuscator;	// 424 = 0x1a8
    unsigned char _taggedPointerPermutations[8];	// 432 = 0x1b0
    struct VMUAutoreleasePoolPageLayout *_autoreleasePoolPageLayout;	// 440 = 0x1b8
}

- (void).cxx_destruct;	// IMP=0x0000000000061ef3
@property(readonly) NSMutableDictionary *moduleNameToBinaryPathDict; // @synthesize moduleNameToBinaryPathDict=_moduleNameToBinaryPathDict;
@property(readonly) __weak VMUTaskMemoryScanner *scanner; // @synthesize scanner=_scanner;
@property(readonly, nonatomic) struct VMUAutoreleasePoolPageLayout *autoreleasePoolPageLayout; // @synthesize autoreleasePoolPageLayout=_autoreleasePoolPageLayout;
@property(readonly, nonatomic) _Bool taskIsDriverKit; // @synthesize taskIsDriverKit=_taskIsDriverKit;
@property(readonly) unsigned long long figBaseObjectFinalizeAddress; // @synthesize figBaseObjectFinalizeAddress=_figBaseObjectFinalizeAddress;
@property(readonly) unsigned int objcABI; // @synthesize objcABI=_objcABI;
@property(readonly, nonatomic) struct _CSTypeRef libobjcSymbolOwner; // @synthesize libobjcSymbolOwner=_libobjcSymbolOwner;
@property(readonly, nonatomic) struct _CSTypeRef symbolicator; // @synthesize symbolicator=_symbolicator;
@property(readonly, nonatomic) unsigned long long taggedPointerMask; // @synthesize taggedPointerMask=_taggedPointerMask;
@property(readonly, nonatomic) struct libSwiftRemoteMirrorWrapper *swiftMirror; // @synthesize swiftMirror=_swiftMirror;
@property(readonly, nonatomic) VMUSwiftRuntimeInfo *swiftRuntimeInfoStableABI; // @synthesize swiftRuntimeInfoStableABI=_swiftRuntimeInfoStableABI;
@property(readonly, nonatomic) VMUSwiftRuntimeInfo *swiftRuntimeInfoPreABI; // @synthesize swiftRuntimeInfoPreABI=_swiftRuntimeInfoPreABI;
@property(readonly, nonatomic) VMUClassInfoMap *realizedClasses; // @synthesize realizedClasses=_realizedIsaToClassInfo;
@property(readonly, nonatomic) CDUnknownBlockType memoryReader; // @synthesize memoryReader=_memoryReader;
@property(retain, nonatomic) VMURangeArray *readonlyRegionRanges; // @synthesize readonlyRegionRanges=_readonlyRegionRanges;
@property(nonatomic) unsigned int objectContentLevel; // @synthesize objectContentLevel=_objectContentLevel;
- (id)initWithTask:(unsigned int)arg1;	// IMP=0x0000000000061de9
@property(readonly) _Bool hasSwiftReflection;
@property(readonly) _Bool hasSwiftContent;
- (void)destroy_libSwiftRemoteMirror;	// IMP=0x0000000000061d37
- (void)loadSwiftReflectionLibraries;	// IMP=0x0000000000060dfa
- (void)_populateSwiftABIVariables;	// IMP=0x0000000000060d5e
- (int)_populateSwiftReflectionInfo:(struct SwiftReflectionInteropContext *)arg1;	// IMP=0x0000000000060c25
- (_Bool)_dlopenLibSwiftRemoteMirror;	// IMP=0x0000000000060a96
- (_Bool)_dlopenLibSwiftRemoteMirrorNearExecutable;	// IMP=0x0000000000060974
- (_Bool)_dlopenLibSwiftRemoteMirrorNearLibSwiftCore;	// IMP=0x00000000000606f2
- (_Bool)_dlopenLibSwiftRemoteMirrorFromDir:(id)arg1;	// IMP=0x0000000000060387
- (id)_scanner;	// IMP=0x0000000000060371
- (struct _CSTypeRef)_symbolicator;	// IMP=0x0000000000060363
- (id)labelForMemory:(void *)arg1 length:(unsigned long long)arg2 remoteAddress:(unsigned long long)arg3 classInfo:(id)arg4;	// IMP=0x0000000000060340
- (id)labelForMemory:(void *)arg1 length:(unsigned long long)arg2 remoteAddress:(unsigned long long)arg3;	// IMP=0x000000000006031a
- (id)labelForMemory:(void *)arg1 length:(unsigned long long)arg2;	// IMP=0x00000000000602f1
- (id)labelForMemory:(void *)arg1 length:(unsigned long long)arg2 remoteAddress:(unsigned long long)arg3 classInfo:(id)arg4 usingHandlerBlock:(CDUnknownBlockType)arg5;	// IMP=0x000000000005f966
- (id)labelForObjectOfClass:(id)arg1 atOffset:(unsigned int)arg2 ofObject:(void *)arg3;	// IMP=0x000000000005f76a
- (id)labelForMallocBlock:(struct _VMURange)arg1 usingHandlerBlock:(CDUnknownBlockType)arg2;	// IMP=0x000000000005f6e2
- (id)labelForMallocBlock:(struct _VMURange)arg1;	// IMP=0x000000000005f67a
- (id)labelForClassStructure:(void *)arg1 length:(unsigned long long)arg2 remoteAddress:(unsigned long long)arg3;	// IMP=0x000000000005f614
- (id)labelForClassDataExtRW:(void *)arg1 length:(unsigned long long)arg2 remoteAddress:(unsigned long long)arg3;	// IMP=0x000000000005f5dd
- (id)labelForClassDataRW:(void *)arg1 length:(unsigned long long)arg2 remoteAddress:(unsigned long long)arg3;	// IMP=0x000000000005f5a6
- (id)labelForClassDataRO:(void *)arg1 length:(unsigned long long)arg2 remoteAddress:(unsigned long long)arg3;	// IMP=0x000000000005f572
- (id)labelFor__NSMallocBlock__:(void *)arg1 length:(unsigned long long)arg2 remoteAddress:(unsigned long long)arg3;	// IMP=0x000000000005f361
- (id)labelForDriverKitOSMetaClass:(void *)arg1 length:(unsigned long long)arg2 remoteAddress:(unsigned long long)arg3;	// IMP=0x000000000005f2ae
- (id)labelForDriverKitOSClassLoadInformation:(void *)arg1 length:(unsigned long long)arg2 remoteAddress:(unsigned long long)arg3;	// IMP=0x000000000005f21b
- (id)labelForNSXPCConnection:(void *)arg1 length:(unsigned long long)arg2 remoteAddress:(unsigned long long)arg3;	// IMP=0x000000000005f053
- (id)labelForNSXPCInterface:(void *)arg1 length:(unsigned long long)arg2 remoteAddress:(unsigned long long)arg3;	// IMP=0x000000000005efbc
- (id)labelForProtocol:(void *)arg1 length:(unsigned long long)arg2 remoteAddress:(unsigned long long)arg3;	// IMP=0x000000000005ef15
- (id)labelForOSXPCActivity:(void *)arg1 length:(unsigned long long)arg2 remoteAddress:(unsigned long long)arg3;	// IMP=0x000000000005eead
- (id)labelForOSXPCConnection:(void *)arg1 length:(unsigned long long)arg2 remoteAddress:(unsigned long long)arg3;	// IMP=0x000000000005ec73
- (void)_findOffsetsInOSXPCConnection:(void *)arg1 length:(unsigned long long)arg2;	// IMP=0x000000000005eaf5
- (id)labelFor_NSActivityAssertion:(void *)arg1 length:(unsigned long long)arg2 remoteAddress:(unsigned long long)arg3;	// IMP=0x000000000005eadd
- (id)labelForOSTransaction:(void *)arg1 length:(unsigned long long)arg2 remoteAddress:(unsigned long long)arg3;	// IMP=0x000000000005e7c6
- (id)labelForOSXPCObject:(void *)arg1 length:(unsigned long long)arg2 remoteAddress:(unsigned long long)arg3;	// IMP=0x000000000005e6f4
- (id)noLabelForOSXPCObject:(void *)arg1 length:(unsigned long long)arg2 remoteAddress:(unsigned long long)arg3;	// IMP=0x000000000005e64f
- (id)labelForOSLog:(void *)arg1 length:(unsigned long long)arg2 remoteAddress:(unsigned long long)arg3;	// IMP=0x000000000005e500
- (id)labelForOSDispatchQueue:(void *)arg1 length:(unsigned long long)arg2 remoteAddress:(unsigned long long)arg3;	// IMP=0x000000000005e454
- (id)labelForOSDispatchMach:(void *)arg1 length:(unsigned long long)arg2 remoteAddress:(unsigned long long)arg3;	// IMP=0x000000000005e293
- (id)labelForCoreMediaFigObject:(void *)arg1 length:(unsigned long long)arg2 remoteAddress:(unsigned long long)arg3;	// IMP=0x000000000005e163
- (id)labelForNSInlineData:(void *)arg1 length:(unsigned long long)arg2 remoteAddress:(unsigned long long)arg3;	// IMP=0x000000000005e0df
- (id)labelForNSConcreteMutableData:(void *)arg1 length:(unsigned long long)arg2 remoteAddress:(unsigned long long)arg3;	// IMP=0x000000000005e05e
- (id)labelForNSConcreteData:(void *)arg1 length:(unsigned long long)arg2 remoteAddress:(unsigned long long)arg3;	// IMP=0x000000000005dfd0
- (id)labelForNSData:(void *)arg1 length:(unsigned long long)arg2 remoteAddress:(unsigned long long)arg3;	// IMP=0x000000000005df4c
- (id)labelForNSCFSet:(void *)arg1 length:(unsigned long long)arg2 remoteAddress:(unsigned long long)arg3;	// IMP=0x000000000005def4
- (id)labelForNSSet:(void *)arg1 length:(unsigned long long)arg2 remoteAddress:(unsigned long long)arg3;	// IMP=0x000000000005dec0
- (id)labelForNSConcreteHashTable:(void *)arg1 length:(unsigned long long)arg2 remoteAddress:(unsigned long long)arg3;	// IMP=0x000000000005de8c
- (id)labelForNSCFDictionary:(void *)arg1 length:(unsigned long long)arg2 remoteAddress:(unsigned long long)arg3;	// IMP=0x000000000005de34
- (id)labelForNSDictionary:(void *)arg1 length:(unsigned long long)arg2 remoteAddress:(unsigned long long)arg3;	// IMP=0x000000000005de00
- (id)labelForNSArray:(void *)arg1 length:(unsigned long long)arg2 remoteAddress:(unsigned long long)arg3;	// IMP=0x000000000005ddd6
- (id)labelForItemCount:(long long)arg1;	// IMP=0x000000000005dd3e
- (id)labelForNSDate:(void *)arg1 length:(unsigned long long)arg2 remoteAddress:(unsigned long long)arg3;	// IMP=0x000000000005dd0f
- (id)formattedDateLabel:(id)arg1;	// IMP=0x000000000005dca2
- (id)labelForNSNumber:(void *)arg1 length:(unsigned long long)arg2 remoteAddress:(unsigned long long)arg3;	// IMP=0x000000000005dba0
- (id)labelForNSBundle:(void *)arg1 length:(unsigned long long)arg2 remoteAddress:(unsigned long long)arg3;	// IMP=0x000000000005dae4
- (id)labelForCFBundle:(void *)arg1 length:(unsigned long long)arg2 remoteAddress:(unsigned long long)arg3;	// IMP=0x000000000005da28
- (id)labelForNSPathStore2:(void *)arg1 length:(unsigned long long)arg2 remoteAddress:(unsigned long long)arg3;	// IMP=0x000000000005d999
- (id)labelForNSURL:(void *)arg1 length:(unsigned long long)arg2 remoteAddress:(unsigned long long)arg3;	// IMP=0x000000000005d8a4
- (id)labelForNSConcreteAttributedString:(void *)arg1 length:(unsigned long long)arg2 remoteAddress:(unsigned long long)arg3;	// IMP=0x000000000005d88c
- (id)labelForNSTaggedPointerStringCStringContainer:(void *)arg1 length:(unsigned long long)arg2 remoteAddress:(unsigned long long)arg3;	// IMP=0x000000000005d80e
- (id)labelForNSCFStringAtRemoteAddress:(unsigned long long)arg1 printDetail:(_Bool)arg2;	// IMP=0x000000000005d745
- (id)labelForNSString:(void *)arg1 mappedSize:(unsigned long long)arg2 remoteAddress:(unsigned long long)arg3 printDetail:(_Bool)arg4;	// IMP=0x000000000005d6af
- (id)labelForNSString:(void *)arg1 length:(unsigned long long)arg2 remoteAddress:(unsigned long long)arg3;	// IMP=0x000000000005d697
- (id)uniquifyStringLabel:(id)arg1 stringType:(int)arg2 printDetail:(_Bool)arg3;	// IMP=0x000000000005d2b7
- (_Bool)isTaggedPointer:(void *)arg1;	// IMP=0x000000000005d29c
- (id)classNameForTaggedPointer:(void *)arg1;	// IMP=0x000000000005d204
- (id)labelForTaggedPointer:(void *)arg1;	// IMP=0x000000000005d157
- (_Bool)_remoteAddressIsOKtoRead:(unsigned long long)arg1;	// IMP=0x000000000005d126
- (id)objectLabelHandlerForRemoteIsa:(unsigned long long)arg1;	// IMP=0x000000000005d0e2
- (void)buildIsaToObjectLabelHandlerMap;	// IMP=0x000000000005cac3
- (id)osMajorMinorVersionString;	// IMP=0x000000000005cab6
- (struct _CSTypeRef)symbolForAddress:(unsigned long long)arg1;	// IMP=0x000000000005ca97
- (unsigned long long)addressOfSymbol:(const char *)arg1 inLibrary:(const char *)arg2;	// IMP=0x000000000005ca09
- (struct _VMURange)vmRegionRangeForAddress:(unsigned long long)arg1;	// IMP=0x000000000005c925
- (unsigned long long)translateIsaPointer:(unsigned long long)arg1;	// IMP=0x000000000005c902
- (void)setupIsaTranslator;	// IMP=0x000000000005c594
- (struct VMUAutoreleasePoolPageLayout *)createAutoreleasePoolPageLayout;	// IMP=0x000000000005c4aa
- (void)findFutureClasses;	// IMP=0x000000000005c3f0
- (void)findObjCAndSwiftClasses;	// IMP=0x000000000005c36e
- (void)_findObjCAndSwiftClassesFromClass:(unsigned long long)arg1 recursionDepth:(unsigned int)arg2;	// IMP=0x000000000005c288
- (void)findCFTypes;	// IMP=0x000000000005c1ea
- (void)findCFTypes_version2;	// IMP=0x000000000005bfe3
- (void)findCFTypes_version1;	// IMP=0x000000000005be5f
- (void)_faultClass:(unsigned long long)arg1 ofType:(unsigned int)arg2;	// IMP=0x000000000005be15
- (id)_returnFaultedClass:(unsigned long long)arg1 ofType:(unsigned int)arg2;	// IMP=0x000000000005bc2b
- (id)classInfoForMemory:(void *)arg1 length:(unsigned long long)arg2 remoteAddress:(unsigned long long)arg3;	// IMP=0x000000000005bb7b
- (id)_classInfoForMemory:(void *)arg1 length:(unsigned long long)arg2 atOffset:(unsigned long long)arg3 remoteAddress:(unsigned long long)arg4;	// IMP=0x000000000005b48f
- (id)classInfoForMemory:(void *)arg1 length:(unsigned long long)arg2;	// IMP=0x000000000005b47a
- (id)classInfoForDriverKitMemory:(void *)arg1 length:(unsigned long long)arg2 atOffset:(unsigned long long)arg3 translatedIsa:(unsigned long long)arg4 symbol:(struct _CSTypeRef)arg5;	// IMP=0x000000000005b272
- (id)classInfoForDriverKitOSMetaClass;	// IMP=0x000000000005b252
- (id)classInfoForDriverKitOSMetaClassPrivate;	// IMP=0x000000000005b232
- (id)classInfoForDriverKitOSClassScan;	// IMP=0x000000000005b212
- (id)classInfoForCFTypeInstance:(void *)arg1 length:(unsigned long long)arg2 remoteAddress:(unsigned long long)arg3;	// IMP=0x000000000005abf3
- (id)classInfoForNonobjectMemory:(void *)arg1 length:(unsigned long long)arg2;	// IMP=0x000000000005a8ac
- (id)classInfoForObjCClassStructurePointerType:(unsigned int)arg1;	// IMP=0x000000000005a834
- (unsigned int)classInfoIndexForObjCClassStructurePointerType:(unsigned int)arg1;	// IMP=0x000000000005a7e7
- (void)_generateClassInfosForObjCClassStructurePointerTypes;	// IMP=0x000000000005a683
- (id)_classInfoWithPthreadType:(id)arg1;	// IMP=0x000000000005a66a
- (id)_classInfoWithNonobjectType:(id)arg1 binaryPath:(id)arg2;	// IMP=0x000000000005a55f
- (_Bool)_isValidInstanceLength:(unsigned long long)arg1 expectedLength:(unsigned long long)arg2;	// IMP=0x000000000005a532
- (id)classInfoForObjectWithRange:(struct _VMURange)arg1;	// IMP=0x000000000005a4c0
- (void)enumerateAllClassInfosWithBlock:(CDUnknownBlockType)arg1;	// IMP=0x000000000005a3cf
- (void)enumerateRealizedClassInfosWithBlock:(CDUnknownBlockType)arg1;	// IMP=0x000000000005a314
- (unsigned long long)SwiftClassCount;	// IMP=0x000000000005a307
- (unsigned long long)ObjCclassCount;	// IMP=0x000000000005a2fa
- (unsigned long long)CFTypeCount;	// IMP=0x000000000005a2ed
- (void)flushMemoryCache;	// IMP=0x000000000005a2c0
- (void)dealloc;	// IMP=0x000000000005a07a
- (id)initWithTask:(unsigned int)arg1 symbolicator:(struct _CSTypeRef)arg2 scanner:(id)arg3;	// IMP=0x00000000000595b1
- (id)initWithTask:(unsigned int)arg1 symbolicator:(struct _CSTypeRef)arg2;	// IMP=0x000000000005959c

@end

