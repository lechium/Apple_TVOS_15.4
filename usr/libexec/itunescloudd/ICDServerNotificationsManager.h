//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@protocol ICDServerNotificationsManagerDelegate, OS_dispatch_queue;

@interface ICDServerNotificationsManager : NSObject
{
    NSObject<OS_dispatch_queue> *_xpcStreamHandlerQueue;	// 8 = 0x8
    id <ICDServerNotificationsManagerDelegate> _delegate;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x00200000000299e1
@property(readonly, nonatomic) __weak id <ICDServerNotificationsManagerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)_handleMusicSettingsChangedNotification;	// IMP=0x0010000000029924
- (void)_handleFamilyContentDeletionNotification:(id)arg1 streamEvent:(id)arg2;	// IMP=0x00100000000296e9
- (void)_handleApplicationRegistration:(_Bool)arg1 notificationName:(id)arg2 streamEvent:(id)arg3;	// IMP=0x0010000000029426
- (void)_handleCloudAuthenticationDidChangeNotification;	// IMP=0x001000000002937f
- (void)_handleLibraryAuthServiceTokenDidChangeNotification:(id)arg1;	// IMP=0x00100000000292c2
- (void)_handleAllowsMusicVideosChangedNotification:(id)arg1;	// IMP=0x001000000002924d
- (void)_handleAllowsExplicitContentChangedNotification:(id)arg1;	// IMP=0x00100000000291d8
- (void)_handleActiveUserIdentityDidChangeNotification:(id)arg1;	// IMP=0x001000000002911b
- (void)_handleMusicSubscriptionStatusDidChangeNotification:(id)arg1;	// IMP=0x001000000002905e
- (void)_handleFirstUnlockNotification:(id)arg1;	// IMP=0x0010000000028fb7
- (void)_didReceiveTelephonyCenterNotification:(id)arg1;	// IMP=0x0010000000028e27
- (void)_didReceiveDarwinNotification:(id)arg1;	// IMP=0x0010000000028c66
- (void)_didReceiveDistributedNotification:(id)arg1 withStreamEvent:(id)arg2;	// IMP=0x0010000000028b13
- (void)_tearDownNotifications;	// IMP=0x0010000000028ab0
- (void)_setupNotifications;	// IMP=0x0010000000028795
- (void)dealloc;	// IMP=0x0010000000028757
- (id)initWithDelegate:(id)arg1;	// IMP=0x001000000002869b

@end

