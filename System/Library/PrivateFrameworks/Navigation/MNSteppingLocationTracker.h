//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Navigation/MNArrivalUpdaterDelegate-Protocol.h>

@class GEORouteMatcher, MNArrivalUpdater, NSString;

__attribute__((visibility("hidden")))
@interface MNSteppingLocationTracker <MNArrivalUpdaterDelegate>
{
    GEORouteMatcher *_routeMatcher;	// 8 = 0x8
    MNArrivalUpdater *_arrivalUpdater;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x0000000000058c0f
- (void)arrivalUpdaterDidArrive:(id)arg1 atEndOfLegAtIndex:(unsigned long long)arg2;	// IMP=0x0000000000058bc3
- (void)updateLocation:(id)arg1;	// IMP=0x0000000000058b57
- (id)_matchedLocationForLocation:(id)arg1;	// IMP=0x0000000000058a63
- (void)stopTracking;	// IMP=0x00000000000589ee
- (void)startTracking;	// IMP=0x00000000000588e2
- (id)matchedLocationForLocation:(id)arg1;	// IMP=0x000000000005880d
- (void)resetForTracePlayerAtLocation:(id)arg1;	// IMP=0x00000000000587fb
- (int)transportType;	// IMP=0x0000000000058766
- (id)initWithNavigationSession:(id)arg1;	// IMP=0x0000000000058671

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

