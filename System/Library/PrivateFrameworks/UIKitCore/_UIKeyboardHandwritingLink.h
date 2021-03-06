//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKitCore/UIKeyboardCandidateListConsumer-Protocol.h>

@class NSString, TIKeyboardCandidateResultSet, UIResponder;
@protocol UIKeyboardCandidateListDelegate;

@interface _UIKeyboardHandwritingLink <UIKeyboardCandidateListConsumer>
{
    UIResponder *_previousResponder;	// 8 = 0x8
    UIResponder *_fallbackResponder;	// 16 = 0x10
    id <UIKeyboardCandidateListDelegate> _candidateListDelegate;	// 24 = 0x18
    long long _selectedIndex;	// 32 = 0x20
    _Bool _justDeleted;	// 40 = 0x28
    TIKeyboardCandidateResultSet *_candidateSet;	// 48 = 0x30
}

- (void).cxx_destruct;	// IMP=0x00000000009c42c1
@property(retain, nonatomic) TIKeyboardCandidateResultSet *candidateSet; // @synthesize candidateSet=_candidateSet;
- (unsigned long long)selectedSortIndex;	// IMP=0x00000000009c428c
- (id)statisticsIdentifier;	// IMP=0x00000000009c4284
- (id)keyboardBehaviors;	// IMP=0x00000000009c427c
- (unsigned long long)currentIndex;	// IMP=0x00000000009c426b
- (id)currentCandidate;	// IMP=0x00000000009c4193
- (void)candidateAcceptedAtIndex:(unsigned long long)arg1;	// IMP=0x00000000009c418d
- (void)showCandidateInForwardDirection:(_Bool)arg1 granularity:(int)arg2;	// IMP=0x00000000009c4187
- (_Bool)showCandidate:(id)arg1;	// IMP=0x00000000009c417f
- (void)showCandidateAtIndex:(unsigned long long)arg1;	// IMP=0x00000000009c4179
- (_Bool)isFloatingList;	// IMP=0x00000000009c4171
- (_Bool)isExtendedList;	// IMP=0x00000000009c4169
- (_Bool)hasCandidates;	// IMP=0x00000000009c4154
- (void)setUIKeyboardCandidateListDelegate:(id)arg1;	// IMP=0x00000000009c4140
- (void)setCandidates:(id)arg1 inlineText:(id)arg2 inlineRect:(struct CGRect)arg3 maxX:(double)arg4 layout:(_Bool)arg5;	// IMP=0x00000000009c3ef5
- (void)performOutput:(id)arg1;	// IMP=0x00000000009c3ee3
- (_Bool)isDeleteCandidate:(id)arg1;	// IMP=0x00000000009c3e95
- (void)candidatesUpdated;	// IMP=0x00000000009c3e8f
- (void)candidateOutput:(id)arg1;	// IMP=0x00000000009c3e89
- (void)sendStrokes:(id)arg1;	// IMP=0x00000000009c3de0
- (id)nextResponder;	// IMP=0x00000000009c3d8d
- (_Bool)resignFirstResponder;	// IMP=0x00000000009c3c51
- (_Bool)shouldRestoreResponder;	// IMP=0x00000000009c3b8e
- (_Bool)becomeFirstResponder;	// IMP=0x00000000009c3a89
- (_Bool)canBecomeFirstResponder;	// IMP=0x00000000009c3a81
- (void)reloadInputViews;	// IMP=0x00000000009c39b2
- (void)dealloc;	// IMP=0x00000000009c38ea
- (id)init;	// IMP=0x00000000009c379f

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

