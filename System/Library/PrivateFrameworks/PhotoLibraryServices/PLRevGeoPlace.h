//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <PhotoLibraryServices/NSSecureCoding-Protocol.h>

@class NSDictionary;

@interface PLRevGeoPlace : NSObject <NSSecureCoding>
{
    NSDictionary *_placeInfosForOrderType;	// 8 = 0x8
}

+ (unsigned long long)_dominantOrderTypeForPlaceType:(id)arg1 lastOrderType:(unsigned long long)arg2;	// IMP=0x0000000000578582
+ (_Bool)supportsSecureCoding;	// IMP=0x000000000057857a
+ (id)placeWithMapItem:(id)arg1 placeAnnotation:(id)arg2;	// IMP=0x0000000000577e99
+ (id)_newFilterSortedPlaceInfos:(id)arg1 usingPlaceAnnotation:(id)arg2 outFoundOrderType:(unsigned long long *)arg3 outPreviousOrderType:(unsigned long long *)arg4;	// IMP=0x0000000000577d00
- (void).cxx_destruct;	// IMP=0x0000000000577cf0
@property(readonly, nonatomic) NSDictionary *placeInfosForOrderType; // @synthesize placeInfosForOrderType=_placeInfosForOrderType;
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000577bf9
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000000577bd6
- (id)bestPlaceInfoForOrderType:(unsigned long long)arg1;	// IMP=0x0000000000577b4e
- (id)initWithPlaceInfosForOrderType:(id)arg1;	// IMP=0x0000000000577ae3

@end

