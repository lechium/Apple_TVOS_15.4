//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSArray, NSData;

@interface FLOWSchemaFLOWBriefingContext
{
    NSArray *_enabledFeatures;	// 8 = 0x8
    int _briefingAttribute;	// 16 = 0x10
    struct {
        unsigned int briefingAttribute:1;
    } _has;	// 20 = 0x14
}

- (void).cxx_destruct;	// IMP=0x0000000000137204
@property(nonatomic) int briefingAttribute; // @synthesize briefingAttribute=_briefingAttribute;
@property(copy, nonatomic) NSArray *enabledFeatures; // @synthesize enabledFeatures=_enabledFeatures;
- (id)initWithDictionary:(id)arg1;	// IMP=0x0000000000136f1a
- (id)initWithJSON:(id)arg1;	// IMP=0x0000000000136e5c
@property(readonly, nonatomic) NSData *jsonData;
- (id)dictionaryRepresentation;	// IMP=0x0000000000136c1e
- (unsigned long long)hash;	// IMP=0x0000000000136bcb
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000001369fa
- (void)writeTo:(id)arg1;	// IMP=0x000000000013686d
- (_Bool)readFrom:(id)arg1;	// IMP=0x000000000013660f
- (void)deleteBriefingAttribute;	// IMP=0x00000000001365e5
@property(nonatomic) _Bool hasBriefingAttribute;
- (int)enabledFeaturesAtIndex:(unsigned long long)arg1;	// IMP=0x0000000000136551
- (unsigned long long)enabledFeaturesCount;	// IMP=0x0000000000136534
- (void)addEnabledFeatures:(int)arg1;	// IMP=0x000000000013649e
- (void)deleteEnabledFeatures;	// IMP=0x000000000013648c
- (void)clearEnabledFeatures;	// IMP=0x000000000013646f
- (id)suppressMessageUnderConditions;	// IMP=0x000000000032141a

@end
