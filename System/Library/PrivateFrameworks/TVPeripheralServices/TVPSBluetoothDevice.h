//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;

@interface TVPSBluetoothDevice : NSObject
{
    NSString *_uniqueIdentifier;	// 8 = 0x8
    NSString *_name;	// 16 = 0x10
    unsigned long long _type;	// 24 = 0x18
    unsigned long long _transportType;	// 32 = 0x20
    unsigned long long _state;	// 40 = 0x28
    unsigned long long _flags;	// 48 = 0x30
    unsigned long long _capabilities;	// 56 = 0x38
    unsigned long long _batteryLevel;	// 64 = 0x40
}

- (void).cxx_destruct;	// IMP=0x0000000000003b30
@property(nonatomic) unsigned long long batteryLevel; // @synthesize batteryLevel=_batteryLevel;
@property(nonatomic) unsigned long long capabilities; // @synthesize capabilities=_capabilities;
@property(nonatomic) unsigned long long flags; // @synthesize flags=_flags;
@property(nonatomic) unsigned long long state; // @synthesize state=_state;
@property(nonatomic) unsigned long long transportType; // @synthesize transportType=_transportType;
@property(nonatomic) unsigned long long type; // @synthesize type=_type;
@property(copy, nonatomic) NSString *name; // @synthesize name=_name;
@property(readonly, copy, nonatomic) NSString *uniqueIdentifier; // @synthesize uniqueIdentifier=_uniqueIdentifier;
- (unsigned long long)hash;	// IMP=0x0000000000003900
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000000030d0
- (id)description;	// IMP=0x0000000000002e80
@property(readonly, nonatomic, getter=isPaired) _Bool paired;
- (id)initWithUniqueIdentifier:(id)arg1;	// IMP=0x0000000000002d00
- (id)init;	// IMP=0x0000000000002cc0

@end

