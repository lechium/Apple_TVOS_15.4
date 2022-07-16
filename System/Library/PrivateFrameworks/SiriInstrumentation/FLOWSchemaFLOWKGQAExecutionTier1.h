//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSArray, NSData, NSString;

@interface FLOWSchemaFLOWKGQAExecutionTier1
{
    NSArray *_primaryEntities;	// 8 = 0x8
    NSArray *_secondaryEntities;	// 16 = 0x10
    NSString *_answerId;	// 24 = 0x18
    _Bool _hasAnswerId;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x000000000014c366
@property(nonatomic) _Bool hasAnswerId; // @synthesize hasAnswerId=_hasAnswerId;
@property(copy, nonatomic) NSString *answerId; // @synthesize answerId=_answerId;
@property(copy, nonatomic) NSArray *secondaryEntities; // @synthesize secondaryEntities=_secondaryEntities;
@property(copy, nonatomic) NSArray *primaryEntities; // @synthesize primaryEntities=_primaryEntities;
- (id)initWithDictionary:(id)arg1;	// IMP=0x000000000014be73
- (id)initWithJSON:(id)arg1;	// IMP=0x000000000014bdb5
@property(readonly, nonatomic) NSData *jsonData;
- (id)dictionaryRepresentation;	// IMP=0x000000000014bbab
- (unsigned long long)hash;	// IMP=0x000000000014bb3e
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000014b74f
- (void)writeTo:(id)arg1;	// IMP=0x000000000014b4f4
- (_Bool)readFrom:(id)arg1;	// IMP=0x000000000014b2f0
- (void)deleteAnswerId;	// IMP=0x000000000014b2dc
- (id)secondaryEntitiesAtIndex:(unsigned long long)arg1;	// IMP=0x000000000014b2aa
- (unsigned long long)secondaryEntitiesCount;	// IMP=0x000000000014b28d
- (void)addSecondaryEntities:(id)arg1;	// IMP=0x000000000014b213
- (void)deleteSecondaryEntities;	// IMP=0x000000000014b201
- (void)clearSecondaryEntities;	// IMP=0x000000000014b1e4
- (id)primaryEntitiesAtIndex:(unsigned long long)arg1;	// IMP=0x000000000014b1c7
- (unsigned long long)primaryEntitiesCount;	// IMP=0x000000000014b1aa
- (void)addPrimaryEntities:(id)arg1;	// IMP=0x000000000014b130
- (void)deletePrimaryEntities;	// IMP=0x000000000014b11e
- (void)clearPrimaryEntities;	// IMP=0x000000000014b101
- (id)applySensitiveConditionsPolicy:(id)arg1;	// IMP=0x0000000000322925
- (id)suppressMessageUnderConditions;	// IMP=0x00000000003228ed

@end
