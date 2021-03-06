//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <TextInput/TIKeyboardInputManagerStub.h>

#import <UIKitCore/_UIIVCInterface-Protocol.h>

@class NSString, _UIInputViewControllerState;
@protocol _UIIVCInterface, _UIIVCResponseDelegate;

__attribute__((visibility("hidden")))
@interface UIInputViewControllerInterface : TIKeyboardInputManagerStub <_UIIVCInterface>
{
    id <_UIIVCResponseDelegate> _responseDelegate;	// 8 = 0x8
    id <_UIIVCInterface> _forwardingInterface;	// 16 = 0x10
    _UIInputViewControllerState *_cachedState;	// 24 = 0x18
}

@property(retain, nonatomic, getter=_cachedState, setter=_setCachedState:) _UIInputViewControllerState *cachedState; // @synthesize cachedState=_cachedState;
@property(retain, nonatomic) id <_UIIVCInterface> forwardingInterface; // @synthesize forwardingInterface=_forwardingInterface;
@property(retain, nonatomic) id <_UIIVCResponseDelegate> responseDelegate; // @synthesize responseDelegate=_responseDelegate;
- (void)syncToKeyboardState:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x000000000080c30a
- (void)_tearDownRemoteService;	// IMP=0x000000000080c304
- (void)_handleInputViewControllerState:(id)arg1;	// IMP=0x000000000080c2fe
- (void)dealloc;	// IMP=0x000000000080c0f2
- (id)init;	// IMP=0x000000000080bfde

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

