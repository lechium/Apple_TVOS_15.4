//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class AXEventRepresentation, NSDictionary, NSLock, NSString, SCRCTargetSelectorTimer, SCRCThread, VOSCommandManager, VOTKeyInfo;

@interface VOTKeyboardManager : NSObject
{
    NSDictionary *_singleLetterCommandsTable;	// 8 = 0x8
    NSString *_lastLayout;	// 16 = 0x10
    NSDictionary *_layoutToKeyboardMap;	// 24 = 0x18
    NSDictionary *_keyboardMap;	// 32 = 0x20
    unsigned int _currentModifiers;	// 40 = 0x28
    _Bool _modifierToggleSpeakingKeyDown;	// 44 = 0x2c
    NSString *_lastCommand;	// 48 = 0x30
    SCRCTargetSelectorTimer *_keyRepeatTimer;	// 56 = 0x38
    unsigned int _keyboardHelpMask;	// 64 = 0x40
    _Bool _isQuickNavOn;	// 68 = 0x44
    SCRCTargetSelectorTimer *_quickNavRepostTimer;	// 72 = 0x48
    SCRCTargetSelectorTimer *_quickNavKeyTimer;	// 80 = 0x50
    unsigned long long _quickNavStateMask;	// 88 = 0x58
    unsigned long long _quickNavLastDownState;	// 96 = 0x60
    double _quickNavDownStateTime[2];	// 104 = 0x68
    double _quickNavLastRecordedActivation;	// 120 = 0x78
    _Bool _quickNavDidSendDown;	// 128 = 0x80
    _Bool _realCapsLockOn;	// 129 = 0x81
    _Bool _fakeCapsLockOn;	// 130 = 0x82
    _Bool _captureModeEnabled;	// 131 = 0x83
    _Bool _explictlyEnabledQuickNav;	// 132 = 0x84
    VOTKeyInfo *_keyDownInfo;	// 136 = 0x88
    NSLock *_keyDownLock;	// 144 = 0x90
    SCRCThread *_keyboardThread;	// 152 = 0x98
    _Bool _capsLockDown;	// 160 = 0xa0
    _Bool _modifierKeyLockEnabled;	// 161 = 0xa1
    double _capsLockTap1;	// 168 = 0xa8
    long long _consecutiveKeyPressCount;	// 176 = 0xb0
    VOTKeyInfo *_lastKeyForTapCount;	// 184 = 0xb8
    VOSCommandManager *_commandManager;	// 192 = 0xc0
    struct CGPoint _passthroughStart;	// 200 = 0xc8
    _Bool _controlKeyToggleSpeakingAllowed;	// 216 = 0xd8
    AXEventRepresentation *_lastDispatchedKeyEvent;	// 224 = 0xe0
    VOTKeyInfo *_lastReleasedToSystemKeyEvent;	// 232 = 0xe8
    double _lastReleasedToSystemKeyEventTime;	// 240 = 0xf0
    double _lastDispatchedKeyEventTime;	// 248 = 0xf8
    CDUnknownBlockType _testingEventDispatchTap;	// 256 = 0x100
    CDUnknownBlockType _testingProcessEventCallback;	// 264 = 0x108
    double _quickNavDownDurationAllowedAcceptance;	// 272 = 0x110
}

+ (id)keyboardManager;	// IMP=0x00400000000f2482
+ (void)initialize;	// IMP=0x00100000000f2441
- (void).cxx_destruct;	// IMP=0x00200000000f6ebf
@property(nonatomic) _Bool controlKeyToggleSpeakingAllowed; // @synthesize controlKeyToggleSpeakingAllowed=_controlKeyToggleSpeakingAllowed;
@property(nonatomic) double quickNavDownDurationAllowedAcceptance; // @synthesize quickNavDownDurationAllowedAcceptance=_quickNavDownDurationAllowedAcceptance;
@property(copy, nonatomic) CDUnknownBlockType testingProcessEventCallback; // @synthesize testingProcessEventCallback=_testingProcessEventCallback;
@property(copy, nonatomic) CDUnknownBlockType testingEventDispatchTap; // @synthesize testingEventDispatchTap=_testingEventDispatchTap;
@property(nonatomic) double lastDispatchedKeyEventTime; // @synthesize lastDispatchedKeyEventTime=_lastDispatchedKeyEventTime;
@property(nonatomic) double lastReleasedToSystemKeyEventTime; // @synthesize lastReleasedToSystemKeyEventTime=_lastReleasedToSystemKeyEventTime;
@property(retain, nonatomic) VOTKeyInfo *lastReleasedToSystemKeyEvent; // @synthesize lastReleasedToSystemKeyEvent=_lastReleasedToSystemKeyEvent;
@property(retain, nonatomic) AXEventRepresentation *lastDispatchedKeyEvent; // @synthesize lastDispatchedKeyEvent=_lastDispatchedKeyEvent;
@property(nonatomic) _Bool explictlyEnabledQuickNav; // @synthesize explictlyEnabledQuickNav=_explictlyEnabledQuickNav;
@property(readonly, nonatomic) _Bool isQuickNavOn; // @synthesize isQuickNavOn=_isQuickNavOn;
@property(nonatomic) _Bool captureModeEnabled; // @synthesize captureModeEnabled=_captureModeEnabled;
- (void)clearConsecutiveKeyPressCount;	// IMP=0x00100000000f6d75
- (void)_postEvent:(id)arg1;	// IMP=0x00100000000f6ce1
- (void)_handleQuickNavPressTimer:(id)arg1;	// IMP=0x00100000000f6c96
- (void)_handleQuickNavPress:(id)arg1;	// IMP=0x00100000000f6922
- (void)_handleQuickNavDownArrowRepostPress:(id)arg1;	// IMP=0x00100000000f6812
- (void)_postKeyboardKey:(id)arg1 keyCode:(unsigned short)arg2 eventFlags:(unsigned int)arg3 keyFlags:(unsigned short)arg4 keyDown:(_Bool)arg5 source:(unsigned short)arg6;	// IMP=0x00100000000f65f6
- (void)_sendEventForCommand:(id)arg1 withKeyInfo:(id)arg2 arrowMask:(long long)arg3;	// IMP=0x00100000000f6545
- (void)_sendEvent:(id)arg1 withKeyInfo:(id)arg2 arrowMask:(long long)arg3;	// IMP=0x00100000000f6439
- (void)_keyRepeat:(id)arg1;	// IMP=0x00100000000f63e9
- (void)_dispatchKeyEventIntoSystem:(id)arg1;	// IMP=0x00100000000f60d0
- (_Bool)_keyInfoIsModifierOnly:(id)arg1;	// IMP=0x00100000000f5fc9
- (void)_handleKeyboardKeyEvent:(id)arg1 isRepeatedEvent:(_Bool)arg2;	// IMP=0x00100000000f5cfe
- (void)_handleModifierCapsLockBehavior:(id)arg1;	// IMP=0x00100000000f5c30
- (void)_handleCapsLockToggle:(id)arg1;	// IMP=0x00100000000f58c9
- (void)_dispatchEventRepresentationIntoSystem:(id)arg1;	// IMP=0x00100000000f5850
- (_Bool)_keyEventShouldGoToFocusedContext:(id)arg1;	// IMP=0x00100000000f5848
- (void)_handleKeyboardKeyEvent:(id)arg1;	// IMP=0x00100000000f5834
- (void)_updateEventFlags:(id)arg1;	// IMP=0x00100000000f574c
- (void)_handleAnnouncementsForKeyInfo:(id)arg1;	// IMP=0x00100000000f5607
- (void)_speakCapsLockKey;	// IMP=0x00100000000f555e
- (_Bool)_handleArrowKeyEvent:(id)arg1;	// IMP=0x00100000000f50d7
- (void)_initializeQuickNav;	// IMP=0x00100000000f5008
- (void)_axEndPassthroughTouch;	// IMP=0x00100000000f4f20
- (void)_axStartPassthroughTouch;	// IMP=0x00100000000f4d87
- (_Bool)_dispatchCommandForKeyInfo:(id)arg1 isRepeatedEvent:(_Bool)arg2;	// IMP=0x00100000000f3f7c
- (id)_localizeKeyboardString:(id)arg1;	// IMP=0x00100000000f3f0a
- (void)setKeyDownInfo:(id)arg1;	// IMP=0x00100000000f3e80
- (void)_updateConsecutiveKeyCount:(id)arg1;	// IMP=0x00100000000f3d7e
- (void)updateQuickNavState:(_Bool)arg1;	// IMP=0x00100000000f3d6e
- (id)keyDownInfo;	// IMP=0x00100000000f3d46
- (id)threadSafe_keyDownInfo;	// IMP=0x00100000000f3cea
- (void)postEvent:(id)arg1;	// IMP=0x00100000000f3c5b
- (id)singleLetterCommandForKeyInfo:(id)arg1;	// IMP=0x00100000000f3b6e
- (id)keyboardEventForKeyInfo:(id)arg1;	// IMP=0x00100000000f33d0
- (id)_characterStringRepresentationForKey:(id)arg1;	// IMP=0x00100000000f2e5e
- (void)loadKeyboardMap;	// IMP=0x00100000000f296f
- (void)handleKeyboardKeyEvent:(id)arg1 eventOrigin:(long long)arg2;	// IMP=0x00100000000f28b7
- (void)_initializeThread;	// IMP=0x00100000000f281d
- (_Bool)modifierKeyLockEnabled;	// IMP=0x00100000000f2811
- (void)toggleVoiceOverModifierKeyLock;	// IMP=0x00100000000f2804
- (void)_verifyCorrectThread;	// IMP=0x00100000000f273b
- (id)init;	// IMP=0x00100000000f2522
- (void)dealloc;	// IMP=0x00100000000f24a7
- (void)setCommandManager:(id)arg1;	// IMP=0x00100000000f2493

@end
