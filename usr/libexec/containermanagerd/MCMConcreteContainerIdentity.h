//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSUUID;

@interface MCMConcreteContainerIdentity
{
    NSUUID *_uuid;	// 48 = 0x30
}

+ (id)concreteContainerIdentityFromPlist:(id)arg1 userIdentityCache:(id)arg2 error:(unsigned long long *)arg3;	// IMP=0x0040000000039958
+ (id)containerIdentityWithUUID:(id)arg1 userIdentity:(id)arg2 identifier:(id)arg3 containerClass:(unsigned long long)arg4 platform:(unsigned int)arg5 error:(unsigned long long *)arg6;	// IMP=0x00100000000398a3
+ (id)containerIdentityWithUUID:(id)arg1 userIdentity:(id)arg2 identifier:(id)arg3 containerClass:(unsigned long long)arg4 platform:(unsigned int)arg5 transient:(_Bool)arg6 error:(unsigned long long *)arg7;	// IMP=0x00100000000397e5
- (void).cxx_destruct;	// IMP=0x0020000000039418
@property(readonly, nonatomic) NSUUID *uuid; // @synthesize uuid=_uuid;
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0010000000039390
- (_Bool)isEqual:(id)arg1;	// IMP=0x0010000000039304
- (_Bool)isEqualToConcreteContainerIdentity:(id)arg1;	// IMP=0x001000000003928c
- (unsigned long long)hash;	// IMP=0x0010000000039236
- (id)debugDescription;	// IMP=0x00100000000391cf
- (id)description;	// IMP=0x0010000000039168
- (id)nontransientConcreteContainerIdentity;	// IMP=0x0010000000039156
- (id)transientConcreteContainerIdentity;	// IMP=0x0010000000039144
- (id)nontransientContainerIdentity;	// IMP=0x0010000000039026
- (id)transientContainerIdentity;	// IMP=0x0010000000038f08
- (struct container_object_s *)createLibsystemContainerWithContainerPathIdentifier:(id)arg1 existed:(_Bool)arg2 error:(unsigned long long *)arg3;	// IMP=0x0010000000038d02
- (id)plist;	// IMP=0x0010000000038c20
- (id)initWithLibsystemContainer:(struct container_object_s *)arg1 defaultUserIdentity:(id)arg2 userIdentityCache:(id)arg3 error:(unsigned long long *)arg4;	// IMP=0x0010000000038b86
- (id)initWithVersion1PlistDictionary:(id)arg1 containerIdentity:(id)arg2 error:(unsigned long long *)arg3;	// IMP=0x0010000000038919
- (id)initWithContainerIdentity:(id)arg1 UUID:(id)arg2 error:(unsigned long long *)arg3;	// IMP=0x001000000003880c
- (id)initWithPlist:(id)arg1 userIdentityCache:(id)arg2 error:(unsigned long long *)arg3;	// IMP=0x00100000000386f1
- (id)initWithUUID:(id)arg1 userIdentity:(id)arg2 identifier:(id)arg3 containerClass:(unsigned long long)arg4 platform:(unsigned int)arg5 transient:(_Bool)arg6 error:(unsigned long long *)arg7;	// IMP=0x00100000000384e5
- (id)init;	// IMP=0x00100000000383dd

@end

