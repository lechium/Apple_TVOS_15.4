//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class UITabBarButton, UITabBarItem;

__attribute__((visibility("hidden")))
@interface UITabBarItemProxy : NSObject
{
    UITabBarItem *_item;	// 8 = 0x8
    UITabBarButton *_view;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x00000000001dd0df
- (id)view;	// IMP=0x00000000001dd0d1
- (id)item;	// IMP=0x00000000001dd0c3
- (void)setSelected:(_Bool)arg1;	// IMP=0x00000000001dd0ad
- (id)initWithItem:(id)arg1 inTabBar:(id)arg2;	// IMP=0x00000000001dcff2

@end

