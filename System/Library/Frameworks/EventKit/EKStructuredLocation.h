//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <EventKit/NSCopying-Protocol.h>

@class CLLocation, EKPredictedLocationOfInterest, NSData, NSString;

@interface EKStructuredLocation <NSCopying>
{
    _Bool _imprecise;	// 8 = 0x8
    EKPredictedLocationOfInterest *_predictedLOI;	// 16 = 0x10
}

+ (id)displayLabelForContact:(id)arg1 unlocalizedLabel:(id)arg2;	// IMP=0x00000000000c7c3d
+ (id)locationWithGEOMapItem:(id)arg1;	// IMP=0x00000000000c63be
+ (id)locationWithMapItem:(id)arg1;	// IMP=0x00000000000c62ad
+ (id)locationWithPlacemark:(id)arg1;	// IMP=0x00000000000c6127
+ (id)_stringByStrippingControlCharactersFromString:(id)arg1;	// IMP=0x00000000000c5fc0
+ (id)locationWithTitle:(id)arg1;	// IMP=0x00000000000c5f66
+ (id)knownSingleValueKeysForComparison;	// IMP=0x00000000000c5e41
+ (id)knownIdentityKeysForComparison;	// IMP=0x00000000000c5df1
+ (Class)frozenClass;	// IMP=0x00000000000c5de0
- (void).cxx_destruct;	// IMP=0x00000000000c7ee9
@property(retain, nonatomic) EKPredictedLocationOfInterest *predictedLOI; // @synthesize predictedLOI=_predictedLOI;
@property(nonatomic, getter=isImprecise) _Bool imprecise; // @synthesize imprecise=_imprecise;
@property(copy, nonatomic) NSString *derivedFrom;
@property(readonly, nonatomic, getter=isPrediction) _Bool prediction;
- (void)updateFromMapItem:(id)arg1;	// IMP=0x00000000000c7aaa
- (id)geoURLString;	// IMP=0x00000000000c79ea
- (id)calLocation;	// IMP=0x00000000000c7894
@property(retain, nonatomic) NSString *routing;
- (id)description;	// IMP=0x00000000000c772a
- (_Bool)isEqualToLocation:(id)arg1;	// IMP=0x00000000000c721b
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000000c6f97
- (_Bool)_reset;	// IMP=0x00000000000c6e68
@property(copy, nonatomic) NSData *mapKitHandle;
@property(copy, nonatomic) NSString *contactLabel;
@property(nonatomic) double radius;
- (void)setRadiusRaw:(id)arg1;	// IMP=0x00000000000c6c6a
- (id)radiusRaw;	// IMP=0x00000000000c6c4e
- (id)cacheKey;	// IMP=0x00000000000c6b8d
@property(retain, nonatomic) CLLocation *geoLocation;
- (void)_clearGeoLocationCache;	// IMP=0x00000000000c688f
- (void)setLongitude:(id)arg1;	// IMP=0x00000000000c6857
- (id)longitude;	// IMP=0x00000000000c683b
- (void)setLatitude:(id)arg1;	// IMP=0x00000000000c6803
- (id)latitude;	// IMP=0x00000000000c67e7
- (void)setReferenceFrame:(id)arg1;	// IMP=0x00000000000c67af
- (id)referenceFrame;	// IMP=0x00000000000c6793
@property(retain, nonatomic) NSString *address;
@property(retain, nonatomic) NSString *title;
@property(readonly, nonatomic) _Bool hasKnownSpatialData;
@property(readonly, nonatomic) _Bool isStructured;
- (id)initWithObjectForCopy:(id)arg1;	// IMP=0x00000000000c654b

@end
