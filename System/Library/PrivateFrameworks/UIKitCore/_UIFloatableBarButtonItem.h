//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class UIView;

__attribute__((visibility("hidden")))
@interface _UIFloatableBarButtonItem
{
    _Bool _floatable;	// 336 = 0x150
    _Bool _floating;	// 337 = 0x151
    UIView *_configuredFloatableView;	// 344 = 0x158
    UIView *_referenceView;	// 352 = 0x160
}

- (void).cxx_destruct;	// IMP=0x000000000012fae1
@property(retain, nonatomic, setter=_setReferenceView:) UIView *_referenceView; // @synthesize _referenceView;
@property(retain, nonatomic, setter=_setConfiguredFloatableView:) UIView *_configuredFloatableView; // @synthesize _configuredFloatableView;
@property(nonatomic, getter=_isFloating, setter=_setFloating:) _Bool _floating; // @synthesize _floating;
@property(nonatomic, getter=_isFloatable, setter=_setFloatable:) _Bool _floatable; // @synthesize _floatable;
- (id)description;	// IMP=0x000000000012f9ac

@end

