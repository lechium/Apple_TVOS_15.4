//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <MediaPlaybackCore/NSCopying-Protocol.h>
#import <MediaPlaybackCore/NSSecureCoding-Protocol.h>

@class ICUserIdentity, NSDictionary, NSString;

@interface MPCAssistantPlaybackQueue : NSObject <NSCopying, NSSecureCoding>
{
    _Bool _shouldOverrideManuallyCuratedQueue;	// 8 = 0x8
    _Bool _shouldImmediatelyStartPlayback;	// 9 = 0x9
    NSString *_contextID;	// 16 = 0x10
    NSString *_siriRecommendationID;	// 24 = 0x18
    NSString *_siriAssetInfo;	// 32 = 0x20
    NSString *_featureName;	// 40 = 0x28
    NSString *_queueGroupingID;	// 48 = 0x30
    NSDictionary *_siriWHAMetricsInfo;	// 56 = 0x38
    ICUserIdentity *_userIdentity;	// 64 = 0x40
    NSString *_homeKitUserIdentifier;	// 72 = 0x48
}

+ (_Bool)supportsSecureCoding;	// IMP=0x00000000000e03a4
- (void).cxx_destruct;	// IMP=0x00000000000e033a
@property(copy, nonatomic) NSString *homeKitUserIdentifier; // @synthesize homeKitUserIdentifier=_homeKitUserIdentifier;
@property(copy, nonatomic) ICUserIdentity *userIdentity; // @synthesize userIdentity=_userIdentity;
@property(copy, nonatomic) NSDictionary *siriWHAMetricsInfo; // @synthesize siriWHAMetricsInfo=_siriWHAMetricsInfo;
@property(copy, nonatomic) NSString *queueGroupingID; // @synthesize queueGroupingID=_queueGroupingID;
@property(copy, nonatomic) NSString *featureName; // @synthesize featureName=_featureName;
@property(copy, nonatomic) NSString *siriAssetInfo; // @synthesize siriAssetInfo=_siriAssetInfo;
@property(copy, nonatomic) NSString *siriRecommendationID; // @synthesize siriRecommendationID=_siriRecommendationID;
@property(nonatomic) _Bool shouldImmediatelyStartPlayback; // @synthesize shouldImmediatelyStartPlayback=_shouldImmediatelyStartPlayback;
@property(nonatomic) _Bool shouldOverrideManuallyCuratedQueue; // @synthesize shouldOverrideManuallyCuratedQueue=_shouldOverrideManuallyCuratedQueue;
@property(readonly, copy, nonatomic) NSString *contextID; // @synthesize contextID=_contextID;
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000000e00fa
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000000dfebf
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000000000dfda9
@property(readonly, nonatomic) _Bool supportedOnCurrentPlatform;
- (struct _MRSystemAppPlaybackQueue *)createRemotePlaybackQueue;	// IMP=0x00000000000dfd99
- (id)initWithContextID:(id)arg1;	// IMP=0x00000000000dfd26

@end

