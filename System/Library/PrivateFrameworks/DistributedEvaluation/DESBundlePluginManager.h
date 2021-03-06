//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <DistributedEvaluation/DESPluginManaging-Protocol.h>

@class DESRecipeEvaluationSession, NSString;
@protocol DESRecipeEvaluation;

@interface DESBundlePluginManager : NSObject <DESPluginManaging>
{
    id <DESRecipeEvaluation> _evaluator;	// 8 = 0x8
    DESRecipeEvaluationSession *_recipeEvaluation;	// 16 = 0x10
    NSString *_bundleIdentifier;	// 24 = 0x18
}

+ (id)pluginManagerForBundleId:(id)arg1 error:(id *)arg2;	// IMP=0x000000000000283b
+ (void)initialize;	// IMP=0x00000000000027ed
- (void).cxx_destruct;	// IMP=0x0000000000003862
@property(readonly, nonatomic) NSString *bundleIdentifier; // @synthesize bundleIdentifier=_bundleIdentifier;
- (void)stopWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x000000000000380b
- (_Bool)shouldDownloadURL:(id)arg1 forTask:(id)arg2;	// IMP=0x00000000000035ed
- (id)telemetryWithRecordSet:(id)arg1;	// IMP=0x000000000000355e
- (id)performDodMLTask:(id)arg1 outError:(id *)arg2;	// IMP=0x0000000000002ca8
- (id)initWithBundleIdentifier:(id)arg1 DESRecipeEvaluationObject:(id)arg2;	// IMP=0x0000000000002b83

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

