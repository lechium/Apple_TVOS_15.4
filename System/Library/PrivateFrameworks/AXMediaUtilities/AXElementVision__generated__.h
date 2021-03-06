//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MLModel;

__attribute__((visibility("hidden")))
@interface AXElementVision__generated__ : NSObject
{
    MLModel *_model;	// 8 = 0x8
}

+ (id)urlOfModelInThisBundle;	// IMP=0x00000000000224db
- (void).cxx_destruct;	// IMP=0x0000000000022c69
@property(readonly, nonatomic) MLModel *model; // @synthesize model=_model;
- (id)predictionsFromInputs:(id)arg1 options:(id)arg2 error:(id *)arg3;	// IMP=0x00000000000229fb
- (id)predictionFromImage:(struct __CVBuffer *)arg1 iouThreshold:(double)arg2 confidenceThreshold:(double)arg3 error:(id *)arg4;	// IMP=0x000000000002296e
- (id)predictionFromFeatures:(id)arg1 options:(id)arg2 error:(id *)arg3;	// IMP=0x000000000002286b
- (id)predictionFromFeatures:(id)arg1 error:(id *)arg2;	// IMP=0x00000000000227ec
- (id)initWithContentsOfURL:(id)arg1 configuration:(id)arg2 error:(id *)arg3;	// IMP=0x000000000002271d
- (id)initWithConfiguration:(id)arg1 error:(id *)arg2;	// IMP=0x0000000000022698
- (id)initWithContentsOfURL:(id)arg1 error:(id *)arg2;	// IMP=0x00000000000225e6
- (id)init;	// IMP=0x0000000000022589

@end

