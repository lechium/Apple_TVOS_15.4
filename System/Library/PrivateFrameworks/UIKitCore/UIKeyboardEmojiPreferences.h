//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class EMFEmojiPreferencesClient, NSArray, NSDictionary;
@protocol OS_dispatch_queue;

@interface UIKeyboardEmojiPreferences : NSObject
{
    EMFEmojiPreferencesClient *_preferencesClient;	// 8 = 0x8
    NSObject<OS_dispatch_queue> *_clientDispatchQueue;	// 16 = 0x10
    NSArray *_localRecentsWithClient;	// 24 = 0x18
    NSArray *_localRecentsWithoutClient;	// 32 = 0x20
    _Bool _deviceWasLockedWhenKeyboardWasShown;	// 40 = 0x28
    _Bool _hasCheckedMemojiPreference;	// 41 = 0x29
    _Bool _supportsMemoji;	// 42 = 0x2a
}

+ (id)sharedInstance;	// IMP=0x0000000000926d46
@property(nonatomic) _Bool supportsMemoji; // @synthesize supportsMemoji=_supportsMemoji;
@property(nonatomic) _Bool hasCheckedMemojiPreference; // @synthesize hasCheckedMemojiPreference=_hasCheckedMemojiPreference;
- (void)_updateCachedDeviceLockState;	// IMP=0x0000000000928299
- (void)_usageForEmoji:(id)arg1 language:(id)arg2 mode:(id)arg3 typingName:(id)arg4;	// IMP=0x00000000009281c6
- (void)updateSkinToneBaseKey:(id)arg1 variantUsed:(id)arg2;	// IMP=0x00000000009281c0
- (id)typingNameForEmoji:(id)arg1 language:(id)arg2;	// IMP=0x0000000000928084
- (void)emojiPredicted:(id)arg1 typingName:(id)arg2 language:(id)arg3;	// IMP=0x0000000000927ecd
- (void)emojiUsed:(id)arg1 language:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x0000000000927c4f
- (void)emojiUsed:(id)arg1 language:(id)arg2;	// IMP=0x0000000000927c3a
- (void)emojiUsed:(id)arg1;	// IMP=0x0000000000927c26
@property(nonatomic) long long selectedCategoryType;
- (id)lastUsedVariantEmojiForEmojiString:(id)arg1;	// IMP=0x0000000000927b4d
- (_Bool)hasLastUsedVariantForEmojiString:(id)arg1;	// IMP=0x0000000000927af3
@property(retain, nonatomic) NSDictionary *skinToneBaseKeyPreferences;
- (id)emojiWithoutDuplicateRecents:(id)arg1;	// IMP=0x00000000009278de
- (_Bool)deviceSupportsMemoji;	// IMP=0x0000000000927883
- (_Bool)memojiSettingEnabled;	// IMP=0x00000000009277f6
- (_Bool)shouldShowRecents;	// IMP=0x00000000009277e9
- (id)recentEmojiAtIndex:(long long)arg1 size:(unsigned long long *)arg2;	// IMP=0x00000000009276d4
- (void)refreshLocalRecents;	// IMP=0x0000000000927633
- (void)clearLocalRecentsCache;	// IMP=0x00000000009275fb
@property(retain, nonatomic) NSArray *recents;
- (long long)emojiCategoryDefaultsIndex:(id)arg1;	// IMP=0x0000000000927314
- (void)setEmojiCategoryDefaultsIndex:(long long)arg1 forCategory:(id)arg2;	// IMP=0x00000000009272a5
@property(nonatomic) unsigned long long maximumRecentsCount;
- (void)didDisplaySkinToneHelp;	// IMP=0x000000000092721e
@property(readonly, nonatomic) _Bool hasDisplayedSkinToneHelp;
@property(readonly, nonatomic) EMFEmojiPreferencesClient *preferencesClient;
- (void)handleRead:(id)arg1;	// IMP=0x000000000092718b
- (void)handleWrite:(id)arg1;	// IMP=0x00000000009270f2
- (void)handleSuspend:(id)arg1;	// IMP=0x00000000009270e0
- (void)clearEmojiKeyboardPreferenceClient;	// IMP=0x00000000009270a1
- (void)dealloc;	// IMP=0x0000000000926ffb
- (id)init;	// IMP=0x0000000000926db7
- (void)writeEmojiDefaults;	// IMP=0x0000000000926da1
- (void)readEmojiDefaults;	// IMP=0x0000000000926d8b

@end
