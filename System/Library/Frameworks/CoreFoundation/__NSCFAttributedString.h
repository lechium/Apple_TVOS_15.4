//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

__attribute__((visibility("hidden")))
@interface __NSCFAttributedString
{
}

+ (_Bool)automaticallyNotifiesObserversForKey:(id)arg1;	// IMP=0x000000000005a8ba
- (void)removeAttribute:(id)arg1 range:(struct _NSRange)arg2;	// IMP=0x000000000005ac27
- (void)addAttribute:(id)arg1 value:(id)arg2 range:(struct _NSRange)arg3;	// IMP=0x000000000005abe0
- (void)addAttributes:(id)arg1 range:(struct _NSRange)arg2;	// IMP=0x000000000005aba8
- (void)setAttributedString:(id)arg1;	// IMP=0x000000000005ab63
- (void)deleteCharactersInRange:(struct _NSRange)arg1;	// IMP=0x000000000005ab32
- (void)appendAttributedString:(id)arg1;	// IMP=0x000000000005aaed
- (void)insertAttributedString:(id)arg1 atIndex:(unsigned long long)arg2;	// IMP=0x000000000005aab9
- (void)replaceCharactersInRange:(struct _NSRange)arg1 withAttributedString:(id)arg2;	// IMP=0x000000000005aa87
- (void)setAttributes:(id)arg1 range:(struct _NSRange)arg2;	// IMP=0x000000000005aa4c
- (void)replaceCharactersInRange:(struct _NSRange)arg1 withString:(id)arg2;	// IMP=0x000000000005a974
- (Class)classForCoder;	// IMP=0x000000000005a951
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000005a945
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000005a93b
- (_Bool)isEqualToAttributedString:(id)arg1;	// IMP=0x000000000005a920
- (id)attribute:(id)arg1 atIndex:(unsigned long long)arg2 longestEffectiveRange:(struct _NSRange *)arg3 inRange:(struct _NSRange)arg4;	// IMP=0x000000000005a908
- (id)attributesAtIndex:(unsigned long long)arg1 longestEffectiveRange:(struct _NSRange *)arg2 inRange:(struct _NSRange)arg3;	// IMP=0x000000000005a8f4
- (id)attributedSubstringFromRange:(struct _NSRange)arg1;	// IMP=0x000000000005a8dd
- (id)attribute:(id)arg1 atIndex:(unsigned long long)arg2 effectiveRange:(struct _NSRange *)arg3;	// IMP=0x000000000005a8d2
- (unsigned long long)length;	// IMP=0x000000000005a8cd
- (id)attributesAtIndex:(unsigned long long)arg1 effectiveRange:(struct _NSRange *)arg2;	// IMP=0x000000000005a8c2
- (id)string;	// IMP=0x000000000005a8bd
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000005a89f
- (unsigned long long)retainCount;	// IMP=0x000000000005a89a
- (_Bool)_isDeallocating;	// IMP=0x000000000005a88a
- (_Bool)_tryRetain;	// IMP=0x000000000005a879
- (oneway void)release;	// IMP=0x000000000005a874
- (id)retain;	// IMP=0x000000000005a85c

@end
