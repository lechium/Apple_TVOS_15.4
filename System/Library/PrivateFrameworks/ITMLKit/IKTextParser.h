//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <ITMLKit/NSCopying-Protocol.h>

@class NSAttributedString, NSString;

@interface IKTextParser : NSObject <NSCopying>
{
    NSAttributedString *_attributedString;	// 8 = 0x8
}

+ (id)textWithAttributedString:(id)arg1;	// IMP=0x0000000000081647
+ (id)textWithDOMElement:(id)arg1 usingParseBlock:(CDUnknownBlockType)arg2;	// IMP=0x00000000000815bc
- (void).cxx_destruct;	// IMP=0x0000000000083100
@property(readonly, retain, nonatomic) NSAttributedString *attributedString; // @synthesize attributedString=_attributedString;
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000000830a6
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000083031
- (unsigned long long)hash;	// IMP=0x000000000008301b
- (id)_stringFromNumberElement:(id)arg1 unformattedString:(id)arg2;	// IMP=0x0000000000082e48
- (id)_stringFromDurationElement:(id)arg1 unformattedString:(id)arg2;	// IMP=0x0000000000082d10
- (id)_stringFromDateElement:(id)arg1 unformattedString:(id)arg2;	// IMP=0x0000000000082a48
- (id)_attributedStringFromDomElement:(id)arg1 usingParseBlock:(CDUnknownBlockType)arg2;	// IMP=0x00000000000823f5
- (id)_attributedStringWithDefaultAttributes:(id)arg1 fontHandler:(CDUnknownBlockType)arg2 style:(id)arg3;	// IMP=0x0000000000081d05
- (id)_attributesWithFont:(id)arg1 style:(id)arg2 foregroundColor:(id)arg3 textAlignment:(long long)arg4;	// IMP=0x0000000000081ae3
- (id)_attributesWithFont:(id)arg1 style:(id)arg2;	// IMP=0x0000000000081a03
- (id)attributedStringWithFontHandler:(CDUnknownBlockType)arg1 style:(id)arg2 foregroundColor:(id)arg3 textAlignment:(long long)arg4 defaultAttributes:(id *)arg5;	// IMP=0x0000000000081911
- (id)attributedStringWithFontHandler:(CDUnknownBlockType)arg1 style:(id)arg2 foregroundColor:(id)arg3 textAlignment:(long long)arg4;	// IMP=0x00000000000818ee
- (id)attributedStringWithFontHandler:(CDUnknownBlockType)arg1 style:(id)arg2 defaultAttributes:(id *)arg3;	// IMP=0x0000000000081817
- (id)attributedStringWithFontHandler:(CDUnknownBlockType)arg1 style:(id)arg2;	// IMP=0x0000000000081802
- (id)attributedStringWithFont:(id)arg1 foregroundColor:(id)arg2 textAlignment:(long long)arg3 style:(id)arg4;	// IMP=0x0000000000081763
- (id)attributedStringWithFont:(id)arg1 style:(id)arg2;	// IMP=0x00000000000816d2
@property(readonly, retain, nonatomic) NSString *string;

@end
