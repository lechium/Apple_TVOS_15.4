//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <PersonalizationPortraitInternals/NSCopying-Protocol.h>

@class NSString;

@interface PPM2TopicDonationError : PBCodable <NSCopying>
{
    long long _code;	// 8 = 0x8
    NSString *_activeTreatments;	// 16 = 0x10
    int _reason;	// 24 = 0x18
    int _source;	// 28 = 0x1c
    struct {
        unsigned int code:1;
        unsigned int reason:1;
        unsigned int source:1;
    } _has;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x000000000001adad
@property(nonatomic) long long code; // @synthesize code=_code;
@property(retain, nonatomic) NSString *activeTreatments; // @synthesize activeTreatments=_activeTreatments;
- (void)mergeFrom:(id)arg1;	// IMP=0x000000000001acd3
- (unsigned long long)hash;	// IMP=0x000000000001ac41
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000001ab2b
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000001aa5a
- (void)copyTo:(id)arg1;	// IMP=0x000000000001a9b6
- (void)writeTo:(id)arg1;	// IMP=0x000000000001a909
- (_Bool)readFrom:(id)arg1;	// IMP=0x000000000001a8fc
- (id)dictionaryRepresentation;	// IMP=0x000000000001a562
- (id)description;	// IMP=0x000000000001a4b3
@property(nonatomic) _Bool hasCode;
- (int)StringAsSource:(id)arg1;	// IMP=0x000000000001a104
- (id)sourceAsString:(int)arg1;	// IMP=0x0000000000019f56
@property(nonatomic) _Bool hasSource;
@property(nonatomic) int source; // @synthesize source=_source;
@property(readonly, nonatomic) _Bool hasActiveTreatments;
- (int)StringAsReason:(id)arg1;	// IMP=0x0000000000019d64
- (id)reasonAsString:(int)arg1;	// IMP=0x0000000000019c96
@property(nonatomic) _Bool hasReason;
@property(nonatomic) int reason; // @synthesize reason=_reason;

@end
