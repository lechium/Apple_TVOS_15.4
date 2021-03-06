//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <CoreLocation/NSCopying-Protocol.h>
#import <CoreLocation/NSSecureCoding-Protocol.h>

@class CLLocation, CLPlacemarkInternal, CLRegion, CNPostalAddress, NSArray, NSDictionary, NSString, NSTimeZone;

@interface CLPlacemark : NSObject <NSCopying, NSSecureCoding>
{
    CLPlacemarkInternal *_internal;	// 8 = 0x8
}

+ (id)placemarkWithGEOMapItem:(id)arg1;	// IMP=0x00000000000642ad
+ (_Bool)supportsSecureCoding;	// IMP=0x00000000000637a0
+ (unsigned long long)_cLMapItemSourceFromRLMapItemSource:(unsigned long long)arg1;	// IMP=0x000000000004af28
- (id)description;	// IMP=0x0000000000063f63
- (id)_geoMapItemHandle;	// IMP=0x0000000000063f55
- (id)_geoMapItem;	// IMP=0x0000000000063f47
@property(readonly, copy, nonatomic) NSString *ocean;
@property(readonly, copy, nonatomic) NSString *inlandWater;
@property(readonly, copy, nonatomic) NSArray *areasOfInterest;
- (void)fetchFormattedAddress:(CDUnknownBlockType)arg1 queue:(id)arg2;	// IMP=0x0000000000063cbe
- (id)formattedAddressLines;	// IMP=0x0000000000063c9d
- (id)fullThoroughfare;	// IMP=0x0000000000063c7c
@property(readonly, copy, nonatomic) NSString *country;
@property(readonly, copy, nonatomic) NSString *ISOcountryCode;
@property(readonly, copy, nonatomic) NSString *postalCode;
@property(readonly, copy, nonatomic) NSString *subAdministrativeArea;
@property(readonly, copy, nonatomic) NSString *administrativeArea;
@property(readonly, copy, nonatomic) NSString *subLocality;
@property(readonly, copy, nonatomic) NSString *locality;
@property(readonly, copy, nonatomic) NSString *subThoroughfare;
@property(readonly, copy, nonatomic) NSString *thoroughfare;
@property(readonly, copy, nonatomic) NSString *name;
@property(readonly, copy, nonatomic) NSDictionary *addressDictionary;
- (id)mecardAddress;	// IMP=0x0000000000063b16
@property(readonly, copy, nonatomic) NSTimeZone *timeZone;
@property(readonly, copy, nonatomic) CLRegion *region;
@property(readonly, copy, nonatomic) CLLocation *location;
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000063aa4
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000000000639c6
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000000637a8
- (void)dealloc;	// IMP=0x0000000000063705
- (id)initWithPlacemark:(id)arg1;	// IMP=0x00000000000635c5
- (id)initWithLocation:(id)arg1 addressDictionary:(id)arg2 region:(id)arg3 areasOfInterest:(id)arg4 mapItemSource:(unsigned long long)arg5 geoMapItemHandle:(id)arg6 meCardAddress:(id)arg7;	// IMP=0x00000000000634ef
- (id)initWithLocation:(id)arg1 addressDictionary:(id)arg2 region:(id)arg3 areasOfInterest:(id)arg4;	// IMP=0x000000000006346e
- (id)_initWithGeoMapItem:(id)arg1;	// IMP=0x00000000000630ed
- (id)_initWithRTMapItem:(id)arg1 location:(id)arg2;	// IMP=0x000000000004b000
@property(readonly, nonatomic) CNPostalAddress *postalAddress;

@end

