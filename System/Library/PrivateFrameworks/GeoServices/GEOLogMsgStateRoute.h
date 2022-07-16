//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/NSCopying-Protocol.h>

@class GEORouteDetails;

@interface GEOLogMsgStateRoute : PBCodable <NSCopying>
{
    GEORouteDetails *_routeDetails;	// 8 = 0x8
}

+ (_Bool)isValid:(id)arg1;	// IMP=0x00000000014a6cb7
- (void).cxx_destruct;	// IMP=0x00000000014a6f48
- (void)mergeFrom:(id)arg1;	// IMP=0x00000000014a6ec2
- (unsigned long long)hash;	// IMP=0x00000000014a6e87
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000014a6dc4
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000014a6d4c
- (void)copyTo:(id)arg1;	// IMP=0x00000000014a6cf7
- (void)writeTo:(id)arg1;	// IMP=0x00000000014a6cd3
- (_Bool)readFrom:(id)arg1;	// IMP=0x00000000014a6cc4
- (void)readAll:(_Bool)arg1;	// IMP=0x00000000014a6c57
- (id)initWithJSON:(id)arg1;	// IMP=0x00000000014a6c45
- (id)initWithDictionary:(id)arg1;	// IMP=0x00000000014a6b2e
- (id)jsonRepresentation;	// IMP=0x00000000014a6b1f
- (id)dictionaryRepresentation;	// IMP=0x00000000014a6a2c
- (id)description;	// IMP=0x00000000014a697d
@property(retain, nonatomic) GEORouteDetails *routeDetails;
@property(readonly, nonatomic) _Bool hasRouteDetails;

@end
