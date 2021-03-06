//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <CoreDuetContext/NSCopying-Protocol.h>
#import <CoreDuetContext/NSSecureCoding-Protocol.h>

@class NSString;

@interface _CDDevice : NSObject <NSCopying, NSSecureCoding>
{
    _Bool _companion;	// 8 = 0x8
    NSString *_deviceID;	// 16 = 0x10
    unsigned long long _identifier;	// 24 = 0x18
    NSString *_name;	// 32 = 0x20
    long long _deviceClass;	// 40 = 0x28
    NSString *_model;	// 48 = 0x30
}

+ (_Bool)supportsSecureCoding;	// IMP=0x0000000000012e58
+ (id)localDevice;	// IMP=0x0000000000012cee
+ (unsigned long long)identifierForDeviceID:(id)arg1;	// IMP=0x0000000000012914
- (void).cxx_destruct;	// IMP=0x000000000001331d
@property(readonly, nonatomic, getter=isCompanion) _Bool companion; // @synthesize companion=_companion;
@property(readonly, nonatomic) NSString *model; // @synthesize model=_model;
@property(nonatomic) long long deviceClass; // @synthesize deviceClass=_deviceClass;
@property(copy, nonatomic) NSString *name; // @synthesize name=_name;
@property(readonly, nonatomic) unsigned long long identifier; // @synthesize identifier=_identifier;
@property(retain, nonatomic) NSString *deviceID; // @synthesize deviceID=_deviceID;
- (id)description;	// IMP=0x00000000000131cb
- (unsigned long long)hash;	// IMP=0x00000000000131a6
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000013116
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000000130c3
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000012f40
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000000012e60
- (_Bool)matchesDeviceTypes:(unsigned long long)arg1;	// IMP=0x0000000000012d3e
- (id)initWithName:(id)arg1 deviceID:(id)arg2 model:(id)arg3 companion:(_Bool)arg4;	// IMP=0x0000000000012ad0
- (id)initWithName:(id)arg1 identifier:(unsigned long long)arg2 deviceClass:(long long)arg3;	// IMP=0x0000000000012a60
- (id)initWithName:(id)arg1 deviceID:(id)arg2 deviceClass:(long long)arg3 model:(id)arg4 companion:(_Bool)arg5;	// IMP=0x0000000000012983

@end

