//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <MediaPlayer/NSSecureCoding-Protocol.h>

@class ICUserIdentity, NSDictionary, NSString;

@interface MPRemotePlaybackQueue : NSObject <NSSecureCoding>
{
    struct _MRSystemAppPlaybackQueue *_mediaRemotePlaybackQueue;	// 8 = 0x8
    ICUserIdentity *_userIdentity;	// 16 = 0x10
    NSString *_queueGroupingID;	// 24 = 0x18
    NSDictionary *_mediaRemoteOptions;	// 32 = 0x20
}

+ (_Bool)supportsSecureCoding;	// IMP=0x000000000004c4d8
+ (void)registerRemotePlaybackQueueClass:(Class)arg1 forPlaybackQueueType:(int)arg2;	// IMP=0x000000000004c43c
+ (id)queueWithMediaRemotePlaybackQueue:(struct _MRSystemAppPlaybackQueue *)arg1 options:(id)arg2;	// IMP=0x000000000004c28d
+ (id)queueWithMediaRemotePlaybackQueue:(struct _MRSystemAppPlaybackQueue *)arg1;	// IMP=0x000000000004c264
- (void).cxx_destruct;	// IMP=0x000000000004c231
@property(readonly, nonatomic) NSDictionary *mediaRemoteOptions; // @synthesize mediaRemoteOptions=_mediaRemoteOptions;
@property(readonly, copy, nonatomic) NSString *queueGroupingID; // @synthesize queueGroupingID=_queueGroupingID;
@property(readonly, nonatomic) ICUserIdentity *userIdentity; // @synthesize userIdentity=_userIdentity;
@property(readonly, nonatomic) struct _MRSystemAppPlaybackQueue *_mediaRemotePlaybackQueue;
- (_Bool)verifyWithError:(id *)arg1;	// IMP=0x000000000004c201
@property(copy, nonatomic) NSDictionary *userInfo;
@property(nonatomic) long long replaceIntent;
@property(nonatomic) _Bool shouldOverrideManuallyCuratedQueue;
@property(copy, nonatomic) NSString *siriRecommendationIdentifier;
@property(readonly, copy, nonatomic) NSDictionary *siriWHAMetricsInfo;
@property(readonly, copy, nonatomic) NSString *featureName;
@property(readonly, copy, nonatomic) NSString *siriAssetInfo;
@property(nonatomic, getter=isRequestingImmediatePlayback) _Bool requestingImmediatePlayback;
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000000004c09f
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000004bfec
- (void)dealloc;	// IMP=0x000000000004bfad
- (id)init;	// IMP=0x000000000004bf10
- (id)initWithMediaRemotePlaybackQueue:(struct _MRSystemAppPlaybackQueue *)arg1 options:(id)arg2;	// IMP=0x000000000004bc88

@end
