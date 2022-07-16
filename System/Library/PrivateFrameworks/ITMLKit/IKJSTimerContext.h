//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class IKJSManagedArray, JSManagedValue, NSTimer;

@interface IKJSTimerContext : NSObject
{
    _Bool _isRepeating;	// 8 = 0x8
    NSTimer *_timer;	// 16 = 0x10
    id _ownerObject;	// 24 = 0x18
    JSManagedValue *_managedCallback;	// 32 = 0x20
    IKJSManagedArray *_managedArgs;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x00000000000b677e
@property(readonly, nonatomic) _Bool isRepeating; // @synthesize isRepeating=_isRepeating;
@property(readonly, retain, nonatomic) IKJSManagedArray *managedArgs; // @synthesize managedArgs=_managedArgs;
@property(readonly, retain, nonatomic) JSManagedValue *managedCallback; // @synthesize managedCallback=_managedCallback;
@property(readonly, retain, nonatomic) id ownerObject; // @synthesize ownerObject=_ownerObject;
@property(retain, nonatomic) NSTimer *timer; // @synthesize timer=_timer;
- (void)dealloc;	// IMP=0x00000000000b670d
- (void)removeManagedReferences;	// IMP=0x00000000000b65da
- (id)description;	// IMP=0x00000000000b6558
- (id)initWithCallback:(id)arg1 callbackArgs:(id)arg2 repeating:(_Bool)arg3 ownerObject:(id)arg4 timer:(id)arg5;	// IMP=0x00000000000b63a1

@end

