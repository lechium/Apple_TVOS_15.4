//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSAttributedString.h>

@interface NSAttributedString (SCRCMathExpression)
+ (id)scrcSpaceString;	// IMP=0x0000000000001c74
+ (id)scrcPauseString;	// IMP=0x0000000000001c5b
+ (id)scrcString;	// IMP=0x0000000000001c49
+ (id)scrcStringWithDollarCode:(id)arg1 treePosition:(id)arg2;	// IMP=0x0000000000001bab
+ (id)scrcStringWithLiteralString:(id)arg1 treePosition:(id)arg2;	// IMP=0x0000000000001a60
+ (id)scrcStringWithLiteralString:(id)arg1;	// IMP=0x0000000000001a4c
+ (id)scrcStringWithString:(id)arg1 treePosition:(id)arg2;	// IMP=0x0000000000001963
+ (id)scrcStringWithString:(id)arg1;	// IMP=0x000000000000194f
+ (id)scrcStringWithFormat:(id)arg1;	// IMP=0x00000000000018a2
+ (id)_scrcStringWithFormat:(id)arg1 args:(struct __va_list_tag [1])arg2;	// IMP=0x00000000000015f9
- (_Bool)scrcContainsPause;	// IMP=0x0000000000001fce
- (_Bool)_scrcHasPauseCommaAtIndex:(unsigned long long)arg1;	// IMP=0x0000000000001f23
- (id)scrcStringByAddingAttribute:(id)arg1 value:(id)arg2;	// IMP=0x0000000000001e8f
- (id)scrcStringByReplacingOccurrencesOfString:(id)arg1 withString:(id)arg2;	// IMP=0x0000000000001d38
- (id)scrcStringByAppendingAttributedString:(id)arg1;	// IMP=0x0000000000001c8d
- (struct _NSRange)_scrcRangeOfFormatSpecifierWithIndex:(unsigned long long)arg1;	// IMP=0x0000000000001566
- (struct _NSRange)_scrcRangeOfVanillaFormatSpecifier;	// IMP=0x000000000000150c
- (id)scrcIndexSetForAttributes:(id)arg1 limit:(long long)arg2;	// IMP=0x0000000000022848
- (id)scrcSplitBasedOnAttribute:(id)arg1 limit:(long long)arg2;	// IMP=0x0000000000022572
- (id)scrcSplitBasedOnMultipleAttributesWithLimit:(long long)arg1;	// IMP=0x0000000000022271
@end

