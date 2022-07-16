//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@protocol WLKNotificationCenterDelegate, WLKNotificationsImpl;

@interface WLKNotificationCenter : NSObject
{
    id <WLKNotificationsImpl> _impl;	// 8 = 0x8
    id <WLKNotificationCenterDelegate> _delegate;	// 16 = 0x10
}

+ (id)defaultCenter;	// IMP=0x0000000000026925
- (void).cxx_destruct;	// IMP=0x0000000000026e51
@property(nonatomic) __weak id <WLKNotificationCenterDelegate> delegate; // @synthesize delegate=_delegate;
- (_Bool)isCategoryEnabledByUser:(long long)arg1;	// IMP=0x0000000000026e0f
- (void)setBadgeString:(id)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;	// IMP=0x0000000000026d81
- (void)setBadgeNumber:(id)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;	// IMP=0x0000000000026d0e
- (void)post:(id)arg1 title:(id)arg2 body:(id)arg3 options:(id)arg4;	// IMP=0x00000000000269d0
- (id)init;	// IMP=0x000000000002697a

@end
