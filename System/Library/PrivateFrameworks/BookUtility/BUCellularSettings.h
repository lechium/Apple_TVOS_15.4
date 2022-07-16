//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;

@interface BUCellularSettings : NSObject
{
    NSString *_defaultsKey;	// 8 = 0x8
}

+ (id)_copyValueForCarrierBundleKey:(id)arg1;	// IMP=0x000000000000ca94
+ (_Bool)shouldShowCellularAutomaticDownloadsSwitch;	// IMP=0x000000000000c9f8
+ (id)settingsForIdentity:(id)arg1;	// IMP=0x000000000000c668
- (void).cxx_destruct;	// IMP=0x000000000000cc44
- (id)_cellularSettings;	// IMP=0x000000000000ca63
@property(nonatomic) long long cellularDataPrompt;
@property(readonly, nonatomic) _Bool legacyAllowAutomaticDownloads;
@property(nonatomic) _Bool allowAutomaticDownloads;
- (id)initWithDefaultsKey:(id)arg1;	// IMP=0x000000000000c6eb

@end
