//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@protocol TIPreferencesControllerActions;

@interface UIKeyboardPreferencesController : NSObject
{
}

+ (id)sharedPreferencesController;	// IMP=0x00000000007f15cb
- (_Bool)defaultGlobeAsEmojiKeySetting;	// IMP=0x00000000007f2db0
- (_Bool)useHardwareGlobeKeyAsEmojiKey;	// IMP=0x00000000007f2d29
- (_Bool)isPasswordAutoFillAllowed;	// IMP=0x00000000007f2cde
- (_Bool)respondsToSelector:(SEL)arg1;	// IMP=0x00000000007f2c80
- (id)methodSignatureForSelector:(SEL)arg1;	// IMP=0x00000000007f2bf5
- (void)forwardInvocation:(id)arg1;	// IMP=0x00000000007f2b52
- (_Bool)isPreferenceKeyLockedDown:(id)arg1;	// IMP=0x00000000007f2b1a
- (void)setLastUsedDictationLanguages:(id)arg1;	// IMP=0x00000000007f2aa5
- (void)setEnabledDictationLanguages:(id)arg1;	// IMP=0x00000000007f2a30
- (void)performedFirstReachableKeyboardInteraction;	// IMP=0x00000000007f29d0
- (_Bool)isFirstReachableKeyboardInteraction;	// IMP=0x00000000007f29b7
@property long long compactAssistantBarPersistentLocation;
@property long long handBias;
@property _Bool enableProKeyboard;
- (_Bool)spaceConfirmationEnabled;	// IMP=0x00000000007f26bc
- (double)rivenSizeFactor:(double)arg1;	// IMP=0x00000000007f25e3
- (_Bool)allEnabledInputModesAreValid;	// IMP=0x00000000007f25b1
- (void)setLanguageAwareInputModeLastUsed:(id)arg1;	// IMP=0x00000000007f1ce9
- (void)saveInputModes:(id)arg1;	// IMP=0x00000000007f1c69
- (void)setValue:(id)arg1 forPreferenceKey:(id)arg2;	// IMP=0x00000000007f1c22
- (_Bool)boolForPreferenceKey:(id)arg1;	// IMP=0x00000000007f1bea
- (id)valueForPreferenceKey:(id)arg1;	// IMP=0x00000000007f1bb2
- (void)setValue:(id)arg1 forKey:(int)arg2;	// IMP=0x00000000007f1b6b
- (void)touchSynchronizePreferencesTimer;	// IMP=0x00000000007f1b39
- (void)synchronizePreferences;	// IMP=0x00000000007f1b07
- (_Bool)boolForKey:(int)arg1;	// IMP=0x00000000007f1ad1
- (id)valueForKey:(int)arg1;	// IMP=0x00000000007f1a9b
- (void)preferencesControllerChanged:(id)arg1;	// IMP=0x00000000007f19ea
- (void)_configurePreferences;	// IMP=0x00000000007f1725
- (void)dealloc;	// IMP=0x00000000007f16c8
- (id)init;	// IMP=0x00000000007f1619
@property(readonly, nonatomic) UIKeyboardPreferencesController<TIPreferencesControllerActions> *preferencesActions;

@end

