//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class CALayer, NSArray;

@interface AVSpatialOverCaptureVideoPreviewLayer
{
    struct os_unfair_lock_s _primaryCaptureRectLock;	// 16 = 0x10
    struct CGPoint _primaryCaptureRectCenterPoint;	// 24 = 0x18
    double _primaryCaptureRectAspectRatio;	// 40 = 0x28
    long long _primaryCaptureRectUniqueID;	// 48 = 0x30
    _Bool _havePendingPrimaryCaptureRectChange;	// 56 = 0x38
    struct CGRect _primaryCaptureRect;	// 64 = 0x40
    struct CGRect _overCaptureRect;	// 96 = 0x60
    struct CGSize _contentSize;	// 128 = 0x80
    _Bool _primaryAndOverCaptureCompositingEnabled;	// 144 = 0x90
    long long _overCaptureStatus;	// 152 = 0x98
    _Bool _isPresentationLayer;	// 160 = 0xa0
    _Bool _automaticallyDimsOverCaptureRegion;	// 161 = 0xa1
    CALayer *_topDimmingOverlay;	// 168 = 0xa8
    CALayer *_bottomDimmingOverlay;	// 176 = 0xb0
    double _lastAspectCenterUpdateTime;	// 184 = 0xb8
    _Bool _semanticStyleRenderingSupported;	// 192 = 0xc0
    _Bool _semanticStyleRenderingEnabled;	// 193 = 0xc1
    NSArray *_semanticStyles;	// 200 = 0xc8
    NSArray *_semanticStylesRegions;	// 208 = 0xd0
    unsigned long long _maxSemanticStyles;	// 216 = 0xd8
}

+ (long long)uniqueID;	// IMP=0x000000000000f777
@property(readonly, nonatomic) struct CGSize contentSize; // @synthesize contentSize=_contentSize;
@property(readonly, nonatomic) struct CGRect overCaptureRect; // @synthesize overCaptureRect=_overCaptureRect;
@property(readonly, nonatomic) struct CGRect primaryCaptureRect; // @synthesize primaryCaptureRect=_primaryCaptureRect;
- (void)_handleSpatialNotification:(id)arg1 payload:(id)arg2;	// IMP=0x0000000000012408
- (void)didUpdatePreviewImageQueueSlot:(unsigned int)arg1 imageQueue:(id)arg2 rotationDegrees:(double)arg3 size:(struct CGSize)arg4;	// IMP=0x0000000000012356
- (void)detachSafelyFromFigCaptureSession:(struct OpaqueFigCaptureSession *)arg1;	// IMP=0x00000000000122bc
- (void)attachSafelyToFigCaptureSession:(struct OpaqueFigCaptureSession *)arg1;	// IMP=0x0000000000011f33
- (void)removeConnection:(id)arg1;	// IMP=0x0000000000011f04
- (id)addConnection:(id)arg1 error:(id *)arg2;	// IMP=0x0000000000011ed5
- (struct CGAffineTransform)captureDeviceTransformForSensorSize:(struct CGSize)arg1 previewSize:(struct CGSize)arg2 sensorToPreviewVTScalingMode:(id)arg3;	// IMP=0x0000000000011aa6
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;	// IMP=0x0000000000011a77
- (_Bool)performContentUpdates:(CDUnknownBlockType)arg1;	// IMP=0x00000000000119d5
- (void)setSemanticStyles:(id)arg1 semanticStylesRegions:(id)arg2;	// IMP=0x000000000001115d
- (void)setSemanticStyle:(id)arg1 animated:(_Bool)arg2;	// IMP=0x0000000000010c3c
- (long long)maxSemanticStyles;	// IMP=0x0000000000010c2b
- (id)semanticStylesRegions;	// IMP=0x0000000000010c0d
- (id)semanticStyles;	// IMP=0x0000000000010bef
- (id)semanticStyle;	// IMP=0x0000000000010bc1
- (void)setSemanticStyleRenderingEnabled:(_Bool)arg1;	// IMP=0x000000000001096d
- (_Bool)isSemanticStyleRenderingEnabled;	// IMP=0x000000000001095d
- (void)_updateSemanticStyleRenderingSupported;	// IMP=0x00000000000106cf
- (_Bool)isSemanticStyleRenderingSupported;	// IMP=0x00000000000106bf
- (void)layoutSublayers;	// IMP=0x0000000000010412
@property(nonatomic) _Bool automaticallyDimsOverCaptureRegion;
@property(readonly, nonatomic) long long overCaptureStatus;
- (void)getPrimaryCaptureRectCenter:(struct CGPoint *)arg1 aspectRatio:(double *)arg2 uniqueID:(long long *)arg3;	// IMP=0x00000000000101b1
- (long long)primaryCaptureRectUniqueID;	// IMP=0x000000000001017a
@property(readonly, nonatomic) double primaryCaptureRectAspectRatio;
@property(readonly, nonatomic) struct CGPoint primaryCaptureRectCenterPoint;
@property(nonatomic, getter=isPrimaryAndOverCaptureCompositingEnabled) _Bool primaryAndOverCaptureCompositingEnabled;
- (void)setPrimaryCaptureRectAspectRatio:(double)arg1 centerPoint:(struct CGPoint)arg2;	// IMP=0x000000000000fb79
- (void)dealloc;	// IMP=0x000000000000fb0e
- (id)initWithLayer:(id)arg1;	// IMP=0x000000000000f8b1
- (id)_initWithSession:(id)arg1 makeConnection:(_Bool)arg2;	// IMP=0x000000000000f78e

@end
