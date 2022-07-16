//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;

@interface AVCVideoStreamConfig : NSObject
{
    long long _txCodecType;	// 8 = 0x8
    long long _rxCodecType;	// 16 = 0x10
    long long _videoResolution;	// 24 = 0x18
    unsigned long long _framerate;	// 32 = 0x20
    unsigned long long _txMaxBitrate;	// 40 = 0x28
    unsigned long long _txMinBitrate;	// 48 = 0x30
    unsigned long long _rxMaxBitrate;	// 56 = 0x38
    unsigned long long _rxMinBitrate;	// 64 = 0x40
    NSString *_txCodecFeatureListString;	// 72 = 0x48
    NSString *_rxCodecFeatureListString;	// 80 = 0x50
    unsigned long long _keyFrameInterval;	// 88 = 0x58
    int _remoteVideoInitialOrientation;	// 96 = 0x60
    _Bool _enableCVO;	// 100 = 0x64
    unsigned long long _cvoExtensionID;	// 104 = 0x68
    _Bool _isVideoProtected;	// 112 = 0x70
    long long _videoStreamMode;	// 120 = 0x78
    long long _captureSource;	// 128 = 0x80
    unsigned long long _screenDisplayID;	// 136 = 0x88
    unsigned long long _customWidth;	// 144 = 0x90
    unsigned long long _customHeight;	// 152 = 0x98
    unsigned long long _tilesPerFrame;	// 160 = 0xa0
    unsigned int _pixelFormat;	// 168 = 0xa8
    _Bool _ltrpEnabled;	// 172 = 0xac
    unsigned long long _hdrMode;	// 176 = 0xb0
    NSString *_remoteDeviceName;	// 184 = 0xb8
    _Bool _latencySensitiveModeEnabled;	// 192 = 0xc0
    NSString *_profileLevel;	// 200 = 0xc8
}

+ (_Bool)isPixelFormatValid:(unsigned int)arg1 hdrMode:(unsigned long long)arg2;	// IMP=0x00000000003b4cbe
+ (long long)videoStreamTypeFromClientVideoStreamMode:(long long)arg1;	// IMP=0x00000000003b4144
+ (long long)clientVideoStreamModeFromVideoStreamType:(long long)arg1;	// IMP=0x00000000003b412d
+ (int)videoCaptureSourceFromClientCaptureSource:(long long)arg1;	// IMP=0x00000000003b4113
+ (long long)clientVideoCaptureSourceFromCaptureSource:(int)arg1;	// IMP=0x00000000003b40f4
+ (long long)clientVideoResolutionFromResolution:(long long)arg1;	// IMP=0x00000000003b40d5
+ (long long)videoResolutionFromClientResolution:(long long)arg1;	// IMP=0x00000000003b40b4
+ (long long)clientCodecTypeWithCodecType:(long long)arg1;	// IMP=0x00000000003b40a5
+ (long long)codecTypeWithClientCodecType:(long long)arg1;	// IMP=0x00000000003b4084
@property(retain, nonatomic) NSString *profileLevel; // @synthesize profileLevel=_profileLevel;
@property(nonatomic, getter=isLatencySensitiveModeEnabled) _Bool latencySensitiveModeEnabled; // @synthesize latencySensitiveModeEnabled=_latencySensitiveModeEnabled;
@property(retain, nonatomic) NSString *remoteDeviceName; // @synthesize remoteDeviceName=_remoteDeviceName;
@property(nonatomic) unsigned long long hdrMode; // @synthesize hdrMode=_hdrMode;
@property(nonatomic, getter=isLTRPEnabled) _Bool ltrpEnabled; // @synthesize ltrpEnabled=_ltrpEnabled;
@property(nonatomic) unsigned int pixelFormat; // @synthesize pixelFormat=_pixelFormat;
@property(nonatomic) unsigned long long tilesPerFrame; // @synthesize tilesPerFrame=_tilesPerFrame;
@property(nonatomic) unsigned long long customHeight; // @synthesize customHeight=_customHeight;
@property(nonatomic) unsigned long long customWidth; // @synthesize customWidth=_customWidth;
@property(nonatomic) unsigned long long screenDisplayID; // @synthesize screenDisplayID=_screenDisplayID;
@property(nonatomic) long long captureSource; // @synthesize captureSource=_captureSource;
@property(nonatomic) long long videoStreamMode; // @synthesize videoStreamMode=_videoStreamMode;
@property(nonatomic) _Bool isVideoProtected; // @synthesize isVideoProtected=_isVideoProtected;
@property(nonatomic) unsigned long long cvoExtensionID; // @synthesize cvoExtensionID=_cvoExtensionID;
@property(nonatomic) _Bool enableCVO; // @synthesize enableCVO=_enableCVO;
@property(nonatomic) int remoteVideoInitialOrientation; // @synthesize remoteVideoInitialOrientation=_remoteVideoInitialOrientation;
@property(nonatomic) unsigned long long keyFrameInterval; // @synthesize keyFrameInterval=_keyFrameInterval;
@property(retain, nonatomic) NSString *rxCodecFeatureListString; // @synthesize rxCodecFeatureListString=_rxCodecFeatureListString;
@property(retain, nonatomic) NSString *txCodecFeatureListString; // @synthesize txCodecFeatureListString=_txCodecFeatureListString;
@property(nonatomic) unsigned long long rxMinBitrate; // @synthesize rxMinBitrate=_rxMinBitrate;
@property(nonatomic) unsigned long long rxMaxBitrate; // @synthesize rxMaxBitrate=_rxMaxBitrate;
@property(nonatomic) unsigned long long txMinBitrate; // @synthesize txMinBitrate=_txMinBitrate;
@property(nonatomic) unsigned long long txMaxBitrate; // @synthesize txMaxBitrate=_txMaxBitrate;
@property(nonatomic) unsigned long long framerate; // @synthesize framerate=_framerate;
@property(nonatomic) long long videoResolution; // @synthesize videoResolution=_videoResolution;
@property(nonatomic) long long rxCodecType; // @synthesize rxCodecType=_rxCodecType;
@property(nonatomic) long long txCodecType; // @synthesize txCodecType=_txCodecType;
- (id)dictionary;	// IMP=0x00000000003b4617
- (void)setUpWithDictionary:(id)arg1;	// IMP=0x00000000003b415b
- (_Bool)isValidForDirection:(long long)arg1;	// IMP=0x00000000003b3f1b
- (void)dealloc;	// IMP=0x00000000003b3e9a
- (id)init;	// IMP=0x00000000003b3e06

@end

