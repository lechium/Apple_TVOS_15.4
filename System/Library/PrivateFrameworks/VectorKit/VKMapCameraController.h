//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <VectorKit/VKGesturingCameraController-Protocol.h>

@class NSString, VKTimedAnimation;

__attribute__((visibility("hidden")))
@interface VKMapCameraController <VKGesturingCameraController>
{
    void *_mapEngine;	// 96 = 0x60
    VKTimedAnimation *_horizontalOffsetAnimation;	// 104 = 0x68
    double _minDistanceToGroundAlongForwardVector;	// 112 = 0x70
    double _maxDistanceToGroundAlongForwardVector;	// 120 = 0x78
    double _finalYaw;	// 128 = 0x80
    double _finalPitch;	// 136 = 0x88
}

@property(nonatomic) void *mapEngine; // @synthesize mapEngine=_mapEngine;
- (void)updateWithTimestamp:(double)arg1 withContext:(void *)arg2;	// IMP=0x000000000016a781
- (void)setCamera:(shared_ptr_46708168)arg1;	// IMP=0x000000000016a47c
- (double)zoomLevelAdjustmentForTileSize:(long long)arg1;	// IMP=0x000000000016a465
- (double)topDownMinimumZoomLevel;	// IMP=0x000000000016a44e
- (double)currentZoomLevel;	// IMP=0x000000000016a437
- (double)maximumZoomLevel;	// IMP=0x000000000016a420
- (double)minimumZoomLevel;	// IMP=0x000000000016a409
- (void)setRegionRestriction:(id)arg1 duration:(double)arg2 timingFunction:(CDUnknownBlockType)arg3;	// IMP=0x000000000016a2ab
- (void)animateRegionWithDuration:(double)arg1 timingFunction:(CDUnknownBlockType)arg2 stepHandler:(CDUnknownBlockType)arg3 completionHandler:(CDUnknownBlockType)arg4;	// IMP=0x000000000016a0dd
- (void)setCenterCoordinateDistanceRange:(CDStruct_c3b9c2ee)arg1 duration:(double)arg2 timingFunction:(CDUnknownBlockType)arg3;	// IMP=0x0000000000169cab
- (double)pitch;	// IMP=0x0000000000169c44
- (double)heading;	// IMP=0x0000000000169bdd
- (double)altitude;	// IMP=0x0000000000169b77
- (double)distanceFromCenterCoordinate;	// IMP=0x0000000000169b1e
- (CDStruct_c3b9c2ee)centerCoordinate;	// IMP=0x00000000001699f6
- (void)setCenterCoordinate3D:(CDStruct_071ac149)arg1 altitude:(double)arg2 yaw:(double)arg3 pitch:(double)arg4 duration:(double)arg5 animationStyle:(long long)arg6 timingCurve:(CDUnknownBlockType)arg7 completion:(CDUnknownBlockType)arg8;	// IMP=0x0000000000169923
- (void)setCenterCoordinate:(CDStruct_c3b9c2ee)arg1 altitude:(double)arg2 yaw:(double)arg3 pitch:(double)arg4 duration:(double)arg5 animationStyle:(long long)arg6 timingCurve:(CDUnknownBlockType)arg7 forceDestination:(_Bool)arg8 completion:(CDUnknownBlockType)arg9;	// IMP=0x00000000001697d4
- (void)setCenterCoordinate:(CDStruct_c3b9c2ee)arg1 altitude:(double)arg2 yaw:(double)arg3 pitch:(double)arg4 duration:(double)arg5 animationStyle:(long long)arg6 timingCurve:(CDUnknownBlockType)arg7 completion:(CDUnknownBlockType)arg8;	// IMP=0x00000000001697b9
- (void)_jumpToCenterPoint:(Matrix_6e1d3589)arg1 pitchRadians:(double)arg2 yawRadians:(double)arg3;	// IMP=0x0000000000169482
- (void)_animateToPosition:(Matrix_6e1d3589)arg1 pitch:(double)arg2 yaw:(double)arg3 duration:(double)arg4 timingCurve:(CDUnknownBlockType)arg5 forceDestination:(_Bool)arg6 completion:(CDUnknownBlockType)arg7;	// IMP=0x000000000016852d
- (void)_animateToPosition:(Matrix_6e1d3589)arg1 pitch:(double)arg2 yaw:(double)arg3 duration:(double)arg4 timingCurve:(CDUnknownBlockType)arg5 completion:(CDUnknownBlockType)arg6;	// IMP=0x0000000000168513
- (Matrix_6e1d3589)positionClampedToCameraRestriction:(Matrix_6e1d3589)arg1;	// IMP=0x00000000001684c0
- (void)setMapRegion:(id)arg1 pitch:(double)arg2 yaw:(double)arg3 duration:(double)arg4 timingCurve:(CDUnknownBlockType)arg5 completion:(CDUnknownBlockType)arg6;	// IMP=0x0000000000168173
- (double)durationToAnimateToMapRegion:(id)arg1;	// IMP=0x0000000000168076
- (CDStruct_c3b9c2ee)_mercatorCenterCoordinateForMapRegion:(id)arg1;	// IMP=0x0000000000168033
- (void)setYaw:(double)arg1 animated:(_Bool)arg2;	// IMP=0x0000000000167a9b
- (double)yaw;	// IMP=0x0000000000167a34
- (double)presentationYaw;	// IMP=0x0000000000167a03
- (void)updateCameraZBounds;	// IMP=0x0000000000166da4
- (void)updateCameraToPositionOrientationLimits;	// IMP=0x0000000000166d74
- (_Bool)canRotate;	// IMP=0x0000000000166d57
- (void)clampZoomLevelIfNecessary;	// IMP=0x0000000000166acc
- (void)setGesturing:(_Bool)arg1;	// IMP=0x0000000000166a76
- (void)panWithOffset:(struct CGPoint)arg1 relativeToScreenPoint:(struct CGPoint)arg2 animated:(_Bool)arg3 duration:(double)arg4 completionHandler:(CDUnknownBlockType)arg5;	// IMP=0x00000000001664b6
- (_Bool)canEnter3DMode;	// IMP=0x0000000000166451
- (double)maxPitch;	// IMP=0x0000000000166418
- (double)minPitch;	// IMP=0x00000000001663df
- (_Bool)isFullyPitched;	// IMP=0x000000000016637f
- (_Bool)isPitched;	// IMP=0x000000000016634b
- (void)exit3DMode;	// IMP=0x0000000000166323
- (void)enter3DMode;	// IMP=0x0000000000166133
- (void)zoomToLevel:(double)arg1 withFocusPoint:(struct CGPoint)arg2;	// IMP=0x0000000000166097
- (void)clampPitch:(double *)arg1 yaw:(double *)arg2 atTargetPositionZ:(double)arg3;	// IMP=0x0000000000165e89
- (_Bool)snapMapIfNecessary:(_Bool)arg1;	// IMP=0x0000000000165cb4
- (void)startTrackingAnnotation:(id)arg1 trackHeading:(_Bool)arg2 animated:(_Bool)arg3 duration:(double)arg4 timingFunction:(CDUnknownBlockType)arg5;	// IMP=0x0000000000165a87
- (void)zoomToLevel:(double)arg1 withPoint:(Matrix_6e1d3589)arg2;	// IMP=0x0000000000165661
- (void)zoom:(double)arg1 withPoint:(Matrix_6e1d3589)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x0000000000165373
- (void)tapZoom:(struct CGPoint)arg1 levels:(double)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x000000000016525b
- (void)zoom:(double)arg1 withFocusPoint:(struct CGPoint)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x00000000001651de
- (void)rotateToYaw:(double)arg1 withPoint:(const void *)arg2 animated:(_Bool)arg3;	// IMP=0x0000000000164bc5
- (void)rotateToPitch:(double)arg1 withPoint:(const void *)arg2 preserveAltitude:(_Bool)arg3 animated:(_Bool)arg4 exaggerate:(_Bool)arg5;	// IMP=0x0000000000164356
- (float)maxPitchForNormalizedZoomLevel:(float)arg1;	// IMP=0x00000000001642ce
- (float)idealPitchForNormalizedZoomLevel:(float)arg1;	// IMP=0x0000000000164298
- (float)minimumPitchForNormalizedZoomLevel:(float)arg1;	// IMP=0x0000000000164262
- (float)normalizedZoomLevelAdjustmentForTileSize:(long long)arg1;	// IMP=0x0000000000164216
- (float)currentTopDownMinimumNormalizedZoomLevel;	// IMP=0x0000000000164132
- (float)currentMinimumNormalizedZoomLevel;	// IMP=0x00000000001640b9
- (float)currentMaximumNormalizedZoomLevel;	// IMP=0x0000000000163fd5
- (float)maximumNormalizedZoomLevel;	// IMP=0x0000000000163e0b
- (float)minimumNormalizedZoomLevel;	// IMP=0x0000000000163db4
- (float)currentStyleZoomLevel;	// IMP=0x0000000000163d36
- (float)currentNormalizedZoomLevel;	// IMP=0x0000000000163c86
- (float)currentDisplayZoomLevel;	// IMP=0x0000000000163b38
- (long long)tileSize;	// IMP=0x0000000000163b0a
- (void)canvasDidLayout;	// IMP=0x0000000000163a85
- (void)dealloc;	// IMP=0x0000000000163a1c
- (id)initWithMapDataAccess:(void *)arg1 animationRunner:(struct AnimationRunner *)arg2 runLoopController:(struct RunLoopController *)arg3 cameraDelegate:(id)arg4;	// IMP=0x000000000016397e

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
