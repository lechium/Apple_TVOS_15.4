//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <AVConference/NSCopying-Protocol.h>

@class NSData;

__attribute__((visibility("hidden")))
@interface VCMediaNegotiationBlobV2CodecFeatures : PBCodable <NSCopying>
{
    unsigned int _audioFeatures;	// 8 = 0x8
    NSData *_videoFeatures;	// 16 = 0x10
    struct {
        unsigned int audioFeatures:1;
    } _has;	// 24 = 0x18
}

@property(retain, nonatomic) NSData *videoFeatures; // @synthesize videoFeatures=_videoFeatures;
- (void)mergeFrom:(id)arg1;	// IMP=0x0000000000316602
- (unsigned long long)hash;	// IMP=0x00000000003165b6
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000316527
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000316497
- (void)copyTo:(id)arg1;	// IMP=0x000000000031644f
- (void)writeTo:(id)arg1;	// IMP=0x00000000003163f8
- (_Bool)readFrom:(id)arg1;	// IMP=0x00000000003163eb
- (id)dictionaryRepresentation;	// IMP=0x0000000000316129
- (id)description;	// IMP=0x000000000031608f
@property(readonly, nonatomic) _Bool hasVideoFeatures;
@property(nonatomic) _Bool hasAudioFeatures;
@property(nonatomic) unsigned int audioFeatures; // @synthesize audioFeatures=_audioFeatures;
- (void)dealloc;	// IMP=0x0000000000315fb3
- (void)printWithLogFile:(void *)arg1 prefix:(id)arg2;	// IMP=0x000000000031b625
@property(readonly, nonatomic) _Bool allowAudioRecording;
- (id)initWithAllowAudioRecording:(_Bool)arg1 videoFeatures:(id)arg2;	// IMP=0x000000000031b563

@end

