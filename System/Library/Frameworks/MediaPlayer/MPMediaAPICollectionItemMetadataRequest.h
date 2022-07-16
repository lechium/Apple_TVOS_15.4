//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <MediaPlayer/MPMediaAPIMetadaRequestProtocol-Protocol.h>

@class ICMusicKitRequestContext, NSMutableArray, NSProgress, NSString, NSUUID;
@protocol OS_dispatch_queue;

@interface MPMediaAPICollectionItemMetadataRequest : NSObject <MPMediaAPIMetadaRequestProtocol>
{
    ICMusicKitRequestContext *_requestContext;	// 8 = 0x8
    NSObject<OS_dispatch_queue> *_workQueue;	// 16 = 0x10
    NSObject<OS_dispatch_queue> *_callOutQueue;	// 24 = 0x18
    NSProgress *_progress;	// 32 = 0x20
    NSMutableArray *_failedItemIdentifiers;	// 40 = 0x28
    NSMutableArray *_itemIDsForRequest;	// 48 = 0x30
    long long _requestItemCount;	// 56 = 0x38
    NSString *_personID;	// 64 = 0x40
    NSUUID *_requestIdentifier;	// 72 = 0x48
    _Bool _isCancelled;	// 80 = 0x50
}

- (void).cxx_destruct;	// IMP=0x000000000029dfe0
- (void)_fetchContainerItemMetadataForBatch:(id)arg1 progressHandler:(CDUnknownBlockType)arg2;	// IMP=0x000000000029dee9
- (void)_notifyBatchProgressWithResponseDictionary:(id)arg1 tokenHalfLifeDuration:(double)arg2 error:(id)arg3 finalResponse:(_Bool)arg4 progressHandler:(CDUnknownBlockType)arg5;	// IMP=0x000000000029ddde
- (id)_getNextBatchBatch;	// IMP=0x000000000029dd81
- (void)_resolveRequestItemsWithSOD:(id)arg1;	// IMP=0x000000000029dcba
- (void)executeRequestWithBatchProgressHandler:(CDUnknownBlockType)arg1;	// IMP=0x000000000029dc2f
@property(readonly, nonatomic) NSProgress *progress;
@property(readonly, nonatomic) long long requestItemCount;
@property(readonly, nonatomic) _Bool shouldResolveRequestItemsLocally;
- (void)cancelRequest;	// IMP=0x000000000029db19
@property(readonly, copy, nonatomic) NSUUID *requestIdentifier;
- (id)initWithItemIdentifiers:(id)arg1 personID:(id)arg2 requestContext:(id)arg3;	// IMP=0x000000000029d8f5

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

