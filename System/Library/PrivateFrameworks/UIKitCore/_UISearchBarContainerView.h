//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class UIView;

__attribute__((visibility("hidden")))
@interface _UISearchBarContainerView
{
    UIView *_subview;	// 112 = 0x70
    int _resizingMask;	// 120 = 0x78
    _Bool _shouldSendContainerSafeAreaInsetsDidChange;	// 124 = 0x7c
}

- (void).cxx_destruct;	// IMP=0x00000000001b8984
- (void)layoutSubviews;	// IMP=0x00000000001b8972
- (void)setBounds:(struct CGRect)arg1;	// IMP=0x00000000001b8920
- (void)setFrame:(struct CGRect)arg1;	// IMP=0x00000000001b88ce
- (void)enforceSubviewAtBottomIfNecessary;	// IMP=0x00000000001b87f1
- (void)willRemoveSubview:(id)arg1;	// IMP=0x00000000001b87df
- (void)_didRemoveSubview:(id)arg1;	// IMP=0x00000000001b87cd
- (void)_uncontainerSubview:(id)arg1;	// IMP=0x00000000001b877e
- (void)_addSubview:(id)arg1 positioned:(long long)arg2 relativeTo:(id)arg3;	// IMP=0x00000000001b86b0
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;	// IMP=0x00000000001b864a
- (void)safeAreaInsetsDidChange;	// IMP=0x00000000001b861b

@end

