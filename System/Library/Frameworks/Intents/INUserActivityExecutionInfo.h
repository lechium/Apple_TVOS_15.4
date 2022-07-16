//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString;

@interface INUserActivityExecutionInfo
{
    NSString *_userActivityType;	// 8 = 0x8
}

+ (void)initialize;	// IMP=0x000000000019adab
- (void).cxx_destruct;	// IMP=0x000000000019ad98
@property(readonly, copy, nonatomic) NSString *userActivityType; // @synthesize userActivityType=_userActivityType;
- (_Bool)canRunOnLocalDevice;	// IMP=0x000000000019ac8a
- (id)_initWithUserActivityType:(id)arg1 launchableAppBundleId:(id)arg2 containingAppBundleURL:(id)arg3 extensionBundleId:(id)arg4;	// IMP=0x000000000019abf0
- (id)initWithUserActivityType:(id)arg1 launchableAppBundleId:(id)arg2;	// IMP=0x000000000019abd8

@end

