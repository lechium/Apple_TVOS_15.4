//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <AVFCapture/AVCaptureDataOutputDelegateOverride-Protocol.h>

@class AVCaptureDepthDataOutputInternal, NSObject, NSString;
@protocol AVCaptureDepthDataOutputDelegate, OS_dispatch_queue;

@interface AVCaptureDepthDataOutput <AVCaptureDataOutputDelegateOverride>
{
    AVCaptureDepthDataOutputInternal *_internal;	// 16 = 0x10
}

+ (id)new;	// IMP=0x000000000000d45b
+ (void)initialize;	// IMP=0x000000000000d3ba
- (void)setDelegateOverride:(id)arg1 delegateOverrideCallbackQueue:(id)arg2;	// IMP=0x000000000000df46
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *delegateOverrideCallbackQueue;
@property(readonly, nonatomic) id delegateOverride;
- (void)_processSampleBuffer:(struct opaqueCMSampleBuffer *)arg1;	// IMP=0x000000000000dd38
- (void)_handleLocalQueueMessage:(struct FigLocalQueueMessage)arg1;	// IMP=0x000000000000dd16
- (void)_updateLocalQueue:(struct localQueueOpaque *)arg1;	// IMP=0x000000000000dbfb
- (void)_handleNotification:(id)arg1 payload:(id)arg2;	// IMP=0x000000000000db3c
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;	// IMP=0x000000000000da58
- (void)detachSafelyFromFigCaptureSession:(struct OpaqueFigCaptureSession *)arg1;	// IMP=0x000000000000d991
- (void)attachSafelyToFigCaptureSession:(struct OpaqueFigCaptureSession *)arg1;	// IMP=0x000000000000d8a8
- (_Bool)appliesMirroringWithPhysicalFlipForConnection:(id)arg1;	// IMP=0x000000000000d8a0
- (_Bool)appliesOrientationWithPhysicalRotationForConnection:(id)arg1;	// IMP=0x000000000000d898
- (void)removeConnection:(id)arg1;	// IMP=0x000000000000d7f9
- (id)addConnection:(id)arg1 error:(id *)arg2;	// IMP=0x000000000000d73e
- (_Bool)canAddConnection:(id)arg1 failureReason:(id *)arg2;	// IMP=0x000000000000d6b3
- (id)connectionMediaTypes;	// IMP=0x000000000000d658
@property(nonatomic, getter=isFilteringEnabled) _Bool filteringEnabled;
@property(nonatomic) _Bool alwaysDiscardsLateDepthData;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *delegateCallbackQueue;
@property(readonly, nonatomic) id <AVCaptureDepthDataOutputDelegate> delegate;
- (void)setDelegate:(id)arg1 callbackQueue:(id)arg2;	// IMP=0x000000000000d4a7
- (void)dealloc;	// IMP=0x000000000000d465
- (id)init;	// IMP=0x000000000000d3cb

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

