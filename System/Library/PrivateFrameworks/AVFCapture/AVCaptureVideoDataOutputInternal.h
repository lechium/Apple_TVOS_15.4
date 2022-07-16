//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class AVCaptureDataOutputDelegateCallbackHelper, AVWeakReference, NSArray, NSDictionary;

__attribute__((visibility("hidden")))
@interface AVCaptureVideoDataOutputInternal : NSObject
{
    AVWeakReference *weakReference;	// 8 = 0x8
    NSDictionary *videoSettings;	// 16 = 0x10
    NSDictionary *clientVideoSettings;	// 24 = 0x18
    CDStruct_1b6d18a9 deprecatedMinFrameDuration;	// 32 = 0x20
    _Bool alwaysDiscardsLateVideoFrames;	// 56 = 0x38
    _Bool automaticallyConfiguresOutputBufferDimensions;	// 57 = 0x39
    _Bool deliversPreviewSizedOutputBuffers;	// 58 = 0x3a
    _Bool sceneStabilityMetadataEnabled;	// 59 = 0x3b
    _Bool videoSettingsDimensionsOverrideEnabled;	// 60 = 0x3c
    NSArray *availableVideoCVPixelFormatTypes;	// 64 = 0x40
    AVCaptureDataOutputDelegateCallbackHelper *delegateCallbackHelper;	// 72 = 0x48
}

- (void)dealloc;	// IMP=0x0000000000027d36
- (id)init;	// IMP=0x0000000000027ca7

@end

