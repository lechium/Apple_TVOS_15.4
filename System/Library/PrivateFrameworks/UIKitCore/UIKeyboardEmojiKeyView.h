//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKitCore/UIKeyboardEmojiCategoryUpdate-Protocol.h>

@class NSString, UIKeyboardEmojiKeyDisplayController;
@protocol UIKeyboardEmojiCategoryUpdateDelegate;

__attribute__((visibility("hidden")))
@interface UIKeyboardEmojiKeyView <UIKeyboardEmojiCategoryUpdate>
{
    UIKeyboardEmojiKeyDisplayController<UIKeyboardEmojiCategoryUpdateDelegate> *emojiKeyManager;	// 80 = 0x50
}

@property(nonatomic) UIKeyboardEmojiKeyDisplayController<UIKeyboardEmojiCategoryUpdateDelegate> *emojiKeyManager; // @synthesize emojiKeyManager;
- (long long)updateToCategoryWithOffsetPercentage:(double)arg1;	// IMP=0x0000000000925b7f
- (void)updateToCategory:(long long)arg1;	// IMP=0x0000000000925b79

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

