//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface _AFDataStoreEntry : NSObject
{
    long long _type;	// 8 = 0x8
    id _value;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x00000000000a538b
@property(readonly, nonatomic) id value; // @synthesize value=_value;
@property(readonly, nonatomic) long long type; // @synthesize type=_type;
- (id)initWithPropertyListRepresentation:(id)arg1 error:(id *)arg2;	// IMP=0x00000000000a506b
- (id)propertyListRepresentation;	// IMP=0x00000000000a4f96
- (id)_valueForPropertyListRepresentation:(id)arg1 type:(long long)arg2;	// IMP=0x00000000000a4e82
- (id)_valuePropertyListRepresentation;	// IMP=0x00000000000a4d84
- (long long)_typeForPropertyListString:(id)arg1;	// IMP=0x00000000000a4d64
- (id)_propertyListStringForType;	// IMP=0x00000000000a4d3b
- (id)initWithType:(long long)arg1 value:(id)arg2;	// IMP=0x00000000000a4cc5

@end

