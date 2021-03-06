//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <MediaAnalysis/VCPMADTaskProtocol-Protocol.h>

@class NSArray;

@interface VCPPhotosSceneprintAssetProcessingTask : NSObject <VCPMADTaskProtocol>
{
    CDUnknownBlockType _completionHandler;	// 8 = 0x8
    NSArray *_assets;	// 16 = 0x10
    struct atomic<bool> _started;	// 24 = 0x18
    struct atomic<bool> _cancel;	// 25 = 0x19
    unsigned long long _revision;	// 32 = 0x20
}

+ (unsigned long long)_panoVNRequestMethod;	// IMP=0x00000000001f5f24
+ (id)taskWithAssets:(id)arg1 options:(id)arg2 andCompletionHandler:(CDUnknownBlockType)arg3;	// IMP=0x00000000001f5e4b
- (void).cxx_destruct;	// IMP=0x00000000001f71f6
- (int)run;	// IMP=0x00000000001f70d2
- (_Bool)run:(id *)arg1;	// IMP=0x00000000001f5f2c
- (void)cancel;	// IMP=0x00000000001f5f19
- (_Bool)autoCancellable;	// IMP=0x00000000001f5f11
- (float)resourceRequirement;	// IMP=0x00000000001f5f03
- (void)dealloc;	// IMP=0x00000000001f5c5e
- (id)initWithAssets:(id)arg1 options:(id)arg2 andCompletionHandler:(CDUnknownBlockType)arg3;	// IMP=0x00000000001f5ab0

@end

