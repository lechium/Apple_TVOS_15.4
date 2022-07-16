//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <PersonalizationPortraitInternals/NSCopying-Protocol.h>

@class NSString;

@interface PPM2UnmappedMatchedFeedback : PBCodable <NSCopying>
{
    NSString *_activeTreatments;	// 8 = 0x8
    NSString *_clientId;	// 16 = 0x10
    NSString *_mappingId;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x00000000000af9dc
@property(retain, nonatomic) NSString *activeTreatments; // @synthesize activeTreatments=_activeTreatments;
@property(retain, nonatomic) NSString *mappingId; // @synthesize mappingId=_mappingId;
@property(retain, nonatomic) NSString *clientId; // @synthesize clientId=_clientId;
- (void)mergeFrom:(id)arg1;	// IMP=0x00000000000af8ea
- (unsigned long long)hash;	// IMP=0x00000000000af87d
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000000af785
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000000af6c1
- (void)copyTo:(id)arg1;	// IMP=0x00000000000af63e
- (void)writeTo:(id)arg1;	// IMP=0x00000000000af5c4
- (_Bool)readFrom:(id)arg1;	// IMP=0x00000000000af5b7
- (id)dictionaryRepresentation;	// IMP=0x00000000000af50d
- (id)description;	// IMP=0x00000000000af45e
@property(readonly, nonatomic) _Bool hasActiveTreatments;
@property(readonly, nonatomic) _Bool hasMappingId;
@property(readonly, nonatomic) _Bool hasClientId;

@end
