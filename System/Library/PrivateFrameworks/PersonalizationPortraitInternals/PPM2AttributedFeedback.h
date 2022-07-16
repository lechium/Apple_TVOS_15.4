//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <PersonalizationPortraitInternals/NSCopying-Protocol.h>

@class NSString;

@interface PPM2AttributedFeedback : PBCodable <NSCopying>
{
    NSString *_activeTreatments;	// 8 = 0x8
    int _algorithm;	// 16 = 0x10
    int _category;	// 20 = 0x14
    NSString *_clientId;	// 24 = 0x18
    int _domain;	// 32 = 0x20
    NSString *_dynamicCategory;	// 40 = 0x28
    NSString *_mappingId;	// 48 = 0x30
    int _source;	// 56 = 0x38
    int _type;	// 60 = 0x3c
    _Bool _isRemote;	// 64 = 0x40
    struct {
        unsigned int algorithm:1;
        unsigned int category:1;
        unsigned int domain:1;
        unsigned int source:1;
        unsigned int type:1;
        unsigned int isRemote:1;
    } _has;	// 68 = 0x44
}

+ (id)options;	// IMP=0x000000000004c5cc
- (void).cxx_destruct;	// IMP=0x000000000004c03b
@property(nonatomic) _Bool isRemote; // @synthesize isRemote=_isRemote;
@property(retain, nonatomic) NSString *dynamicCategory; // @synthesize dynamicCategory=_dynamicCategory;
@property(retain, nonatomic) NSString *mappingId; // @synthesize mappingId=_mappingId;
@property(retain, nonatomic) NSString *clientId; // @synthesize clientId=_clientId;
@property(retain, nonatomic) NSString *activeTreatments; // @synthesize activeTreatments=_activeTreatments;
- (void)mergeFrom:(id)arg1;	// IMP=0x000000000004be43
- (unsigned long long)hash;	// IMP=0x000000000004bccf
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000004ba8b
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000004b8e6
- (void)copyTo:(id)arg1;	// IMP=0x000000000004b792
- (void)writeTo:(id)arg1;	// IMP=0x000000000004b631
- (_Bool)readFrom:(id)arg1;	// IMP=0x000000000004b624
- (id)dictionaryRepresentation;	// IMP=0x000000000004ae15
- (id)description;	// IMP=0x000000000004ad66
@property(nonatomic) _Bool hasIsRemote;
@property(readonly, nonatomic) _Bool hasDynamicCategory;
- (int)StringAsCategory:(id)arg1;	// IMP=0x000000000004aa00
- (id)categoryAsString:(int)arg1;	// IMP=0x000000000004a883
@property(nonatomic) _Bool hasCategory;
@property(nonatomic) int category; // @synthesize category=_category;
- (int)StringAsType:(id)arg1;	// IMP=0x000000000004a72c
- (id)typeAsString:(int)arg1;	// IMP=0x000000000004a695
@property(nonatomic) _Bool hasType;
@property(nonatomic) int type; // @synthesize type=_type;
@property(readonly, nonatomic) _Bool hasMappingId;
@property(readonly, nonatomic) _Bool hasClientId;
@property(readonly, nonatomic) _Bool hasActiveTreatments;
- (int)StringAsDomain:(id)arg1;	// IMP=0x000000000004a4b4
- (id)domainAsString:(int)arg1;	// IMP=0x000000000004a400
@property(nonatomic) _Bool hasDomain;
@property(nonatomic) int domain; // @synthesize domain=_domain;
- (int)StringAsAlgorithm:(id)arg1;	// IMP=0x000000000004a090
- (id)algorithmAsString:(int)arg1;	// IMP=0x0000000000049f11
@property(nonatomic) _Bool hasAlgorithm;
@property(nonatomic) int algorithm; // @synthesize algorithm=_algorithm;
- (int)StringAsSource:(id)arg1;	// IMP=0x0000000000049b44
- (id)sourceAsString:(int)arg1;	// IMP=0x0000000000049996
@property(nonatomic) _Bool hasSource;
@property(nonatomic) int source; // @synthesize source=_source;

@end

