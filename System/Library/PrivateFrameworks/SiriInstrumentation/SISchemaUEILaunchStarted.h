//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSData;

@interface SISchemaUEILaunchStarted
{
    _Bool _exists;	// 8 = 0x8
    CDStruct_b33ad018 _has;	// 12 = 0xc
}

@property(nonatomic) _Bool exists; // @synthesize exists=_exists;
- (id)initWithDictionary:(id)arg1;	// IMP=0x00000000002e52f9
- (id)initWithJSON:(id)arg1;	// IMP=0x00000000002e523b
@property(readonly, nonatomic) NSData *jsonData;
- (id)dictionaryRepresentation;	// IMP=0x00000000002e510b
- (unsigned long long)hash;	// IMP=0x00000000002e50e0
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000002e503b
- (void)writeTo:(id)arg1;	// IMP=0x00000000002e500f
- (_Bool)readFrom:(id)arg1;	// IMP=0x00000000002e5002
- (void)deleteExists;	// IMP=0x00000000002e4fd8
@property(nonatomic) _Bool hasExists;
- (id)suppressMessageUnderConditions;	// IMP=0x000000000033be98

@end
