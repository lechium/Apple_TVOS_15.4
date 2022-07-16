//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <VectorKit/VKRouteOverlay-Protocol.h>

@class GEOMapRegion, NSMutableSet, NSSet, NSString, VKPolylineOverlay;

@interface VKPolylineGroupOverlay : NSObject <VKRouteOverlay>
{
    NSMutableSet *_polylines;	// 8 = 0x8
    GEOMapRegion *_boundingMapRegion;	// 16 = 0x10
    struct __CFSet *_observers;	// 24 = 0x18
    VKPolylineOverlay *_selectedPolyline;	// 32 = 0x20
    VKPolylineOverlay *_focusedPolyline;	// 40 = 0x28
    _Bool _containsTransit;	// 48 = 0x30
    _Bool _showTraffic;	// 49 = 0x31
}

@property(nonatomic) _Bool showTraffic; // @synthesize showTraffic=_showTraffic;
@property(readonly, nonatomic) _Bool containsTransit; // @synthesize containsTransit=_containsTransit;
@property(retain, nonatomic) VKPolylineOverlay *focusedPolyline; // @synthesize focusedPolyline=_focusedPolyline;
@property(retain, nonatomic) VKPolylineOverlay *selectedPolyline; // @synthesize selectedPolyline=_selectedPolyline;
@property(readonly, nonatomic) GEOMapRegion *boundingMapRegion; // @synthesize boundingMapRegion=_boundingMapRegion;
@property(readonly, nonatomic) NSSet *polylines; // @synthesize polylines=_polylines;
@property(readonly, copy) NSString *description;
@property(readonly, nonatomic) CDStruct_c3b9c2ee coordinate;
- (void)_updateContainsTransit;	// IMP=0x00000000002f854f
- (void)_updateBoundingMapRegion;	// IMP=0x00000000002f81d7
- (void)removePolyline:(id)arg1;	// IMP=0x00000000002f7a8a
- (void)addPolyline:(id)arg1;	// IMP=0x00000000002f7804
- (void)removeObserver:(id)arg1;	// IMP=0x00000000002f7657
- (void)addObserver:(id)arg1;	// IMP=0x00000000002f75f0
- (void)dealloc;	// IMP=0x00000000002f758a

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
