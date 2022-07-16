//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <PhotosUICore/NSCopying-Protocol.h>

@class NSDictionary, PHFetchResult;

@interface PXCMMMomentsInvitationsDataSourceState : NSObject <NSCopying>
{
    PHFetchResult *_assetCollections;	// 8 = 0x8
    NSDictionary *_invitationsByAssetCollectionObjectID;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x00000000005c2369
@property(readonly, nonatomic) NSDictionary *invitationsByAssetCollectionObjectID; // @synthesize invitationsByAssetCollectionObjectID=_invitationsByAssetCollectionObjectID;
@property(readonly, nonatomic) PHFetchResult *assetCollections; // @synthesize assetCollections=_assetCollections;
- (id)stateUpdatedWithChange:(id)arg1 changeDetails:(id *)arg2;	// IMP=0x00000000005c1c46
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000005c1c3b
- (id)initWithAssetCollections:(id)arg1 invitationsByAssetCollectionObjectID:(id)arg2;	// IMP=0x00000000005c1ba2

@end
