//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, PPMockRTMapItem;

@interface PPMockRTLocationOfInterest : NSObject
{
    PPMockRTMapItem *_mapItem;	// 8 = 0x8
    long long _type;	// 16 = 0x10
    NSArray *_visits;	// 24 = 0x18
}

+ (id)mockLocationOfInterestWithSubThoroughfare:(id)arg1 thoroughfare:(id)arg2 subLocality:(id)arg3 locality:(id)arg4 administrativeArea:(id)arg5 administrativeAreaCode:(id)arg6 postalCode:(id)arg7 country:(id)arg8 countryCode:(id)arg9 longitude:(double)arg10 latitude:(double)arg11 visits:(id)arg12;	// IMP=0x0000000000020de0
- (void).cxx_destruct;	// IMP=0x0000000000020db8
@property(retain, nonatomic) NSArray *visits; // @synthesize visits=_visits;
@property(readonly, nonatomic) long long type; // @synthesize type=_type;
@property(retain, nonatomic) PPMockRTMapItem *mapItem; // @synthesize mapItem=_mapItem;

@end

