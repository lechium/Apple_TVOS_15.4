//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <TelephonyUtilities/AVConferencePreviewClientDelegate-Protocol.h>
#import <TelephonyUtilities/TUVideoDeviceControllerProvider-Protocol.h>
#import <TelephonyUtilities/TUVideoEffectsProvider-Protocol.h>

@class AVConferencePreview, NSArray, NSString, TUVideoEffect, VideoAttributes;
@protocol TUVideoDeviceControllerProviderDelegate;

__attribute__((visibility("hidden")))
@interface TUVideoDeviceControllerProvider : NSObject <AVConferencePreviewClientDelegate, TUVideoDeviceControllerProvider, TUVideoEffectsProvider>
{
    id <TUVideoDeviceControllerProviderDelegate> _delegate;	// 8 = 0x8
    TUVideoEffect *_currentVideoEffect;	// 16 = 0x10
    AVConferencePreview *_preview;	// 24 = 0x18
}

+ (void)prewarm;	// IMP=0x00000000000a5f49
- (void).cxx_destruct;	// IMP=0x00000000000a6dae
@property(readonly, nonatomic) AVConferencePreview *preview; // @synthesize preview=_preview;
@property(retain, nonatomic) TUVideoEffect *currentVideoEffect; // @synthesize currentVideoEffect=_currentVideoEffect;
@property(nonatomic) __weak id <TUVideoDeviceControllerProviderDelegate> delegate; // @synthesize delegate=_delegate;
- (void)captureDevicesChanged:(id)arg1;	// IMP=0x00000000000a6d27
@property(readonly, nonatomic) NSArray *availableVideoEffects;
- (void)didGetSnapshot:(id)arg1;	// IMP=0x00000000000a6c5f
- (void)cameraZoomAvailabilityDidChange:(_Bool)arg1;	// IMP=0x00000000000a6c0e
- (void)didPausePreview;	// IMP=0x00000000000a6bc2
- (void)didStopPreview;	// IMP=0x00000000000a6b76
- (void)didChangeLocalVideoAttributes:(id)arg1;	// IMP=0x00000000000a6b01
- (void)didReceiveFirstPreviewFrameFromCameraUniqueID:(id)arg1;	// IMP=0x00000000000a6a8c
- (void)didStartPreview;	// IMP=0x00000000000a6a40
- (void)cameraDidBecomeAvailableForUniqueID:(id)arg1;	// IMP=0x00000000000a69cb
- (void)didReceiveErrorFromCameraUniqueID:(id)arg1 error:(id)arg2;	// IMP=0x00000000000a6942
- (void)setCameraZoomFactor:(double)arg1;	// IMP=0x00000000000a68f3
- (void)rampCameraZoomFactor:(double)arg1 withRate:(double)arg2;	// IMP=0x00000000000a689a
- (void)endPIPToPreviewAnimation;	// IMP=0x00000000000a685d
- (void)beginPIPToPreviewAnimation;	// IMP=0x00000000000a6820
- (void)endPreviewToPIPAnimation;	// IMP=0x00000000000a67e3
- (void)beginPreviewToPIPAnimation;	// IMP=0x00000000000a67a6
- (void)setLocalScreenAttributes:(id)arg1;	// IMP=0x00000000000a6734
- (id)localScreenAttributesForVideoAttributes:(id)arg1;	// IMP=0x00000000000a66b1
@property(nonatomic, getter=isCameraBlurEnabled) _Bool cameraBlurEnabled;
@property(nonatomic) _Bool allowsCameraBlurToggling;
- (_Bool)supportsCameraBlurForDevice:(id)arg1;	// IMP=0x00000000000a64c4
- (void)getSnapshot;	// IMP=0x00000000000a6434
- (void)stopPreview;	// IMP=0x00000000000a63f7
- (void)pausePreview;	// IMP=0x00000000000a63ba
- (void)startPreview;	// IMP=0x00000000000a637d
- (void)setLocalVideoLayer:(id)arg1 front:(_Bool)arg2;	// IMP=0x00000000000a6305
- (id)localVideoLayer:(_Bool)arg1;	// IMP=0x00000000000a62a6
- (void)setLocalCameraWithUID:(id)arg1;	// IMP=0x00000000000a6234
@property(copy, nonatomic) VideoAttributes *localVideoAttributes;
@property(readonly, copy, nonatomic) NSArray *inputDevices;
@property(readonly, copy, nonatomic) NSString *localCameraUID;
@property(readonly, nonatomic, getter=isPreviewRunning) _Bool previewRunning;
- (void)dealloc;	// IMP=0x00000000000a59ae
- (id)init;	// IMP=0x00000000000a581a

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

