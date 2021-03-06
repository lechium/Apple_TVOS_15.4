//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface GKNotificationBanner : NSObject
{
}

+ (id)bannerViewWithTitle:(id)arg1 message:(id)arg2 actionMessage:(id)arg3;	// IMP=0x000000000007de57
+ (void)showBannerWithTitle:(id)arg1 player:(id)arg2 message:(id)arg3 touchHandler:(CDUnknownBlockType)arg4;	// IMP=0x000000000007dd93
+ (void)showBannerWithTitle:(id)arg1 player:(id)arg2 message:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;	// IMP=0x000000000007dccf
+ (void)showBannerWithTitle:(id)arg1 image:(id)arg2 message:(id)arg3 touchHandler:(CDUnknownBlockType)arg4;	// IMP=0x000000000007dc0a
+ (void)showBannerWithTitle:(id)arg1 image:(id)arg2 message:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;	// IMP=0x000000000007db45
+ (void)showBannerWithTitle:(id)arg1 message:(id)arg2 duration:(double)arg3 completionHandler:(CDUnknownBlockType)arg4;	// IMP=0x000000000007da7c
+ (void)showBannerWithTitle:(id)arg1 message:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x000000000007d9cb
+ (void)showWelcomeBannerWithTitle:(id)arg1 message:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x000000000007d821
+ (id)bannerViewWithTitle:(id)arg1 image:(id)arg2 player:(id)arg3 message:(id)arg4 actionMessage:(id)arg5 shortBanner:(_Bool)arg6;	// IMP=0x000000000007d079
+ (id)bannerViewWithTitle:(id)arg1 image:(id)arg2 player:(id)arg3 message:(id)arg4 actionMessage:(id)arg5;	// IMP=0x000000000007cfa4
+ (id)bannerViewWithTitle:(id)arg1 image:(id)arg2 player:(id)arg3 message:(id)arg4;	// IMP=0x000000000007ceea

@end

