//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <TelephonyUtilities/TUVideoDeviceControllerProviderDelegate-Protocol.h>

@class AVCaptureDevice, CALayer, NSArray, TUVideoEffect;
@protocol OS_dispatch_queue, TUVideoDeviceControllerProvider><TUVideoEffectsProvider;

@interface TUVideoDeviceController : NSObject <TUVideoDeviceControllerProviderDelegate>
{
    _Bool _wantsPreview;	// 8 = 0x8
    _Bool _hasRefreshedPreviewAfterError;	// 9 = 0x9
    NSObject<OS_dispatch_queue> *_serialQueue;	// 16 = 0x10
    id <TUVideoDeviceControllerProvider><TUVideoEffectsProvider> _provider;	// 24 = 0x18
}

+ (int)_tuOrientationForVideoOrientation:(int)arg1;	// IMP=0x00000000000170a0
+ (int)_videoOrientationForTUOrientation:(int)arg1;	// IMP=0x000000000001708f
+ (void)prewarm;	// IMP=0x0000000000016e1b
- (void).cxx_destruct;	// IMP=0x000000000001a87a
@property(nonatomic) _Bool hasRefreshedPreviewAfterError; // @synthesize hasRefreshedPreviewAfterError=_hasRefreshedPreviewAfterError;
@property(nonatomic) _Bool wantsPreview; // @synthesize wantsPreview=_wantsPreview;
@property(readonly, nonatomic) id <TUVideoDeviceControllerProvider><TUVideoEffectsProvider> provider; // @synthesize provider=_provider;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *serialQueue; // @synthesize serialQueue=_serialQueue;
- (void)provider:(id)arg1 didGetSnapshot:(id)arg2;	// IMP=0x000000000001a64c
- (void)provider:(id)arg1 cameraBlurEnabledDidChange:(_Bool)arg2;	// IMP=0x000000000001a463
- (void)provider:(id)arg1 cameraZoomAvailabilityDidChange:(_Bool)arg2;	// IMP=0x000000000001a2f7
- (void)captureDevicesChangedForProvider:(id)arg1;	// IMP=0x000000000001a1d3
- (void)didPausePreviewForProvider:(id)arg1;	// IMP=0x000000000001a0af
- (void)didStopPreviewForProvider:(id)arg1;	// IMP=0x0000000000019f8b
- (void)provider:(id)arg1 didChangeLocalVideoAttributes:(id)arg2;	// IMP=0x0000000000019d81
- (void)provider:(id)arg1 didReceiveFirstPreviewFrameFromCameraUniqueID:(id)arg2;	// IMP=0x0000000000019b9d
- (void)didStartPreviewForProvider:(id)arg1;	// IMP=0x0000000000019a79
- (void)provider:(id)arg1 cameraDidBecomeAvailableForUniqueID:(id)arg2;	// IMP=0x0000000000019824
- (void)provider:(id)arg1 didReceiveErrorFromCameraUniqueID:(id)arg2 error:(id)arg3;	// IMP=0x00000000000195d9
- (id)landscapeScreenAttributes;	// IMP=0x000000000001953e
- (id)portraitScreenAttributes;	// IMP=0x00000000000194a6
@property(readonly, nonatomic) struct CGSize localScreenLandscapeAspectRatio;
@property(readonly, nonatomic) struct CGSize localVideoLandscapeAspectRatio;
@property(readonly, nonatomic) struct CGSize localScreenPortraitAspectRatio;
@property(readonly, nonatomic) struct CGSize localVideoPortraitAspectRatio;
@property(readonly, nonatomic) struct CGRect localScreenContentsRect;
- (void)setLocalPortraitAspectRatio:(struct CGSize)arg1 localLandscapeAspectRatio:(struct CGSize)arg2;	// IMP=0x0000000000018f13
- (void)noteEndAnimationToPIP;	// IMP=0x0000000000018dfa
- (void)noteBeginAnimationToPIP;	// IMP=0x0000000000018ce1
- (void)noteEndAnimationToPreview;	// IMP=0x0000000000018bc8
- (void)flipCamera;	// IMP=0x00000000000188be
- (void)noteBeginAnimationToPreview;	// IMP=0x00000000000187a5
- (void)rampCameraZoomFactor:(double)arg1 withRate:(double)arg2;	// IMP=0x0000000000018683
- (void)setCameraZoomFactor:(double)arg1;	// IMP=0x000000000001857d
@property(nonatomic) _Bool cameraBlurEnabled;
@property(nonatomic) _Bool allowsCameraBlurToggling;
@property(readonly, nonatomic) _Bool supportsCameraBlur;
- (void)getSnapshot;	// IMP=0x000000000001826e
- (void)pausePreview;	// IMP=0x0000000000018146
- (void)stopPreview;	// IMP=0x000000000001801e
- (void)startPreview;	// IMP=0x0000000000017ef3
@property(readonly, copy, nonatomic) NSArray *availableVideoEffects;
@property(retain, nonatomic) TUVideoEffect *currentVideoEffect;
@property(retain, nonatomic) CALayer *localBackLayer;
@property(retain, nonatomic) CALayer *localFrontLayer;
@property(readonly, nonatomic, getter=isPreviewRunning) _Bool previewRunning;
@property(readonly, copy, nonatomic) NSArray *inputDevices;
@property(nonatomic) int currentVideoOrientation;
@property(retain, nonatomic) AVCaptureDevice *currentInputDevice;
- (_Bool)currentInputSupportsCinematicFraming;	// IMP=0x00000000000172da
- (id)debugDescription;	// IMP=0x0000000000016fcf
- (id)init;	// IMP=0x0000000000016f45
- (id)initWithProvider:(id)arg1 serialQueue:(id)arg2;	// IMP=0x0000000000016e98
- (id)initWithSerialQueue:(id)arg1;	// IMP=0x0000000000016e34

@end

