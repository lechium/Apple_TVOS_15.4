//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class UIColor;

@interface WAAQIGradientStop : NSObject
{
    float _location;	// 8 = 0x8
    UIColor *_color;	// 16 = 0x10
}

+ (id)gradientStopWithColor:(id)arg1 location:(float)arg2;	// IMP=0x000000000000b148
- (void).cxx_destruct;	// IMP=0x000000000000b23a
@property(readonly, nonatomic) float location; // @synthesize location=_location;
@property(readonly, nonatomic) UIColor *color; // @synthesize color=_color;
- (id)initWithColor:(id)arg1 location:(float)arg2;	// IMP=0x000000000000b1a3

@end

