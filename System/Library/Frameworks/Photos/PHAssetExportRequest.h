//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <Photos/NSProgressReporting-Protocol.h>

@class NSDictionary, NSProgress, NSString, NSURL, PHAsset;
@protocol OS_dispatch_queue, PHAssetExportRequestDelegate;

@interface PHAssetExportRequest : NSObject <NSProgressReporting>
{
    NSURL *_outputDirectory;	// 8 = 0x8
    NSObject<OS_dispatch_queue> *_resourceProcessingQueue;	// 16 = 0x10
    NSObject<OS_dispatch_queue> *_serialQueue;	// 24 = 0x18
    PHAsset *_asset;	// 32 = 0x20
    NSProgress *_progress;	// 40 = 0x28
    unsigned long long _state;	// 48 = 0x30
    id <PHAssetExportRequestDelegate> _delegate;	// 56 = 0x38
    NSDictionary *_variants;	// 64 = 0x40
}

+ (id)assetExportLog;	// IMP=0x0000000000023ebc
+ (id)exportRequestForAsset:(id)arg1 variants:(id)arg2 error:(id *)arg3;	// IMP=0x0000000000023c56
+ (id)exportRequestForAsset:(id)arg1 error:(id *)arg2;	// IMP=0x0000000000023c3f
- (void).cxx_destruct;	// IMP=0x000000000001dd02
@property(readonly, nonatomic) NSDictionary *variants; // @synthesize variants=_variants;
@property(nonatomic) __weak id <PHAssetExportRequestDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) unsigned long long state; // @synthesize state=_state;
@property(readonly, nonatomic) NSProgress *progress; // @synthesize progress=_progress;
@property(readonly, nonatomic) PHAsset *asset; // @synthesize asset=_asset;
- (void)exportWithOptions:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x000000000001dc01
- (void)preflightExportWithOptions:(id)arg1 assetAvailability:(long long *)arg2 isProcessingRequired:(_Bool *)arg3 fileURLs:(id *)arg4 info:(id *)arg5;	// IMP=0x000000000001db4f
- (void)performCompletionWithFileURLs:(id)arg1 error:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x000000000001d82b
- (id)copyFileURLsIfNeeded:(id)arg1 toOutputDirectory:(id)arg2 options:(id)arg3 originalFilenameBase:(id)arg4 error:(id *)arg5;	// IMP=0x000000000001d608
- (void)bundleResourcesIfNeededForAsset:(id)arg1 withFileURLs:(id)arg2 options:(id)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x000000000001ce04
- (_Bool)reassembleAdjustmentsPropertyListIfNeeded:(id)arg1 toOutputDirectory:(id)arg2 outputURL:(id *)arg3 error:(id *)arg4;	// IMP=0x000000000001cbae
- (void)processResourcesAtFileURLs:(id)arg1 forAsset:(id)arg2 withOptions:(id)arg3 progress:(id)arg4 processingUnitCount:(long long)arg5 completion:(CDUnknownBlockType)arg6;	// IMP=0x000000000001c2e9
- (void)handleResultWithFileURLs:(id)arg1 cancelled:(_Bool)arg2 withError:(id)arg3 forAsset:(id)arg4 withOptions:(id)arg5 progress:(id)arg6 processingUnitCount:(long long)arg7 completionHandler:(CDUnknownBlockType)arg8;	// IMP=0x000000000001bc0b
- (id)outputDirectory;	// IMP=0x000000000001bafc
@property(readonly, copy) NSString *description;
- (void)setState:(unsigned long long)arg1;	// IMP=0x000000000001b805
- (id)initWithAsset:(id)arg1 variants:(id)arg2;	// IMP=0x000000000001b5be
- (id)init;	// IMP=0x000000000001b544

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
