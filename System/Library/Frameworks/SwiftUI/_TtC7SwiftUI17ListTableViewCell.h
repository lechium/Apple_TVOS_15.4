//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UITableViewCell.h>

@class MISSING_TYPE;

__attribute__((visibility("hidden")))
@interface _TtC7SwiftUI17ListTableViewCell : UITableViewCell
{
    MISSING_TYPE *delegate;	// 8 = 0x8
    MISSING_TYPE *cellConfiguration;	// 24 = 0x18
    MISSING_TYPE *host;	// 112 = 0x70
    MISSING_TYPE *selectionBehavior;	// 120 = 0x78
    MISSING_TYPE *viewListID;	// 160 = 0xa0
    MISSING_TYPE *focusItem;	// 208 = 0xd0
}

- (void).cxx_destruct;	// IMP=0x000000000023cae6
- (id)initWithReuseIdentifier:(id)arg1;	// IMP=0x000000000023ca8c
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000023c867
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;	// IMP=0x000000000023c65a
@property(nonatomic) _Bool isAccessibilityElement;
- (void)_updateViewConfigurationsWithState:(unsigned long long)arg1;	// IMP=0x000000000023c125
- (void)didUpdateFocusInContext:(id)arg1 withAnimationCoordinator:(id)arg2;	// IMP=0x000000000023be5a
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;	// IMP=0x000000000023bda5
- (void)prepareForReuse;	// IMP=0x000000000023bcd7
@property(nonatomic) long long focusStyle;

@end

