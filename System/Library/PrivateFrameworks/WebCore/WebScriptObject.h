//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class WebScriptObjectPrivate;

@interface WebScriptObject : NSObject
{
    WebScriptObjectPrivate *_private;	// 8 = 0x8
}

+ (id)_convertValueToObjcValue:(struct JSValue)arg1 originRootObject:(void *)arg2 rootObject:(void *)arg3;	// IMP=0x000000000201a710
+ (_Bool)throwException:(id)arg1;	// IMP=0x0000000002018fd0
+ (id)scriptObjectForJSObject:(struct OpaqueJSValue *)arg1 originRootObject:(void *)arg2 rootObject:(void *)arg3;	// IMP=0x00000000020181e0
+ (void)initialize;	// IMP=0x00000000020181d0
- (id)JSValue;	// IMP=0x000000000201a9a0
- (struct OpaqueJSValue *)JSObject;	// IMP=0x000000000201a680
- (void)setException:(id)arg1;	// IMP=0x000000000201a620
- (void)setWebScriptValueAtIndex:(unsigned int)arg1 value:(id)arg2;	// IMP=0x000000000201a4a0
- (id)webScriptValueAtIndex:(unsigned int)arg1;	// IMP=0x000000000201a350
- (id)stringRepresentation;	// IMP=0x000000000201a290
- (_Bool)hasWebScriptKey:(id)arg1;	// IMP=0x000000000201a0b0
- (void)removeWebScriptKey:(id)arg1;	// IMP=0x0000000002019ed0
- (id)valueForKey:(id)arg1;	// IMP=0x0000000002019c40
- (void)setValue:(id)arg1 forKey:(id)arg2;	// IMP=0x0000000002019990
- (id)evaluateWebScript:(id)arg1;	// IMP=0x0000000002019580
- (id)callWebScriptMethod:(id)arg1 withArguments:(id)arg2;	// IMP=0x0000000002018ff0
- (void)dealloc;	// IMP=0x0000000002018e90
- (oneway void)release;	// IMP=0x0000000002018c70
- (struct OpaqueJSContext *)_globalContextRef;	// IMP=0x0000000002018c20
- (_Bool)_isSafeScript;	// IMP=0x0000000002018b00
- (void *)_originRootObject;	// IMP=0x0000000002018ae0
- (void *)_rootObject;	// IMP=0x0000000002018ac0
- (_Bool)_hasImp;	// IMP=0x0000000002018aa0
- (void *)_imp;	// IMP=0x0000000002018a40
- (id)_initWithJSObject:(void *)arg1 originRootObject:(void *)arg2 rootObject:(void *)arg3;	// IMP=0x00000000020189c0
- (void)_setOriginRootObject:(void *)arg1 andRootObject:(void *)arg2;	// IMP=0x00000000020188f0
- (void)_setImp:(void *)arg1 originRootObject:(void *)arg2 rootObject:(void *)arg3;	// IMP=0x0000000002018660
- (id)objectAtIndex:(unsigned int)arg1;	// IMP=0x000000000201aa40

@end

