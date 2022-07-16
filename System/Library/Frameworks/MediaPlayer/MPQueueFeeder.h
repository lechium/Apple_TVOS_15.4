//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MPQueueFeederIdentifierRegistry, NSData, NSDictionary, NSString;

@interface MPQueueFeeder : NSObject
{
    MPQueueFeederIdentifierRegistry *_identifierRegistry;	// 8 = 0x8
    struct os_unfair_lock_s _identifierRegistryLock;	// 16 = 0x10
    NSString *_uniqueIdentifier;	// 24 = 0x18
    NSString *_playActivityQueueGroupingID;	// 32 = 0x20
    NSString *_playActivityFeatureName;	// 40 = 0x28
    NSData *_playActivityRecommendationData;	// 48 = 0x30
    NSString *_siriReferenceIdentifier;	// 56 = 0x38
    NSDictionary *_siriWHAMetricsInfo;	// 64 = 0x40
}

- (void).cxx_destruct;	// IMP=0x000000000001cd0a
@property(copy, nonatomic) NSDictionary *siriWHAMetricsInfo; // @synthesize siriWHAMetricsInfo=_siriWHAMetricsInfo;
@property(copy, nonatomic) NSString *siriReferenceIdentifier; // @synthesize siriReferenceIdentifier=_siriReferenceIdentifier;
@property(copy, nonatomic) NSData *playActivityRecommendationData; // @synthesize playActivityRecommendationData=_playActivityRecommendationData;
@property(copy, nonatomic) NSString *playActivityFeatureName; // @synthesize playActivityFeatureName=_playActivityFeatureName;
@property(copy, nonatomic) NSString *playActivityQueueGroupingID; // @synthesize playActivityQueueGroupingID=_playActivityQueueGroupingID;
@property(readonly, nonatomic) NSString *uniqueIdentifier; // @synthesize uniqueIdentifier=_uniqueIdentifier;
- (void)applyVolumeNormalizationForItem:(id)arg1;	// IMP=0x000000000001cc7d
- (id)firstModelPlayEvent;	// IMP=0x000000000001cc75
- (id)errorResolverForItem:(id)arg1;	// IMP=0x000000000001cc6d
- (void)getRepresentativeMetadataForPlaybackContext:(id)arg1 properties:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x000000000001cb55
- (id)supplementalPlaybackContextWithReason:(long long)arg1;	// IMP=0x000000000001cb4d
- (long long)supplementalPlaybackContextBehavior;	// IMP=0x000000000001cb45
- (long long)identifierRegistryWithExclusiveAccessReturningInteger:(CDUnknownBlockType)arg1;	// IMP=0x000000000001caf4
- (_Bool)identifierRegistryWithExclusiveAccessReturningBOOL:(CDUnknownBlockType)arg1;	// IMP=0x000000000001caa3
- (id)identifierRegistryWithExclusiveAccessReturningObject:(CDUnknownBlockType)arg1;	// IMP=0x000000000001ca43
- (void)identifierRegistryWithExclusiveAccess:(CDUnknownBlockType)arg1;	// IMP=0x000000000001c9f9
- (void)replaceIdentifierRegistry:(id)arg1;	// IMP=0x000000000001c9b4
- (id)init;	// IMP=0x000000000001c957

@end

