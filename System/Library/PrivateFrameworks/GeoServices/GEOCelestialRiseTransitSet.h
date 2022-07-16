//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSDate;

__attribute__((visibility("hidden")))
@interface GEOCelestialRiseTransitSet : NSObject
{
    double _julianDay;	// 8 = 0x8
    struct CAARiseTransitSetDetails _riseTransitSet;	// 16 = 0x10
    NSDate *_rise;	// 64 = 0x40
    NSDate *_transit;	// 72 = 0x48
    NSDate *_set;	// 80 = 0x50
}

- (id).cxx_construct;	// IMP=0x00000000009c3662
- (void).cxx_destruct;	// IMP=0x00000000009c362f
@property(readonly, nonatomic) struct CAARiseTransitSetDetails riseTransitSet; // @synthesize riseTransitSet=_riseTransitSet;
@property(readonly, nonatomic) double julianDay; // @synthesize julianDay=_julianDay;
- (id)description;	// IMP=0x00000000009c343d
- (double)_oldestEventInJulianDay;	// IMP=0x00000000009c33d9
- (int)_numberOfEvents;	// IMP=0x00000000009c33c3
@property(readonly, nonatomic) _Bool isTransitAboveHorizon;
@property(readonly, nonatomic) NSDate *set;
@property(readonly, nonatomic) NSDate *transit;
@property(readonly, nonatomic) NSDate *rise;
- (id)_dateFromOffset:(double)arg1;	// IMP=0x00000000009c3274
- (id)initWithJulianDay:(double)arg1 riseTransitSet:(struct CAARiseTransitSetDetails)arg2;	// IMP=0x00000000009c3216

@end

