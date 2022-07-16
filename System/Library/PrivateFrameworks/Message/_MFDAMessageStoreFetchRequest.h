//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <DataAccess/DAMailboxFetchMessageRequest.h>

#import <Message/MFDAMailAccountRequest-Protocol.h>

@class MFDAMessageStore, MFMessage, MFMimePart;
@protocol MFRequestQueueResponseConsumer><DAMailAccountStreamConsumerFactory;

@interface _MFDAMessageStoreFetchRequest : DAMailboxFetchMessageRequest <MFDAMailAccountRequest>
{
    id <MFRequestQueueResponseConsumer><DAMailAccountStreamConsumerFactory> consumer;	// 8 = 0x8
    MFDAMessageStore *store;	// 16 = 0x10
    MFMessage *message;	// 24 = 0x18
    MFMimePart *part;	// 32 = 0x20
    int format;	// 40 = 0x28
    _Bool partial;	// 44 = 0x2c
}

- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000081855
- (unsigned long long)hash;	// IMP=0x000000000008181f
- (id)deferredOperation;	// IMP=0x0000000000081817
@property(readonly, nonatomic) _Bool isUserRequested;
@property(readonly, nonatomic) _Bool shouldSend;
- (unsigned long long)generationNumber;	// IMP=0x000000000008167a

@end

