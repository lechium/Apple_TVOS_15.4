//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface MKGeoJSONDecoder : NSObject
{
}

+ (id)_decodeGeometryCollection:(id)arg1 error:(id *)arg2;	// IMP=0x000000000000a8c7
+ (id)_decodeGeometry:(id)arg1 error:(id *)arg2;	// IMP=0x000000000000a5ba
- (id)_decodeFeatureCollection:(id)arg1 error:(id *)arg2;	// IMP=0x000000000000ac2a
- (id)geoJSONObjectsWithData:(id)arg1 error:(id *)arg2;	// IMP=0x000000000000a24a
- (id)init;	// IMP=0x000000000000a1c8

@end
