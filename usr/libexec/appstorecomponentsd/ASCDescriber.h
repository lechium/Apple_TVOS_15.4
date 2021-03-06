//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableArray;
@protocol NSObject;

@interface ASCDescriber : NSObject
{
    id <NSObject> _object;	// 8 = 0x8
    NSMutableArray *_properties;	// 16 = 0x10
}

+ (id)nilObject;	// IMP=0x002000000000cbcf
- (void).cxx_destruct;	// IMP=0x002000000000d820
@property(readonly, nonatomic) NSMutableArray *properties; // @synthesize properties=_properties;
@property(readonly, nonatomic) id <NSObject> object; // @synthesize object=_object;
- (id)description;	// IMP=0x001000000000d6f4
- (_Bool)isEqual:(id)arg1;	// IMP=0x001000000000d561
- (unsigned long long)hash;	// IMP=0x001000000000d4af
- (id)finalizeDescription;	// IMP=0x001000000000d3f2
- (id)describeProperties;	// IMP=0x001000000000d160
- (id)describeObject;	// IMP=0x001000000000d0a0
- (void)addObject:(id)arg1 withName:(id)arg2;	// IMP=0x001000000000cfb1
- (void)addSensitiveObject:(id)arg1 withName:(id)arg2;	// IMP=0x001000000000cf4e
- (void)addDouble:(double)arg1 withName:(id)arg2;	// IMP=0x001000000000cec8
- (void)addUInt64:(unsigned long long)arg1 withName:(id)arg2;	// IMP=0x001000000000ce47
- (void)addInt64:(long long)arg1 withName:(id)arg2;	// IMP=0x001000000000cdc6
- (void)addUnsignedInteger:(unsigned long long)arg1 withName:(id)arg2;	// IMP=0x001000000000cd45
- (void)addInteger:(long long)arg1 withName:(id)arg2;	// IMP=0x001000000000ccc4
- (void)addBool:(_Bool)arg1 withName:(id)arg2;	// IMP=0x001000000000cc61
- (id)initWithObject:(id)arg1;	// IMP=0x001000000000cbdc

@end

