//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <UIKitCore/_UISceneComponentProviding-Protocol.h>

@class NSString, UIScene, UIWindowScene, _UIBannerContainerView, _UIBannerWindow;

@interface _UIBannerManager : NSObject <_UISceneComponentProviding>
{
    UIWindowScene *_windowScene;	// 8 = 0x8
    _UIBannerWindow *_window;	// 16 = 0x10
    _UIBannerContainerView *_containerView;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x0000000000c0009b
@property(retain, nonatomic) _UIBannerContainerView *containerView; // @synthesize containerView=_containerView;
@property(retain, nonatomic) _UIBannerWindow *window; // @synthesize window=_window;
@property(retain, nonatomic) UIWindowScene *windowScene; // @synthesize windowScene=_windowScene;
- (id)bannerWithContent:(id)arg1;	// IMP=0x0000000000bfffc8
- (void)_createWindowIfNeeded;	// IMP=0x0000000000bffe8a
@property(nonatomic, getter=_scene, setter=_setScene:) __weak UIScene *_scene;
- (id)initWithScene:(id)arg1;	// IMP=0x0000000000bffd49

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

