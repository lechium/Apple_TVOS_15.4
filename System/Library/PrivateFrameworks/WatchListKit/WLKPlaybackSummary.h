//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <WatchListKit/NSSecureCoding-Protocol.h>

@class NSDate, NSNumber, NSString;

@interface WLKPlaybackSummary : NSObject <NSSecureCoding>
{
    _Bool _isAlwaysLive;	// 8 = 0x8
    _Bool _isTimerDerived;	// 9 = 0x9
    NSString *_bundleID;	// 16 = 0x10
    NSString *_channelID;	// 24 = 0x18
    NSDate *_timestamp;	// 32 = 0x20
    NSDate *_currentPlaybackDate;	// 40 = 0x28
    NSNumber *_duration;	// 48 = 0x30
    NSNumber *_elapsedTime;	// 56 = 0x38
    NSNumber *_featureDuration;	// 64 = 0x40
    NSNumber *_featureElapsedTime;	// 72 = 0x48
    NSString *_accountID;	// 80 = 0x50
    NSString *_externalProfileID;	// 88 = 0x58
    NSString *_contentID;	// 96 = 0x60
    NSString *_serviceID;	// 104 = 0x68
    long long _playbackState;	// 112 = 0x70
    NSNumber *_playbackRate;	// 120 = 0x78
    long long _completionState;	// 128 = 0x80
    long long _playbackType;	// 136 = 0x88
}

+ (_Bool)supportsSecureCoding;	// IMP=0x00000000000157e5
+ (id)_debugStringForPlaybackType:(long long)arg1;	// IMP=0x0000000000015419
+ (id)debugStringForPlaybackState:(long long)arg1;	// IMP=0x00000000000153ef
+ (id)EBSSummaryWithBundleID:(id)arg1 channelID:(id)arg2 contentID:(id)arg3 accountID:(id)arg4 externalProfileID:(id)arg5 timestamp:(id)arg6 playbackState:(long long)arg7 playbackRate:(id)arg8 currentPlaybackDate:(id)arg9;	// IMP=0x0000000000013a05
+ (id)liveSummaryWithBundleID:(id)arg1 channelID:(id)arg2 serviceID:(id)arg3 accountID:(id)arg4 externalProfileID:(id)arg5 timestamp:(id)arg6 playbackState:(long long)arg7 playbackRate:(id)arg8 currentPlaybackDate:(id)arg9;	// IMP=0x0000000000013887
+ (id)VODSummaryWithBundleID:(id)arg1 channelID:(id)arg2 contentID:(id)arg3 accountID:(id)arg4 externalProfileID:(id)arg5 timestamp:(id)arg6 duration:(id)arg7 elapsedTime:(id)arg8 featureDuration:(id)arg9 featureElapsedTime:(id)arg10 playbackState:(long long)arg11 playbackRate:(id)arg12 completionState:(long long)arg13;	// IMP=0x00000000000135f4
+ (id)VODSummaryWithBundleID:(id)arg1 channelID:(id)arg2 contentID:(id)arg3 accountID:(id)arg4 externalProfileID:(id)arg5 timestamp:(id)arg6 duration:(id)arg7 elapsedTime:(id)arg8 playbackState:(long long)arg9 playbackRate:(id)arg10 completionState:(long long)arg11;	// IMP=0x00000000000135ae
+ (id)debugStringForCompletionState:(long long)arg1;	// IMP=0x000000000003a2ef
+ (long long)completionStateForDuration:(double)arg1 elapsedTime:(double)arg2;	// IMP=0x000000000003a2ab
+ (double)playedThresholdTimeForDuration:(double)arg1;	// IMP=0x000000000003a1fd
- (void).cxx_destruct;	// IMP=0x00000000000165af
@property(nonatomic) _Bool isTimerDerived; // @synthesize isTimerDerived=_isTimerDerived;
@property(nonatomic) _Bool isAlwaysLive; // @synthesize isAlwaysLive=_isAlwaysLive;
@property(readonly, nonatomic) long long playbackType; // @synthesize playbackType=_playbackType;
@property(readonly, nonatomic) long long completionState; // @synthesize completionState=_completionState;
@property(readonly, nonatomic) NSNumber *playbackRate; // @synthesize playbackRate=_playbackRate;
@property(readonly, nonatomic) long long playbackState; // @synthesize playbackState=_playbackState;
@property(readonly, nonatomic) NSString *serviceID; // @synthesize serviceID=_serviceID;
@property(readonly, nonatomic) NSString *contentID; // @synthesize contentID=_contentID;
@property(readonly, nonatomic) NSString *externalProfileID; // @synthesize externalProfileID=_externalProfileID;
@property(readonly, nonatomic) NSString *accountID; // @synthesize accountID=_accountID;
@property(readonly, nonatomic) NSNumber *featureElapsedTime; // @synthesize featureElapsedTime=_featureElapsedTime;
@property(readonly, nonatomic) NSNumber *featureDuration; // @synthesize featureDuration=_featureDuration;
@property(readonly, nonatomic) NSNumber *elapsedTime; // @synthesize elapsedTime=_elapsedTime;
@property(readonly, nonatomic) NSNumber *duration; // @synthesize duration=_duration;
@property(readonly, nonatomic) NSDate *currentPlaybackDate; // @synthesize currentPlaybackDate=_currentPlaybackDate;
@property(readonly, nonatomic) NSDate *timestamp; // @synthesize timestamp=_timestamp;
@property(readonly, nonatomic) NSString *channelID; // @synthesize channelID=_channelID;
@property(readonly, nonatomic) NSString *bundleID; // @synthesize bundleID=_bundleID;
- (_Bool)_isValid;	// IMP=0x0000000000016071
- (_Bool)_validate:(id)arg1 identifier:(id)arg2 expectedClass:(Class)arg3;	// IMP=0x0000000000015f9a
- (_Bool)_compareOptionalTemporalValue:(id)arg1 with:(id)arg2 fuzzy:(_Bool)arg3;	// IMP=0x0000000000015ea2
- (_Bool)_compareOptional:(id)arg1 with:(id)arg2;	// IMP=0x0000000000015e78
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000000015c76
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000000157ed
- (id)sanitizedCopy;	// IMP=0x0000000000015575
- (id)JSONRepresentation;	// IMP=0x0000000000015444
- (id)dictionaryRepresentation;	// IMP=0x0000000000014e14
- (id)description;	// IMP=0x0000000000014d65
- (id)shortDescription;	// IMP=0x0000000000014bf2
- (_Bool)isLiveType;	// IMP=0x0000000000014bdb
- (unsigned long long)hash;	// IMP=0x0000000000014b1d
- (_Bool)isSameContent:(id)arg1;	// IMP=0x00000000000148db
- (_Bool)isEquivalentToSummaryExcludingTimestamp:(id)arg1;	// IMP=0x0000000000014495
- (_Bool)isEquivalentToSummaryExcludingCursor:(id)arg1;	// IMP=0x0000000000014101
- (_Bool)isEqualToSummary:(id)arg1;	// IMP=0x0000000000013c56
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000013bef
@property(readonly, nonatomic) NSNumber *accountIDAsNumber;
- (id)initWithMediaRemoteDictionary:(id)arg1 bundleID:(id)arg2 accountID:(id)arg3;	// IMP=0x000000000001303d
- (id)initWithBundleID:(id)arg1 timestamp:(id)arg2 duration:(id)arg3 elapsedTime:(id)arg4 featureDuration:(id)arg5 featureElapsedTime:(id)arg6 externalProfileID:(id)arg7 contentID:(id)arg8 accountID:(id)arg9 playbackState:(long long)arg10 playbackRate:(id)arg11 completionState:(long long)arg12 isAlwaysLive:(_Bool)arg13 serviceID:(id)arg14 currentPlaybackDate:(id)arg15 playbackType:(long long)arg16 isTimerDerived:(_Bool)arg17 channelID:(id)arg18;	// IMP=0x0000000000012d96
- (void)resolveChannelID:(CDUnknownBlockType)arg1;	// IMP=0x000000000001e4a8
- (id)elapsedTimeSummaryWithPlaybackState:(long long)arg1 timerDerived:(_Bool)arg2;	// IMP=0x0000000000055212

@end

