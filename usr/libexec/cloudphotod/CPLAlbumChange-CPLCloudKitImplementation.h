//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <CloudPhotoLibrary/CPLAlbumChange.h>

@interface CPLAlbumChange (CPLCloudKitImplementation)
+ (id)ckValueForRelatedRecord:(id)arg1;	// IMP=0x00100000000d9544
+ (id)ckPropertyForRelatedIdentifier;	// IMP=0x00100000000d9537
+ (id)ckAssetProperties;	// IMP=0x00100000000d8815
- (void)fillMissingCKAssetProperties:(id)arg1 withCKRecord:(id)arg2;	// IMP=0x00200000000d93fa
- (id)initWithCKRecord:(id)arg1 scopeIdentifier:(id)arg2 ckAssetProperties:(id)arg3 scopeProvider:(id)arg4 currentUserRecordID:(id)arg5;	// IMP=0x00100000000d8fdd
- (_Bool)fillCKRecord:(id)arg1 withRecordMap:(id)arg2 scopeProvider:(id)arg3 currentUserRecordID:(id)arg4 tempCKAssetURL:(id)arg5 info:(CDStruct_14f26992 *)arg6 error:(id *)arg7;	// IMP=0x00100000000d8881
@end

