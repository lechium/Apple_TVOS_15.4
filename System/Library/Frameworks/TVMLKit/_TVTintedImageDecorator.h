//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class IKColor;

__attribute__((visibility("hidden")))
@interface _TVTintedImageDecorator
{
    IKColor *_tintColor;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x000000000004b8e6
@property(readonly, retain, nonatomic) IKColor *tintColor; // @synthesize tintColor=_tintColor;
- (void)drawInContext:(id)arg1 imageRect:(struct CGRect)arg2;	// IMP=0x000000000004b242
- (id)decoratorIdentifier;	// IMP=0x000000000004ace3
- (id)initWithTintColor:(id)arg1;	// IMP=0x000000000004ac75

@end

