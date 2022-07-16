//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <PersonalizationPortraitInternals/NSCopying-Protocol.h>

@class NSString;

@interface PPM2TopicDonation : PBCodable <NSCopying>
{
    NSString *_activeTreatments;	// 8 = 0x8
    int _donationSource;	// 16 = 0x10
    CDStruct_a8edabe5 _has;	// 20 = 0x14
}

- (void).cxx_destruct;	// IMP=0x0000000000014b7a
@property(retain, nonatomic) NSString *activeTreatments; // @synthesize activeTreatments=_activeTreatments;
- (void)mergeFrom:(id)arg1;	// IMP=0x0000000000014af2
- (unsigned long long)hash;	// IMP=0x0000000000014aa5
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000000149e0
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000014950
- (void)copyTo:(id)arg1;	// IMP=0x00000000000148ed
- (void)writeTo:(id)arg1;	// IMP=0x0000000000014889
- (_Bool)readFrom:(id)arg1;	// IMP=0x000000000001487c
- (id)dictionaryRepresentation;	// IMP=0x0000000000014639
- (id)description;	// IMP=0x000000000001458a
@property(readonly, nonatomic) _Bool hasActiveTreatments;
- (int)StringAsDonationSource:(id)arg1;	// IMP=0x000000000001420c
- (id)donationSourceAsString:(int)arg1;	// IMP=0x0000000000014060
@property(nonatomic) _Bool hasDonationSource;
@property(nonatomic) int donationSource; // @synthesize donationSource=_donationSource;

@end
