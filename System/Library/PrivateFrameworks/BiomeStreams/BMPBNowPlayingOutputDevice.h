//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <BiomeStreams/NSCopying-Protocol.h>

@class NSString;

@interface BMPBNowPlayingOutputDevice : PBCodable <NSCopying>
{
    NSString *_outputDeviceId;	// 8 = 0x8
    int _outputDeviceSubType;	// 16 = 0x10
    int _outputDeviceType;	// 20 = 0x14
    struct {
        unsigned int outputDeviceSubType:1;
        unsigned int outputDeviceType:1;
    } _has;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x00000000000cf7e9
@property(retain, nonatomic) NSString *outputDeviceId; // @synthesize outputDeviceId=_outputDeviceId;
- (void)mergeFrom:(id)arg1;	// IMP=0x00000000000cf744
- (unsigned long long)hash;	// IMP=0x00000000000cf6da
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000000cf5f3
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000000cf546
- (void)copyTo:(id)arg1;	// IMP=0x00000000000cf4c6
- (void)writeTo:(id)arg1;	// IMP=0x00000000000cf438
- (_Bool)readFrom:(id)arg1;	// IMP=0x00000000000cf42b
- (id)dictionaryRepresentation;	// IMP=0x00000000000ceec4
- (id)description;	// IMP=0x00000000000cee15
@property(readonly, nonatomic) _Bool hasOutputDeviceId;
- (int)StringAsOutputDeviceSubType:(id)arg1;	// IMP=0x00000000000ceb3c
- (id)outputDeviceSubTypeAsString:(int)arg1;	// IMP=0x00000000000ce9df
@property(nonatomic) _Bool hasOutputDeviceSubType;
@property(nonatomic) int outputDeviceSubType; // @synthesize outputDeviceSubType=_outputDeviceSubType;
- (int)StringAsOutputDeviceType:(id)arg1;	// IMP=0x00000000000ce88c
- (id)outputDeviceTypeAsString:(int)arg1;	// IMP=0x00000000000ce7f4
@property(nonatomic) _Bool hasOutputDeviceType;
@property(nonatomic) int outputDeviceType; // @synthesize outputDeviceType=_outputDeviceType;

@end
