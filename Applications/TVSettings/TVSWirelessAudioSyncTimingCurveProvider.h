//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class UICubicTimingParameters, UISpringTimingParameters;

@interface TVSWirelessAudioSyncTimingCurveProvider : NSObject
{
    long long timingCurveType;	// 8 = 0x8
    UICubicTimingParameters *cubicTimingParameters;	// 16 = 0x10
    UISpringTimingParameters *springTimingParameters;	// 24 = 0x18
    unsigned long long _type;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x002000000016e6f0
@property(nonatomic) unsigned long long type; // @synthesize type=_type;
@property(readonly, nonatomic) UISpringTimingParameters *springTimingParameters; // @synthesize springTimingParameters;
@property(readonly, nonatomic) UICubicTimingParameters *cubicTimingParameters; // @synthesize cubicTimingParameters;
@property(readonly, nonatomic) long long timingCurveType; // @synthesize timingCurveType;
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x001000000016e600
- (id)initWithCoder:(id)arg1;	// IMP=0x001000000016e540
- (void)encodeWithCoder:(id)arg1;	// IMP=0x001000000016e490
- (id)initWithTimingCurveProviderType:(unsigned long long)arg1;	// IMP=0x001000000016e290

@end
