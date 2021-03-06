//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class AVCaptureDataOutputDelegateCallbackHelper, AVWeakReference, NSArray;

__attribute__((visibility("hidden")))
@interface AVCaptureMetadataOutputInternal : NSObject
{
    AVCaptureDataOutputDelegateCallbackHelper *delegateCallbackHelper;	// 8 = 0x8
    AVWeakReference *weakReference;	// 16 = 0x10
    NSArray *metadataObjectTypes;	// 24 = 0x18
    struct CGRect rectOfInterest;	// 32 = 0x20
    _Bool faceTrackingMetadataObjectTypesAvailable;	// 64 = 0x40
    long long faceTrackingMaxFaces;	// 72 = 0x48
    _Bool faceTrackingUsesFaceRecognition;	// 80 = 0x50
    _Bool faceTrackingPlusEnabled;	// 81 = 0x51
    _Bool videoPreviewHistogramMetadataObjectTypesAvailable;	// 82 = 0x52
    _Bool appClipCodeObjectTypeAvailable;	// 83 = 0x53
    _Bool textRegionObjectTypeAvailable;	// 84 = 0x54
    _Bool headObjectTypesAvailable;	// 85 = 0x55
    _Bool offlineVideoStabilizationMotionMetadataObjectTypesAvailable;	// 86 = 0x56
}

- (void)dealloc;	// IMP=0x0000000000077f34
- (id)init;	// IMP=0x0000000000077eb8

@end

