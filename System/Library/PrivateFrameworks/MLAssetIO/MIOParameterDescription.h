//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MIONumericConstraint, NSString;

@interface MIOParameterDescription : NSObject
{
    NSString *_key;	// 8 = 0x8
    id _defaultValue;	// 16 = 0x10
    MIONumericConstraint *_numericConstraint;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x0000000000016fbb
@property(readonly, nonatomic) MIONumericConstraint *numericConstraint; // @synthesize numericConstraint=_numericConstraint;
@property(readonly, nonatomic) id defaultValue; // @synthesize defaultValue=_defaultValue;
@property(readonly, nonatomic) NSString *key; // @synthesize key=_key;
- (unsigned long long)hash;	// IMP=0x0000000000016e6d
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000016bff
- (id)description;	// IMP=0x0000000000016b0f
- (id)initWithKey:(id)arg1 stringParameter:(const void *)arg2;	// IMP=0x0000000000016a59
- (id)initWithKey:(id)arg1 boolParameter:(const void *)arg2;	// IMP=0x00000000000169ba
- (id)initWithKey:(id)arg1 int64Parameter:(const void *)arg2;	// IMP=0x0000000000016718
- (id)initWithKey:(id)arg1 doubleParameter:(const void *)arg2;	// IMP=0x0000000000016570
- (id)initWithKey:(id)arg1 defaultValue:(id)arg2 numericConstraint:(id)arg3;	// IMP=0x0000000000016469

@end

