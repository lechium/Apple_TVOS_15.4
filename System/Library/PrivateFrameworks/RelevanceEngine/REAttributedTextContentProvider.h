//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSAttributedString;

@interface REAttributedTextContentProvider
{
    NSAttributedString *_text;	// 8 = 0x8
}

+ (id)textContentProviderWithAttributedText:(id)arg1;	// IMP=0x00000000000b85e9
- (void).cxx_destruct;	// IMP=0x00000000000b8925
@property(readonly, nonatomic) NSAttributedString *text; // @synthesize text=_text;
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000000b8887
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000000000b885d
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000000b877b
- (unsigned long long)hash;	// IMP=0x00000000000b875e
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000000b870e
- (id)attributedStringRepresentation;	// IMP=0x00000000000b86f9
- (id)initWithAttributedText:(id)arg1;	// IMP=0x00000000000b8632
- (id)contentEncodedString;	// IMP=0x00000000000a245b

@end
