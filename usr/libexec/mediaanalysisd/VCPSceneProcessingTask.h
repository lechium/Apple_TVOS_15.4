//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class PHPhotoLibrary, VCPDatabaseWriter, VCPPreAnalyzer;
@protocol OS_dispatch_group, OS_dispatch_queue;

@interface VCPSceneProcessingTask : NSObject
{
    PHPhotoLibrary *_photoLibrary;	// 8 = 0x8
    VCPPreAnalyzer *_analyzer;	// 16 = 0x10
    VCPDatabaseWriter *_database;	// 24 = 0x18
    struct atomic<bool> _cancel;	// 32 = 0x20
    NSObject<OS_dispatch_group> *_publishGroup;	// 40 = 0x28
    int _publishStatus;	// 48 = 0x30
    NSObject<OS_dispatch_group> *_analysisGroup;	// 56 = 0x38
    CDUnknownBlockType _cancelBlock;	// 64 = 0x40
    NSObject<OS_dispatch_queue> *_completionHandlerQueue;	// 72 = 0x48
    struct mach_timebase_info _timebase;	// 80 = 0x50
}

+ (id)taskWithPhotoLibrary:(id)arg1 andCancelBlock:(CDUnknownBlockType)arg2;	// IMP=0x002000000009961b
- (void).cxx_destruct;	// IMP=0x002000000009d449
@property(readonly, nonatomic) VCPDatabaseWriter *database; // @synthesize database=_database;
@property(readonly, nonatomic) PHPhotoLibrary *photoLibrary; // @synthesize photoLibrary=_photoLibrary;
- (_Bool)autoCancellable;	// IMP=0x001000000009d42d
- (int)run;	// IMP=0x001000000009d422
- (int)flush;	// IMP=0x001000000009d3ff
- (int)processAssets:(id)arg1;	// IMP=0x001000000009d1e4
- (int)processAssetsSerial:(id)arg1;	// IMP=0x001000000009bc3e
- (int)processAssetsConcurrent:(id)arg1;	// IMP=0x001000000009a175
- (void)analyzeAsset:(id)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;	// IMP=0x00100000000996ec
- (_Bool)isCancelled;	// IMP=0x00100000000996c8
- (void)cancel;	// IMP=0x00100000000996bd
- (float)resourceRequirement;	// IMP=0x00100000000996af
- (id)initWithPhotoLibrary:(id)arg1 andCancelBlock:(CDUnknownBlockType)arg2;	// IMP=0x00100000000994a2
- (id)init;	// IMP=0x0010000000099494

@end

