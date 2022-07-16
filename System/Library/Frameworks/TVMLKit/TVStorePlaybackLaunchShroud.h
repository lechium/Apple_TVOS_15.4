//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class UIWindow;

@interface TVStorePlaybackLaunchShroud : NSObject
{
    _Bool _hidden;	// 8 = 0x8
    UIWindow *_window;	// 16 = 0x10
}

+ (id)sharedShroud;	// IMP=0x00000000000b3cd7
- (void).cxx_destruct;	// IMP=0x00000000000b4382
@property(retain, nonatomic) UIWindow *window; // @synthesize window=_window;
@property(nonatomic, getter=isHidden) _Bool hidden; // @synthesize hidden=_hidden;
- (void)setHidden:(_Bool)arg1 animated:(_Bool)arg2 withCompletionHandler:(CDUnknownBlockType)arg3;	// IMP=0x00000000000b42fb
- (void)fadeOut;	// IMP=0x00000000000b42c5
- (void)_hideWithFadeAnimation:(_Bool)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;	// IMP=0x00000000000b40e1
- (void)_showWithFadeAnimation:(_Bool)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;	// IMP=0x00000000000b3efa
- (id)init;	// IMP=0x00000000000b3d2c

@end

