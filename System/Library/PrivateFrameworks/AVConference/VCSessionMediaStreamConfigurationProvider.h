//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSMutableArray;
@protocol VCIDSStreamIDGenerator;

__attribute__((visibility("hidden")))
@interface VCSessionMediaStreamConfigurationProvider : NSObject
{
    NSMutableArray *_allocatedStreamIDs;	// 8 = 0x8
    NSMutableArray *_audioStreamConfigurations;	// 16 = 0x10
    NSMutableArray *_videoStreamConfigurations;	// 24 = 0x18
    long long _highestEncodingResolution;	// 32 = 0x20
    _Bool _isEncodingSqaures;	// 40 = 0x28
    long long _sessionMode;	// 48 = 0x30
    unsigned int _internalAudioPacketsPerSecond;	// 56 = 0x38
    _Bool _use96Tier;	// 60 = 0x3c
    id <VCIDSStreamIDGenerator> _streamIDGenerator;	// 64 = 0x40
    unsigned int _videoStreamConfigurationsCount;	// 72 = 0x48
}

+ (_Bool)isVideoStreamOnDemand:(struct _VCMediaStreamConfigurationProviderVideo *)arg1;	// IMP=0x000000000027d984
+ (_Bool)isAudioStreamOnDemand:(struct _VCMediaStreamConfigurationProviderAudio *)arg1 isLowestQualityAudio:(_Bool)arg2;	// IMP=0x000000000027d8f7
+ (void)computeMaxNetworkBitrate:(unsigned int *)arg1 maxMediaBitrate:(unsigned int *)arg2 maxPacketsPerSecond:(float *)arg3 maxIDSStreamIDCount:(unsigned int)arg4 internalPacketsPerSecond:(unsigned int)arg5 audioConfig:(struct _VCMediaStreamConfigurationProviderAudio *)arg6;	// IMP=0x000000000027d7e3
+ (void)computeMaxNetworkBitrate:(unsigned int *)arg1 maxMediaBitrate:(unsigned int *)arg2 maxPacketsPerSecond:(float *)arg3 audioStreamIndex:(unsigned int)arg4 internalPacketsPerSecond:(unsigned int)arg5;	// IMP=0x000000000027d791
@property(readonly, nonatomic) _Bool isEncodingSqaures; // @synthesize isEncodingSqaures=_isEncodingSqaures;
@property(readonly, nonatomic) long long highestEncodingResolution; // @synthesize highestEncodingResolution=_highestEncodingResolution;
@property(readonly, nonatomic) NSArray *audioStreamConfigurations; // @synthesize audioStreamConfigurations=_audioStreamConfigurations;
@property(readonly, nonatomic) NSArray *videoStreamConfigurations; // @synthesize videoStreamConfigurations=_videoStreamConfigurations;
- (id)audioRuleCollectionWithAudioConfig:(struct _VCMediaStreamConfigurationProviderAudio *)arg1 supportedAudioRules:(id)arg2;	// IMP=0x000000000027e549
- (_Bool)initializeAudioStreamWithConfig:(struct _VCMediaStreamConfigurationProviderAudio *)arg1 maxIDSStreamIDCount:(unsigned int)arg2 supportedAudioRules:(id)arg3 isLowestQualityAudio:(_Bool)arg4;	// IMP=0x000000000027da19
- (_Bool)initializeAudioStreamsWithSupportedRules:(id)arg1;	// IMP=0x000000000027d452
- (void)audioStreamConfigs:(struct _VCMediaStreamConfigurationProviderAudio **)arg1 configCount:(unsigned int *)arg2;	// IMP=0x000000000027d42c
- (_Bool)initializeVideoStreamWithDefaults;	// IMP=0x000000000027cbb1
- (_Bool)initializeVideoStreamWithConfig:(struct _VCMediaStreamConfigurationProviderVideo *)arg1 streamIndex:(unsigned int)arg2;	// IMP=0x000000000027c0f6
- (int)streamPayloadFromProviderConfig:(struct _VCMediaStreamConfigurationProviderVideo *)arg1;	// IMP=0x000000000027c010
- (_Bool)initializeVideoStreams;	// IMP=0x000000000027bdb6
- (_Bool)initializeStreamsWithSupportedAudioRules:(id)arg1;	// IMP=0x000000000027bdae
- (void)dealloc;	// IMP=0x000000000027bd3a
- (id)initWithStreamIDGenerator:(id)arg1 sessionMode:(long long)arg2 supportedAudioRules:(id)arg3;	// IMP=0x000000000027b765

@end

