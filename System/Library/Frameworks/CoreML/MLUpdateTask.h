//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <CoreML/MLTaskStateTransitionDelegate-Protocol.h>

@class MLModel, MLUpdateProgressHandlers, NSObject, NSString, NSURL;
@protocol MLBatchProvider, MLUpdatable, OS_dispatch_queue;

@interface MLUpdateTask <MLTaskStateTransitionDelegate>
{
    _Bool _updateHasStarted;	// 8 = 0x8
    MLModel<MLUpdatable> *_updatableModel;	// 16 = 0x10
    id <MLBatchProvider> _trainingData;	// 24 = 0x18
    MLUpdateProgressHandlers *_progressHandlers;	// 32 = 0x20
    NSObject<OS_dispatch_queue> *_updateQueue;	// 40 = 0x28
    NSURL *_updatableModelURL;	// 48 = 0x30
}

+ (id)updateTaskForModelAtURL:(id)arg1 trainingData:(id)arg2 progressHandlers:(id)arg3 error:(id *)arg4;	// IMP=0x000000000012805e
+ (id)updateTaskForModelAtURL:(id)arg1 trainingData:(id)arg2 configuration:(id)arg3 progressHandlers:(id)arg4 error:(id *)arg5;	// IMP=0x0000000000127f9d
+ (id)updateTaskForModelAtURL:(id)arg1 trainingData:(id)arg2 completionHandler:(CDUnknownBlockType)arg3 error:(id *)arg4;	// IMP=0x0000000000127ed7
+ (id)updateTaskForModelAtURL:(id)arg1 trainingData:(id)arg2 configuration:(id)arg3 completionHandler:(CDUnknownBlockType)arg4 error:(id *)arg5;	// IMP=0x0000000000127ddf
+ (_Bool)updateModelAtURL:(id)arg1 trainingData:(id)arg2 configuration:(id)arg3 writeToURL:(id)arg4 error:(id *)arg5;	// IMP=0x0000000000127dd7
- (void).cxx_destruct;	// IMP=0x0000000000127bde
@property(readonly, nonatomic) NSURL *updatableModelURL; // @synthesize updatableModelURL=_updatableModelURL;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *updateQueue; // @synthesize updateQueue=_updateQueue;
@property(nonatomic) _Bool updateHasStarted; // @synthesize updateHasStarted=_updateHasStarted;
@property(readonly, nonatomic) MLUpdateProgressHandlers *progressHandlers; // @synthesize progressHandlers=_progressHandlers;
@property(readonly, nonatomic) id <MLBatchProvider> trainingData; // @synthesize trainingData=_trainingData;
@property(readonly, nonatomic) MLModel<MLUpdatable> *updatableModel; // @synthesize updatableModel=_updatableModel;
@property(readonly, copy) NSString *description;
- (CDUnknownBlockType)_completionHandlerBlock;	// IMP=0x00000000001278a6
- (CDUnknownBlockType)_progressHandlerBlock;	// IMP=0x0000000000127823
- (void)onFailureWithTaskContext:(id)arg1;	// IMP=0x0000000000127811
- (void)onCompletionWithTaskContext:(id)arg1;	// IMP=0x00000000001277ff
- (void)onSuspensionWithTaskContext:(id)arg1;	// IMP=0x00000000001277ed
- (void)onResumptionWithTaskContext:(id)arg1;	// IMP=0x0000000000127657
- (void)onCancellation;	// IMP=0x000000000012761a
- (void)_invokeProgressHandlerForContext:(id)arg1;	// IMP=0x000000000012731b
- (void)resumeWithParameters:(id)arg1;	// IMP=0x0000000000127256
- (id)initWithModelAtURL:(id)arg1 trainingData:(id)arg2 configuration:(id)arg3 progressHandlers:(id)arg4 error:(id *)arg5;	// IMP=0x0000000000126fb8

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

