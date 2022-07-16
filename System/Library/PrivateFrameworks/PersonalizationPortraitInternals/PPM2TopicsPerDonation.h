//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <PersonalizationPortraitInternals/NSCopying-Protocol.h>

@class NSString;

@interface PPM2TopicsPerDonation : PBCodable <NSCopying>
{
    NSString *_activeTreatments;	// 8 = 0x8
    int _algorithm;	// 16 = 0x10
    int _donationSource;	// 20 = 0x14
    NSString *_groupId;	// 24 = 0x18
    CDStruct_e3b84e97 _has;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x00000000000ad2db
@property(retain, nonatomic) NSString *activeTreatments; // @synthesize activeTreatments=_activeTreatments;
@property(retain, nonatomic) NSString *groupId; // @synthesize groupId=_groupId;
- (void)mergeFrom:(id)arg1;	// IMP=0x00000000000ad1ea
- (unsigned long long)hash;	// IMP=0x00000000000ad140
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000000ad01a
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000000acf3d
- (void)copyTo:(id)arg1;	// IMP=0x00000000000ace96
- (void)writeTo:(id)arg1;	// IMP=0x00000000000acded
- (_Bool)readFrom:(id)arg1;	// IMP=0x00000000000acde0
- (id)dictionaryRepresentation;	// IMP=0x00000000000ac9ce
- (id)description;	// IMP=0x00000000000ac91f
@property(readonly, nonatomic) _Bool hasActiveTreatments;
- (int)StringAsAlgorithm:(id)arg1;	// IMP=0x00000000000ac604
- (id)algorithmAsString:(int)arg1;	// IMP=0x00000000000ac486
@property(nonatomic) _Bool hasAlgorithm;
@property(nonatomic) int algorithm; // @synthesize algorithm=_algorithm;
@property(readonly, nonatomic) _Bool hasGroupId;
- (int)StringAsDonationSource:(id)arg1;	// IMP=0x00000000000ac0a4
- (id)donationSourceAsString:(int)arg1;	// IMP=0x00000000000abef6
@property(nonatomic) _Bool hasDonationSource;
@property(nonatomic) int donationSource; // @synthesize donationSource=_donationSource;

@end
