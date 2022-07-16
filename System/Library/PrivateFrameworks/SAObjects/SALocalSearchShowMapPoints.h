//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSDate, NSNumber, NSString, SALocalSearchCarRouteOptions, SALocalSearchMapItem, SALocalSearchMapItemList;

@interface SALocalSearchShowMapPoints
{
}

+ (id)showMapPointsWithDictionary:(id)arg1 context:(id)arg2;	// IMP=0x000000000001bef0
+ (id)showMapPoints;	// IMP=0x000000000001bede
- (_Bool)requiresResponse;	// IMP=0x000000000001c0f8
@property(nonatomic) _Bool suppressNavigation;
@property(nonatomic) _Bool showTraffic;
@property(nonatomic) _Bool showDirections;
@property(retain, nonatomic) SALocalSearchMapItemList *searchItems;
@property(nonatomic) _Bool searchAlongRoute;
@property(copy, nonatomic) NSNumber *regionOfInterestRadiusInMiles;
@property(copy, nonatomic) NSString *preferredDirectionsMode;
@property(copy, nonatomic) NSString *language;
@property(retain, nonatomic) SALocalSearchMapItem *itemSource;
@property(retain, nonatomic) SALocalSearchMapItem *itemDestination;
@property(copy, nonatomic) NSString *directionsType;
@property(copy, nonatomic) NSDate *departureDate;
@property(nonatomic) _Bool chainResultSet;
@property(retain, nonatomic) SALocalSearchCarRouteOptions *carRouteOptions;
@property(copy, nonatomic) NSDate *arrivalDate;
- (id)encodedClassName;	// IMP=0x000000000001bed1
- (id)groupIdentifier;	// IMP=0x000000000001bebd

@end

