//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

__attribute__((visibility("hidden")))
@interface GEOMapFeatureIntersectionJunction
{
    struct GeoCodecsConnectivityJunction *_connectivityJunction;	// 40 = 0x28
}

- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000108333e
- (id)description;	// IMP=0x0000000001083093
- (struct GeoCodecsConnectivityJunction *)connectivityJunction;	// IMP=0x0000000001083082
- (unsigned long long)junctionIndex;	// IMP=0x000000000108304f
- (id)initWithConnectivityJunction:(struct GeoCodecsConnectivityJunction *)arg1 tile:(id)arg2;	// IMP=0x0000000001082fbe

@end

