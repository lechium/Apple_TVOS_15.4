//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSData;

@interface ASRSchemaASRJitLanguageModelEnrollmentStarted
{
    _Bool _exists;	// 8 = 0x8
    CDStruct_b33ad018 _has;	// 12 = 0xc
}

@property(nonatomic) _Bool exists; // @synthesize exists=_exists;
- (id)initWithDictionary:(id)arg1;	// IMP=0x000000000002a8a0
- (id)initWithJSON:(id)arg1;	// IMP=0x000000000002a7e2
@property(readonly, nonatomic) NSData *jsonData;
- (id)dictionaryRepresentation;	// IMP=0x000000000002a6b2
- (unsigned long long)hash;	// IMP=0x000000000002a687
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000002a5e2
- (void)writeTo:(id)arg1;	// IMP=0x000000000002a5b6
- (_Bool)readFrom:(id)arg1;	// IMP=0x000000000002a5a9
- (void)deleteExists;	// IMP=0x000000000002a57f
@property(nonatomic) _Bool hasExists;
- (id)suppressMessageUnderConditions;	// IMP=0x000000000030f254

@end
