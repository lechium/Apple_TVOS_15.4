//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIView.h>

@class UISearchBar;

__attribute__((visibility("hidden")))
@interface _TVSearchBarWrapper : UIView
{
    UISearchBar *_searchBar;	// 8 = 0x8
    _Bool _enabled;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x00000000000dacc1
@property(nonatomic, getter=isEnabled) _Bool enabled; // @synthesize enabled=_enabled;
@property(retain, nonatomic) UISearchBar *searchBar; // @synthesize searchBar=_searchBar;
- (_Bool)_shouldAnimatePropertyWithKey:(id)arg1;	// IMP=0x00000000000dac71
- (_Bool)canBecomeFocused;	// IMP=0x00000000000dac5f

@end
