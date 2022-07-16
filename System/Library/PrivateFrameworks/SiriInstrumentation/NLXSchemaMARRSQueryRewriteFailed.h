//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSData;

@interface NLXSchemaMARRSQueryRewriteFailed
{
    int _reason;	// 8 = 0x8
    CDStruct_6555f803 _has;	// 12 = 0xc
}

@property(nonatomic) int reason; // @synthesize reason=_reason;
- (id)initWithDictionary:(id)arg1;	// IMP=0x00000000001b4295
- (id)initWithJSON:(id)arg1;	// IMP=0x00000000001b41d7
@property(readonly, nonatomic) NSData *jsonData;
- (id)dictionaryRepresentation;	// IMP=0x00000000001b40bb
- (unsigned long long)hash;	// IMP=0x00000000001b4090
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000001b3feb
- (void)writeTo:(id)arg1;	// IMP=0x00000000001b3fc0
- (_Bool)readFrom:(id)arg1;	// IMP=0x00000000001b3fb3
- (void)deleteReason;	// IMP=0x00000000001b3f89
@property(nonatomic) _Bool hasReason;
- (id)suppressMessageUnderConditions;	// IMP=0x0000000000328de0

@end
