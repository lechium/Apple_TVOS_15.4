//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <TextInput/TIDocumentState.h>

@interface TIDocumentState (UITextInputAdditions)
+ (id)documentStateOfSecureTextDocument:(id)arg1;	// IMP=0x00000000007ca3a3
+ (id)documentStateOfDocumentWithRecentInputIdentifier:(id)arg1;	// IMP=0x00000000007ca356
+ (id)documentStateOfDocumentWithParagraph:(id)arg1;	// IMP=0x00000000007ca309
+ (id)documentStateOfDocument:(id)arg1;	// IMP=0x00000000007ca2bc
- (struct _NSRange)_selectedTextRange;	// IMP=0x00000000007cb4f8
- (id)fullString;	// IMP=0x00000000007cb3d1
- (id)initWithSecureTextDocument:(id)arg1;	// IMP=0x00000000007cb136
- (id)initWithDocumentWithRecentInputIdentifier:(id)arg1;	// IMP=0x00000000007cb11f
- (id)initWithDocumentWithParagraph:(id)arg1;	// IMP=0x00000000007cb108
- (id)initWithDocument:(id)arg1;	// IMP=0x00000000007cb0f1
- (id)initWithDocument:(id)arg1 contextBoundary:(long long)arg2;	// IMP=0x00000000007cac50
- (id)_contextAfterPosition:(id)arg1 inDocument:(id)arg2 toBoundary:(long long)arg3;	// IMP=0x00000000007caab0
- (id)_contextBeforePosition:(id)arg1 inDocument:(id)arg2 toBoundary:(long long)arg3;	// IMP=0x00000000007ca905
- (id)_positionFromPosition:(id)arg1 toPreviousWordStartInDocument:(id)arg2 tokenAccumulator:(CDUnknownBlockType)arg3;	// IMP=0x00000000007ca7fb
- (id)_positionFromPosition:(id)arg1 toPreviousWordBoundaryInDocument:(id)arg2 tokenAccumulator:(CDUnknownBlockType)arg3;	// IMP=0x00000000007ca4be
- (id)copyTextInRange:(id)arg1 fromDocument:(id)arg2;	// IMP=0x00000000007ca421
- (id)textRangeFromPosition:(id)arg1 toPosition:(id)arg2 inDocument:(id)arg3;	// IMP=0x00000000007ca3f0
@end
