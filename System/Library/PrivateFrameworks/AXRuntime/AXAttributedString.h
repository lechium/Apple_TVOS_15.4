//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSMutableString.h>

#import <AXRuntime/NSCopying-Protocol.h>

@interface AXAttributedString : NSMutableString <NSCopying>
{
    struct __CFAttributedString *_string;	// 8 = 0x8
}

+ (id)string;	// IMP=0x000000000001b73d
+ (id)axAttributedStringWithString:(id)arg1;	// IMP=0x000000000001b6cb
- (id)description;	// IMP=0x000000000001e0ae
- (id)axAttributedStringDescription;	// IMP=0x000000000001e083
- (id)substringFromIndex:(unsigned long long)arg1;	// IMP=0x000000000001def2
- (_Bool)hasAttribute:(id)arg1;	// IMP=0x000000000001ddb3
- (id)coalescedFontAttributes;	// IMP=0x000000000001da00
- (id)coalescedAttributes;	// IMP=0x000000000001d78a
- (id)attributedSubstringFromRange:(struct _NSRange)arg1;	// IMP=0x000000000001d68c
- (id)uppercaseString;	// IMP=0x000000000001d5de
- (id)lowercaseString;	// IMP=0x000000000001d530
- (id)string;	// IMP=0x000000000001d51b
- (_Bool)hasAttributes;	// IMP=0x000000000001d423
- (_Bool)isAXAttributedString;	// IMP=0x000000000001d41b
- (void)enumerateAttribute:(id)arg1 inRange:(struct _NSRange)arg2 options:(unsigned long long)arg3 usingBlock:(CDUnknownBlockType)arg4;	// IMP=0x000000000001d3fe
- (void)enumerateAttributesUsingBlock:(CDUnknownBlockType)arg1;	// IMP=0x000000000001d37f
- (id)attributeValueForKey:(id)arg1;	// IMP=0x000000000001d1e4
- (id)attribute:(id)arg1 atIndex:(unsigned long long)arg2 effectiveRange:(struct _NSRange *)arg3;	// IMP=0x000000000001d150
- (id)attributesAtIndex:(long long)arg1 effectiveRange:(struct _NSRange *)arg2;	// IMP=0x000000000001d0d8
- (void)appendStringOrAXAttributedString:(id)arg1;	// IMP=0x000000000001d072
- (void)appendAXAttributedString:(id)arg1;	// IMP=0x000000000001d030
- (void)appendFormat:(id)arg1;	// IMP=0x000000000001cf24
- (void)appendString:(id)arg1;	// IMP=0x000000000001ceab
- (id)stringByReplacingOccurrencesOfString:(id)arg1 withString:(id)arg2 options:(unsigned long long)arg3 range:(struct _NSRange)arg4;	// IMP=0x000000000001c667
- (id)axStringByReplacingCharactersInRange:(struct _NSRange)arg1 withString:(id)arg2;	// IMP=0x000000000001c5da
- (id)axAttributedStringByReplacingOccurrencesOfString:(id)arg1 withString:(id)arg2;	// IMP=0x000000000001c533
- (void)setAttributes:(id)arg1 withRange:(struct _NSRange)arg2;	// IMP=0x000000000001c4a9
- (void)removeAttributes:(id)arg1;	// IMP=0x000000000001c319
- (void)setAttribute:(id)arg1 forKey:(id)arg2 withRange:(struct _NSRange)arg3;	// IMP=0x000000000001c218
- (void)setAttribute:(id)arg1 forKey:(id)arg2;	// IMP=0x000000000001c199
- (void)setAttributes:(id)arg1;	// IMP=0x000000000001c00a
- (id)attributedString;	// IMP=0x000000000001bff5
- (const struct __CFAttributedString *)cfAttributedString;	// IMP=0x000000000001bfe4
- (void)replaceString:(struct __CFString *)arg1;	// IMP=0x000000000001bfa8
- (void)replaceCharactersInRange:(struct _NSRange)arg1 withString:(id)arg2;	// IMP=0x000000000001bf8a
- (unsigned short)characterAtIndex:(unsigned long long)arg1;	// IMP=0x000000000001bf3d
- (id)substringWithRange:(struct _NSRange)arg1;	// IMP=0x000000000001bedb
- (void)getCharacters:(unsigned short *)arg1 range:(struct _NSRange)arg2;	// IMP=0x000000000001be82
- (unsigned long long)length;	// IMP=0x000000000001be64
- (void)convertAttachmentsWithBlock:(CDUnknownBlockType)arg1;	// IMP=0x000000000001bd32
- (id)stringByTrimmingCharactersInSet:(id)arg1;	// IMP=0x000000000001bbcd
- (void)dealloc;	// IMP=0x000000000001bb7b
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000001baac
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000001ba9a
- (id)initWithStringOrAttributedString:(id)arg1;	// IMP=0x000000000001ba18
- (id)initWithCFAttributedString:(struct __CFAttributedString *)arg1;	// IMP=0x000000000001b890
- (id)initWithString:(id)arg1;	// IMP=0x000000000001b756
- (id)_axRecursivelyReconstitutedRepresentationFromPropertyListWithError:(id *)arg1;	// IMP=0x000000000003c301
- (id)_axRecursivelyPropertyListCoercedRepresentationWithError:(id *)arg1;	// IMP=0x000000000003c2a2

@end

