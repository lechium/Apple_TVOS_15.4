//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <Trial/NSSecureCoding-Protocol.h>

@protocol OS_xpc_object;

@interface TRIDownloadOptions : NSObject <NSSecureCoding>
{
    _Bool _allowsCellularAccess;	// 8 = 0x8
    _Bool _allowsBatteryUsage;	// 9 = 0x9
    unsigned long long _discretionaryBehavior;	// 16 = 0x10
    NSObject<OS_xpc_object> *_activity;	// 24 = 0x18
}

+ (_Bool)supportsSecureCoding;	// IMP=0x00000000000115d0
+ (id)inexpensiveOptions;	// IMP=0x000000000001154d
- (void).cxx_destruct;	// IMP=0x0000000000011a5f
@property(retain, nonatomic) NSObject<OS_xpc_object> *activity; // @synthesize activity=_activity;
@property(nonatomic) unsigned long long discretionaryBehavior; // @synthesize discretionaryBehavior=_discretionaryBehavior;
@property(nonatomic) _Bool allowsBatteryUsage; // @synthesize allowsBatteryUsage=_allowsBatteryUsage;
@property(nonatomic) _Bool allowsCellularAccess; // @synthesize allowsCellularAccess=_allowsCellularAccess;
- (unsigned long long)hash;	// IMP=0x00000000000119c8
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000011902
- (id)description;	// IMP=0x000000000001181a
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000000001179d
- (id)serializeToPersistedBehavior;	// IMP=0x0000000000011719
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000011697
- (id)initFromPersistedBehavior:(id)arg1;	// IMP=0x00000000000115d8
@property(readonly, nonatomic) unsigned long long requiredCapability;
- (id)initWithAllowsCellular:(_Bool)arg1 discretionaryBehavior:(unsigned long long)arg2;	// IMP=0x00000000000114dd
- (id)init;	// IMP=0x00000000000114c7

@end
