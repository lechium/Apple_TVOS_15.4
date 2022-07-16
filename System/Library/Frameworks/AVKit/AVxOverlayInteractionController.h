//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <AVKit/AVxOverlayInteractionAssistant-Protocol.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface AVxOverlayInteractionController : NSObject <AVxOverlayInteractionAssistant>
{
    id _lastSender;	// 8 = 0x8
    double _lastInteractionNotificationTimeInterval;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x000000000010f9a2
@property(readonly, nonatomic) double lastInteractionNotificationTimeInterval; // @synthesize lastInteractionNotificationTimeInterval=_lastInteractionNotificationTimeInterval;
@property(readonly, nonatomic) __weak id lastSender; // @synthesize lastSender=_lastSender;
- (void)viewControllerDidReceiveSelectEvent:(id)arg1;	// IMP=0x000000000010f96f
- (void)viewController:(id)arg1 didUpdateFocusInContext:(id)arg2;	// IMP=0x000000000010f95d
- (void)view:(id)arg1 didUpdateFocusInContext:(id)arg2;	// IMP=0x000000000010f94b
- (void)view:(id)arg1 didReceiveFocusMovementHint:(id)arg2;	// IMP=0x000000000010f939
- (void)_postUXNotificationAfterDelayWithSender:(id)arg1;	// IMP=0x000000000010f7e8
- (void)_cancelPendingUXNotification;	// IMP=0x000000000010f7c2
- (void)__postUXNotification;	// IMP=0x000000000010f750
- (void)delay:(id)arg1;	// IMP=0x000000000010f73e
- (void)dealloc;	// IMP=0x000000000010f700

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
