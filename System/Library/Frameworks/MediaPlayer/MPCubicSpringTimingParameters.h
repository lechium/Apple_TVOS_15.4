//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UISpringTimingParameters.h>

@class UICubicTimingParameters;

@interface MPCubicSpringTimingParameters : UISpringTimingParameters
{
    UICubicTimingParameters *_springCubicTimingParameters;	// 8 = 0x8
}

+ (id)standardTimingParameters;	// IMP=0x00000000001b0c87
- (void).cxx_destruct;	// IMP=0x00000000001b0c74
@property(copy, nonatomic) UICubicTimingParameters *springCubicTimingParameters; // @synthesize springCubicTimingParameters=_springCubicTimingParameters;
- (id)cubicTimingParameters;	// IMP=0x00000000001b0c3d
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000001b0bc6

@end
