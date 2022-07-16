//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableArray;
@protocol TIKeyboardInputManager, _UIIVCResponseDelegateImpl;

__attribute__((visibility("hidden")))
@interface UIKeyboardInputManagerMux : NSObject
{
    NSMutableArray *_clients;	// 8 = 0x8
    id <_UIIVCResponseDelegateImpl> _responseDelegate;	// 16 = 0x10
    id <TIKeyboardInputManager> _systemInputManager;	// 24 = 0x18
}

+ (_Bool)instancesRespondToSelector:(SEL)arg1;	// IMP=0x00000000009a0b17
+ (id)sharedInstance;	// IMP=0x00000000009a04e2
@property(retain, nonatomic) id <TIKeyboardInputManager> systemInputManager; // @synthesize systemInputManager=_systemInputManager;
@property(retain, nonatomic) id <_UIIVCResponseDelegateImpl> responseDelegate; // @synthesize responseDelegate=_responseDelegate;
- (void)forwardInvocation:(id)arg1;	// IMP=0x00000000009a0cc1
- (id)methodSignatureForSelector:(SEL)arg1;	// IMP=0x00000000009a0c71
- (_Bool)conformsToProtocol:(id)arg1;	// IMP=0x00000000009a0c1b
- (_Bool)isKindOfClass:(Class)arg1;	// IMP=0x00000000009a0bc0
- (_Bool)respondsToSelector:(SEL)arg1;	// IMP=0x00000000009a0b6d
- (void)updateClientResponseDelegatesWithDelegate:(id)arg1;	// IMP=0x00000000009a098e
- (void)releaseConnectedClients;	// IMP=0x00000000009a097a
- (void)removeAllClients;	// IMP=0x00000000009a093a
- (void)removeClient:(id)arg1;	// IMP=0x00000000009a08de
- (void)addClient:(id)arg1;	// IMP=0x00000000009a0833
- (void)setSystemInputManagerFromTextInputTraits:(id)arg1 autofillMode:(long long)arg2;	// IMP=0x00000000009a0629
@property(readonly, nonatomic) _Bool hasSystemInputManager;
- (_Bool)_systemHasKbd;	// IMP=0x00000000009a058f
- (void)dealloc;	// IMP=0x00000000009a053e

@end

