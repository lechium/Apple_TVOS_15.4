//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <VectorKit/VKGesturingCameraController-Protocol.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface VKARWalkingCameraController <VKGesturingCameraController>
{
    void *_arLogic;	// 96 = 0x60
    void *_elevationLogic;	// 104 = 0x68
    struct Quaternion<double> _rotationCorrectionQuaternion;	// 112 = 0x70
    Coordinate3D_c88e9767 _coordinate;	// 144 = 0x90
    struct EulerAngles _eulerAngles;	// 168 = 0xa8
    Unit_57582783 _heading;	// 192 = 0xc0
    struct vector<std::variant<md::ARCameraPanEvent, md::ARCameraRotateEvent>, std::allocator<std::variant<md::ARCameraPanEvent, md::ARCameraRotateEvent>>> _gestures;	// 200 = 0xc8
    struct Monitorable<md::ConfigValue<GEOConfigKeyDouble, double>> _maxClipDistance;	// 224 = 0xe0
}

- (id).cxx_construct;	// IMP=0x00000000007bf8da
- (void).cxx_destruct;	// IMP=0x00000000007bf89b
- (void)stopTrackingAnnotation;	// IMP=0x00000000007bf895
- (void)startTrackingAnnotation:(id)arg1 trackHeading:(_Bool)arg2 animated:(_Bool)arg3 duration:(double)arg4 timingFunction:(CDUnknownBlockType)arg5;	// IMP=0x00000000007bf88f
- (double)maxPitch;	// IMP=0x00000000007bf886
- (double)minPitch;	// IMP=0x00000000007bf87d
- (double)topDownMinimumZoomLevel;	// IMP=0x00000000007bf86f
- (double)currentZoomLevel;	// IMP=0x00000000007bf861
- (double)maximumZoomLevel;	// IMP=0x00000000007bf853
- (double)minimumZoomLevel;	// IMP=0x00000000007bf845
- (_Bool)usesVKCamera;	// IMP=0x00000000007bf83d
- (double)pitch;	// IMP=0x00000000007bf7d1
- (void)setPitch:(double)arg1;	// IMP=0x00000000007bf765
- (double)presentationHeading;	// IMP=0x00000000007bf753
- (double)heading;	// IMP=0x00000000007bf6e7
- (void)setHeading:(double)arg1;	// IMP=0x00000000007bf67b
- (void)setAltitude:(double)arg1;	// IMP=0x00000000007bf588
- (double)altitude;	// IMP=0x00000000007bf57f
- (double)distanceFromCenterCoordinate;	// IMP=0x00000000007bf51b
- (void)setDistanceFromCenterCoordinate:(double)arg1;	// IMP=0x00000000007bf4b7
- (CDStruct_c3b9c2ee)centerCoordinate;	// IMP=0x00000000007bf3a6
- (void)setCenterCoordinate:(CDStruct_c3b9c2ee)arg1;	// IMP=0x00000000007bf330
- (void)setCamera:(shared_ptr_46708168)arg1;	// IMP=0x00000000007bf27b
- (void)setVkCamera:(id)arg1;	// IMP=0x00000000007bf24c
- (void)setCenterCoordinate:(CDStruct_c3b9c2ee)arg1 altitude:(double)arg2 yaw:(double)arg3 pitch:(double)arg4 duration:(double)arg5 animationStyle:(long long)arg6 timingCurve:(CDUnknownBlockType)arg7 completion:(CDUnknownBlockType)arg8;	// IMP=0x00000000007bf1de
- (void)_updateDebugOverlay:(void *)arg1;	// IMP=0x00000000007bee28
- (id)_buildDebugString:(void *)arg1;	// IMP=0x00000000007bed55
- (void)updateWithTimestamp:(double)arg1 withContext:(void *)arg2;	// IMP=0x00000000007bed13
- (void)_updateClipPlanes;	// IMP=0x00000000007bec89
- (void *)_locationProvider;	// IMP=0x00000000007bec71
- (void)pushGesture:(void *)arg1;	// IMP=0x00000000007bea32
- (void)dealloc;	// IMP=0x00000000007be9e4
- (id)initWithTaskContext:(shared_ptr_e963992e)arg1 mapDataAccess:(void *)arg2 animationRunner:(struct AnimationRunner *)arg3 runLoopController:(struct RunLoopController *)arg4 cameraDelegate:(id)arg5 arLogic:(void *)arg6 elevationLogic:(void *)arg7;	// IMP=0x00000000007be813

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

