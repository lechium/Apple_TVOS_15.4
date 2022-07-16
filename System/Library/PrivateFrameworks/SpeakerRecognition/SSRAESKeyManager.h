//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface SSRAESKeyManager : NSObject
{
}

+ (id)getKeychainAttributesForAESKeyWithApplicationTag:(id)arg1 keyLabel:(id)arg2;	// IMP=0x000000000004f688
+ (_Bool)deleteAESKeyWithApplicationTag:(id)arg1 keyLabel:(id)arg2;	// IMP=0x000000000004f680
+ (id)getAESKeyFromKeychainWithApplicationTag:(id)arg1 keyLabel:(id)arg2;	// IMP=0x000000000004f678
+ (_Bool)storeAESKeyInKeychain:(id)arg1 applicationTag:(id)arg2 keyLabel:(id)arg3;	// IMP=0x000000000004f670
+ (id)generateAESKeyWithKeySizeInBits:(unsigned long long)arg1;	// IMP=0x000000000004f668
+ (id)generateIfNecessaryAESKeyWithKeySizeInBits:(unsigned long long)arg1 applicationTag:(id)arg2 keyLabel:(id)arg3 shouldGenerateIfNecessary:(_Bool)arg4;	// IMP=0x000000000004f660
+ (id)generateIfNecessaryVoiceTriggerProfilesAESKey;	// IMP=0x000000000004f658
+ (id)getVoiceTriggerProfilesAESKey;	// IMP=0x000000000004f650

@end

