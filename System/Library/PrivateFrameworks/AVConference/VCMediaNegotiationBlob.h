//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <AVConference/NSCopying-Protocol.h>

@class NSMutableArray, NSString, VCMediaNegotiationBlobAudioSettings, VCMediaNegotiationBlobCaptionsSettings, VCMediaNegotiationBlobMomentsSettings, VCMediaNegotiationBlobVideoSettings, VCMediaNegotiationFaceTimeSettings;

__attribute__((visibility("hidden")))
@interface VCMediaNegotiationBlob : PBCodable <NSCopying>
{
    unsigned long long _ntpTime;	// 8 = 0x8
    VCMediaNegotiationBlobAudioSettings *_audioSettings;	// 16 = 0x10
    NSMutableArray *_bandwidthSettings;	// 24 = 0x18
    NSString *_basebandCodec;	// 32 = 0x20
    unsigned int _basebandCodecSampleRate;	// 40 = 0x28
    unsigned int _blobVersion;	// 44 = 0x2c
    VCMediaNegotiationBlobCaptionsSettings *_captionsSettings;	// 48 = 0x30
    VCMediaNegotiationFaceTimeSettings *_faceTimeSettings;	// 56 = 0x38
    unsigned int _mediaControlInfoVersion;	// 64 = 0x40
    VCMediaNegotiationBlobMomentsSettings *_momentsSettings;	// 72 = 0x48
    NSMutableArray *_multiwayAudioStreams;	// 80 = 0x50
    NSMutableArray *_multiwayVideoStreams;	// 88 = 0x58
    VCMediaNegotiationBlobVideoSettings *_screenSettings;	// 96 = 0x60
    NSString *_userAgent;	// 104 = 0x68
    VCMediaNegotiationBlobVideoSettings *_videoSettings;	// 112 = 0x70
    _Bool _allowDynamicMaxBitrate;	// 120 = 0x78
    _Bool _allowsContentsChangeWithAspectPreservation;	// 121 = 0x79
    struct {
        unsigned int ntpTime:1;
        unsigned int basebandCodecSampleRate:1;
        unsigned int blobVersion:1;
        unsigned int mediaControlInfoVersion:1;
        unsigned int allowDynamicMaxBitrate:1;
        unsigned int allowsContentsChangeWithAspectPreservation:1;
    } _has;	// 124 = 0x7c
}

+ (Class)multiwayVideoStreamType;	// IMP=0x00000000001cd5ae
+ (Class)multiwayAudioStreamsType;	// IMP=0x00000000001cd453
+ (Class)bandwidthSettingsType;	// IMP=0x00000000001cd389
@property(retain, nonatomic) VCMediaNegotiationFaceTimeSettings *faceTimeSettings; // @synthesize faceTimeSettings=_faceTimeSettings;
@property(retain, nonatomic) NSMutableArray *multiwayVideoStreams; // @synthesize multiwayVideoStreams=_multiwayVideoStreams;
@property(nonatomic) unsigned int blobVersion; // @synthesize blobVersion=_blobVersion;
@property(nonatomic) unsigned long long ntpTime; // @synthesize ntpTime=_ntpTime;
@property(retain, nonatomic) VCMediaNegotiationBlobMomentsSettings *momentsSettings; // @synthesize momentsSettings=_momentsSettings;
@property(retain, nonatomic) NSMutableArray *multiwayAudioStreams; // @synthesize multiwayAudioStreams=_multiwayAudioStreams;
@property(retain, nonatomic) VCMediaNegotiationBlobCaptionsSettings *captionsSettings; // @synthesize captionsSettings=_captionsSettings;
@property(retain, nonatomic) NSMutableArray *bandwidthSettings; // @synthesize bandwidthSettings=_bandwidthSettings;
@property(nonatomic) unsigned int basebandCodecSampleRate; // @synthesize basebandCodecSampleRate=_basebandCodecSampleRate;
@property(retain, nonatomic) NSString *basebandCodec; // @synthesize basebandCodec=_basebandCodec;
@property(retain, nonatomic) NSString *userAgent; // @synthesize userAgent=_userAgent;
@property(retain, nonatomic) VCMediaNegotiationBlobVideoSettings *screenSettings; // @synthesize screenSettings=_screenSettings;
@property(retain, nonatomic) VCMediaNegotiationBlobVideoSettings *videoSettings; // @synthesize videoSettings=_videoSettings;
@property(retain, nonatomic) VCMediaNegotiationBlobAudioSettings *audioSettings; // @synthesize audioSettings=_audioSettings;
@property(nonatomic) _Bool allowsContentsChangeWithAspectPreservation; // @synthesize allowsContentsChangeWithAspectPreservation=_allowsContentsChangeWithAspectPreservation;
@property(nonatomic) _Bool allowDynamicMaxBitrate; // @synthesize allowDynamicMaxBitrate=_allowDynamicMaxBitrate;
- (void)mergeFrom:(id)arg1;	// IMP=0x00000000001cfb6d
- (unsigned long long)hash;	// IMP=0x00000000001cf94c
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000001cf5a3
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000001cefc8
- (void)copyTo:(id)arg1;	// IMP=0x00000000001cec65
- (void)writeTo:(id)arg1;	// IMP=0x00000000001ce825
- (_Bool)readFrom:(id)arg1;	// IMP=0x00000000001ce818
- (id)dictionaryRepresentation;	// IMP=0x00000000001cd6db
- (id)description;	// IMP=0x00000000001cd641
@property(readonly, nonatomic) _Bool hasFaceTimeSettings;
@property(nonatomic) _Bool hasMediaControlInfoVersion;
@property(nonatomic) unsigned int mediaControlInfoVersion; // @synthesize mediaControlInfoVersion=_mediaControlInfoVersion;
- (id)multiwayVideoStreamAtIndex:(unsigned long long)arg1;	// IMP=0x00000000001cd591
- (unsigned long long)multiwayVideoStreamsCount;	// IMP=0x00000000001cd574
- (void)addMultiwayVideoStream:(id)arg1;	// IMP=0x00000000001cd527
- (void)clearMultiwayVideoStreams;	// IMP=0x00000000001cd50a
@property(nonatomic) _Bool hasBlobVersion;
@property(nonatomic) _Bool hasNtpTime;
@property(readonly, nonatomic) _Bool hasMomentsSettings;
- (id)multiwayAudioStreamsAtIndex:(unsigned long long)arg1;	// IMP=0x00000000001cd436
- (unsigned long long)multiwayAudioStreamsCount;	// IMP=0x00000000001cd419
- (void)addMultiwayAudioStreams:(id)arg1;	// IMP=0x00000000001cd3cc
- (void)clearMultiwayAudioStreams;	// IMP=0x00000000001cd3af
@property(readonly, nonatomic) _Bool hasCaptionsSettings;
- (id)bandwidthSettingsAtIndex:(unsigned long long)arg1;	// IMP=0x00000000001cd36c
- (unsigned long long)bandwidthSettingsCount;	// IMP=0x00000000001cd34f
- (void)addBandwidthSettings:(id)arg1;	// IMP=0x00000000001cd302
- (void)clearBandwidthSettings;	// IMP=0x00000000001cd2e5
@property(nonatomic) _Bool hasBasebandCodecSampleRate;
@property(readonly, nonatomic) _Bool hasBasebandCodec;
@property(readonly, nonatomic) _Bool hasUserAgent;
@property(readonly, nonatomic) _Bool hasScreenSettings;
@property(readonly, nonatomic) _Bool hasVideoSettings;
@property(readonly, nonatomic) _Bool hasAudioSettings;
@property(nonatomic) _Bool hasAllowsContentsChangeWithAspectPreservation;
@property(nonatomic) _Bool hasAllowDynamicMaxBitrate;
- (void)dealloc;	// IMP=0x00000000001cd09c
- (void)printWithTitle:(id)arg1 blobSize:(unsigned int)arg2 logFile:(void *)arg3;	// IMP=0x00000000002e7239
- (void)printMultiwayVideoStreamsWithLogFile:(void *)arg1;	// IMP=0x00000000002e7048
- (void)printMultiwayAudioStreamsWithLogFile:(void *)arg1;	// IMP=0x00000000002e6e57
- (void)printMomentsSettingsWithLogFile:(void *)arg1;	// IMP=0x00000000002e6b2a
- (void)printCaptionsSettingsWithLogFile:(void *)arg1;	// IMP=0x00000000002e6851
- (void)printBandwidthSettingsWithLogFile:(void *)arg1;	// IMP=0x00000000002e63dc
- (void)formatBandwidthConfig:(int)arg1 maxBanxwidth:(unsigned int)arg2 bandwidthString:(id)arg3;	// IMP=0x00000000002e6188

@end

