//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <PersonalizationPortraitInternals/NSCopying-Protocol.h>

@class NSMutableArray, NSString;

@interface PPM2FeedbackPortraitRegistered : PBCodable <NSCopying>
{
    NSString *_activeTreatments;	// 8 = 0x8
    NSString *_clientId;	// 16 = 0x10
    int _domain;	// 24 = 0x18
    int _feedbackDomainStatus;	// 28 = 0x1c
    NSString *_mappingId;	// 32 = 0x20
    NSMutableArray *_records;	// 40 = 0x28
    int _type;	// 48 = 0x30
    struct {
        unsigned int domain:1;
        unsigned int feedbackDomainStatus:1;
        unsigned int type:1;
    } _has;	// 52 = 0x34
}

+ (Class)recordsType;	// IMP=0x000000000000e344
+ (id)options;	// IMP=0x000000000000e314
- (void).cxx_destruct;	// IMP=0x000000000000debe
@property(retain, nonatomic) NSString *activeTreatments; // @synthesize activeTreatments=_activeTreatments;
@property(retain, nonatomic) NSMutableArray *records; // @synthesize records=_records;
@property(retain, nonatomic) NSString *mappingId; // @synthesize mappingId=_mappingId;
@property(retain, nonatomic) NSString *clientId; // @synthesize clientId=_clientId;
- (void)mergeFrom:(id)arg1;	// IMP=0x000000000000dc14
- (unsigned long long)hash;	// IMP=0x000000000000db0e
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000000d94a
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000000d68b
- (void)copyTo:(id)arg1;	// IMP=0x000000000000d503
- (void)writeTo:(id)arg1;	// IMP=0x000000000000d301
- (_Bool)readFrom:(id)arg1;	// IMP=0x000000000000d2f4
- (id)dictionaryRepresentation;	// IMP=0x000000000000cdce
- (id)description;	// IMP=0x000000000000cd1f
- (int)StringAsFeedbackDomainStatus:(id)arg1;	// IMP=0x000000000000cc30
- (id)feedbackDomainStatusAsString:(int)arg1;	// IMP=0x000000000000cb96
@property(nonatomic) _Bool hasFeedbackDomainStatus;
@property(nonatomic) int feedbackDomainStatus; // @synthesize feedbackDomainStatus=_feedbackDomainStatus;
@property(readonly, nonatomic) _Bool hasActiveTreatments;
- (id)recordsAtIndex:(unsigned long long)arg1;	// IMP=0x000000000000cafc
- (unsigned long long)recordsCount;	// IMP=0x000000000000cadf
- (void)addRecords:(id)arg1;	// IMP=0x000000000000ca75
- (void)clearRecords;	// IMP=0x000000000000ca58
@property(readonly, nonatomic) _Bool hasMappingId;
- (int)StringAsType:(id)arg1;	// IMP=0x000000000000c954
- (id)typeAsString:(int)arg1;	// IMP=0x000000000000c8ba
@property(nonatomic) _Bool hasType;
@property(nonatomic) int type; // @synthesize type=_type;
- (int)StringAsDomain:(id)arg1;	// IMP=0x000000000000c718
- (id)domainAsString:(int)arg1;	// IMP=0x000000000000c665
@property(nonatomic) _Bool hasDomain;
@property(nonatomic) int domain; // @synthesize domain=_domain;
@property(readonly, nonatomic) _Bool hasClientId;

@end
