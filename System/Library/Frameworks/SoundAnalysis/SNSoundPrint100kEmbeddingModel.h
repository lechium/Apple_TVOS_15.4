//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MLModel;

__attribute__((visibility("hidden")))
@interface SNSoundPrint100kEmbeddingModel : NSObject
{
    MLModel *_model;	// 8 = 0x8
}

+ (void)loadContentsOfURL:(id)arg1 configuration:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x0000000000075613
+ (void)loadWithConfiguration:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x000000000007558a
+ (id)URLOfModelInThisBundle;	// IMP=0x000000000007525d
- (void).cxx_destruct;	// IMP=0x0000000000075b1a
@property(readonly, nonatomic) MLModel *model; // @synthesize model=_model;
- (id)predictionsFromInputs:(id)arg1 options:(id)arg2 error:(id *)arg3;	// IMP=0x0000000000075902
- (id)predictionFromInput1:(id)arg1 error:(id *)arg2;	// IMP=0x0000000000075870
- (id)predictionFromFeatures:(id)arg1 options:(id)arg2 error:(id *)arg3;	// IMP=0x00000000000757aa
- (id)predictionFromFeatures:(id)arg1 error:(id *)arg2;	// IMP=0x000000000007572b
- (id)initWithContentsOfURL:(id)arg1 configuration:(id)arg2 error:(id *)arg3;	// IMP=0x0000000000075512
- (id)initWithContentsOfURL:(id)arg1 error:(id *)arg2;	// IMP=0x000000000007549a
- (id)initWithConfiguration:(id)arg1 error:(id *)arg2;	// IMP=0x0000000000075415
- (id)init;	// IMP=0x00000000000753b8
- (id)initWithMLModel:(id)arg1;	// IMP=0x0000000000075327

@end

