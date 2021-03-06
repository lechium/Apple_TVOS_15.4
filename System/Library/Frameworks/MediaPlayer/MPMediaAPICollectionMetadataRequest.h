//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <MediaPlayer/MPMediaAPIMetadaRequestProtocol-Protocol.h>

@class ICMusicKitRequestContext, NSProgress, NSString, NSUUID;
@protocol OS_dispatch_queue;

@interface MPMediaAPICollectionMetadataRequest : NSObject <MPMediaAPIMetadaRequestProtocol>
{
    ICMusicKitRequestContext *_requestContext;	// 8 = 0x8
    NSString *_storeItemID;	// 16 = 0x10
    long long _collectionType;	// 24 = 0x18
    NSObject<OS_dispatch_queue> *_workQueue;	// 32 = 0x20
    NSObject<OS_dispatch_queue> *_callOutQueue;	// 40 = 0x28
    NSProgress *_progress;	// 48 = 0x30
    NSString *_requestObjectStoreIdentifier;	// 56 = 0x38
    _Bool _isCancelled;	// 64 = 0x40
    NSUUID *_requestIdentifier;	// 72 = 0x48
}

- (void).cxx_destruct;	// IMP=0x00000000002da1cc
- (void)_fetchContainerItemMetadataWithBatchProgressHandler:(CDUnknownBlockType)arg1;	// IMP=0x00000000002da103
- (void)_notifyBatchProgressWithResponseDictionary:(id)arg1 tokenHalfLifeDuration:(double)arg2 error:(id)arg3 finalResponse:(_Bool)arg4 progressHandler:(CDUnknownBlockType)arg5;	// IMP=0x00000000002d9ff8
- (void)executeRequestWithBatchProgressHandler:(CDUnknownBlockType)arg1;	// IMP=0x00000000002d9f6d
@property(readonly, nonatomic) long long requestItemCount;
@property(readonly, nonatomic) NSProgress *progress;
@property(readonly, nonatomic) _Bool shouldResolveRequestItemsLocally;
- (void)cancelRequest;	// IMP=0x00000000002d9e56
@property(readonly, copy, nonatomic) NSUUID *requestIdentifier;
- (id)initWithStoreID:(id)arg1 collectionType:(long long)arg2 requestContext:(id)arg3;	// IMP=0x00000000002d9cb7

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

