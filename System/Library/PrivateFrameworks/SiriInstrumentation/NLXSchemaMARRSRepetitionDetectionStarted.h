//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSData;

@interface NLXSchemaMARRSRepetitionDetectionStarted
{
    _Bool _exists;	// 8 = 0x8
    CDStruct_b33ad018 _has;	// 12 = 0xc
}

@property(nonatomic) _Bool exists; // @synthesize exists=_exists;
- (id)initWithDictionary:(id)arg1;	// IMP=0x00000000001b86fa
- (id)initWithJSON:(id)arg1;	// IMP=0x00000000001b863c
@property(readonly, nonatomic) NSData *jsonData;
- (id)dictionaryRepresentation;	// IMP=0x00000000001b850c
- (unsigned long long)hash;	// IMP=0x00000000001b84e1
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000001b843c
- (void)writeTo:(id)arg1;	// IMP=0x00000000001b8410
- (_Bool)readFrom:(id)arg1;	// IMP=0x00000000001b8403
- (void)deleteExists;	// IMP=0x00000000001b83d9
@property(nonatomic) _Bool hasExists;
- (id)suppressMessageUnderConditions;	// IMP=0x00000000003291e1

@end

