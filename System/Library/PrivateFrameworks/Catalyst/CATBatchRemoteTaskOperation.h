//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSArray, NSOperationQueue;

@interface CATBatchRemoteTaskOperation
{
    NSArray *mRemoteTasks;	// 8 = 0x8
    NSOperationQueue *mQueue;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x0000000000004fcd
- (void)remoteTaskDidFinish:(id)arg1;	// IMP=0x0000000000004f16
- (void)main;	// IMP=0x0000000000004ce0
- (void)cancelSubOperations;	// IMP=0x0000000000004cbc
- (void)cancel;	// IMP=0x0000000000004c6f
@property(readonly, copy, nonatomic) NSArray *remoteTaskOperations;
- (_Bool)isAsynchronous;	// IMP=0x0000000000004c42
- (id)init;	// IMP=0x0000000000004c2e
- (id)initWithRemoteTaskOperations:(id)arg1;	// IMP=0x0000000000004b2e
- (id)initWithTaskClient:(id)arg1 requests:(id)arg2;	// IMP=0x00000000000048b6

@end
