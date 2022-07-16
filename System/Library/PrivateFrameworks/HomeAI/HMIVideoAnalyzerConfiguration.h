//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HMFoundation/HMFObject.h>

#import <HomeAI/HMFLogging-Protocol.h>
#import <HomeAI/NSCopying-Protocol.h>
#import <HomeAI/NSSecureCoding-Protocol.h>

@class HMICamera, NSString, NSUUID;

@interface HMIVideoAnalyzerConfiguration : HMFObject <HMFLogging, NSCopying, NSSecureCoding>
{
    _Bool _transcode;	// 8 = 0x8
    _Bool _passthroughAudio;	// 9 = 0x9
    _Bool _redactFrames;	// 10 = 0xa
    _Bool _allowReducedConfiguration;	// 11 = 0xb
    _Bool _enableTemporalEventFiltering;	// 12 = 0xc
    _Bool _saveAnalyzerResultsToDisk;	// 13 = 0xd
    unsigned int _transcodeCodecType;	// 16 = 0x10
    double _minFrameQuality;	// 24 = 0x18
    double _minFrameScale;	// 32 = 0x20
    double _analysisFPS;	// 40 = 0x28
    unsigned long long _thumbnailHeight;	// 48 = 0x30
    double _maxFragmentAnalysisDuration;	// 56 = 0x38
    HMICamera *_camera;	// 64 = 0x40
    NSUUID *_homeUUID;	// 72 = 0x48
    long long _decodeMode;	// 80 = 0x50
    long long _packageClassifierMode;	// 88 = 0x58
    CDStruct_1b6d18a9 _thumbnailInterval;	// 96 = 0x60
    CDStruct_1b6d18a9 _timelapseInterval;	// 120 = 0x78
    CDStruct_1b6d18a9 _timelapsePreferredFragmentDuration;	// 144 = 0x90
    CDStruct_1b6d18a9 _maxFragmentDuration;	// 168 = 0xa8
}

+ (_Bool)supportsSecureCoding;	// IMP=0x000000000009c744
+ (id)logCategory;	// IMP=0x000000000009b484
- (void).cxx_destruct;	// IMP=0x000000000009d767
@property _Bool saveAnalyzerResultsToDisk; // @synthesize saveAnalyzerResultsToDisk=_saveAnalyzerResultsToDisk;
@property _Bool enableTemporalEventFiltering; // @synthesize enableTemporalEventFiltering=_enableTemporalEventFiltering;
@property _Bool allowReducedConfiguration; // @synthesize allowReducedConfiguration=_allowReducedConfiguration;
@property long long packageClassifierMode; // @synthesize packageClassifierMode=_packageClassifierMode;
@property _Bool redactFrames; // @synthesize redactFrames=_redactFrames;
@property long long decodeMode; // @synthesize decodeMode=_decodeMode;
@property _Bool passthroughAudio; // @synthesize passthroughAudio=_passthroughAudio;
@property(retain) NSUUID *homeUUID; // @synthesize homeUUID=_homeUUID;
@property(retain) HMICamera *camera; // @synthesize camera=_camera;
@property unsigned int transcodeCodecType; // @synthesize transcodeCodecType=_transcodeCodecType;
@property _Bool transcode; // @synthesize transcode=_transcode;
@property CDStruct_1b6d18a9 maxFragmentDuration; // @synthesize maxFragmentDuration=_maxFragmentDuration;
@property double maxFragmentAnalysisDuration; // @synthesize maxFragmentAnalysisDuration=_maxFragmentAnalysisDuration;
@property CDStruct_1b6d18a9 timelapsePreferredFragmentDuration; // @synthesize timelapsePreferredFragmentDuration=_timelapsePreferredFragmentDuration;
@property CDStruct_1b6d18a9 timelapseInterval; // @synthesize timelapseInterval=_timelapseInterval;
@property unsigned long long thumbnailHeight; // @synthesize thumbnailHeight=_thumbnailHeight;
@property CDStruct_1b6d18a9 thumbnailInterval; // @synthesize thumbnailInterval=_thumbnailInterval;
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000000009cdcc
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000009c74c
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000009c449
@property double analysisFPS; // @synthesize analysisFPS=_analysisFPS;
- (void)setTimelapseVideoPreferredFragmentDuration:(CDStruct_1b6d18a9)arg1;	// IMP=0x000000000009c3fd
- (CDStruct_1b6d18a9)timelapseVideoPreferredFragmentDuration;	// IMP=0x000000000009c3de
- (void)setTimelapseVideo:(_Bool)arg1;	// IMP=0x000000000009c37b
- (_Bool)timelapseVideo;	// IMP=0x000000000009c350
@property double minFrameScale; // @synthesize minFrameScale=_minFrameScale;
@property double minFrameQuality; // @synthesize minFrameQuality=_minFrameQuality;
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000009bcc2
- (id)attributeDescriptions;	// IMP=0x000000000009b48e
- (id)init;	// IMP=0x000000000009b28b

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

