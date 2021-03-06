//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;

@interface ASDCellularSettings : NSObject
{
    NSString *_defaultsKey;	// 8 = 0x8
}

+ (id)settingsForIdentity:(id)arg1;	// IMP=0x0000000000013455
- (void).cxx_destruct;	// IMP=0x00000000000137f6
- (id)_cellularSettings;	// IMP=0x00000000000137c5
@property(nonatomic) long long cellularDataPrompt;
@property(nonatomic) _Bool allowAutomaticDownloads;
- (id)initWithDefaultsKey:(id)arg1;	// IMP=0x00000000000134d8

@end

