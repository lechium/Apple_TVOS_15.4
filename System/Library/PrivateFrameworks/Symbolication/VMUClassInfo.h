//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableArray, NSString;

@interface VMUClassInfo : NSObject
{
    unsigned long long _remoteIsa;	// 8 = 0x8
    unsigned int _remotePointerSize;	// 16 = 0x10
    unsigned int _ivarCount;	// 20 = 0x14
    unsigned int _superclassOffset;	// 24 = 0x18
    unsigned int _instanceSize;	// 28 = 0x1c
    unsigned int _ro_flags;	// 32 = 0x20
    unsigned int _rw_flags;	// 36 = 0x24
    unsigned int _defaultScanType;	// 40 = 0x28
    unsigned int _remoteType;	// 44 = 0x2c
    id *_localIvarList;	// 48 = 0x30
    NSString *_remoteClassName;	// 56 = 0x38
    NSString *_displayName;	// 64 = 0x40
    NSString *_remoteBinaryPath;	// 72 = 0x48
    VMUClassInfo *_superclassLayout;	// 80 = 0x50
    VMUClassInfo *_genericLayout;	// 88 = 0x58
    NSMutableArray *_variantEvaluators;	// 96 = 0x60
    NSMutableArray *_variantActions;	// 104 = 0x68
    NSMutableArray *_complexVariantEvaluators;	// 112 = 0x70
    NSMutableArray *_complexVariantActions;	// 120 = 0x78
    const char *_weakLayout;	// 128 = 0x80
    const char *_strongLayout;	// 136 = 0x88
    BOOL _hasSpecificLayout;	// 144 = 0x90
    BOOL _hasVariantLayout;	// 145 = 0x91
    _Bool _usesSwiftRefcounting;	// 146 = 0x92
    _Bool _isCoreMediaFigObject;	// 147 = 0x93
}

+ (unsigned long long)sizeofClassStructure;	// IMP=0x000000000004bc07
+ (id)descriptionForTypeEncoding:(const char *)arg1 ivarName:(const char *)arg2;	// IMP=0x000000000004b2d6
+ (id)classInfoWithClassName:(id)arg1 binaryPath:(id)arg2 type:(unsigned int)arg3;	// IMP=0x0000000000043b36
+ (id)_genericBlockByrefInfo;	// IMP=0x00000000000435b0
+ (void)initialize;	// IMP=0x0000000000043574
- (void).cxx_destruct;	// IMP=0x000000000004bc6f
@property(readonly) _Bool isCoreMediaFigObject; // @synthesize isCoreMediaFigObject=_isCoreMediaFigObject;
@property(readonly, nonatomic) unsigned int ivarCount; // @synthesize ivarCount=_ivarCount;
@property(readonly, nonatomic) _Bool usesSwiftRefcounting; // @synthesize usesSwiftRefcounting=_usesSwiftRefcounting;
@property(readonly, nonatomic) unsigned int pointerSize; // @synthesize pointerSize=_remotePointerSize;
@property(readonly, nonatomic) VMUClassInfo *superclassInfo; // @synthesize superclassInfo=_superclassLayout;
@property(readonly, nonatomic) NSString *className; // @synthesize className=_remoteClassName;
@property(readonly, nonatomic) NSString *binaryPath; // @synthesize binaryPath=_remoteBinaryPath;
@property(readonly) unsigned long long remoteIsa; // @synthesize remoteIsa=_remoteIsa;
@property(readonly) unsigned int instanceSize; // @synthesize instanceSize=_instanceSize;
@property(readonly) _Bool hasCppConstructorOrDestructor;
@property(readonly) _Bool isRootClass;
@property(readonly) _Bool isMetaClass;
@property(readonly) _Bool isRealized;
@property(readonly) _Bool isARR;
- (id)description;	// IMP=0x000000000004b96b
- (id)debugDescription;	// IMP=0x000000000004b89b
- (id)scanDescriptionWithSize:(unsigned int)arg1;	// IMP=0x000000000004b60e
@property(readonly, nonatomic) NSString *shortIvarDescription;
@property(readonly, nonatomic) NSString *fullIvarDescription;
@property(readonly) unsigned int infoType;
@property(readonly, nonatomic) NSString *typeName;
- (id)type;	// IMP=0x000000000004b36e
@property(readonly, nonatomic) NSString *binaryName;
- (void)_setIsa:(unsigned long long)arg1;	// IMP=0x000000000004b31a
- (void)_addComplexAction:(CDUnknownBlockType)arg1 withEvaluator:(CDUnknownBlockType)arg2;	// IMP=0x000000000004b1b5
- (void)_addVariantAction:(CDUnknownBlockType)arg1 withEvaluator:(CDUnknownBlockType)arg2;	// IMP=0x000000000004b094
- (void)_setFields:(id)arg1;	// IMP=0x000000000004af6a
- (void)_replaceFieldRecursively:(id)arg1 withField:(id)arg2;	// IMP=0x000000000004ae23
- (void)_replaceField:(id)arg1 withFields:(id)arg2;	// IMP=0x000000000004ac33
- (void)_addFields:(id)arg1;	// IMP=0x000000000004ab30
- (id)firstFieldWithName:(id)arg1;	// IMP=0x000000000004a949
- (id)fieldAtOrBeforeOffset:(unsigned int)arg1;	// IMP=0x000000000004a7d5
- (void)enumerateScanningLocationsForSize:(unsigned int)arg1 withBlock:(CDUnknownBlockType)arg2;	// IMP=0x000000000004a4d3
- (void)enumeratePointerTypeFieldsWithBlock:(CDUnknownBlockType)arg1;	// IMP=0x000000000004a2ff
- (void)enumerateAllPointerFieldsWithBlock:(CDUnknownBlockType)arg1;	// IMP=0x000000000004a2a1
- (void)enumerateTypeFieldsWithBlock:(CDUnknownBlockType)arg1;	// IMP=0x000000000004a205
- (void)enumerateAllFieldsWithBlock:(CDUnknownBlockType)arg1;	// IMP=0x000000000004a1a7
- (void)enumerateClassHierarchyWithBlock:(CDUnknownBlockType)arg1;	// IMP=0x000000000004a153
- (unsigned int)_totalIvarCount;	// IMP=0x000000000004a130
@property(readonly, nonatomic) VMUClassInfo *genericInfo;
- (void)enumerateExternalValuesFromObject:(unsigned long long)arg1 withSize:(unsigned int)arg2 block:(CDUnknownBlockType)arg3;	// IMP=0x0000000000049e5b
- (void)enumerateStoredEntriesForObject:(unsigned long long)arg1 ofSize:(unsigned int)arg2 externalValues:(id)arg3 block:(CDUnknownBlockType)arg4;	// IMP=0x0000000000049325
- (id)instanceSpecificInfoForObject:(unsigned long long)arg1 ofSize:(unsigned int)arg2 withScanner:(id)arg3 memoryReader:(CDUnknownBlockType)arg4;	// IMP=0x00000000000481fa
- (id)instanceSpecificInfoForObject:(unsigned long long)arg1 ofSize:(unsigned int)arg2 memoryReader:(CDUnknownBlockType)arg3;	// IMP=0x00000000000481d2
- (void)_applyExtendedLayout:(const char *)arg1 withSize:(unsigned int)arg2;	// IMP=0x0000000000047c42
- (id)_copyWithInstanceSize:(unsigned int)arg1 superclassOffset:(unsigned int)arg2 asVariant:(_Bool)arg3 mutable:(_Bool)arg4;	// IMP=0x0000000000047a4e
- (void)enumerateSublayoutsForSize:(unsigned int)arg1 withBlock:(CDUnknownBlockType)arg2;	// IMP=0x00000000000478d4
- (void)_logDescriptionWithSuperclasses:(_Bool)arg1 indentation:(int)arg2 toLogger:(CDUnknownBlockType)arg3;	// IMP=0x0000000000047112
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000046e62
- (unsigned long long)hash;	// IMP=0x0000000000046e4c
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000000469e9
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000000000469a1
- (id)initWithSerializer:(id)arg1 classMap:(id)arg2 version:(unsigned int)arg3 error:(id *)arg4;	// IMP=0x0000000000046365
- (void)serializeWithClassMap:(id)arg1 simpleSerializer:(id)arg2 version:(unsigned int)arg3;	// IMP=0x00000000000461da
- (void)identifyObjCClassStructureBlocksWithScanner:(id)arg1 addressIdentifierBlock:(CDUnknownBlockType)arg2;	// IMP=0x00000000000461bb
- (void)_identifyObjCClassStructureBlocksForIsa:(unsigned long long)arg1 isMetaclass:(_Bool)arg2 withScanner:(id)arg3 addressIdentifierBlock:(CDUnknownBlockType)arg4;	// IMP=0x0000000000045b6c
- (id)mutableCopy;	// IMP=0x0000000000045b4b
- (void)dealloc;	// IMP=0x0000000000045a8b
- (void)_freeLocalIvarList;	// IMP=0x0000000000045a2f
- (id)initWithRealizedClass:(unsigned long long)arg1 type:(unsigned int)arg2 infoMap:(id)arg3 objectIdentifier:(id)arg4 reader:(CDUnknownBlockType)arg5;	// IMP=0x0000000000045a08
- (id)initWithClass:(unsigned long long)arg1 type:(unsigned int)arg2 infoMap:(id)arg3 objectIdentifier:(id)arg4 reader:(CDUnknownBlockType)arg5;	// IMP=0x00000000000459e4
- (void)_determineBinaryPathUsingObjectIdentifier:(id)arg1 remoteClassNameLoc:(unsigned long long)arg2;	// IMP=0x00000000000453ef
- (id)_initWithClass:(unsigned long long)arg1 type:(unsigned int)arg2 realizedOnly:(_Bool)arg3 infoMap:(id)arg4 objectIdentifier:(id)arg5 reader:(CDUnknownBlockType)arg6;	// IMP=0x0000000000044653
- (unsigned int)_objcABIFromObjectIdentifier:(id)arg1;	// IMP=0x0000000000044597
- (id)initSwiftClassWithName:(id)arg1 classInfoType:(unsigned int)arg2 size:(unsigned long long)arg3;	// IMP=0x00000000000444cc
- (id)initWithClosureContext:(unsigned long long)arg1 typeInfo:(struct swift_typeinfo)arg2 infoMap:(id)arg3 swiftFieldMetadataContext:(struct libSwiftRemoteMirrorWrapper *)arg4;	// IMP=0x0000000000043cc9
- (id)initWithClassName:(id)arg1 binaryPath:(id)arg2 type:(unsigned int)arg3;	// IMP=0x0000000000043bd1
@property(readonly, nonatomic) _Bool hasSpecificLayout;
@property(readonly, nonatomic) _Bool hasVariantLayout;
- (void)_setInstanceSize:(unsigned int)arg1;	// IMP=0x0000000000043a5e
@property(readonly, nonatomic) unsigned int defaultScanType;
- (void)_setDefaultScanType:(unsigned int)arg1;	// IMP=0x0000000000043a4c
- (void)_setIsCoreMediaFigObject:(_Bool)arg1;	// IMP=0x0000000000043a40
- (void)_setSuperclassInfo:(id)arg1;	// IMP=0x00000000000439f5
- (void)_setBinaryPath:(id)arg1 sanitize:(_Bool)arg2;	// IMP=0x0000000000043979
- (void)_setDisplayName:(id)arg1;	// IMP=0x000000000004391e
@property(readonly, nonatomic) NSString *displayName;
- (void)_setClassNameWithAddress:(unsigned long long)arg1 symbolicator:(struct _CSTypeRef)arg2;	// IMP=0x0000000000043866
- (void)_demangleClassName;	// IMP=0x000000000004380c
- (void)_parseIvarsAndLayouts;	// IMP=0x000000000004379f
- (void)_processARRLayout:(const char *)arg1 scanType:(unsigned int)arg2;	// IMP=0x0000000000043695

@end

