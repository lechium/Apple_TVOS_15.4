//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <DataAccess/DAMailboxFetchMessageRequest.h>

#import <Message/MFDAMailAccountRequest-Protocol.h>

@class MFDAMessageStore, MFMessage;
@protocol MFRequestQueueResponseConsumer;

@interface _MFDAMessageStoreFetchHeadersRequest : DAMailboxFetchMessageRequest <MFDAMailAccountRequest>
{
    id <MFRequestQueueResponseConsumer> consumer;	// 8 = 0x8
    MFDAMessageStore *store;	// 16 = 0x10
    MFMessage *message;	// 24 = 0x18
}

- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000000815f5
- (unsigned long long)hash;	// IMP=0x00000000000815bf
- (id)deferredOperation;	// IMP=0x00000000000815b7
@property(readonly, nonatomic) _Bool isUserRequested;
@property(readonly, nonatomic) _Bool shouldSend;
- (unsigned long long)generationNumber;	// IMP=0x000000000008151b

@end

