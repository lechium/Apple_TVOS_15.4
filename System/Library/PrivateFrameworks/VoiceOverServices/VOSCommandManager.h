//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <VoiceOverServices/VOSCommandProfileDelegate-Protocol.h>

@class NSString, VOSCommandProfile;
@protocol OS_dispatch_queue;

@interface VOSCommandManager : NSObject <VOSCommandProfileDelegate>
{
    NSObject<OS_dispatch_queue> *_queue;	// 8 = 0x8
    VOSCommandProfile *_activeProfile;	// 16 = 0x10
    NSString *_siriShortCutToken;	// 24 = 0x18
    _Bool _activeProfileIsUserProfile;	// 32 = 0x20
    _Bool _loadShortcuts;	// 33 = 0x21
}

- (void).cxx_destruct;	// IMP=0x000000000000bdae
@property(readonly, nonatomic) VOSCommandProfile *activeProfile; // @synthesize activeProfile=_activeProfile;
@property(nonatomic) _Bool loadShortcuts; // @synthesize loadShortcuts=_loadShortcuts;
@property(nonatomic) _Bool activeProfileIsUserProfile; // @synthesize activeProfileIsUserProfile=_activeProfileIsUserProfile;
- (void)_loadSystemProfile;	// IMP=0x000000000000bd38
- (id)systemProfile;	// IMP=0x000000000000bb9c
- (_Bool)commandHasModifiedBindingsWhenZoomEnabled:(id)arg1 withResolver:(id)arg2;	// IMP=0x000000000000ba66
- (unsigned long long)availabilityForCommand:(id)arg1 withResolver:(id)arg2;	// IMP=0x000000000000b92f
- (unsigned long long)availabilityForShortcut:(id)arg1 withResolver:(id)arg2;	// IMP=0x000000000000b7f8
- (unsigned long long)availabilityForGesture:(id)arg1 withResolver:(id)arg2;	// IMP=0x000000000000b6c1
- (_Bool)commandHasAnyBindings:(id)arg1 withResolver:(id)arg2;	// IMP=0x000000000000b58b
- (id)shortcutBindingsForCommand:(id)arg1 withResolver:(id)arg2;	// IMP=0x000000000000b418
- (id)gestureBindingsForCommand:(id)arg1 withResolver:(id)arg2;	// IMP=0x000000000000b2a5
- (id)userPresentableAllShortcutBindingsWithResolver:(id)arg1;	// IMP=0x000000000000b164
- (id)allShortcutBindingsWithResolver:(id)arg1;	// IMP=0x000000000000b023
- (id)allCommandsWithResolver:(id)arg1;	// IMP=0x000000000000ae6b
- (id)commandForKeyChord:(id)arg1 withResolver:(id)arg2;	// IMP=0x000000000000ac34
- (id)commandForTouchGesture:(id)arg1 withResolver:(id)arg2;	// IMP=0x000000000000a88a
- (id)validateCanRemoveKeyChord:(id)arg1 fromCommand:(id)arg2 withResolver:(id)arg3;	// IMP=0x000000000000a6e6
- (id)validateCanAddKeyChord:(id)arg1 toCommand:(id)arg2 withResolver:(id)arg3;	// IMP=0x000000000000a542
- (id)validateCanRemoveGesture:(id)arg1 fromCommand:(id)arg2 withResolver:(id)arg3;	// IMP=0x000000000000a39e
- (id)validateCanAddGesture:(id)arg1 toCommand:(id)arg2 withResolver:(id)arg3;	// IMP=0x000000000000a1fa
- (id)removeKeyChord:(id)arg1 fromCommand:(id)arg2 withResolver:(id)arg3;	// IMP=0x000000000000a056
- (id)addKeyChord:(id)arg1 toCommand:(id)arg2 withResolver:(id)arg3;	// IMP=0x0000000000009eb2
- (id)removeGesture:(id)arg1 fromCommand:(id)arg2 withResolver:(id)arg3;	// IMP=0x0000000000009d0e
- (id)addGesture:(id)arg1 toCommand:(id)arg2 withResolver:(id)arg3;	// IMP=0x0000000000009ad7
- (void)batchUpdateActiveProfile:(CDUnknownBlockType)arg1 saveIfSuccessful:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x0000000000009a5a
- (void)saveAsUserProfile;	// IMP=0x00000000000097a7
- (void)restoreDefaultProfile;	// IMP=0x0000000000009705
- (_Bool)_validateUserProfileDiscrepancies:(id)arg1;	// IMP=0x000000000000924f
- (void)dealloc;	// IMP=0x0000000000009220
- (void)reloadPreferringUserProfile;	// IMP=0x0000000000009003
- (void)reloadWithSystemProfile;	// IMP=0x0000000000008fa2
@property(readonly, copy) NSString *debugDescription;
- (void)_commonInit;	// IMP=0x0000000000008ef3
- (void)_commonUserProfileInit;	// IMP=0x0000000000008e3c
- (id)init;	// IMP=0x0000000000008e2a
- (id)initPreferringUserProfile;	// IMP=0x0000000000008db7
- (id)initPreferringUserProfileWithoutShortcuts;	// IMP=0x0000000000008d47
- (id)initWithSystemProfile;	// IMP=0x0000000000008cd4

// Remaining properties
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

