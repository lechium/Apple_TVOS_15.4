//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSDate, NSDateFormatter, _CDInteraction, _PSCNAutocompleteFeedbackInteractionIterator, _PSCNAutocompleteFeedbackSessionAccumulator;

@interface _PSCNAutocompleteFeedbackTracker : NSObject
{
    _PSCNAutocompleteFeedbackInteractionIterator *_interactionIterator;	// 8 = 0x8
    long long _maxSecondsBetweenImpressionAndAction;	// 16 = 0x10
    _Bool _shouldInferEnterAndExit;	// 24 = 0x18
    CDUnknownBlockType _impressionLogger;	// 32 = 0x20
    CDUnknownBlockType _submodelImpressionLogger;	// 40 = 0x28
    CDUnknownBlockType _actionLogger;	// 48 = 0x30
    _Bool _defaultForIsImplicit;	// 56 = 0x38
    NSDateFormatter *_dateFormatter;	// 64 = 0x40
    _CDInteraction *_followingInteractionPrevious;	// 72 = 0x48
    _CDInteraction *_followingInteraction;	// 80 = 0x50
    _PSCNAutocompleteFeedbackSessionAccumulator *_accumulator;	// 88 = 0x58
    _Bool _inActionWindow;	// 96 = 0x60
    NSDate *_stopTime;	// 104 = 0x68
}

+ (id)defaultActionWithInteraction:(id)arg1 trialID:(id)arg2 isImplicit:(_Bool)arg3;	// IMP=0x000000000008a311
+ (id)defaultSubmodelImpressionWithFeedback:(id)arg1 submodel:(id)arg2 bundleID:(id)arg3 trialID:(id)arg4 isImplicit:(_Bool)arg5;	// IMP=0x000000000008a074
+ (id)defaultImpressionWithFeedback:(id)arg1 bundleID:(id)arg2 trialID:(id)arg3 isImplicit:(_Bool)arg4;	// IMP=0x0000000000089e17
- (void).cxx_destruct;	// IMP=0x000000000008bf18
@property(readonly, nonatomic) NSDate *stopTime; // @synthesize stopTime=_stopTime;
- (void)finishWithoutInferredEnterAndExit;	// IMP=0x000000000008befc
- (void)finishWithInferredEnterAndExit;	// IMP=0x000000000008bd2e
- (void)finish;	// IMP=0x000000000008bd0a
- (void)processFeedbackWithoutInferredEnterAndExit:(id)arg1;	// IMP=0x000000000008bcf8
- (void)processFeedbackWithInferredEnterAndExit:(id)arg1;	// IMP=0x000000000008b5fd
- (void)processFeedback:(id)arg1;	// IMP=0x000000000008b5d9
- (void)logActionFromAccumulator:(id)arg1;	// IMP=0x000000000008b418
- (void)annotateAction:(id)arg1 withStatistics:(id)arg2;	// IMP=0x000000000008b237
- (void)logImpressionsFromAccumulator:(id)arg1;	// IMP=0x000000000008aa45
- (void)annotateImpression:(id)arg1 withStatistics:(id)arg2;	// IMP=0x000000000008a693
- (id)initWithInteractionIterator:(id)arg1 maxSecondsBetweenImpressionAndAction:(long long)arg2 shouldInferEnterAndExit:(_Bool)arg3 impressionLogger:(CDUnknownBlockType)arg4 submodelImpressionLogger:(CDUnknownBlockType)arg5 actionLogger:(CDUnknownBlockType)arg6 defaultForIsImplicit:(_Bool)arg7;	// IMP=0x000000000008a54d
- (id)init;	// IMP=0x000000000008a547

@end

