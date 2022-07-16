//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class UIColor;

@interface _TVMonogramDecorator
{
    UIColor *_borderColor;	// 8 = 0x8
    double _borderWidth;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x000000000017778c
@property(nonatomic) double borderWidth; // @synthesize borderWidth=_borderWidth;
@property(retain, nonatomic) UIColor *borderColor; // @synthesize borderColor=_borderColor;
- (void)drawInContext:(id)arg1 imageRect:(struct CGRect)arg2;	// IMP=0x0000000000177549
- (_Bool)needsAlphaForImage:(id)arg1;	// IMP=0x0000000000177541
- (id)decoratorIdentifier;	// IMP=0x00000000001774cf

@end

