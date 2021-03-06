//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSAttributedString, NSString, UIColor, UIFont, UIImage;

@interface _MKPlaceBusinessInfoItem : NSObject
{
    NSString *_displayString;	// 8 = 0x8
    _Bool _isAvailable;	// 16 = 0x10
    NSAttributedString *_formattedDisplayString;	// 24 = 0x18
    UIFont *_font;	// 32 = 0x20
    UIColor *_textColor;	// 40 = 0x28
    NSString *_symbolName;	// 48 = 0x30
}

+ (id)itemWithDescription:(id)arg1 availability:(_Bool)arg2 symbolName:(id)arg3;	// IMP=0x000000000010b18d
- (void).cxx_destruct;	// IMP=0x000000000010b8e8
@property(readonly, nonatomic) UIImage *amenityIcon;
@property(readonly, nonatomic) NSString *amenityString;
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000010b78d
- (void)setFont:(id)arg1 textColor:(id)arg2;	// IMP=0x000000000010b4af
- (id)_resolvedAvailabilityIconWithFont:(id)arg1 textColor:(id)arg2;	// IMP=0x000000000010b235
@property(readonly, nonatomic) NSAttributedString *displayString;

@end

