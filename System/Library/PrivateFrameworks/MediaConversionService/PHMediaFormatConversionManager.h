//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableArray, NSURL, PHMediaFormatConversionJob;
@protocol OS_dispatch_queue, PHMediaFormatConversionImplementation;

@interface PHMediaFormatConversionManager : NSObject
{
    CDUnknownBlockType _transferBehaviorUserPreferenceOverride;	// 8 = 0x8
    NSURL *_directoryForTemporaryFiles;	// 16 = 0x10
    unsigned long long _state;	// 24 = 0x18
    NSObject<PHMediaFormatConversionImplementation> *_conversionImplementation;	// 32 = 0x20
    NSMutableArray *_queuedJobs;	// 40 = 0x28
    PHMediaFormatConversionJob *_currentlyProcessingJob;	// 48 = 0x30
    NSObject<OS_dispatch_queue> *_stateQueue;	// 56 = 0x38
    NSObject<OS_dispatch_queue> *_callbackQueue;	// 64 = 0x40
    NSObject<OS_dispatch_queue> *_preflightQueue;	// 72 = 0x48
}

- (void).cxx_destruct;	// IMP=0x000000000001824f
@property(retain) NSObject<OS_dispatch_queue> *preflightQueue; // @synthesize preflightQueue=_preflightQueue;
@property(retain) NSObject<OS_dispatch_queue> *callbackQueue; // @synthesize callbackQueue=_callbackQueue;
@property(retain) NSObject<OS_dispatch_queue> *stateQueue; // @synthesize stateQueue=_stateQueue;
@property(retain) PHMediaFormatConversionJob *currentlyProcessingJob; // @synthesize currentlyProcessingJob=_currentlyProcessingJob;
@property(retain) NSMutableArray *queuedJobs; // @synthesize queuedJobs=_queuedJobs;
@property(retain) NSObject<PHMediaFormatConversionImplementation> *conversionImplementation; // @synthesize conversionImplementation=_conversionImplementation;
@property unsigned long long state; // @synthesize state=_state;
@property(retain, nonatomic) NSURL *directoryForTemporaryFiles; // @synthesize directoryForTemporaryFiles=_directoryForTemporaryFiles;
- (id)ut_objectsToBeDeallocatedWithReceiver;	// IMP=0x00000000000180bf
- (void)invalidate;	// IMP=0x0000000000018043
- (void)cancellationRequestedForJob:(id)arg1;	// IMP=0x0000000000017f91
- (id)jobForConversionRequest:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x0000000000017db2
- (id)rootAncestorRequestForRequest:(id)arg1;	// IMP=0x0000000000017d0c
- (void)preflightAllRelatedRequestsForCurrentJob;	// IMP=0x0000000000017c02
- (void)validateLivePhotoPairingIdentifierConfigurationForRequest:(id)arg1;	// IMP=0x0000000000017b2d
- (void)performConversionRequest:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x00000000000176fe
- (void)processQueuedJobs;	// IMP=0x0000000000017295
- (void)setTransferBehaviorUserPreferenceOverride:(CDUnknownBlockType)arg1;	// IMP=0x0000000000017087
- (void)configureTransferBehaviorUserPreferenceForRequest:(id)arg1;	// IMP=0x0000000000016f7a
- (void)preflightConversionRequest:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x0000000000016e9e
- (void)preflightConversionRequest:(id)arg1;	// IMP=0x0000000000016e38
- (void)enqueueConversionRequest:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x0000000000016a64
- (void)setupConversionImplementation;	// IMP=0x0000000000016a2b
- (id)init;	// IMP=0x0000000000016904

@end

