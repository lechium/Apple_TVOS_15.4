//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSEntityDescription, NSManagedObjectID;

@interface NSManagedImmutableObject : NSObject
{
}

+ (Class)classForEntity:(id)arg1;	// IMP=0x00000000001e73d0
+ (_Bool)_isGeneratedClass_1;	// IMP=0x00000000001e73c8
+ (_Bool)_isGeneratedClass;	// IMP=0x00000000001e73c0
+ (id)retain;	// IMP=0x00000000001e73b7
+ (void)_release_1;	// IMP=0x00000000001e73a1
+ (void)release;	// IMP=0x00000000001e739b
+ (id)_retain_1;	// IMP=0x00000000001e7378
+ (id)allocWithEntity:(id)arg1;	// IMP=0x00000000001e727d
+ (CDStruct_977f6bcf *)_PFMOClassFactoryData;	// IMP=0x00000000001e7016
- (id)valueForKey:(id)arg1;	// IMP=0x00000000001e7fe6
- (id)methodSignatureForSelector:(SEL)arg1;	// IMP=0x00000000001e70f0
- (CDUnknownFunctionPointerType)methodForSelector:(SEL)arg1;	// IMP=0x00000000001e7087
- (_Bool)respondsToSelector:(SEL)arg1;	// IMP=0x00000000001e701e

// Remaining properties
@property(readonly) NSEntityDescription *entity; // @dynamic entity;
@property(readonly) NSManagedObjectID *objectID; // @dynamic objectID;

@end

