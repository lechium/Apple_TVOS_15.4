//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <GeoServices/GEONavigationServerListenerXPCInterface-Protocol.h>

@class GEOLocation, NSString, NSXPCConnection;
@protocol GEONavigationListenerDelegate, OS_dispatch_queue;

@interface GEONavigationListener : NSObject <GEONavigationServerListenerXPCInterface>
{
    NSXPCConnection *_connection;	// 8 = 0x8
    NSObject<OS_dispatch_queue> *_queue;	// 16 = 0x10
    int _navigationStartedToken;	// 24 = 0x18
    int _navigationStoppedToken;	// 28 = 0x1c
    int _navigationRoutePreviewToken;	// 32 = 0x20
    _Bool _wantsRoutes;	// 36 = 0x24
    id <GEONavigationListenerDelegate> _delegate;	// 40 = 0x28
    CDUnknownBlockType _routeSummaryUpdatedHandler;	// 48 = 0x30
    CDUnknownBlockType _transitSummaryUpdatedHandler;	// 56 = 0x38
    CDUnknownBlockType _guidanceStateUpdatedHandler;	// 64 = 0x40
    CDUnknownBlockType _activeRouteDetailsDataUpdatedHandler;	// 72 = 0x48
    CDUnknownBlockType _stepIndexUpdatedHandler;	// 80 = 0x50
    CDUnknownBlockType _rideSelectionsUpdatedHandler;	// 88 = 0x58
    CDUnknownBlockType _positionFromSignUpdatedHandler;	// 96 = 0x60
    CDUnknownBlockType _positionFromManeuverUpdatedHandler;	// 104 = 0x68
    CDUnknownBlockType _positionFromDestinationUpdatedHandler;	// 112 = 0x70
    CDUnknownBlockType _navigationVoiceVolumeUpdatedHandler;	// 120 = 0x78
    unsigned long long _navigationState;	// 128 = 0x80
    int _transportType;	// 136 = 0x88
    GEOLocation *_lastLocation;	// 144 = 0x90
    NSString *_currentRoadName;	// 152 = 0x98
}

- (void).cxx_destruct;	// IMP=0x0000000000c1de94
@property(copy, nonatomic) CDUnknownBlockType navigationVoiceVolumeUpdatedHandler; // @synthesize navigationVoiceVolumeUpdatedHandler=_navigationVoiceVolumeUpdatedHandler;
@property(copy, nonatomic) CDUnknownBlockType positionFromDestinationUpdatedHandler; // @synthesize positionFromDestinationUpdatedHandler=_positionFromDestinationUpdatedHandler;
@property(copy, nonatomic) CDUnknownBlockType positionFromManeuverUpdatedHandler; // @synthesize positionFromManeuverUpdatedHandler=_positionFromManeuverUpdatedHandler;
@property(copy, nonatomic) CDUnknownBlockType positionFromSignUpdatedHandler; // @synthesize positionFromSignUpdatedHandler=_positionFromSignUpdatedHandler;
@property(copy, nonatomic) CDUnknownBlockType rideSelectionsUpdatedHandler; // @synthesize rideSelectionsUpdatedHandler=_rideSelectionsUpdatedHandler;
@property(copy, nonatomic) CDUnknownBlockType stepIndexUpdatedHandler; // @synthesize stepIndexUpdatedHandler=_stepIndexUpdatedHandler;
@property(copy, nonatomic) CDUnknownBlockType activeRouteDetailsDataUpdatedHandler; // @synthesize activeRouteDetailsDataUpdatedHandler=_activeRouteDetailsDataUpdatedHandler;
@property(copy, nonatomic) CDUnknownBlockType guidanceStateUpdatedHandler; // @synthesize guidanceStateUpdatedHandler=_guidanceStateUpdatedHandler;
@property(copy, nonatomic) CDUnknownBlockType transitSummaryUpdatedHandler; // @synthesize transitSummaryUpdatedHandler=_transitSummaryUpdatedHandler;
@property(copy, nonatomic) CDUnknownBlockType routeSummaryUpdatedHandler; // @synthesize routeSummaryUpdatedHandler=_routeSummaryUpdatedHandler;
@property(readonly, nonatomic) NSString *currentRoadName; // @synthesize currentRoadName=_currentRoadName;
@property(readonly, nonatomic) unsigned long long navigationState; // @synthesize navigationState=_navigationState;
@property(nonatomic) __weak id <GEONavigationListenerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)currentRoadNameUpdated:(id)arg1;	// IMP=0x0000000000c1d989
- (void)navigationUpdatedWithVoiceVolumeData:(id)arg1;	// IMP=0x0000000000c1d874
- (void)routeSummaryUpdatedWithRideSelectionData:(id)arg1;	// IMP=0x0000000000c1d628
- (void)routeSummaryUpdatedWithPositionFromDestinationData:(id)arg1;	// IMP=0x0000000000c1d4ce
- (void)routeSummaryUpdatedWithPositionFromManeuverData:(id)arg1;	// IMP=0x0000000000c1d374
- (void)routeSummaryUpdatedWithPositionFromSignData:(id)arg1;	// IMP=0x0000000000c1d21a
- (void)routeSummaryUpdatedWithStepNameInfoData:(id)arg1;	// IMP=0x0000000000c1d0b3
- (void)routeSummaryUpdatedWithStepIndexData:(id)arg1;	// IMP=0x0000000000c1cf9a
- (void)routeSummaryUpdatedWithActiveRouteDetailsData:(id)arg1;	// IMP=0x0000000000c1ce92
- (void)routeSummaryUpdatedWithGuidanceStateData:(id)arg1;	// IMP=0x0000000000c1cd2b
- (void)routeSummaryUpdatedWithTransitSummaryData:(id)arg1;	// IMP=0x0000000000c1cbc4
- (void)routeSummaryUpdatedWithNavigationRouteSummaryData:(id)arg1;	// IMP=0x0000000000c1ca5d
- (void)didArriveAtWaypoint:(id)arg1 endOfLegIndex:(unsigned long long)arg2;	// IMP=0x0000000000c1c899
- (void)didUpdateTrafficForCurrentRoute:(id)arg1;	// IMP=0x0000000000c1c6f1
- (void)didUpdateRoute:(id)arg1;	// IMP=0x0000000000c1c52e
- (void)didUpdateLocation:(id)arg1;	// IMP=0x0000000000c1c411
- (void)navigationStateChanged:(unsigned long long)arg1 transportType:(int)arg2;	// IMP=0x0000000000c1c244
- (void)requestNavigationVoiceVolume;	// IMP=0x0000000000c1bbb7
- (void)requestPositionFromDestination;	// IMP=0x0000000000c1ba4d
- (void)requestPositionFromManeuver;	// IMP=0x0000000000c1b8e3
- (void)requestPositionFromSign;	// IMP=0x0000000000c1b779
- (void)requestRideSelections;	// IMP=0x0000000000c1b634
- (void)requestStepNameInfo;	// IMP=0x0000000000c1b4fe
- (void)requestStepIndex;	// IMP=0x0000000000c1b35a
- (void)requestActiveRouteDetailsData;	// IMP=0x0000000000c1b215
- (void)requestGuidanceState;	// IMP=0x0000000000c1b0d0
- (void)requestTransitSummary;	// IMP=0x0000000000c1af8b
- (void)requestRouteSummary;	// IMP=0x0000000000c1ae46
- (void)dealloc;	// IMP=0x0000000000c1acf2
- (id)initWithQueue:(id)arg1;	// IMP=0x0000000000c1a826
- (id)init;	// IMP=0x0000000000c1a7fc
@property(readonly, nonatomic) GEOLocation *lastLocation;
- (void)requestRoute;	// IMP=0x0000000000c1df8c
- (id)initWithQueue:(id)arg1 wantsRoutes:(_Bool)arg2;	// IMP=0x0000000000c1df4f

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

