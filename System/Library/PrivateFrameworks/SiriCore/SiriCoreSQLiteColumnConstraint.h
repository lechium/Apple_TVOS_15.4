//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <SiriCore/NSCopying-Protocol.h>

@class NSString;
@protocol SiriCoreSQLiteValue;

@interface SiriCoreSQLiteColumnConstraint : NSObject <NSCopying>
{
    NSString *_name;	// 8 = 0x8
    long long _type;	// 16 = 0x10
    id <SiriCoreSQLiteValue> _value;	// 24 = 0x18
    unsigned long long _options;	// 32 = 0x20
}

+ (id)defaultColumnConstraintWithName:(id)arg1 value:(id)arg2;	// IMP=0x0000000000006375
+ (id)uniqueColumnConstraintWithName:(id)arg1;	// IMP=0x0000000000006314
+ (id)notNullColumnConstraintWithName:(id)arg1;	// IMP=0x00000000000062b3
+ (id)primaryKeyColumnConstraintWithName:(id)arg1 usesAutoIncrement:(_Bool)arg2;	// IMP=0x000000000000624f
- (void).cxx_destruct;	// IMP=0x0000000000006227
@property(readonly, nonatomic) unsigned long long options; // @synthesize options=_options;
@property(readonly, copy, nonatomic) id <SiriCoreSQLiteValue> value; // @synthesize value=_value;
@property(readonly, nonatomic) long long type; // @synthesize type=_type;
@property(readonly, copy, nonatomic) NSString *name; // @synthesize name=_name;
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000000061f4
- (id)initWithName:(id)arg1 type:(long long)arg2 value:(id)arg3 options:(unsigned long long)arg4;	// IMP=0x0000000000006129

@end

