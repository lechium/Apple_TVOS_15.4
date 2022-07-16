//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSValue.h>

@interface NSValue (MKAdditions)
+ (id)_mapkit_valueWithCGAffineTransform:(struct CGAffineTransform)arg1;	// IMP=0x00000000001bf09c
+ (id)_mapkit_valueWithCGPoint:(struct CGPoint)arg1;	// IMP=0x00000000001bf029
+ (id)valueWithMKCoordinateSpan:(CDStruct_c3b9c2ee)arg1;	// IMP=0x00000000001f5a6e
+ (id)valueWithMKCoordinate:(struct CLLocationCoordinate2D)arg1;	// IMP=0x00000000001f5a29
- (CDStruct_02837cd9)MKMapRectValue;	// IMP=0x00000000000e9a92
- (id)_mapkit_initWithMKMapRect:(CDStruct_02837cd9)arg1;	// IMP=0x00000000000e9a74
- (CDStruct_c0a8b48f)_mapkit_zoomRegionValue;	// IMP=0x00000000000e9a46
- (id)_mapkit_initWithZoomRegion:(CDStruct_c0a8b48f)arg1;	// IMP=0x00000000000e9a28
- (id)_mapkit_initWithCGRect:(struct CGRect)arg1;	// IMP=0x00000000000e9a0a
- (struct CGRect)CADoubleRectValue;	// IMP=0x00000000000e99dc
- (id)_mapkit_initWithCADoubleRect:(struct CGRect)arg1;	// IMP=0x00000000000e99be
- (struct CGPoint)CADoublePointValue;	// IMP=0x00000000000e998c
- (id)_mapkit_initWithCADoublePoint:(struct CGPoint)arg1;	// IMP=0x00000000000e995d
- (id)_mapkit_initWithCGPoint:(struct CGPoint)arg1;	// IMP=0x00000000000e992e
- (struct CGAffineTransform)_mapkit_CGAffineTransformValue;	// IMP=0x00000000001bf06e
- (struct CGPoint)_mapkit_CGPointValue;	// IMP=0x00000000001bf017
- (struct CGRect)_mapkit_CGRectValue;	// IMP=0x00000000001beff8
@property(readonly) CDStruct_c3b9c2ee MKCoordinateSpanValue;
@property(readonly) struct CLLocationCoordinate2D MKCoordinateValue;
@end

