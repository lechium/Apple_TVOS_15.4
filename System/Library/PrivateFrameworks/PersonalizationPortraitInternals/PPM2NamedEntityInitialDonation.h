//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <PersonalizationPortraitInternals/NSCopying-Protocol.h>

@class NSString;

@interface PPM2NamedEntityInitialDonation : PBCodable <NSCopying>
{
    NSString *_activeTreatments;	// 8 = 0x8
    int _algorithm;	// 16 = 0x10
    int _source;	// 20 = 0x14
    CDStruct_95ef61a7 _has;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x00000000000baeba
@property(retain, nonatomic) NSString *activeTreatments; // @synthesize activeTreatments=_activeTreatments;
- (void)mergeFrom:(id)arg1;	// IMP=0x00000000000bae15
- (unsigned long long)hash;	// IMP=0x00000000000badab
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000000bacc4
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000000bac17
- (void)copyTo:(id)arg1;	// IMP=0x00000000000bab97
- (void)writeTo:(id)arg1;	// IMP=0x00000000000bab09
- (_Bool)readFrom:(id)arg1;	// IMP=0x00000000000baafc
- (id)dictionaryRepresentation;	// IMP=0x00000000000ba70e
- (id)description;	// IMP=0x00000000000ba65f
@property(readonly, nonatomic) _Bool hasActiveTreatments;
- (int)StringAsAlgorithm:(id)arg1;	// IMP=0x00000000000ba344
- (id)algorithmAsString:(int)arg1;	// IMP=0x00000000000ba1c5
@property(nonatomic) _Bool hasAlgorithm;
@property(nonatomic) int algorithm; // @synthesize algorithm=_algorithm;
- (int)StringAsSource:(id)arg1;	// IMP=0x00000000000b9df8
- (id)sourceAsString:(int)arg1;	// IMP=0x00000000000b9c4a
@property(nonatomic) _Bool hasSource;
@property(nonatomic) int source; // @synthesize source=_source;

@end

