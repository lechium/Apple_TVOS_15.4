//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <PersonalizationPortraitInternals/NSCopying-Protocol.h>

@class NSString;

@interface PPM2EngagementRatio : PBCodable <NSCopying>
{
    NSString *_activeTreatments;	// 8 = 0x8
    int _domain;	// 16 = 0x10
    unsigned int _engagedCount;	// 20 = 0x14
    unsigned int _evaluatedCount;	// 24 = 0x18
    unsigned int _k;	// 28 = 0x1c
    NSString *_mappingId;	// 32 = 0x20
    unsigned int _offeredCount;	// 40 = 0x28
    unsigned int _rejectedCount;	// 44 = 0x2c
    struct {
        unsigned int domain:1;
        unsigned int engagedCount:1;
        unsigned int evaluatedCount:1;
        unsigned int k:1;
        unsigned int offeredCount:1;
        unsigned int rejectedCount:1;
    } _has;	// 48 = 0x30
}

- (void).cxx_destruct;	// IMP=0x00000000001042e3
@property(retain, nonatomic) NSString *mappingId; // @synthesize mappingId=_mappingId;
@property(nonatomic) unsigned int offeredCount; // @synthesize offeredCount=_offeredCount;
@property(retain, nonatomic) NSString *activeTreatments; // @synthesize activeTreatments=_activeTreatments;
@property(nonatomic) unsigned int rejectedCount; // @synthesize rejectedCount=_rejectedCount;
@property(nonatomic) unsigned int engagedCount; // @synthesize engagedCount=_engagedCount;
@property(nonatomic) unsigned int evaluatedCount; // @synthesize evaluatedCount=_evaluatedCount;
@property(nonatomic) unsigned int k; // @synthesize k=_k;
- (void)mergeFrom:(id)arg1;	// IMP=0x0000000000104135
- (unsigned long long)hash;	// IMP=0x000000000010401e
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000103e4c
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000103cfb
- (void)copyTo:(id)arg1;	// IMP=0x0000000000103be7
- (void)writeTo:(id)arg1;	// IMP=0x0000000000103ac1
- (_Bool)readFrom:(id)arg1;	// IMP=0x0000000000103ab4
- (id)dictionaryRepresentation;	// IMP=0x000000000010378c
- (id)description;	// IMP=0x00000000001036dd
@property(readonly, nonatomic) _Bool hasMappingId;
@property(nonatomic) _Bool hasOfferedCount;
@property(readonly, nonatomic) _Bool hasActiveTreatments;
- (int)StringAsDomain:(id)arg1;	// IMP=0x0000000000103530
- (id)domainAsString:(int)arg1;	// IMP=0x000000000010347e
@property(nonatomic) _Bool hasDomain;
@property(nonatomic) int domain; // @synthesize domain=_domain;
@property(nonatomic) _Bool hasRejectedCount;
@property(nonatomic) _Bool hasEngagedCount;
@property(nonatomic) _Bool hasEvaluatedCount;
@property(nonatomic) _Bool hasK;

@end
