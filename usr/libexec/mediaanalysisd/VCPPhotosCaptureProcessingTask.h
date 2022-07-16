//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray;

@interface VCPPhotosCaptureProcessingTask : NSObject
{
    CDUnknownBlockType _completionHandler;	// 8 = 0x8
    NSArray *_photoLibraries;	// 16 = 0x10
    struct atomic<bool> _started;	// 24 = 0x18
    struct atomic<bool> _cancel;	// 25 = 0x19
    struct atomic<bool> _interrupt;	// 26 = 0x1a
}

+ (_Bool)_concurrentFaceProcessing;	// IMP=0x002000000003cb9e
+ (id)taskWithPhotoLibraries:(id)arg1 andCompletionHandler:(CDUnknownBlockType)arg2;	// IMP=0x001000000003c88f
- (void).cxx_destruct;	// IMP=0x002000000003e5ea
- (int)run;	// IMP=0x001000000003e438
- (_Bool)run:(id *)arg1;	// IMP=0x001000000003d7b4
- (void)ocrProcessingForAssets:(id)arg1;	// IMP=0x001000000003d242
- (void)faceProcessingForAssets:(id)arg1;	// IMP=0x001000000003cdd1
- (void)_analyzeAsset:(id)arg1 withManager:(id)arg2;	// IMP=0x001000000003cc8f
- (_Bool)isAssetEligible:(id)arg1;	// IMP=0x001000000003cbfb
- (void)interrupt;	// IMP=0x001000000003cb2c
- (void)cancel;	// IMP=0x001000000003cb21
- (_Bool)autoCancellable;	// IMP=0x001000000003cb19
- (float)resourceRequirement;	// IMP=0x001000000003cb0b
- (void)dealloc;	// IMP=0x001000000003c923
- (id)initWithPhotoLibraries:(id)arg1 andCompletionHandler:(CDUnknownBlockType)arg2;	// IMP=0x001000000003c7ce
- (id)init;	// IMP=0x001000000003c7c0

@end
