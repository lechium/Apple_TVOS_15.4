//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@interface FBSSceneClientSettingsDiff
{
}

+ (id)diffFromSettings:(id)arg1 toSettings:(id)arg2;	// IMP=0x0000000000053188
- (id)valueDescriptionForFlag:(long long)arg1 object:(id)arg2 ofSetting:(unsigned long long)arg3;	// IMP=0x0000000000053e38
- (id)keyDescriptionForSetting:(unsigned long long)arg1;	// IMP=0x0000000000053d92
- (id)settingsByApplyingToMutableCopyOfSettings:(id)arg1;	// IMP=0x00000000000537b5
- (void)evaluateWithInspector:(id)arg1 context:(void *)arg2;	// IMP=0x0000000000053786

@end

