//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HomeKitDaemon/HMDCompositeSettingsStringValueProviding-Protocol.h>

@class NSString;

@interface HMDCompositeStringSetting <HMDCompositeSettingsStringValueProviding>
{
    NSString *_stringValue;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x000000000029741c
@property(readonly, copy) NSString *stringValue; // @synthesize stringValue=_stringValue;
- (id)attributeDescriptions;	// IMP=0x00000000002972df
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000297229
- (_Bool)isEqualValue:(id)arg1;	// IMP=0x0000000000297150
- (id)initWithValue:(id)arg1 readVersion:(id)arg2 writeVersion:(id)arg3;	// IMP=0x00000000002970c2

@end

