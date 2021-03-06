//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class FSNode, LSBundleProxy, LSPropertyList, NSArray, NSDate, NSDictionary, NSSet, NSString, NSURL, _LSLazyPropertyList, _LSLocalizedStringRecord;

@interface LSBundleRecord
{
    CDStruct_4c969caf *_auditToken;	// 8 = 0x8
    id _cachedDataContainerURL;	// 16 = 0x10
    FSNode *_node;	// 24 = 0x18
    NSString *_bundleIdentifier;	// 32 = 0x20
}

+ (_Bool)supportsSecureCoding;	// IMP=0x00000000000696c3
+ (id)_propertyClasses;	// IMP=0x0000000000068b6d
+ (id)_bundleRecordForAuditToken:(CDStruct_4c969caf)arg1 checkNSBundleMainBundle:(unsigned char)arg2 error:(id *)arg3;	// IMP=0x0000000000066816
+ (id)bundleRecordForAuditToken:(CDStruct_4c969caf)arg1 error:(id *)arg2;	// IMP=0x00000000000667ff
+ (id)bundleRecordWithApplicationIdentifier:(id)arg1 error:(id *)arg2;	// IMP=0x00000000000663f8
+ (id)bundleRecordWithBundleIdentifier:(id)arg1 allowPlaceholder:(_Bool)arg2 error:(id *)arg3;	// IMP=0x000000000006621c
+ (id)coreTypesBundleRecord;	// IMP=0x0000000000066203
+ (id)bundleRecordForCurrentProcess;	// IMP=0x0000000000065e94
- (void).cxx_destruct;	// IMP=0x0000000000069f00
@property(readonly) NSString *bundleIdentifier; // @synthesize bundleIdentifier=_bundleIdentifier;
@property(readonly, nonatomic) FSNode *_node; // @synthesize _node;
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000069df7
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000069804
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000000000696cb
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000000695d3
- (unsigned long long)hash;	// IMP=0x000000000006957b
- (id)debugDescription;	// IMP=0x000000000006945a
- (id)description;	// IMP=0x000000000006939f
- (void)_detachFromContext:(struct LSContext *)arg1 tableID:(unsigned int)arg2 unitID:(unsigned int)arg3 unitBytes:(const void *)arg4;	// IMP=0x0000000000068f22
- (id)_initWithContext:(struct LSContext *)arg1 persistentIdentifierData:(const struct LSPersistentIdentifierData *)arg2 length:(unsigned long long)arg3;	// IMP=0x0000000000068c3e
- (id)_localizedShort:(_Bool)arg1 nameWithContext:(struct LSContext *)arg2 tableID:(unsigned int)arg3 unitID:(unsigned int)arg4 bundleData:(const struct LSBundleBaseData *)arg5;	// IMP=0x0000000000068b12
- (void)_LSRecord_resolve__localizedShortName;	// IMP=0x0000000000068af7
@property(readonly) _LSLocalizedStringRecord *_localizedShortName;
- (id)_localizedShortNameWithContext:(struct LSContext *)arg1 tableID:(unsigned int)arg2 unitID:(unsigned int)arg3 unitBytes:(const struct LSBundleBaseData *)arg4;	// IMP=0x0000000000068ab6
- (void)_LSRecord_resolve__localizedName;	// IMP=0x0000000000068a9b
@property(readonly) _LSLocalizedStringRecord *_localizedName;
- (id)_localizedNameWithContext:(struct LSContext *)arg1 tableID:(unsigned int)arg2 unitID:(unsigned int)arg3 unitBytes:(const struct LSBundleBaseData *)arg4;	// IMP=0x0000000000068a5d
@property(readonly) NSString *_fallbackLocalizedName;
@property(readonly) NSDictionary *groupContainerURLs;
- (id)_cachedDataContainerURL;	// IMP=0x0000000000068616
- (void)_LSRecord_resolve__dataContainerURLFromDatabase;	// IMP=0x00000000000685fb
@property(readonly) NSURL *_dataContainerURLFromDatabase;
- (id)_dataContainerURLFromDatabaseWithContext:(struct LSContext *)arg1 tableID:(unsigned int)arg2 unitID:(unsigned int)arg3 unitBytes:(const struct LSBundleBaseData *)arg4;	// IMP=0x0000000000068581
- (void)_LSRecord_resolve__baseFlags;	// IMP=0x000000000006856f
@property(readonly) struct LSBundleBaseFlags _baseFlags;
- (struct LSBundleBaseFlags)_baseFlagsWithContext:(struct LSContext *)arg1 tableID:(unsigned int)arg2 unitID:(unsigned int)arg3 unitBytes:(const struct LSBundleBaseData *)arg4;	// IMP=0x0000000000068551
- (void)_LSRecord_resolve__rawGroupContainerURLs;	// IMP=0x0000000000068536
@property(readonly) _LSLazyPropertyList *_rawGroupContainerURLs;
- (id)_rawGroupContainerURLsWithContext:(struct LSContext *)arg1 tableID:(unsigned int)arg2 unitID:(unsigned int)arg3 unitBytes:(const struct LSBundleBaseData *)arg4;	// IMP=0x0000000000068505
@property(readonly) unsigned long long _containerClass;
@property(readonly) _Bool _containerized;
@property(readonly) _Bool _usesSystemPersona;
- (void)_LSRecord_resolve__profileValidationState;	// IMP=0x00000000000684db
@property(readonly) unsigned char _profileValidationState;
- (unsigned char)_profileValidationStateWithContext:(struct LSContext *)arg1 tableID:(unsigned int)arg2 unitID:(unsigned int)arg3 unitBytes:(const struct LSBundleBaseData *)arg4;	// IMP=0x00000000000684bc
@property(readonly, nonatomic) LSBundleRecord *_realRecord;
- (void)_LSRecord_resolve__bundleVersion;	// IMP=0x000000000006846f
@property(readonly, nonatomic) struct LSVersionNumber _bundleVersion;
- (struct LSVersionNumber)_bundleVersionWithContext:(struct LSContext *)arg1 tableID:(unsigned int)arg2 unitID:(unsigned int)arg3 unitBytes:(const struct LSBundleBaseData *)arg4;	// IMP=0x0000000000068434
@property(readonly, nonatomic) const CDStruct_4c969caf *_auditToken;
- (id)_initWithNode:(id)arg1 bundleIdentifier:(id)arg2 context:(struct LSContext *)arg3 tableID:(unsigned int)arg4 unitID:(unsigned int)arg5 bundleBaseData:(const struct LSBundleBaseData *)arg6 error:(id *)arg7;	// IMP=0x0000000000068044
@property(readonly) NSSet *serviceRecords;
- (void)_LSRecord_resolve_importedTypeRecords;	// IMP=0x0000000000068010
@property(readonly) NSSet *importedTypeRecords;
- (id)importedTypeRecordsWithContext:(struct LSContext *)arg1 tableID:(unsigned int)arg2 unitID:(unsigned int)arg3 unitBytes:(const struct LSBundleData *)arg4;	// IMP=0x0000000000067fd2
- (void)_LSRecord_resolve_exportedTypeRecords;	// IMP=0x0000000000067fb7
@property(readonly) NSSet *exportedTypeRecords;
- (id)exportedTypeRecordsWithContext:(struct LSContext *)arg1 tableID:(unsigned int)arg2 unitID:(unsigned int)arg3 unitBytes:(const struct LSBundleData *)arg4;	// IMP=0x0000000000067f76
- (id)exported:(_Bool)arg1 typesWithContext:(struct LSContext *)arg2 tableID:(unsigned int)arg3 unitID:(unsigned int)arg4 unitBytes:(const struct LSBundleData *)arg5;	// IMP=0x0000000000067da6
- (void)_LSRecord_resolve_claimRecords;	// IMP=0x0000000000067d8b
@property(readonly) NSSet *claimRecords;
- (id)claimRecordsWithContext:(struct LSContext *)arg1 tableID:(unsigned int)arg2 unitID:(unsigned int)arg3 unitBytes:(const struct LSBundleData *)arg4;	// IMP=0x0000000000067bcc
@property(readonly, getter=wasBuiltWithThreadSanitizer) _Bool builtWithThreadSanitizer;
- (void)_LSRecord_resolve_platform;	// IMP=0x0000000000067ba2
@property(readonly) unsigned int platform;
- (unsigned int)platformWithContext:(struct LSContext *)arg1 tableID:(unsigned int)arg2 unitID:(unsigned int)arg3 unitBytes:(const struct LSBundleBaseData *)arg4;	// IMP=0x0000000000067b87
- (void)_LSRecord_resolve_SDKVersion;	// IMP=0x0000000000067b6c
@property(readonly) NSString *SDKVersion;
- (id)SDKVersionWithContext:(struct LSContext *)arg1 tableID:(unsigned int)arg2 unitID:(unsigned int)arg3 unitBytes:(const struct LSBundleBaseData *)arg4;	// IMP=0x0000000000067b02
- (void)_LSRecord_resolve_machOUUIDs;	// IMP=0x0000000000067ae7
@property(readonly) NSArray *machOUUIDs;
- (id)machOUUIDsWithContext:(struct LSContext *)arg1 tableID:(unsigned int)arg2 unitID:(unsigned int)arg3 unitBytes:(const struct LSBundleBaseData *)arg4;	// IMP=0x0000000000067839
- (void)_LSRecord_resolve_registrationDate;	// IMP=0x000000000006781e
@property(readonly) NSDate *registrationDate;
- (id)registrationDateWithContext:(struct LSContext *)arg1 tableID:(unsigned int)arg2 unitID:(unsigned int)arg3 unitBytes:(const struct LSBundleBaseData *)arg4;	// IMP=0x00000000000677d5
- (void)_LSRecord_resolve_developerType;	// IMP=0x00000000000677c3
@property(readonly) BOOL developerType;
- (BOOL)developerTypeWithContext:(struct LSContext *)arg1 tableID:(unsigned int)arg2 unitID:(unsigned int)arg3 unitBytes:(const struct LSBundleData *)arg4;	// IMP=0x00000000000675d6
@property(readonly) NSString *bundleVersion;
- (void)_LSRecord_resolve_executableURL;	// IMP=0x000000000006754e
@property(readonly) NSURL *executableURL;
- (id)executableURLWithContext:(struct LSContext *)arg1 tableID:(unsigned int)arg2 unitID:(unsigned int)arg3 unitBytes:(const struct LSBundleBaseData *)arg4;	// IMP=0x0000000000067401
@property(readonly) NSURL *URL;
- (void)_LSRecord_resolve_teamIdentifier;	// IMP=0x00000000000673c9
@property(readonly) NSString *teamIdentifier;
- (id)teamIdentifierWithContext:(struct LSContext *)arg1 tableID:(unsigned int)arg2 unitID:(unsigned int)arg3 unitBytes:(const struct LSBundleBaseData *)arg4;	// IMP=0x0000000000067383
@property(readonly) NSString *applicationIdentifier;
- (void)dealloc;	// IMP=0x00000000000672d9
- (void)_LSRecord_resolve_infoDictionary;	// IMP=0x0000000000069f73
@property(readonly) LSPropertyList *infoDictionary;
- (id)infoDictionaryWithContext:(struct LSContext *)arg1 tableID:(unsigned int)arg2 unitID:(unsigned int)arg3 unitBytes:(const struct LSBundleBaseData *)arg4;	// IMP=0x0000000000069f42
- (void)_LSRecord_resolve_entitlements;	// IMP=0x000000000006a2c3
@property(readonly) LSPropertyList *entitlements;
- (id)entitlementsWithContext:(struct LSContext *)arg1 tableID:(unsigned int)arg2 unitID:(unsigned int)arg3 unitBytes:(const struct LSBundleBaseData *)arg4;	// IMP=0x000000000006a20b
@property(readonly) NSURL *dataContainerURL;
- (id)localizedUsageDescriptionForFeature:(unsigned long long)arg1 preferredLocalizations:(id)arg2;	// IMP=0x000000000006a75a
- (id)localizedUsageDescriptionForFeature:(unsigned long long)arg1;	// IMP=0x000000000006a6c5
- (id)localizedShortNameWithPreferredLocalizations:(id)arg1;	// IMP=0x000000000006a622
- (id)localizedNameWithPreferredLocalizations:(id)arg1;	// IMP=0x000000000006a57f
@property(readonly) NSString *localizedShortName;
@property(readonly) NSString *localizedName;
- (void)_LSRecord_resolve_codeSignatureVersion;	// IMP=0x000000000006a917
@property(readonly) unsigned int codeSignatureVersion;
- (unsigned int)codeSignatureVersionWithContext:(struct LSContext *)arg1 tableID:(unsigned int)arg2 unitID:(unsigned int)arg3 unitBytes:(const struct LSBundleBaseData *)arg4;	// IMP=0x000000000006a8f9
@property(readonly, getter=isFreeProfileValidated) _Bool freeProfileValidated;
@property(readonly, getter=isUPPValidated) _Bool UPPValidated;
@property(readonly, getter=isProfileValidated) _Bool profileValidated;
- (void)_LSRecord_resolve_signerIdentity;	// IMP=0x000000000006a896
@property(readonly) NSString *signerIdentity;
- (id)signerIdentityWithContext:(struct LSContext *)arg1 tableID:(unsigned int)arg2 unitID:(unsigned int)arg3 unitBytes:(const struct LSBundleBaseData *)arg4;	// IMP=0x000000000006a850
- (void)_LSRecord_resolve_signerOrganization;	// IMP=0x000000000006a835
@property(readonly) NSString *signerOrganization;
- (id)signerOrganizationWithContext:(struct LSContext *)arg1 tableID:(unsigned int)arg2 unitID:(unsigned int)arg3 unitBytes:(const struct LSBundleBaseData *)arg4;	// IMP=0x000000000006a7ef
@property(readonly) NSArray *managedPersonas;
@property(readonly) NSString *accentColorName;
@property(readonly) NSArray *UIBackgroundModes;
@property(readonly) _Bool supportsNowPlaying;
@property(readonly) NSArray *WKBackgroundModes;
@property(readonly) NSArray *supportedIntentMediaCategories;
@property(readonly) NSArray *intentsRestrictedWhileProtectedDataUnavailable;
@property(readonly) NSArray *intentsRestrictedWhileLocked;
@property(readonly) NSArray *supportedIntents;
- (void)_LSRecord_resolve_intentDefinitionURLs;	// IMP=0x000000000006ac25
@property(readonly) NSDictionary *intentDefinitionURLs;
- (id)intentDefinitionURLsWithContext:(struct LSContext *)arg1 tableID:(unsigned int)arg2 unitID:(unsigned int)arg3 unitBytes:(const struct LSBundleBaseData *)arg4;	// IMP=0x000000000006aa5f

// Remaining properties
@property(readonly, nonatomic) LSBundleProxy *compatibilityObject; // @dynamic compatibilityObject;

@end

