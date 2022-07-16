//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <PassKitUI/UITimingCurveProvider-Protocol.h>

@class UICubicTimingParameters, UISpringTimingParameters;

@interface PKDashboardPresentationTimingCurveProvider : NSObject <UITimingCurveProvider>
{
    double _fractionComplete;	// 8 = 0x8
    unsigned long long _type;	// 16 = 0x10
}

@property(nonatomic) unsigned long long type; // @synthesize type=_type;
@property(nonatomic) double fractionComplete; // @synthesize fractionComplete=_fractionComplete;
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000000f32ad
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000000f323d
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000000000f321a
@property(readonly, nonatomic) UISpringTimingParameters *springTimingParameters;
@property(readonly, nonatomic) UICubicTimingParameters *cubicTimingParameters;
@property(readonly, nonatomic) long long timingCurveType;

@end
