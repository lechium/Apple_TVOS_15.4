//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSHashTable, TIKeyboardInputManagerStub;
@protocol OS_dispatch_source;

@interface TUIKeyboardBackendController : NSObject
{
    NSObject<OS_dispatch_source> *_supplementalLexiconWatchdog;	// 8 = 0x8
    _Bool _applicationIsInBackground;	// 16 = 0x10
    _Bool _needsRestoreSupplementalLexicons;	// 17 = 0x11
    NSHashTable *_supplementalLexicons;	// 24 = 0x18
    TIKeyboardInputManagerStub *_inputManager;	// 32 = 0x20
}

+ (id)sharedInstance;	// IMP=0x0000000000042002
- (void).cxx_destruct;	// IMP=0x0000000000041e62
@property(retain, nonatomic) NSObject<OS_dispatch_source> *supplementalLexiconWatchdog; // @synthesize supplementalLexiconWatchdog=_supplementalLexiconWatchdog;
@property(retain, nonatomic) TIKeyboardInputManagerStub *inputManager; // @synthesize inputManager=_inputManager;
@property(readonly, nonatomic) NSHashTable *supplementalLexicons; // @synthesize supplementalLexicons=_supplementalLexicons;
- (void)applicationWillEnterForeground;	// IMP=0x0000000000041e0c
- (void)applicationDidEnterBackground;	// IMP=0x0000000000041e02
- (void)removeUISupplementalLexicon:(id)arg1;	// IMP=0x0000000000041d16
- (void)addUISupplementalLexicon:(id)arg1;	// IMP=0x0000000000041bb5
- (void)generateAutocorrectionsWithKeyboardState:(id)arg1 candidateRange:(struct _NSRange)arg2 requestToken:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;	// IMP=0x0000000000041b06
- (void)generateAutocorrectionsWithKeyboardState:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x0000000000041a80
- (void)handleKeyboardInput:(id)arg1 keyboardState:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x00000000000419e6
- (void)performHitTestForTouchEvents:(id)arg1 keyboardState:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x000000000004194c
- (void)syncToKeyboardState:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x00000000000418c6
- (void)_restoreSupplementalLexiconsIfNeeded;	// IMP=0x000000000004176a

@end

