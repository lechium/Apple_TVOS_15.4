//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableString, NSString;
@protocol NSObject;

@interface NADescriptionBuilder : NSObject
{
    id <NSObject> _object;	// 8 = 0x8
    NSMutableString *_proem;	// 16 = 0x10
    NSMutableString *_description;	// 24 = 0x18
    int _activeComponent;	// 32 = 0x20
    NSString *_activePrefix;	// 40 = 0x28
    _Bool _useDebugDescription;	// 48 = 0x30
}

+ (id)succinctDescriptionForObject:(id)arg1;	// IMP=0x000000000001c149
+ (id)descriptionForObject:(id)arg1 withObjectsAndNames:(id)arg2;	// IMP=0x000000000001bfad
+ (id)descriptionForObject:(id)arg1;	// IMP=0x000000000001bf97
+ (id)builderWithObject:(id)arg1;	// IMP=0x000000000001bf35
+ (id)nameObjectSeparator;	// IMP=0x000000000001bf28
+ (id)componentSeparator;	// IMP=0x000000000001bf1b
- (void).cxx_destruct;	// IMP=0x000000000001e431
@property(nonatomic) _Bool useDebugDescription; // @synthesize useDebugDescription=_useDebugDescription;
@property(retain, nonatomic) NSString *activeMultilinePrefix; // @synthesize activeMultilinePrefix=_activePrefix;
@property(nonatomic) int activeComponent; // @synthesize activeComponent=_activeComponent;
- (id)build;	// IMP=0x000000000001e321
- (id)appendFormat:(id)arg1;	// IMP=0x000000000001e1fc
- (id)appendString:(id)arg1;	// IMP=0x000000000001e183
- (void)appendDictionarySection:(id)arg1 withName:(id)arg2 multilinePrefix:(id)arg3 skipIfEmpty:(_Bool)arg4 objectTransformer:(CDUnknownBlockType)arg5;	// IMP=0x000000000001dd92
- (void)appendDictionarySection:(id)arg1 withName:(id)arg2 multilinePrefix:(id)arg3 skipIfEmpty:(_Bool)arg4;	// IMP=0x000000000001dd6f
- (void)appendDictionarySection:(id)arg1 withName:(id)arg2 skipIfEmpty:(_Bool)arg3;	// IMP=0x000000000001dcde
- (void)appendArraySection:(id)arg1 withName:(id)arg2 multilinePrefix:(id)arg3 skipIfEmpty:(_Bool)arg4 objectTransformer:(CDUnknownBlockType)arg5;	// IMP=0x000000000001d9eb
- (void)appendArraySection:(id)arg1 withName:(id)arg2 multilinePrefix:(id)arg3 skipIfEmpty:(_Bool)arg4;	// IMP=0x000000000001d9c8
- (void)appendArraySection:(id)arg1 withName:(id)arg2 skipIfEmpty:(_Bool)arg3 objectTransformer:(CDUnknownBlockType)arg4;	// IMP=0x000000000001d913
- (void)appendArraySection:(id)arg1 withName:(id)arg2 skipIfEmpty:(_Bool)arg3;	// IMP=0x000000000001d882
- (void)appendBodySectionWithName:(id)arg1 multilinePrefix:(id)arg2 block:(CDUnknownBlockType)arg3;	// IMP=0x000000000001d6df
- (id)modifyBody:(CDUnknownBlockType)arg1;	// IMP=0x000000000001d6b3
- (id)modifyProem:(CDUnknownBlockType)arg1;	// IMP=0x000000000001d687
- (void)tryAppendKey:(id)arg1;	// IMP=0x000000000001d5f3
- (id)appendKeys:(id)arg1;	// IMP=0x000000000001d45b
- (id)appendKey:(id)arg1;	// IMP=0x000000000001d415
- (id)appendObjectsAndNames:(id)arg1 args:(struct __va_list_tag [1])arg2;	// IMP=0x000000000001d31a
- (id)appendObjectsAndNames:(id)arg1;	// IMP=0x000000000001d269
- (id)appendClass:(Class)arg1 withName:(id)arg2;	// IMP=0x000000000001d1fc
- (id)appendQueue:(id)arg1 withName:(id)arg2;	// IMP=0x000000000001d1cd
- (id)appendCString:(const char *)arg1 withName:(id)arg2;	// IMP=0x000000000001d141
- (id)appendSelector:(SEL)arg1 withName:(id)arg2;	// IMP=0x000000000001d0d4
- (id)appendPointer:(void *)arg1 withName:(id)arg2;	// IMP=0x000000000001d045
- (id)appendTimeInterval:(double)arg1 withName:(id)arg2 decomposeUnits:(_Bool)arg3;	// IMP=0x000000000001ce88
- (id)appendDouble:(double)arg1 withName:(id)arg2 decimalPrecision:(unsigned long long)arg3;	// IMP=0x000000000001cdc5
- (id)appendUInt64:(unsigned long long)arg1 withName:(id)arg2;	// IMP=0x000000000001cd36
- (id)appendUnsignedInt:(unsigned int)arg1 withName:(id)arg2;	// IMP=0x000000000001cca7
- (id)appendInt64:(long long)arg1 withName:(id)arg2;	// IMP=0x000000000001cc18
- (id)appendInt:(int)arg1 withName:(id)arg2;	// IMP=0x000000000001cb89
- (id)appendUnsignedInteger:(unsigned long long)arg1 withName:(id)arg2;	// IMP=0x000000000001cafa
- (id)appendInteger:(long long)arg1 withName:(id)arg2;	// IMP=0x000000000001ca6b
- (id)appendBool:(_Bool)arg1 withName:(id)arg2 ifEqualTo:(_Bool)arg3;	// IMP=0x000000000001ca38
- (id)appendBool:(_Bool)arg1 withName:(id)arg2;	// IMP=0x000000000001c9cb
- (void)appendString:(id)arg1 withName:(id)arg2 skipIfEmpty:(_Bool)arg3;	// IMP=0x000000000001c873
- (void)appendString:(id)arg1 withName:(id)arg2;	// IMP=0x000000000001c85e
- (id)appendObject:(id)arg1 withName:(id)arg2 skipIfNil:(_Bool)arg3;	// IMP=0x000000000001c602
- (id)appendObject:(id)arg1 withName:(id)arg2;	// IMP=0x000000000001c5ed
- (id)appendSuper;	// IMP=0x000000000001c377
- (id)_activeComponentString;	// IMP=0x000000000001c343
- (id)initWithObject:(id)arg1;	// IMP=0x000000000001c1e2

@end
