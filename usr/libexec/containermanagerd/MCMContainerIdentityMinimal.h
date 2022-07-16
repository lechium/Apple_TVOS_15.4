//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MCMUserIdentity, NSString;

@interface MCMContainerIdentityMinimal : NSObject
{
    unsigned int _platform;	// 8 = 0x8
    NSString *_identifier;	// 16 = 0x10
    unsigned long long _containerClass;	// 24 = 0x18
    MCMUserIdentity *_userIdentity;	// 32 = 0x20
}

+ (id)minimalContainerIdentityFromPlist:(id)arg1 userIdentityCache:(id)arg2 error:(unsigned long long *)arg3;	// IMP=0x002000000003736a
- (void).cxx_destruct;	// IMP=0x0020000000036ff4
@property(readonly, nonatomic) unsigned int platform; // @synthesize platform=_platform;
@property(readonly, nonatomic) MCMUserIdentity *userIdentity; // @synthesize userIdentity=_userIdentity;
@property(readonly, nonatomic) unsigned long long containerClass; // @synthesize containerClass=_containerClass;
@property(readonly, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0010000000036f4a
- (_Bool)isEqual:(id)arg1;	// IMP=0x0010000000036ee2
- (_Bool)isEqualToContainerIdentityForLinks:(id)arg1;	// IMP=0x0010000000036e70
- (unsigned long long)hash;	// IMP=0x0010000000036e2d
- (id)debugDescription;	// IMP=0x0010000000036dc6
- (id)description;	// IMP=0x0010000000036d5f
- (id)minimalIdentity;	// IMP=0x0010000000036b74
- (id)initWithVersion1PlistDictionary:(id)arg1 userIdentityCache:(id)arg2 error:(unsigned long long *)arg3;	// IMP=0x0010000000036625
- (id)initWithPlist:(id)arg1 userIdentityCache:(id)arg2 error:(unsigned long long *)arg3;	// IMP=0x0010000000036521
- (id)plist;	// IMP=0x00100000000363c3
- (id)initWithLibsystemContainer:(struct container_object_s *)arg1 defaultUserIdentity:(id)arg2 userIdentityCache:(id)arg3 error:(unsigned long long *)arg4;	// IMP=0x0010000000035e94
- (id)initWithUserIdentity:(id)arg1 identifier:(id)arg2 containerClass:(unsigned long long)arg3 platform:(unsigned int)arg4 error:(unsigned long long *)arg5;	// IMP=0x001000000003593a
- (id)init;	// IMP=0x0010000000035867

@end

