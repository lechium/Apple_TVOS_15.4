//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/NSCopying-Protocol.h>

@interface GEOModality : PBCodable <NSCopying>
{
    double _timestamp;	// 8 = 0x8
    int _confidence;	// 16 = 0x10
    _Bool _expectedModality;	// 20 = 0x14
    _Bool _notMoving;	// 21 = 0x15
    struct {
        unsigned int has_timestamp:1;
        unsigned int has_confidence:1;
        unsigned int has_expectedModality:1;
        unsigned int has_notMoving:1;
    } _flags;	// 24 = 0x18
}

+ (_Bool)isValid:(id)arg1;	// IMP=0x0000000000c36317
- (void)mergeFrom:(id)arg1;	// IMP=0x0000000000c36821
- (unsigned long long)hash;	// IMP=0x0000000000c36697
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000c36545
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000c36492
- (void)copyTo:(id)arg1;	// IMP=0x0000000000c363e6
- (void)writeTo:(id)arg1;	// IMP=0x0000000000c36333
- (_Bool)readFrom:(id)arg1;	// IMP=0x0000000000c36324
- (void)readAll:(_Bool)arg1;	// IMP=0x0000000000c362b7
- (id)initWithJSON:(id)arg1;	// IMP=0x0000000000c362a5
- (id)initWithDictionary:(id)arg1;	// IMP=0x0000000000c35fd7
- (id)jsonRepresentation;	// IMP=0x0000000000c35fc8
- (id)dictionaryRepresentation;	// IMP=0x0000000000c35daa
- (id)description;	// IMP=0x0000000000c35cfb
- (int)StringAsConfidence:(id)arg1;	// IMP=0x0000000000c35c69
- (id)confidenceAsString:(int)arg1;	// IMP=0x0000000000c35c03
@property(nonatomic) _Bool hasConfidence;
@property(nonatomic) int confidence;
@property(nonatomic) _Bool hasNotMoving;
@property(nonatomic) _Bool notMoving;
@property(nonatomic) _Bool hasExpectedModality;
@property(nonatomic) _Bool expectedModality;
@property(nonatomic) _Bool hasTimestamp;
@property(nonatomic) double timestamp;

@end

