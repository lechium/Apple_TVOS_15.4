//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface MCDeviceCapabilities : NSObject
{
    _Bool _supportsBlockLevelEncryption;	// 8 = 0x8
    _Bool _supportsFileLevelEncryption;	// 9 = 0x9
}

+ (id)currentDevice;	// IMP=0x0000000000070134
@property(readonly, nonatomic) _Bool supportsFileLevelEncryption; // @synthesize supportsFileLevelEncryption=_supportsFileLevelEncryption;
@property(readonly, nonatomic) _Bool supportsBlockLevelEncryption; // @synthesize supportsBlockLevelEncryption=_supportsBlockLevelEncryption;
- (_Bool)validateCapabilitiesRequiredByRestrictions:(id)arg1 localizedIncompatibilityMessage:(id)arg2 outError:(id *)arg3;	// IMP=0x000000000007029e
- (id)init;	// IMP=0x0000000000070264
- (_Bool)_mediaDiskIsEncrypted;	// IMP=0x0000000000070189

@end

