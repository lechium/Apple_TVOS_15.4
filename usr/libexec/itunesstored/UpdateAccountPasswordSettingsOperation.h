//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <iTunesStore/ISOperation.h>

@class SSMutableURLRequestProperties;

@interface UpdateAccountPasswordSettingsOperation : ISOperation
{
    long long _freeDownloadsPasswordSetting;	// 96 = 0x60
    long long _paidPurchasesPasswordSetting;	// 104 = 0x68
    SSMutableURLRequestProperties *_requestProperties;	// 112 = 0x70
}

+ (long long)_accountPasswordSettingValueForServerValue:(id)arg1;	// IMP=0x00400000001a73a5
- (void).cxx_destruct;	// IMP=0x00200000001a742b
- (id)_serverValueForAccountPasswordSettingValue:(long long)arg1 defaultValue:(id)arg2;	// IMP=0x00100000001a7341
- (id)_newAccountPasswordSettingsDictionary;	// IMP=0x00100000001a7249
- (id)_requestDictionary;	// IMP=0x00100000001a7152
- (void)run;	// IMP=0x00100000001a6e75
@property(readonly) long long paidPurchasesPasswordSetting;
@property(readonly) long long freeDownloadsPasswordSetting;
- (id)initWithFreeDownloadsPasswordSetting:(long long)arg1 paidPurchasesPasswordSetting:(long long)arg2 requestProperties:(id)arg3;	// IMP=0x00100000001a6d4f
- (id)initWithFreeDownloadsPasswordSetting:(long long)arg1 paidPurchasesPasswordSetting:(long long)arg2;	// IMP=0x00100000001a6d3a

@end

