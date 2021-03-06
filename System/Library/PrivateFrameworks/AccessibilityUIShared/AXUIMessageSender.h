//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class AXAccessQueue, NSMutableArray;
@protocol AXUIMessageSenderDelegate;

@interface AXUIMessageSender : NSObject
{
    _Bool _sendingMessage;	// 8 = 0x8
    id <AXUIMessageSenderDelegate> _delegate;	// 16 = 0x10
    NSMutableArray *_messageQueue;	// 24 = 0x18
    AXAccessQueue *_messageSchedulingSerializationQueue;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x0000000000002b57
@property(nonatomic, getter=isSendingMessage) _Bool sendingMessage; // @synthesize sendingMessage=_sendingMessage;
@property(retain, nonatomic) AXAccessQueue *messageSchedulingSerializationQueue; // @synthesize messageSchedulingSerializationQueue=_messageSchedulingSerializationQueue;
@property(retain, nonatomic) NSMutableArray *messageQueue; // @synthesize messageQueue=_messageQueue;
@property(nonatomic) __weak id <AXUIMessageSenderDelegate> delegate; // @synthesize delegate=_delegate;
- (id)sendSynchronousMessage:(id)arg1 withIdentifier:(unsigned long long)arg2 context:(void *)arg3 error:(id *)arg4;	// IMP=0x000000000000285b
- (void)sendAsynchronousMessage:(id)arg1 withIdentifier:(unsigned long long)arg2 context:(void *)arg3 targetAccessQueue:(id)arg4 completionRequiresWritingBlock:(_Bool)arg5 completion:(CDUnknownBlockType)arg6;	// IMP=0x00000000000020e5
- (void)_performBlock:(CDUnknownBlockType)arg1 inAccessQueue:(id)arg2 treatAsWritingBlock:(_Bool)arg3;	// IMP=0x00000000000020bf
- (void)_didFinishSendingXPCMessage:(id)arg1 replyCustomData:(void *)arg2;	// IMP=0x0000000000001a97
- (void)_sendXPCMessage:(id)arg1 context:(void *)arg2 remainingAttempts:(unsigned long long)arg3 previousError:(id)arg4 completion:(CDUnknownBlockType)arg5;	// IMP=0x0000000000001030
- (id)init;	// IMP=0x0000000000000f84

@end

