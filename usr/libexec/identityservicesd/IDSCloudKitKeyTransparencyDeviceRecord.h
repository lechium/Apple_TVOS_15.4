//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSData;

@interface IDSCloudKitKeyTransparencyDeviceRecord : NSObject
{
    NSData *_deviceData;	// 8 = 0x8
    NSData *_deviceMetadata;	// 16 = 0x10
}

+ (id)recordWithDeviceData:(id)arg1 deviceMetadata:(id)arg2;	// IMP=0x0040000000183f40
- (void).cxx_destruct;	// IMP=0x00200000001846a0
@property(readonly, nonatomic) NSData *deviceMetadata; // @synthesize deviceMetadata=_deviceMetadata;
@property(readonly, nonatomic) NSData *deviceData; // @synthesize deviceData=_deviceData;
- (unsigned long long)hash;	// IMP=0x00100000001845c0
- (_Bool)isEqualToCloudKitKeyTransparencyDeviceRecord:(id)arg1;	// IMP=0x00100000001842b0
- (_Bool)isEqual:(id)arg1;	// IMP=0x00100000001841f0
- (id)description;	// IMP=0x0010000000184110
- (id)initWithDeviceData:(id)arg1 deviceMetadata:(id)arg2;	// IMP=0x0010000000183ff0

@end

