//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class AXIndexMap, BRLTTable, MISSING_TYPE, NSAttributedString, NSCondition, NSData, NSDictionary, NSMutableCharacterSet, NSString, SCRCTargetSelectorTimer, SCRCThreadKey, SCROBrailleClient, VOTElement, _VOTBrailleManagerStatus;

@interface VOTBrailleManager : NSObject
{
    VOTElement *_brailleElement;	// 8 = 0x8
    struct _NSRange _brailleDescriptionRange;	// 16 = 0x10
    struct _NSRange _brailleLineRange;	// 32 = 0x20
    MISSING_TYPE *_brailleLineOffset;	// 48 = 0x30
    SCRCTargetSelectorTimer *_hintTimer;	// 56 = 0x38
    unsigned long long _brailleElementIndex;	// 64 = 0x40
    _Bool _brailleEnabled;	// 72 = 0x48
    _Bool _usesBrailleSubstitutions;	// 73 = 0x49
    NSDictionary *_brailleSubstitutions;	// 80 = 0x50
    NSMutableCharacterSet *_delimiters;	// 88 = 0x58
    BRLTTable *_currentDefaultTable;	// 96 = 0x60
    BRLTTable *_currentSetTable;	// 104 = 0x68
    _VOTBrailleManagerStatus *_status;	// 112 = 0x70
    _Bool _hasActiveDisplay;	// 120 = 0x78
    _Bool _testingHasActiveDisplay;	// 121 = 0x79
    _Bool _testingKeyboardHelpOn;	// 122 = 0x7a
    AXIndexMap *_commands;	// 128 = 0x80
    id _rotorSelection;	// 136 = 0x88
    _Bool _shouldPreferPositionOverRotorSelection;	// 144 = 0x90
    int _primaryDisplayToken;	// 148 = 0x94
    _Bool _primaryDisplayIsBluetooth;	// 152 = 0x98
    SCROBrailleClient *_brailleClient;	// 160 = 0xa0
    NSCondition *_brailleClientConnectionCondition;	// 168 = 0xa8
    int _lastBraillePanDirection;	// 176 = 0xb0
    SCRCThreadKey *_threadKey;	// 184 = 0xb8
    unsigned int _toggledModifiers;	// 192 = 0xc0
    NSData *_testingAggregatedStatus;	// 200 = 0xc8
    SCRCTargetSelectorTimer *_updateRealtimeStatusTimer;	// 208 = 0xd0
    double _lastRealtimeUpdate;	// 216 = 0xd8
    _Bool _autoAdvanceEnabled;	// 224 = 0xe0
    _Bool _testingBrailleElementLocked;	// 225 = 0xe1
    int _lastRefreshTrigger;	// 228 = 0xe4
    BRLTTable *_brailleTableFromSettings;	// 232 = 0xe8
    VOTElement *_previousTouchContainer;	// 240 = 0xf0
    NSString *_brailleSubstitutionLanguage;	// 248 = 0xf8
    double _lastUserInteractionTime;	// 256 = 0x100
    long long _bookCursorPosition;	// 264 = 0x108
    long long _trailingBookCursorPosition;	// 272 = 0x110
    SCROBrailleClient *_testingBrailleClient;	// 280 = 0x118
    double _threadWaitTime;	// 288 = 0x120
    CDUnknownBlockType _tableSetCallback;	// 296 = 0x128
    CDUnknownBlockType _elementSetCallback;	// 304 = 0x130
    CDUnknownBlockType _keypressCallback;	// 312 = 0x138
    CDUnknownBlockType _brailleStringSetCallback;	// 320 = 0x140
}

+ (double)currentDefaultBrailleAlertTimeout;	// IMP=0x00400000000e5975
+ (id)manager;	// IMP=0x00100000000e5964
+ (void)initialize;	// IMP=0x00100000000e592f
- (void).cxx_destruct;	// IMP=0x00200000000f21f3
@property(copy, nonatomic) CDUnknownBlockType brailleStringSetCallback; // @synthesize brailleStringSetCallback=_brailleStringSetCallback;
@property(copy, nonatomic) CDUnknownBlockType keypressCallback; // @synthesize keypressCallback=_keypressCallback;
@property(copy, nonatomic) CDUnknownBlockType elementSetCallback; // @synthesize elementSetCallback=_elementSetCallback;
@property(copy, nonatomic) CDUnknownBlockType tableSetCallback; // @synthesize tableSetCallback=_tableSetCallback;
@property(nonatomic) double threadWaitTime; // @synthesize threadWaitTime=_threadWaitTime;
@property(nonatomic) _Bool testingBrailleElementLocked; // @synthesize testingBrailleElementLocked=_testingBrailleElementLocked;
@property(retain, nonatomic) SCROBrailleClient *testingBrailleClient; // @synthesize testingBrailleClient=_testingBrailleClient;
@property(nonatomic) int lastRefreshTrigger; // @synthesize lastRefreshTrigger=_lastRefreshTrigger;
@property(nonatomic) long long trailingBookCursorPosition; // @synthesize trailingBookCursorPosition=_trailingBookCursorPosition;
@property(nonatomic) long long bookCursorPosition; // @synthesize bookCursorPosition=_bookCursorPosition;
@property(readonly, nonatomic) struct _NSRange brailleLineRange; // @synthesize brailleLineRange=_brailleLineRange;
@property(nonatomic) double lastUserInteractionTime; // @synthesize lastUserInteractionTime=_lastUserInteractionTime;
@property(retain) NSString *brailleSubstitutionLanguage; // @synthesize brailleSubstitutionLanguage=_brailleSubstitutionLanguage;
@property(retain, nonatomic) VOTElement *previousTouchContainer; // @synthesize previousTouchContainer=_previousTouchContainer;
@property(retain, nonatomic) BRLTTable *brailleTableFromSettings; // @synthesize brailleTableFromSettings=_brailleTableFromSettings;
@property(nonatomic) _Bool usesBrailleSubstitutions; // @synthesize usesBrailleSubstitutions=_usesBrailleSubstitutions;
@property(nonatomic) _Bool brailleEnabled; // @synthesize brailleEnabled=_brailleEnabled;
- (void)resetTestingAggregatedStatus;	// IMP=0x00100000000f1fec
- (id)testingAggregatedStatus;	// IMP=0x00100000000f1fc1
- (_Bool)testingKeyboardHelpIsOn;	// IMP=0x00100000000f1fb8
- (void)configureForUnitTesting;	// IMP=0x00100000000f1f68
- (void)unitTestHandleBrailleKeypress:(id)arg1;	// IMP=0x00100000000f1f56
- (struct _NSRange)rangeOfCellRepresentingCharacterAtIndex:(long long)arg1;	// IMP=0x00100000000f1e17
@property(readonly, nonatomic) NSAttributedString *testingMainAttributedString;
- (id)testingBrailleElement;	// IMP=0x00100000000f1df0
@property(readonly, nonatomic) unsigned long long testingBrailleElementIndex;
@property(nonatomic) _Bool testingHasActiveDisplay;
- (id)_localeIdentifierForTableIdentifier:(id)arg1;	// IMP=0x00100000000f1bf6
- (id)_localeIdentifierForCurrentTable;	// IMP=0x00100000000f1b6e
- (id)_tableIdentifierFromDefaultRotorItem:(id)arg1 forLocale:(id)arg2;	// IMP=0x00100000000f1ac6
- (id)_defaultLanguageRotorItem;	// IMP=0x00100000000f18f7
- (id)currentBrailleTableIdentifier;	// IMP=0x00100000000f17b4
- (void)handleBrailleStartEditing;	// IMP=0x00100000000f1637
- (void)handleBrailleDidShowNextAnnouncement:(id)arg1;	// IMP=0x00100000000f159f
- (void)handleBrailleDidShowPreviousAnnouncement:(id)arg1;	// IMP=0x00100000000f1507
- (void)_handleDisplayModeChanged:(id)arg1;	// IMP=0x00100000000f1476
- (void)handleDisplayModeChanged:(id)arg1;	// IMP=0x00100000000f13fe
- (void)_handleBraillePlayCommandNotSupportedSound;	// IMP=0x00100000000f1386
- (void)handleBraillePlayCommandNotSupportedSound;	// IMP=0x00100000000f1325
- (void)_handleBraillePlayBorderHitSound;	// IMP=0x00100000000f12ad
- (void)handleBraillePlayBorderHitSound;	// IMP=0x00100000000f124c
- (void)_handleBraillePlayDisplayConnectionSound:(id)arg1;	// IMP=0x00100000000f11b4
- (void)handleBraillePlayDisplayConnectionSound:(id)arg1;	// IMP=0x00100000000f113c
@property(nonatomic) unsigned int persistentKeyModifiers;
- (void)_dispatchBrailleDidPanWithSuccess:(id)arg1 elementToken:(id)arg2 appToken:(id)arg3 direction:(id)arg4 lineOffset:(id)arg5;	// IMP=0x00100000000f090a
- (_Bool)_brailleShouldTryToTurnPage:(id)arg1 direction:(long long)arg2;	// IMP=0x00100000000f087f
- (void)handleBrailleDisplayCopyStringToClipboard:(id)arg1;	// IMP=0x00100000000f0879
- (void)handleBrailleDidPanRight:(id)arg1 elementToken:(id)arg2 appToken:(id)arg3 lineOffset:(id)arg4;	// IMP=0x00100000000f0733
- (void)handleBrailleDidPanLeft:(id)arg1 elementToken:(id)arg2 appToken:(id)arg3 lineOffset:(id)arg4;	// IMP=0x00100000000f05f0
- (void)handleBrailleDeletedUntranslatedText:(id)arg1 speakLiterally:(_Bool)arg2;	// IMP=0x00100000000f00cd
- (void)handleBrailleInsertedUntranslatedText:(id)arg1 speakLiterally:(_Bool)arg2;	// IMP=0x00100000000efccc
- (void)_handleBrailleReplaceTextRange:(id)arg1 withString:(id)arg2 cursor:(id)arg3;	// IMP=0x00100000000ef5e9
- (_Bool)_handleKeyboardModifierCommands:(id)arg1;	// IMP=0x00100000000eeb90
- (void)_handleBrailleKeypress:(id)arg1;	// IMP=0x00100000000edc55
- (void)handleBrailleReplaceTextRange:(struct _NSRange)arg1 withString:(id)arg2 cursor:(unsigned long long)arg3;	// IMP=0x00100000000ed70c
- (void)handleUserEventOccured;	// IMP=0x00100000000ed6c8
- (void)handleBrailleKeypress:(id)arg1;	// IMP=0x00100000000ed61b
- (void)_updateOnscreenKeyboardSettings;	// IMP=0x00100000000ed1d6
- (void)_handleBrailleConfigurationChanged:(id)arg1;	// IMP=0x00100000000eccec
- (void)handleBrailleDidReconnect:(id)arg1;	// IMP=0x00100000000ecc94
- (void)handleBrailleDidDisconnect:(id)arg1;	// IMP=0x00100000000ecc3f
- (void)handleBrailleConfigurationChanged:(id)arg1;	// IMP=0x00100000000ecb79
- (void)_displayBrailleElementHint;	// IMP=0x00100000000ec8fa
@property(retain, nonatomic) VOTElement *brailleElement; // @synthesize brailleElement=_brailleElement;
- (void)_refreshBrailleLinePreferringPositionOverRotorSelection:(_Bool)arg1 knownLineRange:(_Bool)arg2 updatedPosition:(id)arg3;	// IMP=0x00100000000ec240
- (void)_refreshBrailleLine;	// IMP=0x00100000000ec227
- (void)refreshBrailleLine;	// IMP=0x00100000000ec1c6
- (void)_resetBrailleCursor;	// IMP=0x00100000000ec1a5
- (void)_setBrailleElement:(id)arg1 resetBrailleCursor:(id)arg2 rotorSelection:(id)arg3;	// IMP=0x00100000000ebf1b
- (void)setBrailleElement:(id)arg1 resetBrailleCursor:(_Bool)arg2 rotorSelection:(id)arg3;	// IMP=0x00100000000ebe0f
- (void)_setBrailleString:(id)arg1 type:(id)arg2 timeout:(id)arg3 priority:(id)arg4 langCode:(id)arg5 brailleLineRangeValue:(id)arg6;	// IMP=0x00100000000eb5b1
- (void)setBrailleString:(id)arg1 type:(int)arg2 timeout:(double)arg3 langCode:(id)arg4 brailleLineRange:(struct _NSRange)arg5 isBrailleLineRangeKnown:(_Bool)arg6;	// IMP=0x00100000000eb3ff
- (void)_filterUnacceptableBrailleStrings:(id)arg1;	// IMP=0x00100000000eb2d0
- (void)applyBrailleSubstitutions:(id)arg1;	// IMP=0x00100000000eb1fc
- (void)_handleStatusRouterForIndex:(long long)arg1;	// IMP=0x00100000000eaffc
- (void)_updateStatusCells;	// IMP=0x00100000000ea65e
- (_Bool)statusCellShowsText;	// IMP=0x00100000000ea648
- (_Bool)statusCellShowsGeneral;	// IMP=0x00100000000ea632
- (void)_updateStatusCellPrefs;	// IMP=0x00100000000ea506
@property(readonly, nonatomic) _Bool bluetoothBrailleDisplayConnected;
- (void)setSingleLetterQuickNavOn:(_Bool)arg1;	// IMP=0x00100000000ea4d0
- (void)_updateHelpEnabled;	// IMP=0x00100000000ea429
@property(nonatomic) _Bool autoAdvanceEnabled;
- (void)_updateBrailleAutoAdvancePrefs;	// IMP=0x00100000000ea3b1
- (void)updateBrailleAutoAdvancePrefs;	// IMP=0x00100000000ea350
- (void)_updateBrailleKeyDebouncePrefs;	// IMP=0x00100000000ea2ef
- (void)_updateWordWrapPrefs;	// IMP=0x00100000000ea200
- (void)_initializeExpandedStatusCellDictionaries;	// IMP=0x00100000000e9c33
- (void)_handleBrailleTranslate:(id)arg1;	// IMP=0x00100000000e9c2d
- (void)_handleBrailleStatusRouter:(id)arg1;	// IMP=0x00100000000e9bae
- (void)_handleBrailleRouter:(id)arg1;	// IMP=0x00100000000e9567
- (void)_handleBrailleAnnouncementModeOn:(id)arg1;	// IMP=0x00100000000e951d
- (void)testingExitDisplayMode;	// IMP=0x00100000000e94bc
- (void)_exitDisplayMode;	// IMP=0x00100000000e94a3
- (void)_handleBrailleToggleEightDot:(id)arg1;	// IMP=0x00100000000e930c
- (void)_handleBrailleNextOutputMode:(id)arg1;	// IMP=0x00100000000e92f8
- (void)_handleBrailleNextInputMode:(id)arg1;	// IMP=0x00100000000e92e1
- (void)_handleBrailleMode:(id)arg1 input:(_Bool)arg2;	// IMP=0x00100000000e9075
- (void)updateBrailleMode:(_Bool)arg1;	// IMP=0x00100000000e8f41
- (long long)inputContractionMode;	// IMP=0x00100000000e8ecd
- (long long)outputContractionMode;	// IMP=0x00100000000e8e59
- (_Bool)_supportsMode:(long long)arg1;	// IMP=0x00100000000e8dcc
- (void)_handleBrailleToggleContractions:(id)arg1;	// IMP=0x00100000000e8c73
- (void)_handleBraillePanRight:(id)arg1;	// IMP=0x00100000000e8c01
- (void)_handleBraillePanLeft:(id)arg1;	// IMP=0x00100000000e8b8f
- (void)_initializeCommands;	// IMP=0x00100000000e87df
- (void)_handleEvent:(id)arg1;	// IMP=0x00100000000e86d8
- (void)handleEvent:(id)arg1;	// IMP=0x00100000000e8660
- (void)updateStatusCellPrefs;	// IMP=0x00100000000e85ff
- (void)handleSettingsChange:(id)arg1;	// IMP=0x00100000000e84e7
- (_Bool)_languageIsCJK;	// IMP=0x00100000000e83c8
- (void)setTextSearchModeOn:(_Bool)arg1;	// IMP=0x00100000000e83af
- (void)updateUsesNemethForMath;	// IMP=0x00100000000e834b
- (void)_setBrailleSubstitutionLanguage:(id)arg1;	// IMP=0x00100000000e8339
- (void)_setBrailleTable:(id)arg1;	// IMP=0x00100000000e81db
- (void)updateBrailleLanguage;	// IMP=0x00100000000e8022
- (void)handleKeyboardChanged;	// IMP=0x00100000000e7e7c
- (long long)_adjustedRotorIndex:(long long)arg1 inDirection:(long long)arg2 rotorItems:(id)arg3;	// IMP=0x00100000000e7e39
- (_Bool)_shouldIncludeServiceNameForSpokenBrailleRotorAnnouncementOfTable:(id)arg1 rotorItems:(id)arg2 locale:(id)arg3;	// IMP=0x00100000000e79e5
- (long long)_indexOfBrailleTable:(id)arg1 inRotorItems:(id)arg2;	// IMP=0x00100000000e783a
- (void)announceBrailleTable:(id)arg1 isDefault:(_Bool)arg2;	// IMP=0x00100000000e7681
- (id)adjustBrailleLanguageRotorInDirection:(long long)arg1 isDefault:(out _Bool *)arg2;	// IMP=0x00100000000e72a1
- (void)_updateRealtimeElementStatus;	// IMP=0x00100000000e6d55
- (void)_updateRealtimeElementStatusFromTimer;	// IMP=0x00100000000e6d12
- (void)updateRealtimeElements:(id)arg1;	// IMP=0x00100000000e6ccf
- (void)_waitForBrailleClientConnection;	// IMP=0x00100000000e6c34
- (void)_setBrailleClientEnabled:(id)arg1;	// IMP=0x00100000000e6a89
- (void)_updateBrailleInputSettings;	// IMP=0x00100000000e6844
- (void)updateBrailleInputSettings;	// IMP=0x00100000000e6811
- (void)updateBrailleOutputSettings;	// IMP=0x00100000000e67e1
- (void)_updateBrailleOutputSettings;	// IMP=0x00100000000e66cc
- (void)dealloc;	// IMP=0x00100000000e665e
- (id)init;	// IMP=0x00100000000e59cc

@end

