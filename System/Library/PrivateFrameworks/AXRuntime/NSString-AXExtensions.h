//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSString.h>

@interface NSString (AXExtensions)
- (id)axAttributedStringWithAttributes:(id)arg1;	// IMP=0x0000000000023551
- (struct _NSRange)_axUnit:(unsigned long long)arg1 fromPosition:(long long)arg2 inDirection:(unsigned long long)arg3;	// IMP=0x0000000000023271
- (struct _NSRange)ax_lineRangeForPosition:(long long)arg1;	// IMP=0x00000000000230f7
- (struct _NSRange)ax_wordFromPosition:(long long)arg1 inDirection:(unsigned long long)arg2;	// IMP=0x00000000000230dd
- (struct _NSRange)ax_sentenceFromPosition:(long long)arg1 inDirection:(unsigned long long)arg2;	// IMP=0x00000000000230c0
- (struct _NSRange)ax_paragraphFromPosition:(long long)arg1 inDirection:(unsigned long long)arg2;	// IMP=0x00000000000230a3
- (struct _NSRange)ax_lineFromPosition:(long long)arg1 inDirection:(unsigned long long)arg2;	// IMP=0x000000000002302f
- (struct _NSRange)_ax_rangeOfNextUnitWithStartPosition:(long long)arg1 direction:(unsigned long long)arg2 withCharacterSet:(id)arg3;	// IMP=0x0000000000022e88
- (id)_axRecursivelyReconstitutedRepresentationFromPropertyListWithError:(id *)arg1;	// IMP=0x000000000003b276
- (id)_axRecursivelyPropertyListCoercedRepresentationWithError:(id *)arg1;	// IMP=0x000000000003b26d
- (id)_axReconstitutedRepresentationForDictionaryKeyReplacement;	// IMP=0x000000000003b162
- (id)_axDictionaryKeyReplacementRepresentation;	// IMP=0x000000000003b159
@end

