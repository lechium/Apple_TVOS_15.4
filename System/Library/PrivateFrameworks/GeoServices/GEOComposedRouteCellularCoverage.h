//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <GeoServices/NSSecureCoding-Protocol.h>

@class NSData;

__attribute__((visibility("hidden")))
@interface GEOComposedRouteCellularCoverage : NSObject <NSSecureCoding>
{
    NSData *_offsetsData;	// 8 = 0x8
    NSData *_coverageData;	// 16 = 0x10
    unsigned int *_offsets;	// 24 = 0x18
    int *_coverage;	// 32 = 0x20
    unsigned long long _coverageCount;	// 40 = 0x28
    double _routeLength;	// 48 = 0x30
}

+ (_Bool)supportsSecureCoding;	// IMP=0x000000000036d62f
- (void).cxx_destruct;	// IMP=0x000000000036dc26
- (void)enumerateCoverageRangesWithBlock:(CDUnknownBlockType)arg1;	// IMP=0x000000000036db77
- (int)cellularCoverageAtOffset:(double)arg1;	// IMP=0x000000000036da82
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000000036d9f9
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000036d896
- (id)initWithOffsets:(id)arg1 coverage:(id)arg2 routeLength:(double)arg3;	// IMP=0x000000000036d661
- (id)init;	// IMP=0x000000000036d637

@end

