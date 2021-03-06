//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSData;

@interface TTSSchemaTTSVoiceContext
{
    int _voiceType;	// 8 = 0x8
    int _voiceFootprint;	// 12 = 0xc
    unsigned int _voiceVersion;	// 16 = 0x10
    unsigned int _resourceVersion;	// 20 = 0x14
    struct {
        unsigned int voiceType:1;
        unsigned int voiceFootprint:1;
        unsigned int voiceVersion:1;
        unsigned int resourceVersion:1;
    } _has;	// 24 = 0x18
}

@property(nonatomic) unsigned int resourceVersion; // @synthesize resourceVersion=_resourceVersion;
@property(nonatomic) unsigned int voiceVersion; // @synthesize voiceVersion=_voiceVersion;
@property(nonatomic) int voiceFootprint; // @synthesize voiceFootprint=_voiceFootprint;
@property(nonatomic) int voiceType; // @synthesize voiceType=_voiceType;
- (id)initWithDictionary:(id)arg1;	// IMP=0x00000000002d6c16
- (id)initWithJSON:(id)arg1;	// IMP=0x00000000002d6b58
@property(readonly, nonatomic) NSData *jsonData;
- (id)dictionaryRepresentation;	// IMP=0x00000000002d68bd
- (unsigned long long)hash;	// IMP=0x00000000002d6840
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000002d66e3
- (void)writeTo:(id)arg1;	// IMP=0x00000000002d6634
- (_Bool)readFrom:(id)arg1;	// IMP=0x00000000002d6627
- (void)deleteResourceVersion;	// IMP=0x00000000002d65fd
@property(nonatomic) _Bool hasResourceVersion;
- (void)deleteVoiceVersion;	// IMP=0x00000000002d6588
@property(nonatomic) _Bool hasVoiceVersion;
- (void)deleteVoiceFootprint;	// IMP=0x00000000002d6513
@property(nonatomic) _Bool hasVoiceFootprint;
- (void)deleteVoiceType;	// IMP=0x00000000002d64a0
@property(nonatomic) _Bool hasVoiceType;
- (id)suppressMessageUnderConditions;	// IMP=0x000000000033ac3c

@end

