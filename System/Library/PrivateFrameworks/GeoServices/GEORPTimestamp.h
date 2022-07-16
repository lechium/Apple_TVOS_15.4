//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/NSCopying-Protocol.h>

@interface GEORPTimestamp : PBCodable <NSCopying>
{
    long long _seconds;	// 8 = 0x8
    int _nanos;	// 16 = 0x10
}

+ (_Bool)isValid:(id)arg1;	// IMP=0x000000000110cbb6
- (void)mergeFrom:(id)arg1;	// IMP=0x000000000110cff9
- (unsigned long long)hash;	// IMP=0x000000000110cfb1
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000110ceff
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000110ce9f
- (void)copyTo:(id)arg1;	// IMP=0x000000000110ce41
- (void)writeTo:(id)arg1;	// IMP=0x000000000110cde2
- (_Bool)readFrom:(id)arg1;	// IMP=0x000000000110cdd3
- (void)readAll:(_Bool)arg1;	// IMP=0x000000000110c891
- (id)initWithJSON:(id)arg1;	// IMP=0x000000000110c884
- (id)initWithDictionary:(id)arg1;	// IMP=0x000000000110c743
- (id)jsonRepresentation;	// IMP=0x000000000110c739
- (id)dictionaryRepresentation;	// IMP=0x000000000110c639
- (id)description;	// IMP=0x000000000110c58a
@property(nonatomic) int nanos;
@property(nonatomic) long long seconds;

@end
