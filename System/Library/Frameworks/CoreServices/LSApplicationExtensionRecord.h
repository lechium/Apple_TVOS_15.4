//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class LSBundleRecord, LSExtensionPointRecord, LSPlugInKitProxy, NSDictionary, NSString, NSUUID;

@interface LSApplicationExtensionRecord
{
    LSBundleRecord *_weakContainingBundleRecord;	// 8 = 0x8
}

+ (_Bool)supportsSecureCoding;	// IMP=0x00000000000172ba
+ (id)_propertyClasses;	// IMP=0x0000000000016fc3
+ (id)applicationExtensionRecordsForUUIDs:(id)arg1 outContainingBundleRecords:(id *)arg2 error:(id *)arg3;	// IMP=0x0000000000015fba
+ (id)enumeratorWithExtensionPointRecord:(id)arg1 options:(unsigned long long)arg2;	// IMP=0x00000000000ee81e
+ (id)enumeratorWithOptions:(unsigned long long)arg1;	// IMP=0x00000000000ee7e6
- (void).cxx_destruct;	// IMP=0x0000000000017332
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000000172c2
- (id)_replacementObjectForResolvedPropertyValue:(id)arg1 forGetter:(SEL)arg2 encoder:(id)arg3;	// IMP=0x0000000000017268
- (void)_detachFromContext:(struct LSContext *)arg1 tableID:(unsigned int)arg2 unitID:(unsigned int)arg3 unitBytes:(const void *)arg4;	// IMP=0x0000000000017154
- (id)_initWithContext:(struct LSContext *)arg1 persistentIdentifierData:(const struct LSPersistentIdentifierData *)arg2 length:(unsigned long long)arg3;	// IMP=0x0000000000017054
- (id)_compatibilityObjectWithContext:(struct LSContext *)arg1 tableID:(unsigned int)arg2 unitID:(unsigned int)arg3 unitBytes:(const void *)arg4;	// IMP=0x0000000000016f9b
- (unsigned long long)_containerClass;	// IMP=0x0000000000016f90
- (_Bool)_containerized;	// IMP=0x0000000000016f88
- (_Bool)_usesSystemPersona;	// IMP=0x0000000000016f30
- (void)_LSRecord_resolve_managedPersonas;	// IMP=0x0000000000016f15
- (id)managedPersonas;	// IMP=0x0000000000016f04
- (id)managedPersonasWithContext:(struct LSContext *)arg1 tableID:(unsigned int)arg2 unitID:(unsigned int)arg3 unitBytes:(const struct LSPluginData *)arg4;	// IMP=0x0000000000016ea0
- (BOOL)developerType;	// IMP=0x0000000000016e0e
- (void)_LSRecord_resolve__containingBundleRecord;	// IMP=0x0000000000016df3
@property(readonly) LSBundleRecord *_containingBundleRecord;
- (id)_containingBundleRecordWithContext:(struct LSContext *)arg1 tableID:(unsigned int)arg2 unitID:(unsigned int)arg3 unitBytes:(const struct LSPluginData *)arg4;	// IMP=0x0000000000016d52
- (id)_initWithContext:(struct LSContext *)arg1 pluginID:(unsigned int)arg2 pluginData:(const struct LSPluginData *)arg3 error:(id *)arg4;	// IMP=0x0000000000015e51
- (id)_initWithUUID:(id)arg1 node:(id)arg2 bundleIdentifier:(id)arg3 context:(struct LSContext *)arg4 error:(id *)arg5;	// IMP=0x0000000000015b84
- (void)_LSRecord_resolve_extensionPointRecord;	// IMP=0x0000000000015b69
@property(readonly) LSExtensionPointRecord *extensionPointRecord;
- (id)extensionPointRecordWithContext:(struct LSContext *)arg1 tableID:(unsigned int)arg2 unitID:(unsigned int)arg3 unitBytes:(const struct LSPluginData *)arg4;	// IMP=0x0000000000015ad7
@property(readonly) LSBundleRecord *containingBundleRecord;
- (void)_LSRecord_resolve_uniqueIdentifier;	// IMP=0x0000000000015a79
@property(readonly) NSUUID *uniqueIdentifier;
- (id)uniqueIdentifierWithContext:(struct LSContext *)arg1 tableID:(unsigned int)arg2 unitID:(unsigned int)arg3 unitBytes:(const struct LSPluginData *)arg4;	// IMP=0x00000000000159ec
- (void)_LSRecord_resolve_effectiveBundleIdentifier;	// IMP=0x00000000000159d1
@property(readonly) NSString *effectiveBundleIdentifier;
- (id)effectiveBundleIdentifierWithContext:(struct LSContext *)arg1 tableID:(unsigned int)arg2 unitID:(unsigned int)arg3 unitBytes:(const struct LSPluginData *)arg4;	// IMP=0x000000000001595e
- (id)initWithBundleIdentifier:(id)arg1 error:(id *)arg2;	// IMP=0x0000000000015935
- (id)initWithURL:(id)arg1 error:(id *)arg2;	// IMP=0x000000000001589f
- (id)initWithUUID:(id)arg1 error:(id *)arg2;	// IMP=0x0000000000015878
- (void)_LSRecord_resolve_iconDictionary;	// IMP=0x000000000001759e
@property(readonly) NSDictionary *iconDictionary;
- (id)iconDictionaryWithContext:(struct LSContext *)arg1 tableID:(unsigned int)arg2 unitID:(unsigned int)arg3 unitBytes:(const struct LSPluginData *)arg4;	// IMP=0x0000000000017343
- (id)supportedIntentMediaCategories;	// IMP=0x000000000001779e
- (id)intentsRestrictedWhileProtectedDataUnavailable;	// IMP=0x0000000000017785
- (id)intentsRestrictedWhileLocked;	// IMP=0x000000000001776c
- (id)supportedIntents;	// IMP=0x0000000000017753
- (id)_intentsArrayForKey:(id)arg1;	// IMP=0x00000000000175b9

// Remaining properties
@property(readonly, nonatomic) LSPlugInKitProxy *compatibilityObject; // @dynamic compatibilityObject;

@end

