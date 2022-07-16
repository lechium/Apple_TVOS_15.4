//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString, SSItemOfferDeviceError;

@interface SSItemOfferDevice : NSObject
{
    long long _deviceIdentifier;	// 8 = 0x8
    SSItemOfferDeviceError *_incompatibleDeviceError;	// 16 = 0x10
    SSItemOfferDeviceError *_incompatibleSystemError;	// 24 = 0x18
    NSString *_minimumProductVersion;	// 32 = 0x20
}

@property(readonly, nonatomic) NSString *minimumProductVersion; // @synthesize minimumProductVersion=_minimumProductVersion;
@property(readonly, nonatomic) SSItemOfferDeviceError *incompatibleSystemError; // @synthesize incompatibleSystemError=_incompatibleSystemError;
@property(readonly, nonatomic) SSItemOfferDeviceError *incompatibleDeviceError; // @synthesize incompatibleDeviceError=_incompatibleDeviceError;
@property(readonly, nonatomic) long long deviceIdentifier; // @synthesize deviceIdentifier=_deviceIdentifier;
- (void)dealloc;	// IMP=0x000000000008f934
- (id)initWithOfferDeviceDicitionary:(id)arg1;	// IMP=0x000000000008f57e
- (id)initWithDeviceIdentifier:(long long)arg1;	// IMP=0x000000000008f541
- (id)init;	// IMP=0x000000000008f52d

@end
