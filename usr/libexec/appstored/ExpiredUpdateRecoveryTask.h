//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class AppInstallLogKey, NSNumber, NSString, NSUUID;

@interface ExpiredUpdateRecoveryTask
{
    NSString *_bundleID;	// 8 = 0x8
    NSUUID *_externalID;	// 16 = 0x10
    NSNumber *_itemID;	// 24 = 0x18
    long long _installID;	// 32 = 0x20
    AppInstallLogKey *_logKey;	// 40 = 0x28
    NSString *_logCode;	// 48 = 0x30
    _Bool _userInitiated;	// 56 = 0x38
}

+ (id)taskWithInstall:(id)arg1 inSession:(id)arg2;	// IMP=0x004000000006dd21
- (void).cxx_destruct;	// IMP=0x002000000006e71e
- (void)main;	// IMP=0x001000000006de6c

@end

