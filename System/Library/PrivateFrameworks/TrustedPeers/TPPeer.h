//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSSet, NSString, TPPeerDynamicInfo, TPPeerPermanentInfo, TPPeerStableInfo;

@interface TPPeer : NSObject
{
    TPPeerPermanentInfo *_permanentInfo;	// 8 = 0x8
    TPPeerStableInfo *_stableInfo;	// 16 = 0x10
    TPPeerDynamicInfo *_dynamicInfo;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x000000000001f728
@property(readonly, nonatomic) TPPeerDynamicInfo *dynamicInfo; // @synthesize dynamicInfo=_dynamicInfo;
@property(readonly, nonatomic) TPPeerStableInfo *stableInfo; // @synthesize stableInfo=_stableInfo;
@property(readonly, nonatomic) TPPeerPermanentInfo *permanentInfo; // @synthesize permanentInfo=_permanentInfo;
- (id)description;	// IMP=0x000000000001f56b
@property(readonly, nonatomic) NSSet *trustedPeerIDs;
- (id)peerWithUpdatedDynamicInfo:(id)arg1 error:(id *)arg2;	// IMP=0x000000000001f20f
- (id)peerWithUpdatedStableInfo:(id)arg1 error:(id *)arg2;	// IMP=0x000000000001ef76
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000001eec3
- (id)initWithPermanentInfo:(id)arg1 stableInfo:(id)arg2 dynamicInfo:(id)arg3;	// IMP=0x000000000001ee0c
- (id)initWithPermanentInfo:(id)arg1;	// IMP=0x000000000001ed7d
@property(readonly, nonatomic) NSString *peerID;

@end
