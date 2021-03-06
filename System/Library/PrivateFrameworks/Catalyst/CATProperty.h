//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;

@interface CATProperty : NSObject
{
    _Bool _readOnly;	// 8 = 0x8
    _Bool _nonAtomic;	// 9 = 0x9
    _Bool _weakReference;	// 10 = 0xa
    NSString *_name;	// 16 = 0x10
    NSString *_instanceVariableName;	// 24 = 0x18
    long long _type;	// 32 = 0x20
    Class _objectClass;	// 40 = 0x28
    long long _association;	// 48 = 0x30
    SEL _customGetterSelector;	// 56 = 0x38
    SEL _customSetterSelector;	// 64 = 0x40
}

+ (id)propertiesForProtocol:(id)arg1;	// IMP=0x0000000000016825
+ (id)propertiesForClass:(Class)arg1;	// IMP=0x00000000000165e2
+ (void)initialize;	// IMP=0x0000000000016570
- (void).cxx_destruct;	// IMP=0x000000000001705d
@property(readonly, nonatomic, getter=isWeakReference) _Bool weakReference; // @synthesize weakReference=_weakReference;
@property(readonly, nonatomic) SEL customSetterSelector; // @synthesize customSetterSelector=_customSetterSelector;
@property(readonly, nonatomic) SEL customGetterSelector; // @synthesize customGetterSelector=_customGetterSelector;
@property(readonly, nonatomic) long long association; // @synthesize association=_association;
@property(readonly, nonatomic, getter=isNonAtomic) _Bool nonAtomic; // @synthesize nonAtomic=_nonAtomic;
@property(readonly, nonatomic, getter=isReadOnly) _Bool readOnly; // @synthesize readOnly=_readOnly;
@property(readonly, nonatomic) Class objectClass; // @synthesize objectClass=_objectClass;
@property(readonly, nonatomic) long long type; // @synthesize type=_type;
@property(readonly, copy, nonatomic) NSString *instanceVariableName; // @synthesize instanceVariableName=_instanceVariableName;
@property(readonly, copy, nonatomic) NSString *name; // @synthesize name=_name;
- (id)init;	// IMP=0x0000000000016fe0
- (id)initWithName:(const char *)arg1 attributes:(const char *)arg2;	// IMP=0x0000000000016a5c

@end

