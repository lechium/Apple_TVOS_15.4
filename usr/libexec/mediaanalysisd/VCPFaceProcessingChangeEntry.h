//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSDictionary, PHAsset;

@interface VCPFaceProcessingChangeEntry : NSObject
{
    PHAsset *_asset;	// 8 = 0x8
    NSDictionary *_analysis;	// 16 = 0x10
}

+ (id)entryWithAsset:(id)arg1 andAnalysis:(id)arg2;	// IMP=0x004000000004eb1c
- (void).cxx_destruct;	// IMP=0x002000000004fdb9
- (void)publish:(id *)arg1 scheduleTorsoOnlyPHFace:(_Bool)arg2;	// IMP=0x001000000004fda7
- (void)_persist:(id *)arg1 scheduleTorsoOnlyPHFace:(_Bool)arg2;	// IMP=0x001000000004ebb0
- (id)initWithAsset:(id)arg1 andAnalysis:(id)arg2;	// IMP=0x001000000004ea65
- (id)init;	// IMP=0x001000000004ea57

@end
