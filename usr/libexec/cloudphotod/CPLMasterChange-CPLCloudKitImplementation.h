//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <CloudPhotoLibrary/CPLMasterChange.h>

@interface CPLMasterChange (CPLCloudKitImplementation)
- (_Bool)shouldProtectResourceTypeFromClearing:(unsigned long long)arg1;	// IMP=0x00100000000d539f
- (id);	// IMP=0x00100000000d4fb4
- (id)expungeableResourceStatesFromCKRecord:(id)arg1;	// IMP=0x00100000000d4c30
- (void)cplAddExpungeableResourceStateToCKRecord:(id)arg1;	// IMP=0x00100000000d492c
- (id)initWithCKRecord:(id)arg1 scopeIdentifier:(id)arg2 ckAssetProperties:(id)arg3 scopeProvider:(id)arg4 currentUserRecordID:(id)arg5;	// IMP=0x00100000000d4347
- (_Bool)fillCKRecord:(id)arg1 withRecordMap:(id)arg2 scopeProvider:(id)arg3 currentUserRecordID:(id)arg4 tempCKAssetURL:(id)arg5 info:(CDStruct_14f26992 *)arg6 error:(id *)arg7;	// IMP=0x00100000000d353b
@end

