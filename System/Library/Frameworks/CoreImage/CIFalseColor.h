//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class CIColor, CIImage;

__attribute__((visibility("hidden")))
@interface CIFalseColor
{
    CIImage *inputImage;	// 72 = 0x48
    CIColor *inputColor0;	// 80 = 0x50
    CIColor *inputColor1;	// 88 = 0x58
}

+ (id)customAttributes;	// IMP=0x000000000016bad6
@property(retain, nonatomic) CIColor *inputColor1; // @synthesize inputColor1;
@property(retain, nonatomic) CIColor *inputColor0; // @synthesize inputColor0;
@property(retain, nonatomic) CIImage *inputImage; // @synthesize inputImage;
- (id)outputImage;	// IMP=0x000000000016b997
- (id)_kernel;	// IMP=0x000000000016b977

@end

