//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSString.h>

@interface NSString (ContactsUnitTesting)
+ (id)_cn_stringByRepeatingCharacter:(BOOL)arg1 length:(unsigned long long)arg2;	// IMP=0x0000000000002393
+ (_Bool)_cn_isBlank:(id)arg1;	// IMP=0x0000000000073896
+ (id)_cn_whitespaceExceptAscii32CharacterSet;	// IMP=0x0000000000074a0b
+ (id)_cn_LTRControlCharacters;	// IMP=0x0000000000074979
+ (id)_cn_phoneNumberInvalidCharacters;	// IMP=0x0000000000074855
- (id)_cn_stringByReplacingStrings:(id)arg1;	// IMP=0x00000000000389c1
- (id)_cn_flatMap:(CDUnknownBlockType)arg1;	// IMP=0x0000000000074589
- (id)_cn_resultWithAllCharacters:(CDUnknownBlockType)arg1;	// IMP=0x00000000000743fe
- (id)_cn_truncateAtLength:(unsigned long long)arg1 addEllipsisIfTrunctated:(_Bool)arg2;	// IMP=0x0000000000074338
- (struct _NSRange)_cn_rangeOfAnchoredCharacters:(unsigned long long)arg1 options:(unsigned long long)arg2;	// IMP=0x00000000000741c8
- (id)_cn_takeLast:(unsigned long long)arg1;	// IMP=0x000000000007418f
- (id)_cn_take:(unsigned long long)arg1;	// IMP=0x0000000000074159
- (id)_cn_skipLast:(unsigned long long)arg1;	// IMP=0x0000000000074123
- (id)_cn_skip:(unsigned long long)arg1;	// IMP=0x00000000000740f3
- (void)_cn_eachCharacter:(CDUnknownBlockType)arg1;	// IMP=0x000000000007406f
- (struct _NSRange)_cn_rangeFromIndex:(unsigned long long)arg1;	// IMP=0x000000000007401c
- (id)_cn_SHA256HashStringWithSalt:(id)arg1;	// IMP=0x0000000000073f6a
- (id)_cn_nameComponentTokensUsingLocale:(id)arg1 inferredNameOrder:(long long *)arg2;	// IMP=0x0000000000073f10
- (id)_cn_nameComponentTokens;	// IMP=0x0000000000073ea8
- (id)_cn_tokens;	// IMP=0x0000000000073e8c
- (id)_cn_trimmedString;	// IMP=0x0000000000073e26
- (id)_cn_stringByNormalizingCase;	// IMP=0x0000000000073dfd
- (id)_cn_stringByDeletingNumberOfPathComponents:(unsigned long long)arg1;	// IMP=0x0000000000073d95
- (id)_cn_stringByAddingPercentEscapesToEntireURL;	// IMP=0x0000000000073d0a
- (id)_cn_stringByAddingPercentEscapesIfNecessary;	// IMP=0x0000000000073c60
- (struct _NSRange)_cn_rangeOfCommonPrefixWithString:(id)arg1 options:(unsigned long long)arg2;	// IMP=0x0000000000073a79
- (struct _NSRange)_cn_rangeOfCommonPrefixWithString:(id)arg1;	// IMP=0x0000000000073a65
- (_Bool)_cn_containsSubstring:(id)arg1 options:(unsigned long long)arg2;	// IMP=0x0000000000073a42
- (_Bool)_cn_containsSubstring:(id)arg1;	// IMP=0x0000000000073a1f
- (id)_cn_stringByDeletingCharactersInSet:(id)arg1;	// IMP=0x0000000000073987
- (_Bool)_cn_containsCharacterInSet:(id)arg1;	// IMP=0x0000000000073964
- (_Bool)_cn_hasSuffix:(id)arg1 options:(unsigned long long)arg2;	// IMP=0x0000000000073945
- (_Bool)_cn_hasSuffix:(id)arg1;	// IMP=0x000000000007392e
- (_Bool)_cn_hasPrefix:(id)arg1 options:(unsigned long long)arg2;	// IMP=0x000000000007390f
- (_Bool)_cn_hasPrefix:(id)arg1;	// IMP=0x00000000000738f8
- (_Bool)_cn_hasCaseAndDiacriticInsensitivePrefix:(id)arg1;	// IMP=0x00000000000738e6
- (_Bool)_cn_caseInsensitiveIsEqual:(id)arg1;	// IMP=0x00000000000738cd
- (_Bool)_cn_isBlank;	// IMP=0x00000000000738b4
@property(readonly) _Bool _cn_requiresPhoneNumberSanitizing;
- (id)_cn_stringByNormalizingWhitespace;	// IMP=0x000000000007474a
- (id)_cn_stringBySanitizingPhoneNumber;	// IMP=0x00000000000746c2
@end

