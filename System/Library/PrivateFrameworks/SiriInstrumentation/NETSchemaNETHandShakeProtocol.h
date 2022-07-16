//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSData;

@interface NETSchemaNETHandShakeProtocol
{
    int _protocol;	// 8 = 0x8
    unsigned int _handShakeRTT;	// 12 = 0xc
    unsigned long long _handShakeDuration;	// 16 = 0x10
    struct {
        unsigned int protocol:1;
        unsigned int handShakeRTT:1;
        unsigned int handShakeDuration:1;
    } _has;	// 24 = 0x18
}

@property(nonatomic) unsigned long long handShakeDuration; // @synthesize handShakeDuration=_handShakeDuration;
@property(nonatomic) unsigned int handShakeRTT; // @synthesize handShakeRTT=_handShakeRTT;
@property(nonatomic) int protocol; // @synthesize protocol=_protocol;
- (id)initWithDictionary:(id)arg1;	// IMP=0x000000000024e8b9
- (id)initWithJSON:(id)arg1;	// IMP=0x000000000024e7fb
@property(readonly, nonatomic) NSData *jsonData;
- (id)dictionaryRepresentation;	// IMP=0x000000000024e604
- (unsigned long long)hash;	// IMP=0x000000000024e5a5
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000024e488
- (void)writeTo:(id)arg1;	// IMP=0x000000000024e3f7
- (_Bool)readFrom:(id)arg1;	// IMP=0x000000000024e3ea
- (void)deleteHandShakeDuration;	// IMP=0x000000000024e3c0
@property(nonatomic) _Bool hasHandShakeDuration;
- (void)deleteHandShakeRTT;	// IMP=0x000000000024e34a
@property(nonatomic) _Bool hasHandShakeRTT;
- (void)deleteProtocol;	// IMP=0x000000000024e2d7
@property(nonatomic) _Bool hasProtocol;
- (id)suppressMessageUnderConditions;	// IMP=0x00000000003313ee

@end

