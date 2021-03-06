//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <PersonalizationPortraitInternals/NSCopying-Protocol.h>

@class NSString;

@interface PPM2NamedEntitySourceLanguage : PBCodable <NSCopying>
{
    NSString *_activeTreatments;	// 8 = 0x8
    int _algorithm;	// 16 = 0x10
    NSString *_detectedLanguage;	// 24 = 0x18
    int _donationSource;	// 32 = 0x20
    unsigned int _languageCount;	// 36 = 0x24
    NSString *_systemLanguage;	// 40 = 0x28
    struct {
        unsigned int algorithm:1;
        unsigned int donationSource:1;
        unsigned int languageCount:1;
    } _has;	// 48 = 0x30
}

- (void).cxx_destruct;	// IMP=0x00000000000b7416
@property(retain, nonatomic) NSString *activeTreatments; // @synthesize activeTreatments=_activeTreatments;
@property(nonatomic) unsigned int languageCount; // @synthesize languageCount=_languageCount;
@property(retain, nonatomic) NSString *systemLanguage; // @synthesize systemLanguage=_systemLanguage;
@property(retain, nonatomic) NSString *detectedLanguage; // @synthesize detectedLanguage=_detectedLanguage;
- (void)mergeFrom:(id)arg1;	// IMP=0x00000000000b72bc
- (unsigned long long)hash;	// IMP=0x00000000000b71ec
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000000b7079
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000000b6f57
- (void)copyTo:(id)arg1;	// IMP=0x00000000000b6e7c
- (void)writeTo:(id)arg1;	// IMP=0x00000000000b6d95
- (_Bool)readFrom:(id)arg1;	// IMP=0x00000000000b6d88
- (id)dictionaryRepresentation;	// IMP=0x00000000000b68ee
- (id)description;	// IMP=0x00000000000b683f
@property(readonly, nonatomic) _Bool hasActiveTreatments;
- (int)StringAsAlgorithm:(id)arg1;	// IMP=0x00000000000b6524
- (id)algorithmAsString:(int)arg1;	// IMP=0x00000000000b63a5
@property(nonatomic) _Bool hasAlgorithm;
@property(nonatomic) int algorithm; // @synthesize algorithm=_algorithm;
- (int)StringAsDonationSource:(id)arg1;	// IMP=0x00000000000b5fd8
- (id)donationSourceAsString:(int)arg1;	// IMP=0x00000000000b5e29
@property(nonatomic) _Bool hasDonationSource;
@property(nonatomic) int donationSource; // @synthesize donationSource=_donationSource;
@property(nonatomic) _Bool hasLanguageCount;
@property(readonly, nonatomic) _Bool hasSystemLanguage;
@property(readonly, nonatomic) _Bool hasDetectedLanguage;

@end

