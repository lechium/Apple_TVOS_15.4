//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <VoiceOverServices/NSSecureCoding-Protocol.h>

@class NSMutableSet;
@protocol VOSCommandProfileDelegate;

@interface VOSCommandProfile : NSObject <NSSecureCoding>
{
    NSMutableSet *_modes;	// 8 = 0x8
    id <VOSCommandProfileDelegate> _delegate;	// 16 = 0x10
}

+ (id)_profileKeyChordsFromDictionaryValue:(id)arg1;	// IMP=0x000000000002ab68
+ (void)_addSecondaryCommandsToCommand:(id)arg1 fromCommandProperties:(id)arg2 overlayProperties:(id)arg3;	// IMP=0x000000000002a898
+ (void)_addQuickNavShortcutsToCommand:(id)arg1 fromCommandProperties:(id)arg2 overlayProperties:(id)arg3;	// IMP=0x000000000002a67b
+ (void)_addKeyboardShortcutsToCommand:(id)arg1 fromCommandProperties:(id)arg2 overlayProperties:(id)arg3;	// IMP=0x000000000002a45e
+ (void)_addGesturesToCommand:(id)arg1 fromCommandProperties:(id)arg2 overlayProperties:(id)arg3;	// IMP=0x000000000002a190
+ (id)_parseProfileProperties:(id)arg1 overlayProperties:(id)arg2;	// IMP=0x0000000000029aa4
+ (_Bool)_overlay:(id)arg1 shouldIncludeItem:(id)arg2;	// IMP=0x0000000000029a34
+ (_Bool)supportsSecureCoding;	// IMP=0x0000000000025b34
- (void).cxx_destruct;	// IMP=0x000000000002ae01
@property(nonatomic) __weak id <VOSCommandProfileDelegate> delegate; // @synthesize delegate=_delegate;
- (id)_profileCommandForCommand:(id)arg1 inMode:(id)arg2;	// IMP=0x000000000002953c
- (id)_profileModeForScreenreaderMode:(id)arg1;	// IMP=0x0000000000029377
- (id)_profileModeForResolver:(id)arg1;	// IMP=0x0000000000029315
- (id)validateCanRemoveKeyChord:(id)arg1 fromCommand:(id)arg2 withResolver:(id)arg3;	// IMP=0x00000000000292fc
- (id)validateCanAddKeyChord:(id)arg1 toCommand:(id)arg2 withResolver:(id)arg3;	// IMP=0x0000000000029213
- (id)validateCanRemoveGesture:(id)arg1 fromCommand:(id)arg2 withResolver:(id)arg3;	// IMP=0x00000000000291fa
- (id)validateCanAddGesture:(id)arg1 toCommand:(id)arg2 withResolver:(id)arg3;	// IMP=0x00000000000290c9
- (id)removeKeyChord:(id)arg1 fromCommand:(id)arg2 withResolver:(id)arg3;	// IMP=0x0000000000028eee
- (id)addKeyChord:(id)arg1 toCommand:(id)arg2 withResolver:(id)arg3;	// IMP=0x0000000000028d75
- (id)removeGesture:(id)arg1 fromCommand:(id)arg2 withResolver:(id)arg3;	// IMP=0x0000000000028b36
- (id)addGesture:(id)arg1 toCommand:(id)arg2 withResolver:(id)arg3;	// IMP=0x0000000000028925
- (_Bool)commandHasModifiedBindingsWhenZoomEnabled:(id)arg1 withResolver:(id)arg2;	// IMP=0x00000000000288b0
- (unsigned long long)availabilityForCommand:(id)arg1 withResolver:(id)arg2;	// IMP=0x0000000000028607
- (unsigned long long)availabilityForShortcut:(id)arg1 withResolver:(id)arg2;	// IMP=0x0000000000028510
- (unsigned long long)availabilityForGesture:(id)arg1 withResolver:(id)arg2;	// IMP=0x0000000000027d85
- (_Bool)commandHasAnyBindings:(id)arg1 withResolver:(id)arg2;	// IMP=0x0000000000027c35
- (id)shortcutBindingsForCommand:(id)arg1 withResolver:(id)arg2;	// IMP=0x000000000002788e
- (id)gestureBindingsForCommand:(id)arg1 withResolver:(id)arg2;	// IMP=0x000000000002751d
- (id)userPresentableAllShortcutBindingsWithResolver:(id)arg1;	// IMP=0x00000000000271f3
- (id)allShortcutBindingsWithResolver:(id)arg1;	// IMP=0x0000000000026e2e
- (id)allCommandsWithResolver:(id)arg1;	// IMP=0x0000000000026b63
- (id)_resolvedSecondaryCommandForProfileCommand:(id)arg1 resolver:(id)arg2;	// IMP=0x00000000000267df
- (id)commandForKeyChord:(id)arg1 withResolver:(id)arg2;	// IMP=0x00000000000262e1
- (id)commandForTouchGesture:(id)arg1 withResolver:(id)arg2;	// IMP=0x0000000000025c4e
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000000025c2b
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000025b3c
- (id)debugDescription;	// IMP=0x0000000000025445
- (id)_initWithModes:(id)arg1;	// IMP=0x00000000000253da
- (id)initWithProfileProperties:(id)arg1 overlayProperties:(id)arg2;	// IMP=0x0000000000025380

@end

