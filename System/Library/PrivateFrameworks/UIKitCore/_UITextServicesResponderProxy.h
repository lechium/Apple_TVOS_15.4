//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class UIResponder;
@protocol _UITextServicesResponderProxyDelegate;

__attribute__((visibility("hidden")))
@interface _UITextServicesResponderProxy
{
    UIResponder *_responder;	// 8 = 0x8
    id <_UITextServicesResponderProxyDelegate> _delegate;	// 16 = 0x10
}

+ (id)_proxyWithResponder:(id)arg1;	// IMP=0x0000000000dfebfe
- (void).cxx_destruct;	// IMP=0x0000000000dfef7e
@property(nonatomic) __weak id <_UITextServicesResponderProxyDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) __weak UIResponder *responder; // @synthesize responder=_responder;
- (void)_translate:(id)arg1;	// IMP=0x0000000000dfeec1
- (void)_lookup:(id)arg1;	// IMP=0x0000000000dfee4a
- (void)_define:(id)arg1;	// IMP=0x0000000000dfedd3
- (void)_addShortcut:(id)arg1;	// IMP=0x0000000000dfed5c
- (void)_share:(id)arg1;	// IMP=0x0000000000dfece5
- (_Bool)canPerformAction:(SEL)arg1 withSender:(id)arg2;	// IMP=0x0000000000dfec68
- (id)nextResponder;	// IMP=0x0000000000dfec4f

@end

