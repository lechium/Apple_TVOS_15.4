//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <NanoRegistry/NRMutableStateParentDelegate-Protocol.h>
#import <NanoRegistry/NSFastEnumeration-Protocol.h>

@class NRPBMutableDevice, NSMutableDictionary, NSUUID;

@interface NRMutableDevice <NRMutableStateParentDelegate, NSFastEnumeration>
{
    NRPBMutableDevice *_protobuf;	// 8 = 0x8
    NSMutableDictionary *_properties;	// 16 = 0x10
}

+ (id)enclosedClassTypes;	// IMP=0x0000000000042e94
+ (_Bool)supportsSecureCoding;	// IMP=0x00000000000421a3
+ (id)diffFrom:(id)arg1 to:(id)arg2;	// IMP=0x0000000000041788
+ (void)parseDiff:(id)arg1 forPropertyChange:(id)arg2 withBlock:(CDUnknownBlockType)arg3;	// IMP=0x000000000001ac66
+ (id)diffsToClearStatusCodeAndCompatibilityState;	// IMP=0x000000000001ab75
+ (id)diffsToSetStatusCode:(unsigned long long)arg1;	// IMP=0x000000000001aa5e
+ (id)diffsToSetStatusCode:(unsigned long long)arg1 andCompatibilityState:(unsigned short)arg2;	// IMP=0x000000000001a86f
+ (id)diffsToPair:(_Bool)arg1 withDate:(id)arg2;	// IMP=0x000000000001a5da
+ (id)diffsToActivate:(_Bool)arg1 withDate:(id)arg2;	// IMP=0x000000000001a3a5
- (void).cxx_destruct;	// IMP=0x000000000004376d
@property(retain, nonatomic) NRPBMutableDevice *protobuf; // @synthesize protobuf=_protobuf;
- (unsigned long long)countByEnumeratingWithState:(CDStruct_70511ce9 *)arg1 objects:(id *)arg2 count:(unsigned long long)arg3;	// IMP=0x00000000000436ef
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000043418
- (void)setObject:(id)arg1 forKeyedSubscript:(id)arg2;	// IMP=0x0000000000043406
- (id)objectForKeyedSubscript:(id)arg1;	// IMP=0x00000000000433f4
- (id)description;	// IMP=0x00000000000430d9
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000004305c
- (unsigned long long)hash;	// IMP=0x0000000000042efa
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000000042e03
- (id)initWithProtobuf:(id)arg1;	// IMP=0x0000000000042726
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000000424e9
- (id)_createIndex:(id)arg1;	// IMP=0x00000000000421ab
- (void)child:(id)arg1 didApplyDiff:(id)arg2;	// IMP=0x000000000004219d
- (id)applyDiff:(id)arg1 upOnly:(_Bool)arg2 notifyParent:(_Bool)arg3 unconditional:(_Bool)arg4;	// IMP=0x0000000000041d45
- (unsigned long long)count;	// IMP=0x000000000004176b
- (id)allPropertyNames;	// IMP=0x000000000004174e
- (id)propertyForName:(id)arg1;	// IMP=0x00000000000416e3
- (void)invalidate;	// IMP=0x0000000000041699
- (void)removePropertyForName:(id)arg1;	// IMP=0x000000000004158d
- (void)setProperty:(id)arg1 forName:(id)arg2;	// IMP=0x0000000000041402
- (id)init;	// IMP=0x0000000000041395
- (_Bool)supportsCapability:(id)arg1;	// IMP=0x000000000001a2db
@property(readonly, nonatomic) _Bool migratable;
@property(readonly, nonatomic) _Bool isAltAccount;
@property(readonly, nonatomic) _Bool isArchived;
@property(readonly, nonatomic) _Bool isActive;
@property(readonly, nonatomic) _Bool isPaired;
@property(readonly, nonatomic) NSUUID *pairingID;

@end

