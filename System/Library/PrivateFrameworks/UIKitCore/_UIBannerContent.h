//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <UIKitCore/NSSecureCoding-Protocol.h>

@class NSString, UIColor, UIImage;

@interface _UIBannerContent : NSObject <NSSecureCoding>
{
    NSString *_title;	// 8 = 0x8
    NSString *_body;	// 16 = 0x10
    NSString *_imageName;	// 24 = 0x18
    UIImage *_image;	// 32 = 0x20
    UIColor *_backgroundColor;	// 40 = 0x28
    UIColor *_contentColor;	// 48 = 0x30
}

+ (_Bool)supportsSecureCoding;	// IMP=0x0000000000bff56b
+ (id)bannerContentWithTitle:(id)arg1;	// IMP=0x0000000000bff519
- (void).cxx_destruct;	// IMP=0x0000000000bff8e8
@property(retain, nonatomic) UIColor *contentColor; // @synthesize contentColor=_contentColor;
@property(retain, nonatomic) UIColor *backgroundColor; // @synthesize backgroundColor=_backgroundColor;
@property(retain, nonatomic) UIImage *image; // @synthesize image=_image;
@property(retain, nonatomic) NSString *imageName; // @synthesize imageName=_imageName;
@property(retain, nonatomic) NSString *body; // @synthesize body=_body;
@property(retain, nonatomic) NSString *title; // @synthesize title=_title;
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000000bff708
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000bff573

@end
