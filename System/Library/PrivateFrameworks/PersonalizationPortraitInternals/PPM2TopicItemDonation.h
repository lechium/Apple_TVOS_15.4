//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <PersonalizationPortraitInternals/NSCopying-Protocol.h>

@class NSString;

@interface PPM2TopicItemDonation : PBCodable <NSCopying>
{
    long long _rank;	// 8 = 0x8
    NSString *_activeTreatments;	// 16 = 0x10
    int _algorithm;	// 24 = 0x18
    int _donationSource;	// 28 = 0x1c
    NSString *_groupId;	// 32 = 0x20
    _Bool _newItem;	// 40 = 0x28
    _Bool _userCreated;	// 41 = 0x29
    CDStruct_9710aa02 _has;	// 44 = 0x2c
}

- (void).cxx_destruct;	// IMP=0x000000000001c9b6
@property(nonatomic) long long rank; // @synthesize rank=_rank;
@property(nonatomic) _Bool userCreated; // @synthesize userCreated=_userCreated;
@property(retain, nonatomic) NSString *activeTreatments; // @synthesize activeTreatments=_activeTreatments;
@property(nonatomic) _Bool newItem; // @synthesize newItem=_newItem;
@property(retain, nonatomic) NSString *groupId; // @synthesize groupId=_groupId;
- (void)mergeFrom:(id)arg1;	// IMP=0x000000000001c841
- (unsigned long long)hash;	// IMP=0x000000000001c73e
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000001c579
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000001c449
- (void)copyTo:(id)arg1;	// IMP=0x000000000001c34f
- (void)writeTo:(id)arg1;	// IMP=0x000000000001c245
- (_Bool)readFrom:(id)arg1;	// IMP=0x000000000001c238
- (id)dictionaryRepresentation;	// IMP=0x000000000001bd17
- (id)description;	// IMP=0x000000000001bc68
@property(nonatomic) _Bool hasRank;
@property(nonatomic) _Bool hasUserCreated;
@property(readonly, nonatomic) _Bool hasActiveTreatments;
- (int)StringAsAlgorithm:(id)arg1;	// IMP=0x000000000001b8bc
- (id)algorithmAsString:(int)arg1;	// IMP=0x000000000001b73d
@property(nonatomic) _Bool hasAlgorithm;
@property(nonatomic) int algorithm; // @synthesize algorithm=_algorithm;
@property(nonatomic) _Bool hasNewItem;
@property(readonly, nonatomic) _Bool hasGroupId;
- (int)StringAsDonationSource:(id)arg1;	// IMP=0x000000000001b30c
- (id)donationSourceAsString:(int)arg1;	// IMP=0x000000000001b15e
@property(nonatomic) _Bool hasDonationSource;
@property(nonatomic) int donationSource; // @synthesize donationSource=_donationSource;

@end

