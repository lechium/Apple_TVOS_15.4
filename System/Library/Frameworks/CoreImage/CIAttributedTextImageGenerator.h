//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSAttributedString, NSNumber;

__attribute__((visibility("hidden")))
@interface CIAttributedTextImageGenerator
{
    NSAttributedString *inputText;	// 72 = 0x48
    NSNumber *inputScaleFactor;	// 80 = 0x50
}

+ (id)customAttributes;	// IMP=0x000000000016dbcf
@property(retain, nonatomic) NSNumber *inputScaleFactor; // @synthesize inputScaleFactor;
@property(retain, nonatomic) NSAttributedString *inputText; // @synthesize inputText;
- (id)outputImage;	// IMP=0x000000000016dd87

@end

