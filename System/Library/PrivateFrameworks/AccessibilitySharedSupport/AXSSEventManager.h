//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class AXSSActionManager, AXSSKeyboardCommandInfo, AXSSKeyboardCommandMap, NSDictionary;
@protocol AXSSKeyFilterDelegate;

@interface AXSSEventManager : NSObject
{
    _Bool _shouldSuppressCommands;	// 8 = 0x8
    _Bool _passthroughModeEnabled;	// 9 = 0x9
    _Bool __tabKeyPressed;	// 10 = 0xa
    _Bool __performedActionWhileTabComboPressed;	// 11 = 0xb
    AXSSActionManager *_actionManager;	// 16 = 0x10
    unsigned long long _searchType;	// 24 = 0x18
    AXSSKeyboardCommandMap *_commandMap;	// 32 = 0x20
    id <AXSSKeyFilterDelegate> _filterDelegate;	// 40 = 0x28
    NSDictionary *__commandInfos;	// 48 = 0x30
    double __lastTabPressTime;	// 56 = 0x38
    AXSSKeyboardCommandInfo *__lastDownAndUpCommandInfo;	// 64 = 0x40
    double _minimumDelayUntilRepeat;	// 72 = 0x48
}

- (void).cxx_destruct;	// IMP=0x00000000000276f4
@property(nonatomic) double minimumDelayUntilRepeat; // @synthesize minimumDelayUntilRepeat=_minimumDelayUntilRepeat;
@property(retain, nonatomic) AXSSKeyboardCommandInfo *_lastDownAndUpCommandInfo; // @synthesize _lastDownAndUpCommandInfo=__lastDownAndUpCommandInfo;
@property(nonatomic) double _lastTabPressTime; // @synthesize _lastTabPressTime=__lastTabPressTime;
@property(nonatomic) _Bool _performedActionWhileTabComboPressed; // @synthesize _performedActionWhileTabComboPressed=__performedActionWhileTabComboPressed;
@property(nonatomic) _Bool _tabKeyPressed; // @synthesize _tabKeyPressed=__tabKeyPressed;
@property(readonly, nonatomic) NSDictionary *_commandInfos; // @synthesize _commandInfos=__commandInfos;
@property(nonatomic, getter=isPassthroughModeEnabled) _Bool passthroughModeEnabled; // @synthesize passthroughModeEnabled=_passthroughModeEnabled;
@property(nonatomic) _Bool shouldSuppressCommands; // @synthesize shouldSuppressCommands=_shouldSuppressCommands;
@property(nonatomic) __weak id <AXSSKeyFilterDelegate> filterDelegate; // @synthesize filterDelegate=_filterDelegate;
@property(retain, nonatomic) AXSSKeyboardCommandMap *commandMap; // @synthesize commandMap=_commandMap;
@property(nonatomic) unsigned long long searchType; // @synthesize searchType=_searchType;
@property(retain, nonatomic) AXSSActionManager *actionManager; // @synthesize actionManager=_actionManager;
- (_Bool)_handleCommand:(id)arg1 event:(id)arg2;	// IMP=0x0000000000027394
- (void)_handleTabComboEvent:(id)arg1;	// IMP=0x00000000000271c5
- (id)_tabbedKeyChordForKeyChord:(id)arg1;	// IMP=0x0000000000027116
- (void)_handleTabEvent:(id)arg1;	// IMP=0x0000000000026eba
- (void)_handleTabRepeatOrUpWithCommand:(id)arg1;	// IMP=0x0000000000026d16
- (_Bool)shouldCaptureEvent:(id)arg1;	// IMP=0x0000000000026cff
- (void)handleFKAEvent:(id)arg1;	// IMP=0x0000000000026ceb
- (_Bool)_handleEvent:(id)arg1 forCaptureOnly:(_Bool)arg2;	// IMP=0x0000000000026927
- (void)_performDownActionForCommand:(id)arg1 info:(id)arg2;	// IMP=0x0000000000026815
- (_Bool)processKeyboardCommand:(id)arg1;	// IMP=0x0000000000026801
- (_Bool)processKeyboardEvent:(id)arg1;	// IMP=0x00000000000267a4
- (id)initWithActionManager:(id)arg1 commandMap:(id)arg2;	// IMP=0x00000000000223f6
- (id)initWithActionManager:(id)arg1;	// IMP=0x0000000000022392

@end

