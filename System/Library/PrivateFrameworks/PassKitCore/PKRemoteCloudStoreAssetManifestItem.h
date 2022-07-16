//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <PassKitCore/NSSecureCoding-Protocol.h>

@class NSString;

@interface PKRemoteCloudStoreAssetManifestItem <NSSecureCoding>
{
}

+ (_Bool)supportsSecureCoding;	// IMP=0x00000000003b7223
- (void)downloadAssetWithCloudStoreCoordinatorDelegate:(id)arg1 tryCount:(unsigned long long)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x00000000003b72a0
- (void)downloadAssetWithCloudStoreCoordinatorDelegate:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00000000003b7286
- (unsigned long long)itemType;	// IMP=0x00000000003b727b
@property(readonly, nonatomic) NSString *recordName;

@end
