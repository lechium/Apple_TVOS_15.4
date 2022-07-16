//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSString;
@protocol NSObject;

@interface PLPropertyValidationRule : NSObject
{
    long long _type;	// 8 = 0x8
    NSString *_keyPath;	// 16 = 0x10
    id <NSObject> _expectedValue;	// 24 = 0x18
    id <NSObject> _expectedValueRangeLow;	// 32 = 0x20
    id <NSObject> _expectedValueRangeHigh;	// 40 = 0x28
    NSArray *_expectedValues;	// 48 = 0x30
}

- (void).cxx_destruct;	// IMP=0x00000000005439ec
@property(retain, nonatomic) NSArray *expectedValues; // @synthesize expectedValues=_expectedValues;
@property(retain, nonatomic) id <NSObject> expectedValueRangeHigh; // @synthesize expectedValueRangeHigh=_expectedValueRangeHigh;
@property(retain, nonatomic) id <NSObject> expectedValueRangeLow; // @synthesize expectedValueRangeLow=_expectedValueRangeLow;
@property(retain, nonatomic) id <NSObject> expectedValue; // @synthesize expectedValue=_expectedValue;
@property(copy, nonatomic) NSString *keyPath; // @synthesize keyPath=_keyPath;
@property(nonatomic) long long type; // @synthesize type=_type;
- (id)descriptionOfCurrentValuesOfObject:(id)arg1;	// IMP=0x0000000000543708
- (id)currentValuesOfObject:(id)arg1;	// IMP=0x00000000005435cb
- (id)keyPaths;	// IMP=0x0000000000543568
- (id)predicate;	// IMP=0x0000000000542cfc
- (_Bool)evaluateWithObject:(id)arg1 outMessage:(id *)arg2;	// IMP=0x00000000005429e8
- (id)reverseRule;	// IMP=0x00000000005426f0

@end

