//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <GeoServices/NSCopying-Protocol.h>
#import <GeoServices/NSSecureCoding-Protocol.h>

@interface GEOFeatureStyleAttributes : NSObject <NSCopying, NSSecureCoding>
{
    shared_ptr_659eff70 _attributes;	// 8 = 0x8
}

+ (_Bool)supportsSecureCoding;	// IMP=0x0000000000c1772c
+ (id)styleAttributesForPlace:(id)arg1;	// IMP=0x00000000003ed482
+ (id)nearbyTransitStyleAttributes;	// IMP=0x00000000003ed437
+ (id)inviteStyleAttributes;	// IMP=0x00000000003ed3e8
+ (id)ticketedEventStyleAttributes;	// IMP=0x00000000003ed399
+ (id)carRentalStyleAttributes;	// IMP=0x00000000003ed34a
+ (id)hotelStyleAttributes;	// IMP=0x00000000003ed2fb
+ (id)evChargerStyleAttributes;	// IMP=0x00000000003ed2ac
+ (id)gasStationStyleAttributes;	// IMP=0x00000000003ed25d
+ (id)frequentLocationStyleAttributes;	// IMP=0x00000000003ed212
+ (id)calendarEventStyleAttributes;	// IMP=0x00000000003ed1c7
+ (id)restaurantStyleAttributes;	// IMP=0x00000000003ed17c
+ (id)parkedCarStyleAttributes;	// IMP=0x00000000003ed131
+ (id)transitStationStyleAttributes;	// IMP=0x00000000003ed0e6
+ (id)schoolStyleAttributes;	// IMP=0x00000000003ed09b
+ (id)workStyleAttributes;	// IMP=0x00000000003ed050
+ (id)homeStyleAttributes;	// IMP=0x00000000003ed005
+ (id)searchResultStyleAttributes;	// IMP=0x00000000003ecfbd
+ (id)airportStyleAttributes;	// IMP=0x00000000003eceef
+ (id)addressMarkerStyleAttributes;	// IMP=0x00000000003ecea0
- (id).cxx_construct;	// IMP=0x0000000000c196eb
- (void).cxx_destruct;	// IMP=0x0000000000c196ac
- (id)description;	// IMP=0x0000000000c19501
- (void)sort;	// IMP=0x0000000000c194e0
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000c1940c
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000c193a5
- (id)initWithFeatureStyleAttributesPtr:(const void *)arg1;	// IMP=0x0000000000c1931d
- (shared_ptr_659eff70)featureStyleAttributesPtr;	// IMP=0x0000000000c192fb
- (shared_ptr_82272e24)_sharedAttributes;	// IMP=0x0000000000c192c8
@property(readonly, nonatomic) BOOL featureType;
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000000c18fe3
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000c188e2
@property(readonly, nonatomic) unsigned char countAttrs;
@property(readonly, nonatomic) unsigned char countExtAttrs;
@property(readonly, nonatomic) struct GeoCodecsFeatureStylePairExt *extAttrs;
@property(readonly, nonatomic) struct GeoCodecsFeatureStylePair *v;
@property(readonly, nonatomic) _Bool shouldSuppress3DBuildingStrokes;
@property(readonly, nonatomic) _Bool isDrivable;
@property(readonly, nonatomic) _Bool isWalkable;
@property(readonly, nonatomic) int bikeLaneSide;
@property(readonly, nonatomic) int bikeableSide;
@property(readonly, nonatomic) int walkableSide;
@property(readonly, nonatomic) int sidewalkSide;
@property(readonly, nonatomic) _Bool isRoadPedestrianNavigable;
@property(readonly, nonatomic) int drivingSide;
@property(readonly, nonatomic) _Bool hasDrivingSide;
@property(readonly, nonatomic) _Bool isBorder;
@property(readonly, nonatomic) _Bool isRailway;
@property(readonly, nonatomic) _Bool isFreeway;
@property(readonly, nonatomic) unsigned char rampDirection;
@property(readonly, nonatomic) int rampType;
@property(readonly, nonatomic) _Bool isRamp;
@property(readonly, nonatomic) _Bool isBridge;
@property(readonly, nonatomic) _Bool isTunnel;
@property(readonly, nonatomic) unsigned int lineType;
- (int)poiType;	// IMP=0x0000000000c18329
- (_Bool)hasAttributes;	// IMP=0x0000000000c18307
- (void)replaceAttributes:(const struct GeoCodecsFeatureStylePair *)arg1 count:(unsigned int)arg2;	// IMP=0x0000000000c18273
- (void)setExtAttributes:(const struct GeoCodecsFeatureStylePairExt *)arg1 count:(unsigned int)arg2;	// IMP=0x0000000000c181c8
- (void *)featureStyleAttributes;	// IMP=0x0000000000c181be
- (id)initWithPlaceDataStyleAttributes:(id)arg1;	// IMP=0x0000000000c181ac
- (id)initWithPlaceStyleAttributes:(id)arg1;	// IMP=0x0000000000c17e05
- (id)initWithAttributes:(unsigned int)arg1;	// IMP=0x0000000000c17c2a
- (id)initWithGEOStyleAttributes:(id)arg1;	// IMP=0x0000000000c17a4a
- (id)initWithStyleAttributes:(const void *)arg1;	// IMP=0x0000000000c17920
- (id)_initWithSharedStyleAttributes:(const void *)arg1 extAttributes:(const struct GeoCodecsFeatureStylePairExt *)arg2 extAttributeCount:(unsigned char)arg3;	// IMP=0x0000000000c17800
- (id)init;	// IMP=0x0000000000c17734
- (id)dictionaryRepresentation;	// IMP=0x00000000003edafd
- (_Bool)isTransit;	// IMP=0x00000000003edae2
- (_Bool)isSearchResult;	// IMP=0x00000000003eda67
- (_Bool)isLandmarkPOI;	// IMP=0x00000000003ed9f5
- (_Bool)isLabelPOI;	// IMP=0x00000000003ed5f4
- (id)copyWithAirportStyleAttributes;	// IMP=0x00000000003ecf41

@end

