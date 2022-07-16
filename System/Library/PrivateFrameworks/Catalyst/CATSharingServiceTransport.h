//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Catalyst/CATSharingConnectionDelegate-Protocol.h>

@class CATOperationQueue, NSMutableArray, NSString;
@protocol CATSharingConnection;

@interface CATSharingServiceTransport <CATSharingConnectionDelegate>
{
    id <CATSharingConnection> mConnection;	// 8 = 0x8
    CATOperationQueue *mCatalystQueue;	// 16 = 0x10
    NSMutableArray *mReceivedMessages;	// 24 = 0x18
    _Bool mIsActive;	// 32 = 0x20
    _Bool mIsInvalidated;	// 33 = 0x21
}

- (void).cxx_destruct;	// IMP=0x0000000000035a73
- (void)invalidateIfNeeded;	// IMP=0x0000000000035a1c
- (void)processReceivedMessages;	// IMP=0x000000000003595b
- (void)connectionClosed:(id)arg1;	// IMP=0x00000000000358a9
- (void)connection:(id)arg1 receivedData:(id)arg2;	// IMP=0x0000000000035635
- (id)name;	// IMP=0x00000000000355b0
- (id)operationToSendMessage:(id)arg1;	// IMP=0x000000000003554c
- (void)invalidateConnection;	// IMP=0x0000000000035505
- (void)suspendConnection;	// IMP=0x00000000000354c9
- (void)resumeConnection;	// IMP=0x000000000003540a
- (id)initWithConnection:(id)arg1;	// IMP=0x0000000000035303

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

