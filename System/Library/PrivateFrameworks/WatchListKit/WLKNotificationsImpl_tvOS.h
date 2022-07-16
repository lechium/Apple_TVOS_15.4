//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <WatchListKit/PBSBulletinServiceDelegate-Protocol.h>
#import <WatchListKit/UNUserNotificationCenterDelegate-Protocol.h>
#import <WatchListKit/UNUserNotificationCenterDelegatePrivate-Protocol.h>
#import <WatchListKit/WLKNotificationsImpl-Protocol.h>

@class NSMutableDictionary, NSString;
@protocol WLKNotificationCenterDelegate;

@interface WLKNotificationsImpl_tvOS : NSObject <PBSBulletinServiceDelegate, UNUserNotificationCenterDelegate, UNUserNotificationCenterDelegatePrivate, WLKNotificationsImpl>
{
    id <WLKNotificationCenterDelegate> delegate;	// 8 = 0x8
    NSMutableDictionary *_bulletinsByIdentifer;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x000000000004a584
@property(retain, nonatomic) NSMutableDictionary *bulletinsByIdentifer; // @synthesize bulletinsByIdentifer=_bulletinsByIdentifer;
@property(nonatomic) __weak id <WLKNotificationCenterDelegate> delegate; // @synthesize delegate;
- (id)_stringForDismissalReason:(unsigned long long)arg1;	// IMP=0x000000000004a4e6
- (void)bulletinService:(id)arg1 didDismissBulletin:(id)arg2 withReason:(unsigned long long)arg3;	// IMP=0x000000000004a100
- (void)_post:(id)arg1 title:(id)arg2 body:(id)arg3 options:(id)arg4;	// IMP=0x0000000000049851
- (unsigned long long)_authOptions;	// IMP=0x0000000000049846
- (id)_notificationCenter;	// IMP=0x00000000000495cc
- (void)getNotificationSettings:(CDUnknownBlockType)arg1;	// IMP=0x0000000000049502
- (_Bool)isCategoryEnabledByUser:(long long)arg1;	// IMP=0x0000000000049482
- (void)setBadgeString:(id)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;	// IMP=0x00000000000493fc
- (void)setBadgeNumber:(id)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;	// IMP=0x0000000000049376
- (void)post:(id)arg1 title:(id)arg2 body:(id)arg3 options:(id)arg4;	// IMP=0x0000000000048f80
- (id)init;	// IMP=0x0000000000048f12

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

