//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSString;

@interface UIKeyboardEmojiCategory : NSObject
{
    long long _categoryType;	// 8 = 0x8
    NSArray *_emoji;	// 16 = 0x10
    long long _lastVisibleFirstEmojiIndex;	// 24 = 0x18
    NSString *_displaySymbol;	// 32 = 0x20
}

+ (id)fallbackDisplayName:(long long)arg1;	// IMP=0x0000000000917297
+ (id)displayName:(long long)arg1;	// IMP=0x0000000000917254
+ (id)localizedStringForKey:(id)arg1;	// IMP=0x000000000091715f
+ (_Bool)isRTLMode;	// IMP=0x00000000009170d9
+ (id)categoryForType:(long long)arg1;	// IMP=0x0000000000916d98
+ (long long)emojiCategoryTypeForCategoryString:(id)arg1;	// IMP=0x0000000000916c59
+ (id)emojiCategoryStringForCategoryType:(long long)arg1;	// IMP=0x000000000091617a
+ (id)loadPrecomputedEmojiFlagCategory;	// IMP=0x0000000000916172
+ (id)emojiRecentsFromPreferences;	// IMP=0x000000000091616a
+ (unsigned long long)hasVariantsForEmoji:(id)arg1;	// IMP=0x0000000000916162
+ (id)professionSkinToneEmojiBaseKey:(id)arg1;	// IMP=0x0000000000915f9a
+ (id)categoriesByType;	// IMP=0x0000000000915d25
+ (id)categories;	// IMP=0x0000000000915c6d
+ (long long)numberOfCategories;	// IMP=0x0000000000915c62
+ (unsigned long long)categoryIndexForCategoryType:(long long)arg1;	// IMP=0x0000000000915bff
+ (long long)categoryTypeForCategoryIndex:(unsigned long long)arg1;	// IMP=0x0000000000915b7a
+ (id)allowedCategoryIndexes;	// IMP=0x0000000000915b6d
+ (id)enabledCategoryIndexes;	// IMP=0x0000000000915b1c
@property(readonly, getter=displaySymbol) NSString *displaySymbol; // @synthesize displaySymbol=_displaySymbol;
@property(nonatomic) long long lastVisibleFirstEmojiIndex; // @synthesize lastVisibleFirstEmojiIndex=_lastVisibleFirstEmojiIndex;
@property(retain) NSArray *emoji; // @synthesize emoji=_emoji;
@property long long categoryType; // @synthesize categoryType=_categoryType;
@property(readonly, nonatomic, getter=name) NSString *name;
- (void)dealloc;	// IMP=0x0000000000917117
- (void)releaseCategories;	// IMP=0x0000000000915f68

@end

