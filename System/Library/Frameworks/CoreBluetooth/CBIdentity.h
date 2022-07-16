//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <CoreBluetooth/CUXPCCodable-Protocol.h>

@class NSData, NSString, NSUUID;

@interface CBIdentity : NSObject <CUXPCCodable>
{
    int _type;	// 8 = 0x8
    NSString *_accountID;	// 16 = 0x10
    NSUUID *_bluetoothIdentifier;	// 24 = 0x18
    NSString *_contactID;	// 32 = 0x20
    NSString *_identifier;	// 40 = 0x28
    NSString *_idsDeviceID;	// 48 = 0x30
    NSData *_irkData;	// 56 = 0x38
    NSString *_model;	// 64 = 0x40
    NSString *_name;	// 72 = 0x48
}

- (void).cxx_destruct;	// IMP=0x000000000001cc30
@property(nonatomic) int type; // @synthesize type=_type;
@property(copy, nonatomic) NSString *name; // @synthesize name=_name;
@property(copy, nonatomic) NSString *model; // @synthesize model=_model;
@property(copy, nonatomic) NSData *irkData; // @synthesize irkData=_irkData;
@property(copy, nonatomic) NSString *idsDeviceID; // @synthesize idsDeviceID=_idsDeviceID;
@property(copy, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
@property(copy, nonatomic) NSString *contactID; // @synthesize contactID=_contactID;
@property(copy, nonatomic) NSUUID *bluetoothIdentifier; // @synthesize bluetoothIdentifier=_bluetoothIdentifier;
@property(copy, nonatomic) NSString *accountID; // @synthesize accountID=_accountID;
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000001c520
- (id)descriptionWithLevel:(int)arg1;	// IMP=0x000000000001c140
- (id)description;	// IMP=0x000000000001c120
- (void)encodeWithXPCObject:(id)arg1;	// IMP=0x000000000001be30
- (id)initWithXPCObject:(id)arg1 error:(id *)arg2;	// IMP=0x000000000001bc20

@end

