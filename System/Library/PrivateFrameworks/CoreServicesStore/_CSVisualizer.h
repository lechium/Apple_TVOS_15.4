//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <CoreServicesStore/NSCopying-Protocol.h>

@class NSMutableDictionary, NSRecursiveLock;

@interface _CSVisualizer : NSObject <NSCopying>
{
    NSMutableDictionary *_functions;	// 8 = 0x8
    NSRecursiveLock *_lock;	// 16 = 0x10
    const struct __CSStore *_store;	// 24 = 0x18
    NSMutableDictionary *_userInfo;	// 32 = 0x20
}

+ (_Bool)getUnit:(unsigned int *)arg1 inTable:(unsigned int *)arg2 fromURL:(id)arg3;	// IMP=0x000000000002b544
+ (id)URLForUnit:(unsigned int)arg1 inTable:(unsigned int)arg2;	// IMP=0x000000000002b4c0
+ (_Bool)unitDescription:(id)arg1 referencesUnit:(unsigned int)arg2 inTable:(unsigned int)arg3;	// IMP=0x000000000002b417
+ (void)enumerateReferencesToUnitsInUnitDescription:(id)arg1 block:(CDUnknownBlockType)arg2;	// IMP=0x000000000002b318
+ (void)breakDownTable:(const struct Table *)arg1 inStore:(const void *)arg2 buffer:(char *)arg3;	// IMP=0x000000000002acc1
+ (id)predicateForSearchingDescriptionWithString:(id)arg1 error:(id *)arg2;	// IMP=0x000000000002ac98
+ (void)enumerateValuesForTitlesInDescription:(id)arg1 block:(CDUnknownBlockType)arg2;	// IMP=0x000000000002a70f
+ (struct _NSRange)rangeOfValueForTitle:(id)arg1 inDescription:(id)arg2;	// IMP=0x000000000002a5d3
+ (id)new;	// IMP=0x000000000002a5ca
- (void).cxx_destruct;	// IMP=0x0000000000029a67
@property(readonly) NSMutableDictionary *userInfo; // @synthesize userInfo=_userInfo;
@property(readonly) const struct __CSStore *store; // @synthesize store=_store;
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000002998e
- (void)enumerateReferencesToUnit:(unsigned int)arg1 inTable:(unsigned int)arg2 block:(CDUnknownBlockType)arg3;	// IMP=0x0000000000029890
- (id)breakDownUsage;	// IMP=0x0000000000029639
- (id)descriptionOfUnit:(unsigned int)arg1 inTable:(unsigned int)arg2;	// IMP=0x000000000002952d
- (id)summaryOfUnit:(unsigned int)arg1 inTable:(unsigned int)arg2;	// IMP=0x0000000000029408
- (void)setStandardTableFunctions;	// IMP=0x0000000000029196
- (void)setFunctions:(id)arg1 forTable:(unsigned int)arg2;	// IMP=0x00000000000290a2
- (id)functionsForTable:(unsigned int)arg1;	// IMP=0x0000000000029046
- (id)functionsForTableNoCopy:(unsigned int)arg1;	// IMP=0x0000000000028f89
- (void)dealloc;	// IMP=0x0000000000028f1a
- (id)initWithStore:(struct __CSStore *)arg1 useStandardTableFunctions:(_Bool)arg2;	// IMP=0x0000000000028e37
- (id)initWithStore:(struct __CSStore *)arg1;	// IMP=0x0000000000028e20
- (id)init;	// IMP=0x0000000000028dfb
- (void)setStandardTableHandlers;	// IMP=0x000000000002c598
- (void)setHandler:(CDUnknownBlockType)arg1 forTable:(unsigned int)arg2;	// IMP=0x000000000002c413
- (CDUnknownBlockType)handlerForTable:(unsigned int)arg1;	// IMP=0x000000000002c353
- (id)initWithStore:(struct __CSStore *)arg1 useStandardTableHandlers:(_Bool)arg2;	// IMP=0x000000000002c341

@end
