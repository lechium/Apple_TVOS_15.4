//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSData;

@interface MHSchemaMHAssistantDaemonAudioFetchRouteStarted
{
    _Bool _exists;	// 8 = 0x8
    CDStruct_b33ad018 _has;	// 12 = 0xc
}

@property(nonatomic) _Bool exists; // @synthesize exists=_exists;
- (id)initWithDictionary:(id)arg1;	// IMP=0x00000000001c298f
- (id)initWithJSON:(id)arg1;	// IMP=0x00000000001c28d1
@property(readonly, nonatomic) NSData *jsonData;
- (id)dictionaryRepresentation;	// IMP=0x00000000001c27a1
- (unsigned long long)hash;	// IMP=0x00000000001c2776
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000001c26d1
- (void)writeTo:(id)arg1;	// IMP=0x00000000001c26a5
- (_Bool)readFrom:(id)arg1;	// IMP=0x00000000001c2698
- (void)deleteExists;	// IMP=0x00000000001c266e
@property(nonatomic) _Bool hasExists;
- (id)suppressMessageUnderConditions;	// IMP=0x0000000000329ab4

@end

