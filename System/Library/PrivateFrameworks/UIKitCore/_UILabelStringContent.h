//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString;

__attribute__((visibility("hidden")))
@interface _UILabelStringContent
{
    NSString *_string;	// 16 = 0x10
    struct {
        unsigned int isWidthVariant:1;
    } _flags;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x0000000000fc6d54
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000fc6d1a
- (unsigned long long)hash;	// IMP=0x0000000000fc6cc4
- (_Bool)_isContentEqualToContent:(id)arg1;	// IMP=0x0000000000fc6c4d
- (_Bool)isEqualToAttributedString:(id)arg1;	// IMP=0x0000000000fc6bcb
- (_Bool)isEqualToString:(id)arg1;	// IMP=0x0000000000fc6ba5
- (id)attributedString;	// IMP=0x0000000000fc6b58
- (id)string;	// IMP=0x0000000000fc6b43
- (_Bool)isNil;	// IMP=0x0000000000fc6b2e
- (_Bool)isWidthVariant;	// IMP=0x0000000000fc6b1c
- (_Bool)isAttributed;	// IMP=0x0000000000fc6b14
- (long long)length;	// IMP=0x0000000000fc6af7
- (id)attributedStringContent;	// IMP=0x0000000000fc6a98
- (id)contentByApplyingAttribute:(id)arg1 value:(id)arg2 toRange:(struct _NSRange)arg3;	// IMP=0x0000000000fc68cf
- (id)contentWithAttributedString:(id)arg1;	// IMP=0x0000000000fc684e
- (id)contentWithString:(id)arg1;	// IMP=0x0000000000fc673d
- (id)initWithString:(id)arg1 defaultAttributes:(id)arg2;	// IMP=0x0000000000fc661b

@end

