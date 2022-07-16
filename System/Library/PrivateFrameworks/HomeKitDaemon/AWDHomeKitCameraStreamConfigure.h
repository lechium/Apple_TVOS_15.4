//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <HomeKitDaemon/NSCopying-Protocol.h>

@interface AWDHomeKitCameraStreamConfigure : PBCodable <NSCopying>
{
    int _audioCodec;	// 8 = 0x8
    int _cryptoSuite;	// 12 = 0xc
    unsigned int _framerate;	// 16 = 0x10
    int _resolution;	// 20 = 0x14
    int _sampleRate;	// 24 = 0x18
    struct {
        unsigned int audioCodec:1;
        unsigned int cryptoSuite:1;
        unsigned int framerate:1;
        unsigned int resolution:1;
        unsigned int sampleRate:1;
    } _has;	// 28 = 0x1c
}

@property(nonatomic) unsigned int framerate; // @synthesize framerate=_framerate;
- (void)mergeFrom:(id)arg1;	// IMP=0x000000000056ba20
- (unsigned long long)hash;	// IMP=0x000000000056b986
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000056b864
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000056b79c
- (void)copyTo:(id)arg1;	// IMP=0x000000000056b6f7
- (void)writeTo:(id)arg1;	// IMP=0x000000000056b629
- (_Bool)readFrom:(id)arg1;	// IMP=0x000000000056b61c
- (id)dictionaryRepresentation;	// IMP=0x000000000056b2f6
- (id)description;	// IMP=0x000000000056b247
- (int)StringAsCryptoSuite:(id)arg1;	// IMP=0x000000000056b1b5
- (id)cryptoSuiteAsString:(int)arg1;	// IMP=0x000000000056b14f
@property(nonatomic) _Bool hasCryptoSuite;
@property(nonatomic) int cryptoSuite; // @synthesize cryptoSuite=_cryptoSuite;
- (int)StringAsSampleRate:(id)arg1;	// IMP=0x000000000056b080
- (id)sampleRateAsString:(int)arg1;	// IMP=0x000000000056b02a
@property(nonatomic) _Bool hasSampleRate;
@property(nonatomic) int sampleRate; // @synthesize sampleRate=_sampleRate;
- (int)StringAsAudioCodec:(id)arg1;	// IMP=0x000000000056af55
- (id)audioCodecAsString:(int)arg1;	// IMP=0x000000000056aeff
@property(nonatomic) _Bool hasAudioCodec;
@property(nonatomic) int audioCodec; // @synthesize audioCodec=_audioCodec;
@property(nonatomic) _Bool hasFramerate;
- (int)StringAsResolution:(id)arg1;	// IMP=0x000000000056acac
- (id)resolutionAsString:(int)arg1;	// IMP=0x000000000056abd2
@property(nonatomic) _Bool hasResolution;
@property(nonatomic) int resolution; // @synthesize resolution=_resolution;

@end
