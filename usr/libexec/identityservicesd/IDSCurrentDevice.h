//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSData, NSString;

@interface IDSCurrentDevice : NSObject
{
    NSString *_localDeviceIdentifier;	// 8 = 0x8
}

+ (id)sharedInstance;	// IMP=0x00400000004d10d0
- (void).cxx_destruct;	// IMP=0x00200000004d1810
- (void)regenerateDeviceIdentifier;	// IMP=0x00100000004d1670
@property(readonly, retain, nonatomic) NSString *deviceIdentifier;
- (id)_deviceIdentifierKeychainID;	// IMP=0x00100000004d1370
@property(readonly, nonatomic) _Bool hasAllEncryptionKeys;
@property(readonly, nonatomic) NSData *encryptionClassDKey;
@property(readonly, nonatomic) NSData *encryptionClassCKey;
@property(readonly, nonatomic) NSData *encryptionClassAKey;
- (id)init;	// IMP=0x00100000004d1190

@end

