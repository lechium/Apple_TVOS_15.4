//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <SwiftUI/UIFocusItem-Protocol.h>
#import <SwiftUI/_UIFocusItemPrivate-Protocol.h>
#import <SwiftUI/_UIFocusRegionContainer-Protocol.h>

@class MISSING_TYPE, NSArray;
@protocol UIFocusEnvironment, UIFocusItemContainer;

@interface _TtC7SwiftUIP33_B6A2D4E72E5722B5103497ADB7778B5F28UIFocusableViewResponderItem <UIFocusItem, _UIFocusRegionContainer, _UIFocusItemPrivate>
{
    MISSING_TYPE *base;	// 8 = 0x8
    MISSING_TYPE *host;	// 16 = 0x10
    MISSING_TYPE *contentPath;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x000000000097264d
- (id)init;	// IMP=0x0000000000972609
@property(nonatomic, readonly) _Bool _wantsFocusRing;
- (id)_regionForFocusedItem:(id)arg1 inCoordinateSpace:(id)arg2;	// IMP=0x00000000009724d4
- (void)_searchForFocusRegionsInContext:(id)arg1;	// IMP=0x00000000009723ad
- (id)_preferredFocusRegionCoordinateSpace;	// IMP=0x0000000000972227
- (void)didUpdateFocusInContext:(id)arg1 withAnimationCoordinator:(id)arg2;	// IMP=0x0000000000972172
- (_Bool)shouldUpdateFocusInContext:(id)arg1;	// IMP=0x00000000009720b5
- (void)updateFocusIfNeeded;	// IMP=0x0000000000972088
- (void)setNeedsFocusUpdate;	// IMP=0x0000000000972021
@property(nonatomic, readonly) id <UIFocusItemContainer> focusItemContainer;
@property(nonatomic, readonly) NSArray *preferredFocusEnvironments;
@property(nonatomic, readonly) id <UIFocusEnvironment> parentFocusEnvironment;
@property(nonatomic, readonly) _Bool canBecomeFocused;
@property(nonatomic, readonly) struct CGRect frame;

@end

