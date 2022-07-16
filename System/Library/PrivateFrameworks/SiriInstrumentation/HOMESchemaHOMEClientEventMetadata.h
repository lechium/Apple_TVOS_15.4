//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSData, SISchemaUUID;

@interface HOMESchemaHOMEClientEventMetadata
{
    SISchemaUUID *_homeComponentId;	// 8 = 0x8
    _Bool _hasHomeComponentId;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x00000000001961a3
@property(nonatomic) _Bool hasHomeComponentId; // @synthesize hasHomeComponentId=_hasHomeComponentId;
@property(retain, nonatomic) SISchemaUUID *homeComponentId; // @synthesize homeComponentId=_homeComponentId;
- (id)initWithDictionary:(id)arg1;	// IMP=0x0000000000196071
- (id)initWithJSON:(id)arg1;	// IMP=0x0000000000195fb3
@property(readonly, nonatomic) NSData *jsonData;
- (id)dictionaryRepresentation;	// IMP=0x0000000000195e2e
- (unsigned long long)hash;	// IMP=0x0000000000195e11
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000195c8f
- (void)writeTo:(id)arg1;	// IMP=0x0000000000195c08
- (_Bool)readFrom:(id)arg1;	// IMP=0x0000000000195bfb
- (void)deleteHomeComponentId;	// IMP=0x0000000000195be7
- (id)applySensitiveConditionsPolicy:(id)arg1;	// IMP=0x0000000000326e9e
- (id)suppressMessageUnderConditions;	// IMP=0x0000000000326e66

@end

