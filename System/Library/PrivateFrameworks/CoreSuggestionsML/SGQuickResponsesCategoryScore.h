//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface SGQuickResponsesCategoryScore : NSObject
{
    unsigned long long _modelCount;	// 8 = 0x8
    double _average;	// 16 = 0x10
    double _maximum;	// 24 = 0x18
}

@property(readonly, nonatomic) double maximum; // @synthesize maximum=_maximum;
@property(readonly, nonatomic) double average; // @synthesize average=_average;
- (void)addScore:(double)arg1;	// IMP=0x000000000002ef15
- (id)init;	// IMP=0x000000000002eed2

@end

