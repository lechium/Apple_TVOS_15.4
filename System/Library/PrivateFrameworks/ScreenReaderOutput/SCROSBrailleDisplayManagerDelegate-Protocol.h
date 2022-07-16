//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ScreenReaderOutput/NSObject-Protocol.h>

@class NSArray, NSAttributedString, NSNumber, NSString, SCROBrailleKey;

@protocol SCROSBrailleDisplayManagerDelegate <NSObject>
- (void)handlePlayCommandNotSupportedSound;
- (void)handlePlayBorderHitSound;
- (void)handleCopyStringToClipboard:(NSString *)arg1;
- (void)handleDisplayModeChanged:(NSNumber *)arg1;
- (void)handleBrailleTableFailedToLoad:(NSString *)arg1;
- (void)handleBrailleDidShowNextAnnouncement:(NSNumber *)arg1;
- (void)handleBrailleDidShowPreviousAnnouncement:(NSNumber *)arg1;
- (void)handleBrailleDidPanRight:(NSNumber *)arg1 elementToken:(NSNumber *)arg2 appToken:(id)arg3 lineOffset:(NSNumber *)arg4;
- (void)handleBrailleDidPanLeft:(NSNumber *)arg1 elementToken:(NSNumber *)arg2 appToken:(id)arg3 lineOffset:(NSNumber *)arg4;
- (void)handleBrailleDidDisplay:(NSAttributedString *)arg1;
- (void)handleBrailleKeyMemorize:(SCROBrailleKey *)arg1;
- (void)handleBrailleKeyWillMemorize:(SCROBrailleKey *)arg1;
- (void)handleBrailleDeletedUntranslatedText:(NSString *)arg1 speakLiterally:(_Bool)arg2;
- (void)handleBrailleInsertedUntranslatedText:(NSString *)arg1 speakLiterally:(_Bool)arg2;
- (void)handleStartEditing;
- (void)handleBrailleReplaceTextRange:(struct _NSRange)arg1 withString:(NSString *)arg2 cursor:(unsigned long long)arg3;
- (void)handleUserEventOccured;
- (void)handleBrailleKeypress:(NSArray *)arg1;
- (void)handleFailedToLoadBluetoothDevice:(NSString *)arg1;
- (void)configurationDidChange;
- (void)handleBrailleDriverDisconnected;
- (void)handleBrailleDriverDidLoad;
@end

