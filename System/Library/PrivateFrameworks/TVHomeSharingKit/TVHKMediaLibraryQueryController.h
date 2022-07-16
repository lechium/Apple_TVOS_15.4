//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <TVHomeSharingKit/TVHKPubliclyLoggable-Protocol.h>

@class NSDictionary, NSOperation, NSOperationQueue, NSString, TVHKMediaLibrary, TVHKMediaLibraryRevision, TVHKStateMachine;
@protocol OS_dispatch_queue, OS_dispatch_queue_serial;

@interface TVHKMediaLibraryQueryController : NSObject <TVHKPubliclyLoggable>
{
    long long _state;	// 8 = 0x8
    NSObject<OS_dispatch_queue> *_completionDispatchQueue;	// 16 = 0x10
    NSString *_logName;	// 24 = 0x18
    NSString *_identifier;	// 32 = 0x20
    TVHKMediaLibrary *_mediaLibrary;	// 40 = 0x28
    NSObject<OS_dispatch_queue_serial> *_serialAccessDispatchQueue;	// 48 = 0x30
    NSOperationQueue *_serialQueryOperationQueue;	// 56 = 0x38
    NSOperation *_queryOperation;	// 64 = 0x40
    TVHKStateMachine *_stateMachine;	// 72 = 0x48
    TVHKMediaLibraryRevision *_mediaLibraryRevision;	// 80 = 0x50
    TVHKMediaLibraryRevision *_queryMediaLibraryRevision;	// 88 = 0x58
    unsigned long long _disabledCount;	// 96 = 0x60
    NSDictionary *_queryUserInfo;	// 104 = 0x68
    CDUnknownBlockType _queryCompletionHandler;	// 112 = 0x70
    NSObject<OS_dispatch_queue_serial> *_serialProcessingDispatchQueue;	// 120 = 0x78
}

+ (long long)_stateFromStateMachineState:(id)arg1;	// IMP=0x000000000004278e
+ (_Bool)automaticallyNotifiesObserversOfState;	// IMP=0x000000000003f3d0
+ (id)new;	// IMP=0x000000000003ea75
- (void).cxx_destruct;	// IMP=0x0000000000042bbb
@property(readonly, nonatomic) NSObject<OS_dispatch_queue_serial> *serialProcessingDispatchQueue; // @synthesize serialProcessingDispatchQueue=_serialProcessingDispatchQueue;
@property(copy, nonatomic) CDUnknownBlockType queryCompletionHandler; // @synthesize queryCompletionHandler=_queryCompletionHandler;
@property(copy, nonatomic) NSDictionary *queryUserInfo; // @synthesize queryUserInfo=_queryUserInfo;
@property(nonatomic) unsigned long long disabledCount; // @synthesize disabledCount=_disabledCount;
@property(copy, nonatomic) TVHKMediaLibraryRevision *queryMediaLibraryRevision; // @synthesize queryMediaLibraryRevision=_queryMediaLibraryRevision;
@property(copy, nonatomic) TVHKMediaLibraryRevision *mediaLibraryRevision; // @synthesize mediaLibraryRevision=_mediaLibraryRevision;
@property(retain, nonatomic) TVHKStateMachine *stateMachine; // @synthesize stateMachine=_stateMachine;
@property(retain, nonatomic) NSOperation *queryOperation; // @synthesize queryOperation=_queryOperation;
@property(readonly, nonatomic) NSOperationQueue *serialQueryOperationQueue; // @synthesize serialQueryOperationQueue=_serialQueryOperationQueue;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue_serial> *serialAccessDispatchQueue; // @synthesize serialAccessDispatchQueue=_serialAccessDispatchQueue;
@property(readonly, nonatomic) TVHKMediaLibrary *mediaLibrary; // @synthesize mediaLibrary=_mediaLibrary;
@property(readonly, copy, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
- (void)_enqueueAsyncProcessingQueueBlock:(CDUnknownBlockType)arg1;	// IMP=0x00000000000429d7
- (void)_queryOperationCompleted:(id)arg1;	// IMP=0x0000000000042817
- (void)_startQuery;	// IMP=0x00000000000424d3
- (_Bool)_shouldQueryForMediaLibraryRevision:(id)arg1;	// IMP=0x00000000000423e7
- (void)_updateExternalStateIfRequired;	// IMP=0x00000000000422d8
- (void)_callQueryCompletionHandler:(CDUnknownBlockType)arg1 status:(long long)arg2 result:(id)arg3 error:(id)arg4;	// IMP=0x0000000000041fb0
- (void)_cancelWithQueryStatus:(long long)arg1;	// IMP=0x0000000000041ed7
- (void)_completeQuery;	// IMP=0x0000000000041dca
- (void)_resetQueryProperties;	// IMP=0x0000000000041d22
- (void)_registerConnectionStateMachineHandlers;	// IMP=0x000000000003f996
- (void)_setupStateMachine;	// IMP=0x000000000003f7a3
- (void)_startQueryWithMediaLibraryRevision:(id)arg1 userInfoBlock:(CDUnknownBlockType)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x000000000003f4eb
- (void)_didCancel;	// IMP=0x000000000003f4e5
- (id)_didCompleteQueryOperation:(id)arg1;	// IMP=0x000000000003f482
- (id)_queryOperationForQueryReason:(long long)arg1 withUserInfo:(id)arg2;	// IMP=0x000000000003f40e
@property(readonly, copy) NSString *description;
@property(readonly, copy, nonatomic) NSString *publiclyLoggableDescription;
@property(readonly, copy, nonatomic) NSString *publiclyLoggableSuccinctDescription;
- (void)enable;	// IMP=0x000000000003f36b
- (void)disable;	// IMP=0x000000000003f306
- (void)cancel;	// IMP=0x000000000003f2a1
@property(copy, nonatomic) NSString *logName; // @synthesize logName=_logName;
@property long long state; // @synthesize state=_state;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *completionDispatchQueue; // @synthesize completionDispatchQueue=_completionDispatchQueue;
- (id)initWithMediaLibrary:(id)arg1;	// IMP=0x000000000003eb13
- (id)init;	// IMP=0x000000000003eaa4

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
