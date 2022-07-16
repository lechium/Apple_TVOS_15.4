//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <AVFCapture/AVCaptureDataOutputDelegateOverride-Protocol.h>

@class AVCaptureDataOutputDelegateCallbackHelper, AVWeakReference, NSObject, NSString;
@protocol AVCapturePointCloudDataOutputDelegate, OS_dispatch_queue;

@interface AVCapturePointCloudDataOutput <AVCaptureDataOutputDelegateOverride>
{
    AVCaptureDataOutputDelegateCallbackHelper *_delegateCallbackHelper;	// 16 = 0x10
    AVWeakReference *_weakReference;	// 24 = 0x18
    _Bool _alwaysDiscardsLatePointCloudData;	// 32 = 0x20
}

+ (id)new;	// IMP=0x000000000003b2eb
+ (void)initialize;	// IMP=0x000000000003b234
- (void)_processSampleBuffer:(struct opaqueCMSampleBuffer *)arg1;	// IMP=0x000000000003ba16
- (void)_handleLocalQueueMessage:(struct FigLocalQueueMessage)arg1;	// IMP=0x000000000003b9f4
- (void)_updateLocalQueue:(struct localQueueOpaque *)arg1;	// IMP=0x000000000003b8da
- (void)_handleNotification:(id)arg1 payload:(id)arg2;	// IMP=0x000000000003b81b
- (void)setDelegateOverride:(id)arg1 delegateOverrideCallbackQueue:(id)arg2;	// IMP=0x000000000003b772
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *delegateOverrideCallbackQueue;
@property(readonly, nonatomic) id delegateOverride;
- (void)detachSafelyFromFigCaptureSession:(struct OpaqueFigCaptureSession *)arg1;	// IMP=0x000000000003b679
- (void)attachSafelyToFigCaptureSession:(struct OpaqueFigCaptureSession *)arg1;	// IMP=0x000000000003b594
- (_Bool)appliesMirroringWithPhysicalFlipForConnection:(id)arg1;	// IMP=0x000000000003b58c
- (_Bool)appliesOrientationWithPhysicalRotationForConnection:(id)arg1;	// IMP=0x000000000003b584
- (_Bool)canAddConnection:(id)arg1 failureReason:(id *)arg2;	// IMP=0x000000000003b4f9
- (id)connectionMediaTypes;	// IMP=0x000000000003b49e
@property(nonatomic) _Bool alwaysDiscardsLatePointCloudData;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *delegateCallbackQueue;
@property(readonly, nonatomic) id <AVCapturePointCloudDataOutputDelegate> delegate;
- (void)setDelegate:(id)arg1 callbackQueue:(id)arg2;	// IMP=0x000000000003b34d
- (void)dealloc;	// IMP=0x000000000003b2f5
- (id)init;	// IMP=0x000000000003b245

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

