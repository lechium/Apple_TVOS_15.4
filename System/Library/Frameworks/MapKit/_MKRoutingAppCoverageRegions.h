//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class _MKMultiPolygonGeoRegion;

@interface _MKRoutingAppCoverageRegions : NSObject
{
    _MKMultiPolygonGeoRegion *_regions;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x00000000000b9d26
- (_Bool)containsCoordinate:(struct CLLocationCoordinate2D)arg1;	// IMP=0x00000000000b9d10
- (id)initWithContentsOfURL:(id)arg1 error:(id *)arg2;	// IMP=0x00000000000b9b4e

@end

