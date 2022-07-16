//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableString, NSString;

@interface UIDescriptionBuilder : NSObject
{
    NSString *_separator;	// 8 = 0x8
    NSObject *_object;	// 16 = 0x10
    NSMutableString *_descriptionString;	// 24 = 0x18
}

+ (id)descriptionForObject:(id)arg1 keys:(id)arg2;	// IMP=0x0000000000ef8a8e
+ (id)descriptionForObject:(id)arg1 namesAndObjects:(id)arg2;	// IMP=0x0000000000ef89fb
+ (id)descriptionBuilderWithObject:(id)arg1;	// IMP=0x0000000000ef89b2
- (void).cxx_destruct;	// IMP=0x0000000000ef941e
@property(retain, nonatomic) NSMutableString *descriptionString; // @synthesize descriptionString=_descriptionString;
@property(nonatomic) NSObject *object; // @synthesize object=_object;
@property(copy, nonatomic) NSString *separator; // @synthesize separator=_separator;
@property(readonly, nonatomic) NSString *string;
- (void)tryAppendKey:(id)arg1;	// IMP=0x0000000000ef933f
- (id)appendKeys:(id)arg1;	// IMP=0x0000000000ef9196
- (id)appendKey:(id)arg1;	// IMP=0x0000000000ef9107
- (id)appendNamesAndObjects:(id)arg1;	// IMP=0x0000000000ef9088
- (id)appendName:(id)arg1 selector:(SEL)arg2;	// IMP=0x0000000000ef901b
- (id)appendName:(id)arg1 pointerValue:(void *)arg2;	// IMP=0x0000000000ef8f8c
- (id)appendName:(id)arg1 doubleValue:(double)arg2;	// IMP=0x0000000000ef8efa
- (id)appendName:(id)arg1 intValue:(int)arg2;	// IMP=0x0000000000ef8e6b
- (id)appendName:(id)arg1 unsignedInteger:(unsigned long long)arg2;	// IMP=0x0000000000ef8ddc
- (id)appendName:(id)arg1 integerValue:(long long)arg2;	// IMP=0x0000000000ef8d4d
- (id)appendName:(id)arg1 boolValue:(_Bool)arg2;	// IMP=0x0000000000ef8d0e
- (id)appendName:(id)arg1 object:(id)arg2 usingLightweightDescription:(_Bool)arg3;	// IMP=0x0000000000ef8c22
- (id)appendName:(id)arg1 object:(id)arg2;	// IMP=0x0000000000ef8c0d
- (id)appendObject:(id)arg1 withName:(id)arg2;	// IMP=0x0000000000ef8bf2
- (id)initWithObject:(id)arg1;	// IMP=0x0000000000ef8b21

@end
