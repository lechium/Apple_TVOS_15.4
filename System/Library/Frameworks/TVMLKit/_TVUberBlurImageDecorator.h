//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class UIColor;

@interface _TVUberBlurImageDecorator
{
    UIColor *_gradientColor;	// 8 = 0x8
    unsigned long long _blurType;	// 16 = 0x10
    unsigned long long _blurStyle;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x0000000000053234
@property(nonatomic) unsigned long long blurStyle; // @synthesize blurStyle=_blurStyle;
@property(nonatomic) unsigned long long blurType; // @synthesize blurType=_blurType;
@property(retain, nonatomic) UIColor *gradientColor; // @synthesize gradientColor=_gradientColor;
- (id)decoratorIdentifier;	// IMP=0x00000000000531be
- (id)decorate:(id)arg1 scaledWithSize:(struct CGSize)arg2 croppedToFit:(_Bool)arg3;	// IMP=0x000000000005284f

@end

