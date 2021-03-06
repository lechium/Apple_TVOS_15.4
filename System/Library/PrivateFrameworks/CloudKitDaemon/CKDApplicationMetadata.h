//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class CKEntitlements, NSString;

@interface CKDApplicationMetadata : NSObject
{
    _Bool _isClientMainBundleAppleExecutable;	// 8 = 0x8
    unsigned int _clientSDKVersion;	// 12 = 0xc
    long long _adopterProcessType;	// 16 = 0x10
    NSString *_containingBundleID;	// 24 = 0x18
    NSString *_applicationContainerPath;	// 32 = 0x20
    CKEntitlements *_entitlements;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x0000000000319f50
@property(nonatomic) _Bool isClientMainBundleAppleExecutable; // @synthesize isClientMainBundleAppleExecutable=_isClientMainBundleAppleExecutable;
@property(nonatomic) unsigned int clientSDKVersion; // @synthesize clientSDKVersion=_clientSDKVersion;
@property(retain, nonatomic) CKEntitlements *entitlements; // @synthesize entitlements=_entitlements;
@property(retain, nonatomic) NSString *applicationContainerPath; // @synthesize applicationContainerPath=_applicationContainerPath;
@property(retain, nonatomic) NSString *containingBundleID; // @synthesize containingBundleID=_containingBundleID;
@property(nonatomic) long long adopterProcessType; // @synthesize adopterProcessType=_adopterProcessType;
- (id)init;	// IMP=0x0000000000319e8b

@end

