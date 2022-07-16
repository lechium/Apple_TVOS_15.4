//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSArray, NSString, TVLHeaderElement, UIColor;

@interface TVLItemDetailWithImageHeaderElement
{
    NSString *_layout;	// 8 = 0x8
    TVLHeaderElement *_imageHeader;	// 16 = 0x10
    NSArray *_userRatings;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x00000000000d3371
@property(copy, nonatomic) NSArray *userRatings; // @synthesize userRatings=_userRatings;
@property(retain, nonatomic) TVLHeaderElement *imageHeader; // @synthesize imageHeader=_imageHeader;
@property(copy, nonatomic) NSString *layout; // @synthesize layout=_layout;
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000000d30d5
- (id)_stylesForKeyPath:(id)arg1;	// IMP=0x00000000000d2af5
@property(readonly, nonatomic) UIColor *subtitleColor;
@property(readonly, nonatomic) UIColor *titleColor;
- (id)initWithXMLElement:(id)arg1 feedDocument:(id)arg2;	// IMP=0x00000000000d27ad

@end
