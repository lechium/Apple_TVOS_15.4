//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class IDSDSessionSharedState, IDSPushHandler, NSNumber;
@protocol IDSDSession><IDSDSessionAWDMetrics;

@interface IDSDSessionMessenger : NSObject
{
    unsigned char keyMaterial[60];	// 8 = 0x8
    _Bool _alwaysSkipSelf;	// 68 = 0x44
    IDSPushHandler *_pushHandler;	// 72 = 0x48
    id <IDSDSession><IDSDSessionAWDMetrics> _delegate;	// 80 = 0x50
    NSNumber *_remoteUsePhoneContinuityLocalMessage;	// 88 = 0x58
    IDSDSessionSharedState *_sharedState;	// 96 = 0x60
}

- (void).cxx_destruct;	// IMP=0x0020000000068450
- (void);	// IMP=0x0010000000068420
@property(retain, nonatomic) IDSDSessionSharedState *sharedState; // @synthesize sharedState=_sharedState;
@property(retain, nonatomic) NSNumber *remoteUsePhoneContinuityLocalMessage; // @synthesize remoteUsePhoneContinuityLocalMessage=_remoteUsePhoneContinuityLocalMessage;
@property(nonatomic) __weak id <IDSDSession><IDSDSessionAWDMetrics> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) IDSPushHandler *pushHandler; // @synthesize pushHandler=_pushHandler;
@property(nonatomic) _Bool alwaysSkipSelf; // @synthesize alwaysSkipSelf=_alwaysSkipSelf;
- (void)sendReinitiateMessageWithSubcommand:(long long)arg1;	// IMP=0x00100000000679d0
- (void)receivedEndMessage:(id)arg1 fromID:(id)arg2;	// IMP=0x00100000000673c0
- (void)receivedSessionMessage:(id)arg1 fromID:(id)arg2;	// IMP=0x0010000000066df0
- (_Bool)_canSendMessageLocally:(id)arg1 toDestinations:(id)arg2 withCommand:(id)arg3;	// IMP=0x00100000000669c0
- (void)_sendSinglePathMessage:(id)arg1 toDestinations:(id)arg2 withCommand:(id)arg3 forceLocalDelivery:(_Bool)arg4 messageGUID:(id)arg5 fromID:(id)arg6 willSendBlock:(CDUnknownBlockType)arg7 completionBlock:(CDUnknownBlockType)arg8;	// IMP=0x0010000000064bb0
- (void)sendMessage:(id)arg1 toDestinations:(id)arg2 withCommand:(id)arg3 fromID:(id)arg4 willSendBlock:(CDUnknownBlockType)arg5 completionBlock:(CDUnknownBlockType)arg6;	// IMP=0x0010000000064400
- (void)sendMessage:(id)arg1 toDestinations:(id)arg2 withCommand:(id)arg3 fromID:(id)arg4;	// IMP=0x0010000000064310
- (void)sendMessage:(id)arg1 toDestinations:(id)arg2 withCommand:(id)arg3;	// IMP=0x0010000000064250
- (void)sendMessage:(id)arg1 withCommand:(id)arg2;	// IMP=0x0010000000064170
- (void)sendSessionMessage:(id)arg1 toDestinations:(id)arg2;	// IMP=0x0010000000063ab0
- (id)initWithDictionary:(id)arg1 sharedState:(id)arg2;	// IMP=0x0010000000063840

@end

