//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString, UIFont;

__attribute__((visibility("hidden")))
@interface _MKCompassViewSizeParameter : NSObject
{
    NSString *_imageNamePart;	// 8 = 0x8
    double _diameter;	// 16 = 0x10
    UIFont *_font;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x00000000001a5091
@property(retain, nonatomic) UIFont *font; // @synthesize font=_font;
@property(nonatomic) double diameter; // @synthesize diameter=_diameter;
@property(copy, nonatomic) NSString *imageNamePart; // @synthesize imageNamePart=_imageNamePart;

@end

