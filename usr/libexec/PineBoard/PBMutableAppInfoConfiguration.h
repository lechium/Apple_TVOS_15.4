//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <PineBoardServices/PBSMutableAppInfoConfiguration.h>

@class NSDictionary, NSString;

@interface PBMutableAppInfoConfiguration : PBSMutableAppInfoConfiguration
{
    NSDictionary *_singleAppModeOptions;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x00200000002272f0
@property(copy, nonatomic) NSDictionary *singleAppModeOptions; // @synthesize singleAppModeOptions=_singleAppModeOptions;
- (_Bool)isPBAppInfoConfiguration;	// IMP=0x0010000000227270
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;	// IMP=0x0010000000227220
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00100000002271d0

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

