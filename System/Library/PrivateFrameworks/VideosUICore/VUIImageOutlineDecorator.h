//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class UIColor;

@interface VUIImageOutlineDecorator
{
    UIColor *_outlineColor;	// 8 = 0x8
    struct UIEdgeInsets _outlineWidths;	// 16 = 0x10
}

+ (id)decoratorWithOutlineColor:(id)arg1 outlineWidths:(struct UIEdgeInsets)arg2;	// IMP=0x0000000000010df0
- (void).cxx_destruct;	// IMP=0x000000000001160c
@property(readonly, nonatomic) struct UIEdgeInsets outlineWidths; // @synthesize outlineWidths=_outlineWidths;
@property(readonly, copy, nonatomic) UIColor *outlineColor; // @synthesize outlineColor=_outlineColor;
- (void)drawInContext:(id)arg1 imageRect:(struct CGRect)arg2;	// IMP=0x00000000000111ac
- (id)decoratorIdentifier;	// IMP=0x000000000001106c
- (unsigned long long)hash;	// IMP=0x000000000001103d
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000010ee7
- (id)initWithOutlineColor:(id)arg1 outlineWidths:(struct UIEdgeInsets)arg2;	// IMP=0x0000000000010e56

@end

