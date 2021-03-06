//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <TVSystemUI/NSCopying-Protocol.h>

@class NSArray, NSString;

@interface TVSUIStackedButtonsViewControllerConfiguration : NSObject <NSCopying>
{
    NSString *_title;	// 8 = 0x8
    NSString *_subtitle;	// 16 = 0x10
    NSArray *_buttons;	// 24 = 0x18
    NSString *_footerText;	// 32 = 0x20
    NSString *_privacyButtonBundleIdentifier;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x0000000000042139
@property(retain, nonatomic) NSString *privacyButtonBundleIdentifier; // @synthesize privacyButtonBundleIdentifier=_privacyButtonBundleIdentifier;
@property(retain, nonatomic) NSString *footerText; // @synthesize footerText=_footerText;
@property(retain, nonatomic) NSArray *buttons; // @synthesize buttons=_buttons;
@property(retain, nonatomic) NSString *subtitle; // @synthesize subtitle=_subtitle;
@property(retain, nonatomic) NSString *title; // @synthesize title=_title;
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000042002
- (id)init;	// IMP=0x0000000000041f88

@end

