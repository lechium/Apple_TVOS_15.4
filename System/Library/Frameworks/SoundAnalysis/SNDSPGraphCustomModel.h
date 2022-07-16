//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MLModelDescription, MLMultiArray, MLMultiArrayConstraint;

__attribute__((visibility("hidden")))
@interface SNDSPGraphCustomModel : NSObject
{
    MLModelDescription *_modelDescription;	// 8 = 0x8
    MLMultiArrayConstraint *_inputConstraint;	// 16 = 0x10
    MLMultiArrayConstraint *_outputConstraint;	// 24 = 0x18
    unique_ptr_a0b8f5a3 _graph;	// 32 = 0x20
    struct vector<float, std::allocator<float>> _scratchFloatSpace;	// 40 = 0x28
    MLMultiArray *_modelOutput;	// 64 = 0x40
    CDUnknownBlockType _preProcessCallback;	// 72 = 0x48
}

- (id).cxx_construct;	// IMP=0x00000000000522db
- (void).cxx_destruct;	// IMP=0x0000000000052269
@property(copy, nonatomic) CDUnknownBlockType preProcessCallback; // @synthesize preProcessCallback=_preProcessCallback;
- (id)predictionFromFeatures:(id)arg1 options:(id)arg2 error:(id *)arg3;	// IMP=0x00000000000520e8
- (id)initWithModelDescription:(id)arg1 expectedInputShape:(id)arg2 expectedOutputShape:(id)arg3 graph:(unique_ptr_a0b8f5a3)arg4 error:(id *)arg5;	// IMP=0x00000000000518b0

@end

