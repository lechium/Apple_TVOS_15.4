//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MLModel;

__attribute__((visibility("hidden")))
@interface SNSoundPrint100kDoorbellModel : NSObject
{
    MLModel *_model;	// 8 = 0x8
}

+ (void)loadContentsOfURL:(id)arg1 configuration:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x0000000000080e4f
+ (void)loadWithConfiguration:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x0000000000080dc6
+ (id)URLOfModelInThisBundle;	// IMP=0x0000000000080a99
- (void).cxx_destruct;	// IMP=0x0000000000081356
@property(readonly, nonatomic) MLModel *model; // @synthesize model=_model;
- (id)predictionsFromInputs:(id)arg1 options:(id)arg2 error:(id *)arg3;	// IMP=0x000000000008113e
- (id)predictionFromSoundprint_Placeholder:(id)arg1 error:(id *)arg2;	// IMP=0x00000000000810ac
- (id)predictionFromFeatures:(id)arg1 options:(id)arg2 error:(id *)arg3;	// IMP=0x0000000000080fe6
- (id)predictionFromFeatures:(id)arg1 error:(id *)arg2;	// IMP=0x0000000000080f67
- (id)initWithContentsOfURL:(id)arg1 configuration:(id)arg2 error:(id *)arg3;	// IMP=0x0000000000080d4e
- (id)initWithContentsOfURL:(id)arg1 error:(id *)arg2;	// IMP=0x0000000000080cd6
- (id)initWithConfiguration:(id)arg1 error:(id *)arg2;	// IMP=0x0000000000080c51
- (id)init;	// IMP=0x0000000000080bf4
- (id)initWithMLModel:(id)arg1;	// IMP=0x0000000000080b63

@end

