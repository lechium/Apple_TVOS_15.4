//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <TVServices/NSSecureCoding-Protocol.h>

@class NSString;

@interface TVTopShelfPromotionCarouselItem <NSSecureCoding>
{
    NSString *_promotionImageName;	// 8 = 0x8
    NSString *_promotionText;	// 16 = 0x10
    long long _promotionTitleTintColor;	// 24 = 0x18
}

+ (_Bool)supportsSecureCoding;	// IMP=0x000000000004a2ac
- (void).cxx_destruct;	// IMP=0x000000000004a31a
@property(nonatomic) long long promotionTitleTintColor; // @synthesize promotionTitleTintColor=_promotionTitleTintColor;
@property(copy, nonatomic) NSString *promotionText; // @synthesize promotionText=_promotionText;
@property(copy, nonatomic) NSString *promotionImageName; // @synthesize promotionImageName=_promotionImageName;
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000004a15c
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000000004a037
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;	// IMP=0x0000000000049f6d
@property(copy, nonatomic) NSString *termsAndConditionsText;
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000049c5f

@end

