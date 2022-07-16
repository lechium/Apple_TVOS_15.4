//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKitCore/NSObject-Protocol.h>

@class NSArray, NSMutableArray, UIEvent, UIResponder, UIWindow;

@protocol _UIResponderForwardable <NSObject>
@property(readonly, nonatomic) UIWindow *window;
@property(retain, nonatomic, setter=_setResponder:) UIResponder *_responder;
@property(nonatomic, setter=_setForwardablePhase:) long long _forwardablePhase;
- (NSMutableArray *)_mutableForwardingRecord;
- (void)_abandonForwardingRecord;
- (_Bool)_isAbandoningForwardingRecord;
- (NSArray *)gestureRecognizers;
- (SEL)_responderSelectorForPhase:(long long)arg1;
- (NSArray *)_forwardingRecord;
- (_Bool)_wantsForwardingFromResponder:(UIResponder *)arg1 toNextResponder:(UIResponder *)arg2 withEvent:(UIEvent *)arg3;
- (long long)_responderForwardableType;
@end

