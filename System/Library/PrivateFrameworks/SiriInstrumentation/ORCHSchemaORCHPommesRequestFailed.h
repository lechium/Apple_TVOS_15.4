//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSData;

@interface ORCHSchemaORCHPommesRequestFailed
{
    int _reason;	// 8 = 0x8
    CDStruct_6555f803 _has;	// 12 = 0xc
}

@property(nonatomic) int reason; // @synthesize reason=_reason;
- (id)initWithDictionary:(id)arg1;	// IMP=0x0000000000277fae
- (id)initWithJSON:(id)arg1;	// IMP=0x0000000000277ef0
@property(readonly, nonatomic) NSData *jsonData;
- (id)dictionaryRepresentation;	// IMP=0x0000000000277da3
- (unsigned long long)hash;	// IMP=0x0000000000277d78
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000277cd3
- (void)writeTo:(id)arg1;	// IMP=0x0000000000277ca8
- (_Bool)readFrom:(id)arg1;	// IMP=0x0000000000277c9b
- (void)deleteReason;	// IMP=0x0000000000277c71
@property(nonatomic) _Bool hasReason;
- (id)suppressMessageUnderConditions;	// IMP=0x000000000033408f

@end

