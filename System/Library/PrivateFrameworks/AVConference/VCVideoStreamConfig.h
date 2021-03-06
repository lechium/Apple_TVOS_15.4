//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSDictionary, NSMutableDictionary, NSString;
@protocol VCMediaStreamSyncSource;

__attribute__((visibility("hidden")))
@interface VCVideoStreamConfig
{
    long long _videoResolution;	// 240 = 0xf0
    unsigned long long _framerate;	// 248 = 0xf8
    unsigned long long _txMaxBitrate;	// 256 = 0x100
    unsigned long long _txMinBitrate;	// 264 = 0x108
    unsigned long long _txInitialBitrate;	// 272 = 0x110
    unsigned long long _rxMaxBitrate;	// 280 = 0x118
    unsigned long long _rxMinBitrate;	// 288 = 0x120
    unsigned long long _keyFrameInterval;	// 296 = 0x128
    int _remoteVideoInitialOrientation;	// 304 = 0x130
    _Bool _enableCVO;	// 308 = 0x134
    unsigned long long _cvoExtensionID;	// 312 = 0x138
    _Bool _isVideoProtected;	// 320 = 0x140
    long long _type;	// 328 = 0x148
    unsigned long long _sourceFramerate;	// 336 = 0x150
    int _encodingMode;	// 344 = 0x158
    _Atomic unsigned char *_videoPriorityPointer;	// 352 = 0x160
    unsigned int _screenDisplayID;	// 360 = 0x168
    unsigned long long _customWidth;	// 368 = 0x170
    unsigned long long _customHeight;	// 376 = 0x178
    NSMutableDictionary *_rxCodecFeatureListStrings;	// 384 = 0x180
    NSMutableDictionary *_txCodecFeatureListStrings;	// 392 = 0x188
    unsigned long long _tilesPerFrame;	// 400 = 0x190
    unsigned int _pixelFormat;	// 408 = 0x198
    _Bool _ltrpEnabled;	// 412 = 0x19c
    int _hdrMode;	// 416 = 0x1a0
    NSString *_remoteDeviceName;	// 424 = 0x1a8
    NSString *_profileLevel;	// 432 = 0x1b0
    unsigned int _parameterSets;	// 440 = 0x1b8
    _Bool _temporalScalingEnabled;	// 444 = 0x1bc
    _Bool _isVariableSliceModeEnabled;	// 445 = 0x1bd
    _Bool _rtcpPSFB_FIREnabled;	// 446 = 0x1be
    _Bool _resetSendRTPTimestampOnStop;	// 447 = 0x1bf
    id <VCMediaStreamSyncSource> _syncSource;	// 448 = 0x1c0
    _Bool _useVideoJitterForVideoPlayout;	// 456 = 0x1c8
}

+ (id)profileLevelStringForId:(unsigned int)arg1;	// IMP=0x000000000028bb61
+ (unsigned int)profileLevelIdForString:(id)arg1;	// IMP=0x000000000028badf
+ (_Bool)validateClientDictionary:(id)arg1;	// IMP=0x000000000028b83d
@property(nonatomic) _Bool useVideoJitterForVideoPlayout; // @synthesize useVideoJitterForVideoPlayout=_useVideoJitterForVideoPlayout;
@property(nonatomic) _Bool resetSendRTPTimestampOnStop; // @synthesize resetSendRTPTimestampOnStop=_resetSendRTPTimestampOnStop;
@property(nonatomic) id <VCMediaStreamSyncSource> syncSource; // @synthesize syncSource=_syncSource;
@property(nonatomic) _Bool rtcpPSFB_FIREnabled; // @synthesize rtcpPSFB_FIREnabled=_rtcpPSFB_FIREnabled;
@property(nonatomic) _Bool isVariableSliceModeEnabled; // @synthesize isVariableSliceModeEnabled=_isVariableSliceModeEnabled;
@property(nonatomic) _Bool temporalScalingEnabled; // @synthesize temporalScalingEnabled=_temporalScalingEnabled;
@property(nonatomic) unsigned int parameterSets; // @synthesize parameterSets=_parameterSets;
@property(retain, nonatomic) NSString *profileLevel; // @synthesize profileLevel=_profileLevel;
@property(retain, nonatomic) NSString *remoteDeviceName; // @synthesize remoteDeviceName=_remoteDeviceName;
@property(nonatomic) int hdrMode; // @synthesize hdrMode=_hdrMode;
@property(nonatomic) _Bool ltrpEnabled; // @synthesize ltrpEnabled=_ltrpEnabled;
@property(nonatomic) unsigned long long tilesPerFrame; // @synthesize tilesPerFrame=_tilesPerFrame;
@property(nonatomic) unsigned int pixelFormat; // @synthesize pixelFormat=_pixelFormat;
@property(nonatomic) unsigned long long customHeight; // @synthesize customHeight=_customHeight;
@property(nonatomic) unsigned long long customWidth; // @synthesize customWidth=_customWidth;
@property(nonatomic) unsigned int screenDisplayID; // @synthesize screenDisplayID=_screenDisplayID;
@property(nonatomic) _Atomic unsigned char *videoPriorityPointer; // @synthesize videoPriorityPointer=_videoPriorityPointer;
@property(nonatomic) int encodingMode; // @synthesize encodingMode=_encodingMode;
@property(nonatomic) unsigned long long sourceFramerate; // @synthesize sourceFramerate=_sourceFramerate;
@property(nonatomic) long long type; // @synthesize type=_type;
@property(nonatomic) _Bool isVideoProtected; // @synthesize isVideoProtected=_isVideoProtected;
@property(nonatomic) unsigned long long cvoExtensionID; // @synthesize cvoExtensionID=_cvoExtensionID;
@property(nonatomic) _Bool enableCVO; // @synthesize enableCVO=_enableCVO;
@property(nonatomic) int remoteVideoInitialOrientation; // @synthesize remoteVideoInitialOrientation=_remoteVideoInitialOrientation;
@property(nonatomic) unsigned long long keyFrameInterval; // @synthesize keyFrameInterval=_keyFrameInterval;
@property(readonly, nonatomic) NSDictionary *txCodecFeatureListStrings; // @synthesize txCodecFeatureListStrings=_txCodecFeatureListStrings;
@property(readonly, nonatomic) NSDictionary *rxCodecFeatureListStrings; // @synthesize rxCodecFeatureListStrings=_rxCodecFeatureListStrings;
@property(nonatomic) unsigned long long rxMaxBitrate; // @synthesize rxMaxBitrate=_rxMaxBitrate;
@property(nonatomic) unsigned long long rxMinBitrate; // @synthesize rxMinBitrate=_rxMinBitrate;
@property(nonatomic) unsigned long long txInitialBitrate; // @synthesize txInitialBitrate=_txInitialBitrate;
@property(nonatomic) unsigned long long txMaxBitrate; // @synthesize txMaxBitrate=_txMaxBitrate;
@property(nonatomic) unsigned long long txMinBitrate; // @synthesize txMinBitrate=_txMinBitrate;
@property(nonatomic) unsigned long long framerate; // @synthesize framerate=_framerate;
@property(nonatomic) long long videoResolution; // @synthesize videoResolution=_videoResolution;
- (void)initializeParameterSets;	// IMP=0x000000000028c2f3
- (void)addTxCodecFeatureListString:(id)arg1 codecType:(long long)arg2;	// IMP=0x000000000028c2a1
- (void)addRxCodecFeatureListString:(id)arg1 codecType:(long long)arg2;	// IMP=0x000000000028c24f
- (_Bool)updateWithClientDictionary:(id)arg1;	// IMP=0x000000000028c23d
- (_Bool)applyVideoStreamClientDictionary:(id)arg1;	// IMP=0x000000000028bbe7
- (void)dealloc;	// IMP=0x000000000028b7a6
- (id)initWithClientDictionary:(id)arg1;	// IMP=0x000000000028b4d5
- (id)init;	// IMP=0x000000000028b4c1

@end

