//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSData, NSNumber, NSString, _MRMRNowPlayingAudioFormatContentInfoProtobuf;

@interface MRNowPlayingAudioFormatContentInfo : NSObject
{
    _Bool _eligibleForSpatialization;	// 8 = 0x8
    _Bool _spatialized;	// 9 = 0x9
    NSString *_bundleID;	// 16 = 0x10
    NSNumber *_audioSessionID;	// 24 = 0x18
    NSNumber *_audioFormat;	// 32 = 0x20
    NSNumber *_channelCount;	// 40 = 0x28
    NSString *_bestAvailableContent;	// 48 = 0x30
}

- (void).cxx_destruct;	// IMP=0x00000000000fc581
@property(readonly, nonatomic) NSString *bestAvailableContent; // @synthesize bestAvailableContent=_bestAvailableContent;
@property(readonly, nonatomic) NSNumber *channelCount; // @synthesize channelCount=_channelCount;
@property(readonly, nonatomic) NSNumber *audioFormat; // @synthesize audioFormat=_audioFormat;
@property(readonly, nonatomic) NSNumber *audioSessionID; // @synthesize audioSessionID=_audioSessionID;
@property(readonly, nonatomic, getter=isSpatialized) _Bool spatialized; // @synthesize spatialized=_spatialized;
@property(readonly, nonatomic, getter=isEligibleForSpatialization) _Bool eligibleForSpatialization; // @synthesize eligibleForSpatialization=_eligibleForSpatialization;
@property(readonly, copy, nonatomic) NSString *bundleID; // @synthesize bundleID=_bundleID;
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000000fc2fa
@property(readonly, copy, nonatomic) NSString *bestAvailableAudioFormatDescription;
@property(readonly, nonatomic) long long bestAvailableAudioFormat;
@property(readonly, nonatomic, getter=isMultichannel) _Bool multichannel;
@property(readonly, copy, nonatomic) NSString *audioFormatDescription;
@property(readonly, nonatomic) NSData *data;
@property(readonly, nonatomic) _MRMRNowPlayingAudioFormatContentInfoProtobuf *protobuf;
- (id)description;	// IMP=0x00000000000fbf15
- (id)initWithData:(id)arg1;	// IMP=0x00000000000fbe79
- (id)initWithProtobuf:(id)arg1;	// IMP=0x00000000000fbc9d
- (id)initWithBundleID:(id)arg1 audioSessionID:(id)arg2 audioFormat:(id)arg3 channelCount:(id)arg4 bestAvailableContent:(id)arg5 isEligibleForSpatialization:(id)arg6 isSpatialized:(id)arg7;	// IMP=0x00000000000fbb4e

@end

