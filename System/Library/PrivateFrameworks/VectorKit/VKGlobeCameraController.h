//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <VectorKit/VKGesturingCameraController-Protocol.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface VKGlobeCameraController <VKGesturingCameraController>
{
    void *_globeView;	// 96 = 0x60
    struct CameraManager _cameraManager;	// 104 = 0x68
    double _currentDoublePanPitch;	// 528 = 0x210
    _Bool _isPitching;	// 536 = 0x218
    _Bool _isRotating;	// 537 = 0x219
    _Bool _wasPitched;	// 538 = 0x21a
    _Bool _couldEnter3DMode;	// 539 = 0x21b
    double _currentZoomLevel;	// 544 = 0x220
    double _maxZoomLevel;	// 552 = 0x228
    double _minZoomLevel;	// 560 = 0x230
    double _lastRotation;	// 568 = 0x238
    struct CGPoint _panStartScreenPoint;	// 576 = 0x240
    struct CGPoint _panLastScreenPoint;	// 592 = 0x250
    double _beganDoublePanPitch;	// 608 = 0x260
    shared_ptr_e963992e _taskContext;	// 616 = 0x268
    _Bool _tourShouldResumeWhenDoneGesturing;	// 632 = 0x278
}

- (id).cxx_construct;	// IMP=0x00000000005c1326
- (void).cxx_destruct;	// IMP=0x00000000005c1315
@property(nonatomic) _Bool tourShouldResumeWhenDoneGesturing; // @synthesize tourShouldResumeWhenDoneGesturing=_tourShouldResumeWhenDoneGesturing;
@property(nonatomic) void *globeView; // @synthesize globeView=_globeView;
- (void)animateToRestriction:(id)arg1 duration:(double)arg2 timingFunction:(CDUnknownBlockType)arg3;	// IMP=0x00000000005c0b15
- (void)setRegionRestriction:(id)arg1 duration:(double)arg2 timingFunction:(CDUnknownBlockType)arg3;	// IMP=0x00000000005c083a
- (void)animateRegionWithDuration:(double)arg1 timingFunction:(CDUnknownBlockType)arg2 cursor:(Matrix_443f5d51)arg3 stepHandler:(CDUnknownBlockType)arg4 completionHandler:(CDUnknownBlockType)arg5;	// IMP=0x00000000005c0683
- (void)setCenterCoordinateDistanceRange:(CDStruct_c3b9c2ee)arg1 duration:(double)arg2 timingFunction:(CDUnknownBlockType)arg3;	// IMP=0x00000000005c014d
- (void)setMinZoomLevel:(double)arg1;	// IMP=0x00000000005c0133
- (void)setMaxZoomLevel:(double)arg1;	// IMP=0x00000000005c0121
- (void)setCurrentZoomLevel:(double)arg1;	// IMP=0x00000000005c010f
- (double)topDownMinimumZoomLevel;	// IMP=0x00000000005c00fd
- (double)currentZoomLevel;	// IMP=0x00000000005c00eb
- (double)maximumZoomLevel;	// IMP=0x00000000005c00d9
- (double)minimumZoomLevel;	// IMP=0x00000000005c00c7
- (double)_fovAdjustment;	// IMP=0x00000000005c0058
- (double)pitch;	// IMP=0x00000000005c0036
- (double)heading;	// IMP=0x00000000005bfff3
- (double)altitude;	// IMP=0x00000000005bff9a
- (double)distanceFromCenterCoordinate;	// IMP=0x00000000005bff80
- (CDStruct_c3b9c2ee)centerCoordinate;	// IMP=0x00000000005bfec5
- (CDStruct_c3b9c2ee)_centerCoordinateForMapRegion:(id)arg1;	// IMP=0x00000000005bfe82
- (void)setMapRegion:(id)arg1 pitch:(double)arg2 yaw:(double)arg3 duration:(double)arg4 timingCurve:(CDUnknownBlockType)arg5 completion:(CDUnknownBlockType)arg6;	// IMP=0x00000000005bfd63
- (double)durationToAnimateToMapRegion:(id)arg1;	// IMP=0x00000000005bfd55
- (double)zoomForMapRegion:(id)arg1;	// IMP=0x00000000005bf923
- (double)widestLatitudeForMapRegion:(id)arg1;	// IMP=0x00000000005bf8c6
- (double)greatCircleMidPointLatitude:(double)arg1 fromLongitude:(double)arg2 toLongitude:(double)arg3;	// IMP=0x00000000005bf848
- (double)earthRadiusAt:(double)arg1;	// IMP=0x00000000005bf801
- (double)geocAngleBetween:(CDStruct_c3b9c2ee)arg1 andCoordinate:(CDStruct_c3b9c2ee)arg2;	// IMP=0x00000000005bf6a4
- (id)mapRegionIgnoringEdgeInsets;	// IMP=0x00000000005bf692
- (id)mapRegion;	// IMP=0x00000000005bf42a
- (void)setYaw:(double)arg1 animated:(_Bool)arg2;	// IMP=0x00000000005bf3a2
- (double)presentationYaw;	// IMP=0x00000000005bf390
- (void)updateCameraManager;	// IMP=0x00000000005bf36c
- (void)startTrackingAnnotation:(id)arg1 trackHeading:(_Bool)arg2 animated:(_Bool)arg3 duration:(double)arg4 timingFunction:(CDUnknownBlockType)arg5;	// IMP=0x00000000005bf0e5
- (void)setGesturing:(_Bool)arg1;	// IMP=0x00000000005bf02c
- (void)updateState;	// IMP=0x00000000005beffe
- (void)_updateCanEnter3DMode;	// IMP=0x00000000005befa1
- (void)_updateIsPitched;	// IMP=0x00000000005bef36
- (double)maxPitch;	// IMP=0x00000000005bef02
- (double)minPitch;	// IMP=0x00000000005beef4
- (_Bool)isFullyPitched;	// IMP=0x00000000005beeb4
- (_Bool)isPitched;	// IMP=0x00000000005bee8f
- (_Bool)canEnter3DMode;	// IMP=0x00000000005bee58
- (void)exit3DMode;	// IMP=0x00000000005bee39
- (void)enter3DMode;	// IMP=0x00000000005bede5
- (void)stopGlobeAnimations;	// IMP=0x00000000005bed1a
- (Geocentric_d8fde6f2)cameraPosition;	// IMP=0x00000000005becd2
- (void)adjustLoadingForAnimation:(float)arg1 progressFactor:(float)arg2;	// IMP=0x00000000005bec63
- (float)slowDownFactorFromLoadProgress;	// IMP=0x00000000005bebf3
- (_Bool)isFlyoverTourStarted;	// IMP=0x00000000005bebc8
- (void)interruptFlyoverTourAnimation;	// IMP=0x00000000005beba5
- (void)stopFlyoverTourAnimation;	// IMP=0x00000000005beb82
- (void)resumeFlyoverTourAnimation;	// IMP=0x00000000005beb5f
- (void)pauseFlyoverTourAnimation;	// IMP=0x00000000005beb0b
- (void)flyoverTourAnimation:(id)arg1 animateToStart:(_Bool)arg2 labelChanged:(CDUnknownBlockType)arg3 stateChange:(CDUnknownBlockType)arg4;	// IMP=0x00000000005be489
- (void)moveToZoomOutZoomInTransition:(CDStruct_c3b9c2ee)arg1 height:(double)arg2 useHeight:(_Bool)arg3 zoom:(double)arg4 rotation:(double)arg5 tilt:(double)arg6 duration:(double)arg7 timingCurve:(CDUnknownBlockType)arg8 completion:(CDUnknownBlockType)arg9;	// IMP=0x00000000005bd841
- (CDUnknownBlockType)createMoveToZoomOutZoomInFrameFunction:(CameraFrame_406dbd31)arg1 toLatLon:(CameraFrame_406dbd31)arg2;	// IMP=0x00000000005bcbdc
- (void)moveTo:(CDStruct_c3b9c2ee)arg1 height:(double)arg2 useHeight:(_Bool)arg3 zoom:(double)arg4 rotation:(double)arg5 tilt:(double)arg6 duration:(double)arg7 timingCurve:(CDUnknownBlockType)arg8 completion:(CDUnknownBlockType)arg9;	// IMP=0x00000000005bbf8b
- (void)moveTo:(CDStruct_c3b9c2ee)arg1 zoom:(double)arg2 rotation:(double)arg3 tilt:(double)arg4 duration:(double)arg5 timingCurve:(CDUnknownBlockType)arg6 completion:(CDUnknownBlockType)arg7;	// IMP=0x00000000005bbf5f
- (void)panWithOffset:(struct CGPoint)arg1 relativeToScreenPoint:(struct CGPoint)arg2 animated:(_Bool)arg3 duration:(double)arg4 completionHandler:(CDUnknownBlockType)arg5;	// IMP=0x00000000005bbbdc
- (void)zoomToDistance:(struct CGPoint)arg1 distance:(double)arg2 time:(double)arg3;	// IMP=0x00000000005bbbc5
- (void)zoomToDistance:(struct CGPoint)arg1 distance:(double)arg2 time:(double)arg3 completionHandler:(CDUnknownBlockType)arg4;	// IMP=0x00000000005bb890
- (void)tapZoom:(struct CGPoint)arg1 levels:(double)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x00000000005bb508
- (void)tiltTo:(double)arg1 animated:(_Bool)arg2 exaggerate:(_Bool)arg3;	// IMP=0x00000000005bb0cd
- (void)rotateTo:(double)arg1 animated:(_Bool)arg2;	// IMP=0x00000000005bac88
- (_Bool)snapMapIfNecessary:(_Bool)arg1;	// IMP=0x00000000005babd1
- (void)setCenterCoordinate3D:(CDStruct_071ac149)arg1 altitude:(double)arg2 yaw:(double)arg3 pitch:(double)arg4 duration:(double)arg5 animationStyle:(long long)arg6 timingCurve:(CDUnknownBlockType)arg7 completion:(CDUnknownBlockType)arg8;	// IMP=0x00000000005baae6
- (void)setCenterCoordinate:(CDStruct_c3b9c2ee)arg1 altitude:(double)arg2 yaw:(double)arg3 pitch:(double)arg4 duration:(double)arg5 animationStyle:(long long)arg6 timingCurve:(CDUnknownBlockType)arg7 completion:(CDUnknownBlockType)arg8;	// IMP=0x00000000005ba9aa
- (void)stopPinchingWithFocusPoint:(struct CGPoint)arg1;	// IMP=0x00000000005ba8d5
- (void)updatePinchWithFocusPoint:(struct CGPoint)arg1 oldFactor:(double)arg2 newFactor:(double)arg3;	// IMP=0x00000000005ba769
- (void)startPinchingWithFocusPoint:(struct CGPoint)arg1;	// IMP=0x00000000005ba681
- (void)zoom:(double)arg1 withFocusPoint:(struct CGPoint)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x00000000005ba5c2
- (void)pitch:(struct CGPoint)arg1 translation:(double)arg2;	// IMP=0x00000000005ba407
- (void)rotate:(double)arg1 atScreenPoint:(struct CGPoint)arg2;	// IMP=0x00000000005ba339
- (void)setCamera:(shared_ptr_46708168)arg1;	// IMP=0x00000000005ba240
- (long long)tileSize;	// IMP=0x00000000005ba235
- (void)dealloc;	// IMP=0x00000000005ba15d
- (id)initWithTaskContext:(shared_ptr_e963992e)arg1 mapDataAccess:(void *)arg2 animationRunner:(struct AnimationRunner *)arg3 runLoopController:(struct RunLoopController *)arg4 cameraDelegate:(id)arg5;	// IMP=0x00000000005ba000

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

