//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableArray, PHPhotoLibrary, VCPFaceClusterer, VCPPhotosFaceProcessingContext;
@protocol OS_dispatch_queue;

@interface VCPFaceProcessingChangeBatch : NSObject
{
    PHPhotoLibrary *_photoLibrary;	// 8 = 0x8
    NSMutableArray *_pendingChanges;	// 16 = 0x10
    NSObject<OS_dispatch_queue> *_publishQueue;	// 24 = 0x18
    VCPFaceClusterer *_clusterer;	// 32 = 0x20
    VCPPhotosFaceProcessingContext *_context;	// 40 = 0x28
}

+ (id)batchForPhotoLibrary:(id)arg1 faceClusterer:(id)arg2 andContext:(id)arg3;	// IMP=0x004000000004ff42
- (void).cxx_destruct;	// IMP=0x0020000000050e59
- (void)publishOnCancel;	// IMP=0x0010000000050a7b
- (void)publishWithCompletionHandler:(CDUnknownBlockType)arg1 andCancelBlock:(CDUnknownBlockType)arg2;	// IMP=0x00100000000503aa
- (void)_publishPendingChanges;	// IMP=0x001000000005011f
- (int)updateAsset:(id)arg1 withAnalysis:(id)arg2;	// IMP=0x001000000004fffa
- (id)initWithPhotoLibrary:(id)arg1 faceClusterer:(id)arg2 andContext:(id)arg3;	// IMP=0x001000000004fde1

@end

