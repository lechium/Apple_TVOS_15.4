//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HomeKitDaemonLegacy/HMDCompositeSettingsBoolValueProviding-Protocol.h>

@interface HMDCompositeBoolSetting <HMDCompositeSettingsBoolValueProviding>
{
    _Bool _boolValue;	// 24 = 0x18
}

@property(readonly) _Bool boolValue; // @synthesize boolValue=_boolValue;
- (id)attributeDescriptions;	// IMP=0x000000000027caa4
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000027c9ee
- (_Bool)isEqualValue:(id)arg1;	// IMP=0x000000000027c94b
- (id)initWithValue:(_Bool)arg1 readVersion:(id)arg2 writeVersion:(id)arg3;	// IMP=0x000000000027c903

@end

