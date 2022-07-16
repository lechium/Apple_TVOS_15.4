//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSProxy.h>

@class CLSilo;
@protocol CLIntersiloProxyDelegateProtocol;

@interface CLIntersiloProxy : NSProxy
{
    id <CLIntersiloProxyDelegateProtocol> _delegate;	// 8 = 0x8
    CLSilo *_delegateSilo;	// 16 = 0x10
}

+ (id)proxyForRecipientObject:(id)arg1 inSilo:(id)arg2 recipientName:(id)arg3;	// IMP=0x0000000000014902
+ (Class)recipientRepresentingClass;	// IMP=0x00000000000148f1
+ (Class)initiatorRepresentingClass;	// IMP=0x00000000000148e0
- (void).cxx_destruct;	// IMP=0x000000000001647f
@property(readonly, nonatomic) __weak CLSilo *delegateSilo; // @synthesize delegateSilo=_delegateSilo;
@property(readonly, nonatomic) __weak id <CLIntersiloProxyDelegateProtocol> delegate; // @synthesize delegate=_delegate;
- (_Bool)offsiloHandleInvocation:(id)arg1 selectorInfo:(id)arg2 peer:(id)arg3;	// IMP=0x0000000000016445
- (id)peer;	// IMP=0x00000000000162db
- (void)setDelegateEntityName:(const char *)arg1;	// IMP=0x00000000000162d5
- (id)description;	// IMP=0x00000000000161ed
- (void)registerDelegate:(id)arg1 inSilo:(id)arg2;	// IMP=0x0000000000015f78
- (void)forwardInvocation:(id)arg1;	// IMP=0x0000000000014e56
- (id)methodSignatureForSelector:(SEL)arg1;	// IMP=0x0000000000014dcf
- (id)initWithDelegateObject:(id)arg1 delegateSilo:(id)arg2;	// IMP=0x0000000000014d76
- (id)init;	// IMP=0x0000000000014d2a

@end

