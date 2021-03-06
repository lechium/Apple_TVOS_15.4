//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface CNMemojiBackgroundColor : NSObject
{
    double _red;	// 8 = 0x8
    double _green;	// 16 = 0x10
    double _blue;	// 24 = 0x18
    double _alpha;	// 32 = 0x20
}

+ (id)log;	// IMP=0x00000000000e89aa
@property(nonatomic) double alpha; // @synthesize alpha=_alpha;
@property(nonatomic) double blue; // @synthesize blue=_blue;
@property(nonatomic) double green; // @synthesize green=_green;
@property(nonatomic) double red; // @synthesize red=_red;
- (id)initWithColorDescription:(id)arg1;	// IMP=0x00000000000e8ea6
- (id)initWithDefaultColorWithAlpha:(double)arg1;	// IMP=0x00000000000e8e30
- (id)initWithRed:(double)arg1 green:(double)arg2 blue:(double)arg3 alpha:(double)arg4;	// IMP=0x00000000000e8da6
- (id)initWithColorDescription:(id)arg1 alpha:(double)arg2;	// IMP=0x00000000000e8a06

@end

