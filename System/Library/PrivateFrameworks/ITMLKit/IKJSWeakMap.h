//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class JSManagedValue;

@interface IKJSWeakMap
{
    JSManagedValue *_managedWeakMap;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x000000000001249d
@property(readonly, nonatomic) JSManagedValue *managedWeakMap; // @synthesize managedWeakMap=_managedWeakMap;
- (id)_jsWeakMap;	// IMP=0x000000000001243c
- (const struct OpaqueJSValue *)valueRefForWeakKeyRef:(struct OpaqueJSValue *)arg1;	// IMP=0x0000000000012300
- (id)valueForWeakKey:(id)arg1;	// IMP=0x0000000000012222
- (void)setValue:(id)arg1 forWeakKey:(id)arg2;	// IMP=0x0000000000012137
- (id)initWithAppContext:(id)arg1;	// IMP=0x0000000000011ff0

@end

