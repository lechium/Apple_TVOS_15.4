//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKitCore/_UIInputSwitcherSplitMenu-Protocol.h>

@class NSArray;

__attribute__((visibility("hidden")))
@interface UIKeyboardSplitControlMenu <_UIInputSwitcherSplitMenu>
{
    struct CGSize m_preferredSize;	// 256 = 0x100
    NSArray *_items;	// 272 = 0x110
    CDUnknownBlockType _finishSplitTransitionBlock;	// 280 = 0x118
}

+ (id)activeInstance;	// IMP=0x00000000007fadf5
+ (id)sharedInstance;	// IMP=0x00000000007fad85
@property(copy, nonatomic) CDUnknownBlockType finishSplitTransitionBlock; // @synthesize finishSplitTransitionBlock=_finishSplitTransitionBlock;
- (void)didFinishSplitTransition;	// IMP=0x00000000007fb30f
- (void)didSelectItemAtIndex:(unsigned long long)arg1;	// IMP=0x00000000007fb2a8
- (void)setSplitAndUndocked:(_Bool)arg1;	// IMP=0x00000000007fb1c5
- (_Bool)usesDeviceLanguageForItemAtIndex:(unsigned long long)arg1;	// IMP=0x00000000007fb1bd
- (id)titleForItemAtIndex:(unsigned long long)arg1;	// IMP=0x00000000007fb177
- (int)visibleItemForIndex:(unsigned long long)arg1;	// IMP=0x00000000007fb018
- (unsigned long long)defaultSelectedIndex;	// IMP=0x00000000007fb008
- (struct CGSize)preferredSize;	// IMP=0x00000000007fafb6
- (unsigned long long)numberOfItems;	// IMP=0x00000000007faf9a
- (void)actionForItem:(id)arg1;	// IMP=0x00000000007fae1e
- (void)dealloc;	// IMP=0x00000000007fad2d
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x00000000007faa1f

@end

