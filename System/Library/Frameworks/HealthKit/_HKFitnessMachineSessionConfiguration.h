//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <HealthKit/NSSecureCoding-Protocol.h>

@class NSString, NSUUID;

@interface _HKFitnessMachineSessionConfiguration : NSObject <NSSecureCoding>
{
    NSUUID *_sessionUUID;	// 8 = 0x8
    NSUUID *_connectionUUID;	// 16 = 0x10
    NSUUID *_machineUUID;	// 24 = 0x18
    unsigned long long _machineType;	// 32 = 0x20
    NSString *_machineName;	// 40 = 0x28
    NSString *_machineBrand;	// 48 = 0x30
}

+ (_Bool)supportsSecureCoding;	// IMP=0x000000000010d83a
- (void).cxx_destruct;	// IMP=0x000000000010dc54
@property(readonly, nonatomic) NSString *machineBrand; // @synthesize machineBrand=_machineBrand;
@property(readonly, nonatomic) NSString *machineName; // @synthesize machineName=_machineName;
@property(readonly, nonatomic) unsigned long long machineType; // @synthesize machineType=_machineType;
@property(readonly, nonatomic) NSUUID *machineUUID; // @synthesize machineUUID=_machineUUID;
@property(readonly, nonatomic) NSUUID *connectionUUID; // @synthesize connectionUUID=_connectionUUID;
@property(readonly, nonatomic) NSUUID *sessionUUID; // @synthesize sessionUUID=_sessionUUID;
- (void)_setMachineBrand:(id)arg1;	// IMP=0x000000000010dc07
- (void)_setMachineName:(id)arg1;	// IMP=0x000000000010dbf6
- (void)_setMachineType:(unsigned long long)arg1;	// IMP=0x000000000010dbec
- (void)_setMachineUUID:(id)arg1;	// IMP=0x000000000010dbdb
- (void)_setConnectionUUID:(id)arg1;	// IMP=0x000000000010dbca
- (void)_setSessionUUID:(id)arg1;	// IMP=0x000000000010dbb9
- (id)description;	// IMP=0x000000000010da8f
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000000010d9ce
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000010d842

@end

