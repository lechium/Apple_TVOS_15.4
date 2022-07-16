//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <Sharing/RTIInputSystemClientDelegate-Protocol.h>
#import <Sharing/RTIInputSystemDelegate-Protocol.h>
#import <Sharing/RTIInputSystemPayloadDelegate-Protocol.h>
#import <Sharing/RTIInputSystemSessionDelegate-Protocol.h>

@class NSDictionary, NSString, RTIInputSystemService, RTIInputSystemSourceSession;
@protocol OS_dispatch_queue;

@interface SFRemoteTextInputClient : NSObject <RTIInputSystemClientDelegate, RTIInputSystemDelegate, RTIInputSystemPayloadDelegate, RTIInputSystemSessionDelegate>
{
    _Bool _activateCalled;	// 8 = 0x8
    _Bool _invalidateCalled;	// 9 = 0x9
    _Bool _paused;	// 10 = 0xa
    RTIInputSystemService *_rtiService;	// 16 = 0x10
    RTIInputSystemSourceSession *_rtiSourceSession;	// 24 = 0x18
    NSObject<OS_dispatch_queue> *_dispatchQueue;	// 32 = 0x20
    CDUnknownBlockType _eventHandler;	// 40 = 0x28
    CDUnknownBlockType _textInputDidBegin;	// 48 = 0x30
    CDUnknownBlockType _textInputDidEnd;	// 56 = 0x38
}

- (void).cxx_destruct;	// IMP=0x0000000000073f2d
@property(copy, nonatomic) CDUnknownBlockType textInputDidEnd; // @synthesize textInputDidEnd=_textInputDidEnd;
@property(copy, nonatomic) CDUnknownBlockType textInputDidBegin; // @synthesize textInputDidBegin=_textInputDidBegin;
@property(copy, nonatomic) CDUnknownBlockType eventHandler; // @synthesize eventHandler=_eventHandler;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue; // @synthesize dispatchQueue=_dispatchQueue;
- (void)handleTextActionPayload:(id)arg1;	// IMP=0x0000000000073e46
- (void)inputSystemService:(id)arg1 inputSessionDocumentDidChange:(id)arg2;	// IMP=0x0000000000073d99
- (void)inputSystemService:(id)arg1 inputSessionDidUnpause:(id)arg2 withReason:(id)arg3;	// IMP=0x0000000000073ca9
- (void)inputSystemService:(id)arg1 inputSessionDidPause:(id)arg2 withReason:(id)arg3;	// IMP=0x0000000000073bb9
- (void)inputSystemService:(id)arg1 inputSessionDidDie:(id)arg2;	// IMP=0x0000000000073ac9
- (void)inputSystemService:(id)arg1 inputSessionDidEnd:(id)arg2;	// IMP=0x00000000000739d9
- (void)inputSystemService:(id)arg1 inputSessionDidBegin:(id)arg2;	// IMP=0x00000000000738e9
- (void)inputSystemService:(id)arg1 didCreateInputSession:(id)arg2;	// IMP=0x0000000000073808
- (void)performTextOperations:(id)arg1;	// IMP=0x000000000007379c
- (void)_handleSessionEvent:(long long)arg1 forSession:(id)arg2;	// IMP=0x00000000000732d5
- (void)_fireEventHandlerWithPayload:(id)arg1;	// IMP=0x000000000007306c
- (void)fireEventHandlerWithPayload:(id)arg1;	// IMP=0x0000000000072fc2
- (void)flushOperations;	// IMP=0x0000000000072fac
- (void)handleUsername:(id)arg1 password:(id)arg2;	// IMP=0x0000000000072d36
- (void)handleTextInputData:(id)arg1;	// IMP=0x00000000000729db
@property(readonly, nonatomic) RTIInputSystemSourceSession *sourceSession;
@property(readonly, copy, nonatomic) NSDictionary *currentPayload;
- (void)_cleanup;	// IMP=0x00000000000726e1
- (void)invalidate;	// IMP=0x00000000000725d3
- (void)activate;	// IMP=0x0000000000072466
- (void)dealloc;	// IMP=0x000000000007240b
- (id)init;	// IMP=0x00000000000723b4

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

