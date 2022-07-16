//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <CloudKit/CKRecord.h>

@interface CKRecord (CPLCloudKitImplementation)
+ (id)cpl_recordFromCPLRecordChange:(id)arg1 withRecordMap:(id)arg2 scopeProvider:(id)arg3 currentUserRecordID:(id)arg4 tempCKAssetURL:(id)arg5 inZone:(id)arg6 info:(CDStruct_14f26992 *)arg7 error:(id *)arg8;	// IMP=0x00200000000b1f70
+ (id)cpl_expungedRecordFromCPLRecordChange:(id)arg1 inZone:(id)arg2;	// IMP=0x00100000000b1931
+ (Class)cpl_recordChangeClassForRecordType:(id)arg1;	// IMP=0x00100000000b07fc
- (_Bool)cplAddResourcesFromChange:(id)arg1 scopeProvider:(id)arg2 clearMissing:(_Bool)arg3 info:(CDStruct_14f26992 *)arg4 error:(id *)arg5;	// IMP=0x00000000000b36b4
- (id)cplResourcesWithScopedIdentifier:(id)arg1 coherent:(_Bool *)arg2 forRecord:(id)arg3;	// IMP=0x00100000000b33ff
- (id)cplResourceWithType:(unsigned long long)arg1 scopedIdentifier:(id)arg2 isCoherent:(_Bool *)arg3;	// IMP=0x00100000000b2bab
- (id)cpl_recordChangeMissingResourceProperties:(id *)arg1 scopeIdentifier:(id)arg2 scopeProvider:(id)arg3 currentUserRecordID:(id)arg4;	// IMP=0x00100000000b25ad
- (void)cpl_setEncryptedObject:(id)arg1 forKey:(id)arg2;	// IMP=0x00100000000b1524
- (void)cpl_setNonNilEncryptedObject:(id)arg1 forKey:(id)arg2;	// IMP=0x00100000000b150b
- (id)cpl_decryptedObjectForKey:(id)arg1 validateClass:(Class)arg2;	// IMP=0x00100000000b0dc4
- (id)cplChangedKeys;	// IMP=0x00100000000b0cb3
- (void)cplValidateAndWarnIntegrityOfResourceData:(id)arg1 withFingerPrintKey:(id)arg2 andFileSizeKey:(id)arg3;	// IMP=0x00100000000b09b2
- (id)cpl_objectForKey:(id)arg1 validateClass:(Class)arg2;	// IMP=0x00100000000b0868
- (void)cplSetCKAsset:(id)arg1 forResourceKeys:(id)arg2 fromRecord:(id)arg3;	// IMP=0x00100000000b696d
- (id)initWithCPLArchiver:(id)arg1;	// IMP=0x00100000000cae37
- (id)plistArchiveWithCPLArchiver:(id)arg1;	// IMP=0x00100000000cad90
- (id)selfIfMatchesRecordName:(id)arg1;	// IMP=0x00100000000cf1f3
@end

