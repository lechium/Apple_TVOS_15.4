//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HomeKitDaemonLegacy/HMDCompositeSettingsStringValueProviding-Protocol.h>

@class NSString;

@interface HMDCompositeSettingStringValue <HMDCompositeSettingsStringValueProviding>
{
    NSString *_stringValue;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x000000000027e6ad
@property(readonly, copy) NSString *stringValue; // @synthesize stringValue=_stringValue;
- (id)attributeDescriptions;	// IMP=0x000000000027e5cb
- (_Bool)isEqualValue:(id)arg1;	// IMP=0x000000000027e4f2
- (id)initWithValue:(id)arg1;	// IMP=0x000000000027e478

@end
