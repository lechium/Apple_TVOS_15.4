//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/NSCopying-Protocol.h>

@class NSString;

@interface GEOWiFiPasspointInfo : PBCodable <NSCopying>
{
    NSString *_venueName;	// 8 = 0x8
    int _networkType;	// 16 = 0x10
    int _venueGroup;	// 20 = 0x14
    unsigned int _venueType;	// 24 = 0x18
    struct {
        unsigned int has_networkType:1;
        unsigned int has_venueGroup:1;
        unsigned int has_venueType:1;
    } _flags;	// 28 = 0x1c
}

+ (_Bool)isValid:(id)arg1;	// IMP=0x000000000102c656
- (void).cxx_destruct;	// IMP=0x000000000102cb17
- (void)mergeFrom:(id)arg1;	// IMP=0x000000000102ca6a
- (unsigned long long)hash;	// IMP=0x000000000102c9c6
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000102c894
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000102c7cc
- (void)copyTo:(id)arg1;	// IMP=0x000000000102c71f
- (void)writeTo:(id)arg1;	// IMP=0x000000000102c672
- (_Bool)readFrom:(id)arg1;	// IMP=0x000000000102c663
- (void)readAll:(_Bool)arg1;	// IMP=0x000000000102c5f6
- (id)initWithJSON:(id)arg1;	// IMP=0x000000000102c5e9
- (id)initWithDictionary:(id)arg1;	// IMP=0x000000000102bf5a
- (id)jsonRepresentation;	// IMP=0x000000000102bf50
- (id)dictionaryRepresentation;	// IMP=0x000000000102bbc8
- (id)description;	// IMP=0x000000000102bb19
@property(retain, nonatomic) NSString *venueName;
@property(readonly, nonatomic) _Bool hasVenueName;
@property(nonatomic) _Bool hasVenueType;
@property(nonatomic) unsigned int venueType;
- (int)StringAsVenueGroup:(id)arg1;	// IMP=0x000000000102b8c4
- (id)venueGroupAsString:(int)arg1;	// IMP=0x000000000102b7db
@property(nonatomic) _Bool hasVenueGroup;
@property(nonatomic) int venueGroup;
- (int)StringAsNetworkType:(id)arg1;	// IMP=0x000000000102b518
- (id)networkTypeAsString:(int)arg1;	// IMP=0x000000000102b3e9
@property(nonatomic) _Bool hasNetworkType;
@property(nonatomic) int networkType;

@end

