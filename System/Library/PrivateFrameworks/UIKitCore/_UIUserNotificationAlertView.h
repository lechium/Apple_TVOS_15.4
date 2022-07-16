//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

__attribute__((visibility("hidden")))
@interface _UIUserNotificationAlertView
{
    struct __CFUserNotification *_userNotification;	// 8 = 0x8
    struct __CFRunLoopSource *_userNotificationRunLoopSource;	// 16 = 0x10
    id _strongDelegate;	// 24 = 0x18
    id _retainedSelf;	// 32 = 0x20
}

+ (void)initialize;	// IMP=0x0000000000f2f3b4
- (void).cxx_destruct;	// IMP=0x0000000000f303a7
- (void)dealloc;	// IMP=0x0000000000f3034b
- (void)dismissWithClickedButtonIndex:(long long)arg1 animated:(_Bool)arg2;	// IMP=0x0000000000f302b1
- (void)_removeObservervations;	// IMP=0x0000000000f3023c
- (void)_cancelUserNotification;	// IMP=0x0000000000f30161
- (void)cancelAlertView;	// IMP=0x0000000000f300cc
- (void)setRemoteViewController:(id)arg1;	// IMP=0x0000000000f3003f
- (void)setHostedWindow:(id)arg1;	// IMP=0x0000000000f2ffb2
- (long long)addButtonWithTitle:(id)arg1;	// IMP=0x0000000000f2ff22
- (id)textFieldAtIndex:(long long)arg1;	// IMP=0x0000000000f2fead
- (_Bool)isVisible;	// IMP=0x0000000000f2fe98
- (void)show;	// IMP=0x0000000000f2f40b

@end

