//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <TextInputCore/NSSecureCoding-Protocol.h>
#import <TextInputCore/TIKeyboardInteractionProtocol-Protocol.h>

@class NSArray, NSMutableArray, NSString;
@protocol TIKeyboardInteractionProtocol;

@interface TITypingSessionLogger : NSObject <NSSecureCoding, TIKeyboardInteractionProtocol>
{
    id <TIKeyboardInteractionProtocol> _typingSession;	// 8 = 0x8
    NSMutableArray *_typingEvents;	// 16 = 0x10
}

+ (_Bool)supportsSecureCoding;	// IMP=0x00000000000255d5
- (void).cxx_destruct;	// IMP=0x00000000000233d3
@property(readonly) NSArray *typingEvents; // @synthesize typingEvents=_typingEvents;
- (id)logDetailsForKeyboardState:(id)arg1;	// IMP=0x0000000000023229
- (void)sendTo:(id)arg1;	// IMP=0x00000000000230e6
- (_Bool)shouldPrintEvent:(id)arg1;	// IMP=0x0000000000022fdc
- (void)setClientID:(id)arg1 keyboardState:(id)arg2;	// IMP=0x0000000000022e3e
- (void)layoutDidChange:(id)arg1 keyboardState:(id)arg2;	// IMP=0x0000000000022c8f
- (void)contextDidChange:(id)arg1 wordDelete:(_Bool)arg2 cursorMoved:(_Bool)arg3 extendsPriorWord:(_Bool)arg4 inWord:(id)arg5 range:(struct _NSRange)arg6 selectionLocation:(unsigned long long)arg7 keyboardState:(id)arg8;	// IMP=0x0000000000022a44
- (void)candidateAccepted:(id)arg1 withInput:(id)arg2 documentState:(id)arg3 inputContext:(id)arg4 inputStem:(id)arg5 predictionBarHit:(_Bool)arg6 useCandidateSelection:(_Bool)arg7 candidateIndex:(long long)arg8 keyboardState:(id)arg9;	// IMP=0x00000000000227ef
- (void)candidatesOffered:(id)arg1 keyboardState:(id)arg2;	// IMP=0x00000000000225f6
- (void)addDrawInputWithSyllableCount:(unsigned long long)arg1 keyboardState:(id)arg2;	// IMP=0x000000000002255e
- (void)addTouchEvent:(id)arg1;	// IMP=0x00000000000224cc
- (void)addKeyInput:(id)arg1 keyboardState:(id)arg2;	// IMP=0x000000000002232e
@property(readonly) unsigned long long eventCount;
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000000000222f5
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000002213e
- (id)initWithTypingSession:(id)arg1;	// IMP=0x00000000000220a9
- (id)typingSession;	// IMP=0x000000000002209b

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
