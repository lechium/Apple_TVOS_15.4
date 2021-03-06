//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class CLCircularRegion, CLSBusinessItem, CLSLitePlacemark, NSArray, NSString;

@interface CLSPlace
{
    NSString *_name;	// 8 = 0x8
    CLCircularRegion *_region;	// 16 = 0x10
    CLSLitePlacemark *_placemark;	// 24 = 0x18
    NSArray *_categories;	// 32 = 0x20
    CLSBusinessItem *_businessItem;	// 40 = 0x28
}

+ (id)placeWithPlacemark:(id)arg1;	// IMP=0x000000000003d366
+ (id)placeWithLocation:(id)arg1;	// IMP=0x000000000003d24d
+ (id)placeWithBusinessItem:(id)arg1;	// IMP=0x000000000003d17b
- (void).cxx_destruct;	// IMP=0x000000000003d117
@property(readonly, nonatomic) CLSBusinessItem *businessItem; // @synthesize businessItem=_businessItem;
@property(retain, nonatomic) NSArray *categories; // @synthesize categories=_categories;
@property(readonly, nonatomic) CLSLitePlacemark *placemark; // @synthesize placemark=_placemark;
@property(readonly, nonatomic) CLCircularRegion *region; // @synthesize region=_region;
@property(readonly, nonatomic) NSString *name; // @synthesize name=_name;
- (id)description;	// IMP=0x000000000003cfef
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000003ce44
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000000003cd6f
- (_Bool)isEqualToPlace:(id)arg1;	// IMP=0x000000000003cabc
@property(readonly, nonatomic) struct CLLocationCoordinate2D coordinate;

@end

