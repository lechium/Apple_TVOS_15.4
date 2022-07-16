//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;

@interface VUIDocumentUIConfiguration : NSObject
{
    _Bool _supportsInAppBanner;	// 8 = 0x8
    _Bool _animated;	// 9 = 0x9
    _Bool _navigationBarHidden;	// 10 = 0xa
    _Bool _navigationBarAdjustedToSizeClass;	// 11 = 0xb
    _Bool _isInteractivePopGestureAllowed;	// 12 = 0xc
    _Bool _supportsDeclarativeUI;	// 13 = 0xd
    long long _type;	// 16 = 0x10
    NSString *_viewControllerIdentifier;	// 24 = 0x18
    NSString *_viewControllerDocumentIdentifier;	// 32 = 0x20
}

+ (long long)_presentationTypeFromString:(id)arg1;	// IMP=0x00000000001a25f0
+ (struct CGSize)_preferredSizeFromConfig:(id)arg1;	// IMP=0x00000000001a2536
+ (id)uiConfigurationWithDict:(id)arg1;	// IMP=0x00000000001a22fd
- (void).cxx_destruct;	// IMP=0x00000000001a27a2
@property(nonatomic) _Bool supportsDeclarativeUI; // @synthesize supportsDeclarativeUI=_supportsDeclarativeUI;
@property(nonatomic, getter=isInteractivePopGestureAllowed) _Bool isInteractivePopGestureAllowed; // @synthesize isInteractivePopGestureAllowed=_isInteractivePopGestureAllowed;
@property(nonatomic, getter=isNavigationBarAdjustedToSizeClass) _Bool navigationBarAdjustedToSizeClass; // @synthesize navigationBarAdjustedToSizeClass=_navigationBarAdjustedToSizeClass;
@property(nonatomic, getter=isNavigationBarHidden) _Bool navigationBarHidden; // @synthesize navigationBarHidden=_navigationBarHidden;
@property(nonatomic, getter=isAnimated) _Bool animated; // @synthesize animated=_animated;
@property(nonatomic) _Bool supportsInAppBanner; // @synthesize supportsInAppBanner=_supportsInAppBanner;
@property(copy, nonatomic) NSString *viewControllerDocumentIdentifier; // @synthesize viewControllerDocumentIdentifier=_viewControllerDocumentIdentifier;
@property(copy, nonatomic) NSString *viewControllerIdentifier; // @synthesize viewControllerIdentifier=_viewControllerIdentifier;
@property(nonatomic) long long type; // @synthesize type=_type;

@end

