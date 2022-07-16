//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/NSCopying-Protocol.h>

@interface GEOSignGuidanceFeedback : PBCodable <NSCopying>
{
    int _signDetailIndex;	// 8 = 0x8
    int _signTitleIndex;	// 12 = 0xc
    struct {
        unsigned int has_signDetailIndex:1;
        unsigned int has_signTitleIndex:1;
    } _flags;	// 16 = 0x10
}

+ (_Bool)isValid:(id)arg1;	// IMP=0x0000000000c3d731
- (void)mergeFrom:(id)arg1;	// IMP=0x0000000000c3d9f8
- (unsigned long long)hash;	// IMP=0x0000000000c3d996
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000c3d8ad
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000c3d830
- (void)copyTo:(id)arg1;	// IMP=0x0000000000c3d7be
- (void)writeTo:(id)arg1;	// IMP=0x0000000000c3d74d
- (_Bool)readFrom:(id)arg1;	// IMP=0x0000000000c3d73e
- (void)readAll:(_Bool)arg1;	// IMP=0x0000000000c3d6d1
- (id)initWithJSON:(id)arg1;	// IMP=0x0000000000c3d6bf
- (id)initWithDictionary:(id)arg1;	// IMP=0x0000000000c3d557
- (id)jsonRepresentation;	// IMP=0x0000000000c3d548
- (id)dictionaryRepresentation;	// IMP=0x0000000000c3d40e
- (id)description;	// IMP=0x0000000000c3d35f
@property(nonatomic) _Bool hasSignDetailIndex;
@property(nonatomic) int signDetailIndex;
@property(nonatomic) _Bool hasSignTitleIndex;
@property(nonatomic) int signTitleIndex;

@end
