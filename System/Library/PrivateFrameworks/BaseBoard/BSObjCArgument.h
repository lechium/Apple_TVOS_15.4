//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <BaseBoard/BSDescriptionProviding-Protocol.h>

@class NSArray, NSString;

@interface BSObjCArgument : NSObject <BSDescriptionProviding>
{
    NSString *_encoding;	// 8 = 0x8
    unsigned long long _size;	// 16 = 0x10
    BOOL _type;	// 24 = 0x18
    _Bool _onewayVoid;	// 25 = 0x19
    _Bool _plistObject;	// 26 = 0x1a
    Class _objectClass;	// 32 = 0x20
    NSString *_structName;	// 40 = 0x28
    NSArray *_protocols;	// 48 = 0x30
    NSArray *_containedClasses;	// 56 = 0x38
    NSString *_name;	// 64 = 0x40
    long long _index;	// 72 = 0x48
}

- (void).cxx_destruct;	// IMP=0x0000000000028e62
@property(readonly, nonatomic, getter=isPlistObject) _Bool plistObject; // @synthesize plistObject=_plistObject;
@property(readonly, nonatomic, getter=isOnewayVoid) _Bool onewayVoid; // @synthesize onewayVoid=_onewayVoid;
@property(readonly, nonatomic) long long index; // @synthesize index=_index;
@property(readonly, copy, nonatomic) NSString *name; // @synthesize name=_name;
@property(readonly, retain, nonatomic) NSArray *containedClasses; // @synthesize containedClasses=_containedClasses;
@property(readonly, copy, nonatomic) NSArray *protocols; // @synthesize protocols=_protocols;
@property(readonly, copy, nonatomic) NSString *structName; // @synthesize structName=_structName;
@property(readonly, retain, nonatomic) Class objectClass; // @synthesize objectClass=_objectClass;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;	// IMP=0x0000000000028dad
- (id)descriptionWithMultilinePrefix:(id)arg1;	// IMP=0x0000000000028d49
- (id)succinctDescriptionBuilder;	// IMP=0x0000000000028c80
- (id)succinctDescription;	// IMP=0x0000000000028c1c
@property(readonly, copy) NSString *description;
- (id)_prettyTypeString;	// IMP=0x00000000000288aa
@property(readonly, nonatomic, getter=isPointer) _Bool pointer;
@property(readonly, nonatomic, getter=isBlock) _Bool block;
@property(readonly, nonatomic, getter=isXPCObject) _Bool xpcObject;
@property(readonly, nonatomic, getter=isObject) _Bool object;
@property(readonly, nonatomic, getter=isVoid) _Bool isVoid;
@property(readonly, nonatomic, getter=isBoolean) _Bool boolean;
@property(readonly, nonatomic) unsigned long long size;
@property(readonly, nonatomic) BOOL type;
@property(readonly, copy, nonatomic) NSString *encoding;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

