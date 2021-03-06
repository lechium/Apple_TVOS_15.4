//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MLModel;

__attribute__((visibility("hidden")))
@interface SNSoundPrint100kShoutingModel : NSObject
{
    MLModel *_model;	// 8 = 0x8
}

+ (void)loadContentsOfURL:(id)arg1 configuration:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x0000000000077b93
+ (void)loadWithConfiguration:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x0000000000077b0a
+ (id)URLOfModelInThisBundle;	// IMP=0x00000000000777dd
- (void).cxx_destruct;	// IMP=0x000000000007809a
@property(readonly, nonatomic) MLModel *model; // @synthesize model=_model;
- (id)predictionsFromInputs:(id)arg1 options:(id)arg2 error:(id *)arg3;	// IMP=0x0000000000077e82
- (id)predictionFromSoundprint_Placeholder:(id)arg1 error:(id *)arg2;	// IMP=0x0000000000077df0
- (id)predictionFromFeatures:(id)arg1 options:(id)arg2 error:(id *)arg3;	// IMP=0x0000000000077d2a
- (id)predictionFromFeatures:(id)arg1 error:(id *)arg2;	// IMP=0x0000000000077cab
- (id)initWithContentsOfURL:(id)arg1 configuration:(id)arg2 error:(id *)arg3;	// IMP=0x0000000000077a92
- (id)initWithContentsOfURL:(id)arg1 error:(id *)arg2;	// IMP=0x0000000000077a1a
- (id)initWithConfiguration:(id)arg1 error:(id *)arg2;	// IMP=0x0000000000077995
- (id)init;	// IMP=0x0000000000077938
- (id)initWithMLModel:(id)arg1;	// IMP=0x00000000000778a7

@end

