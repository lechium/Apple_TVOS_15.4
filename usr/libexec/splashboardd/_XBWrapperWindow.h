//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIWindow.h>

@class XBDisplayEdgeInsetsWrapper;

@interface _XBWrapperWindow : UIWindow
{
    XBDisplayEdgeInsetsWrapper *_customSafeAreaInsets;	// 8 = 0x8
}

+ (_Bool)_isSecure;	// IMP=0x0040000000001725
- (void).cxx_destruct;	// IMP=0x0020000000001752
@property(retain, nonatomic, getter=_customSafeAreaInsets, setter=_setCustomSafeAreaInsets:) XBDisplayEdgeInsetsWrapper *_customSafeAreaInsets; // @synthesize _customSafeAreaInsets;
- (struct UIEdgeInsets)safeAreaInsets;	// IMP=0x00100000000016c7
- (long long)_orientationForRootTransform;	// IMP=0x00100000000016bc
- (long long)_orientationForViewTransform;	// IMP=0x00100000000016b1
- (_Bool)_shouldResizeWithScene;	// IMP=0x00100000000016a9
- (_Bool)_alwaysGetsContexts;	// IMP=0x00100000000016a1
- (_Bool)_isWindowServerHostingManaged;	// IMP=0x0010000000001699
- (_Bool)_shouldUseRemoteContext;	// IMP=0x0010000000001691

@end

