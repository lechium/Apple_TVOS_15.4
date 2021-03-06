//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <PersonalizationPortraitInternals/NSCopying-Protocol.h>

@class NSString;

@interface PPM2TopicUniqueItems : PBCodable <NSCopying>
{
    NSString *_activeTreatments;	// 8 = 0x8
}

+ (id)options;	// IMP=0x0000000000020390
- (void).cxx_destruct;	// IMP=0x000000000002021f
@property(retain, nonatomic) NSString *activeTreatments; // @synthesize activeTreatments=_activeTreatments;
- (void)mergeFrom:(id)arg1;	// IMP=0x00000000000201d6
- (unsigned long long)hash;	// IMP=0x00000000000201b9
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000002011f
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000000200a7
- (void)copyTo:(id)arg1;	// IMP=0x000000000002007d
- (void)writeTo:(id)arg1;	// IMP=0x0000000000020059
- (_Bool)readFrom:(id)arg1;	// IMP=0x000000000002004c
- (id)dictionaryRepresentation;	// IMP=0x000000000001fff0
- (id)description;	// IMP=0x000000000001ff41
@property(readonly, nonatomic) _Bool hasActiveTreatments;

@end

