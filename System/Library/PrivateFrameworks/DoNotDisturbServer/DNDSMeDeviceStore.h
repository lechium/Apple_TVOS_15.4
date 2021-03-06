//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <DoNotDisturbServer/DNDSBackingStoreRecord-Protocol.h>
#import <DoNotDisturbServer/NSCopying-Protocol.h>
#import <DoNotDisturbServer/NSMutableCopying-Protocol.h>

@class NSNumber, NSString;

@interface DNDSMeDeviceStore : NSObject <NSCopying, NSMutableCopying, DNDSBackingStoreRecord>
{
    NSNumber *_meDeviceStatus;	// 8 = 0x8
    NSString *_meDeviceName;	// 16 = 0x10
}

+ (id)newWithDictionaryRepresentation:(id)arg1 context:(id)arg2;	// IMP=0x0000000000021f78
- (void).cxx_destruct;	// IMP=0x00000000000220c3
@property(readonly, copy, nonatomic) NSString *meDeviceName; // @synthesize meDeviceName=_meDeviceName;
@property(readonly, copy, nonatomic) NSNumber *meDeviceStatus; // @synthesize meDeviceStatus=_meDeviceStatus;
- (id)dictionaryRepresentationWithContext:(id)arg1;	// IMP=0x0000000000022037
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000021f4a
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000021f3f
@property(readonly, copy) NSString *description;
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000021c3f
@property(readonly) unsigned long long hash;
- (id)_initWithStatus:(id)arg1 name:(id)arg2;	// IMP=0x0000000000021b19
- (id)_initWithStore:(id)arg1;	// IMP=0x0000000000021a1d
- (id)init;	// IMP=0x0000000000021a09

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end

