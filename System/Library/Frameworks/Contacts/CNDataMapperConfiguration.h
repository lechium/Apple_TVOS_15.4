//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class CNContactsEnvironment, CNManagedConfiguration;
@protocol OS_tcc_identity;

@interface CNDataMapperConfiguration : NSObject
{
    CNContactsEnvironment *_environment;	// 8 = 0x8
    CNManagedConfiguration *_managedConfiguration;	// 16 = 0x10
    NSObject<OS_tcc_identity> *_assumedIdentity;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x00000000000cb732
@property(retain, nonatomic) NSObject<OS_tcc_identity> *assumedIdentity; // @synthesize assumedIdentity=_assumedIdentity;
@property(retain, nonatomic) CNManagedConfiguration *managedConfiguration; // @synthesize managedConfiguration=_managedConfiguration;
@property(retain, nonatomic) CNContactsEnvironment *environment; // @synthesize environment=_environment;
- (id)description;	// IMP=0x00000000000cb621
- (id)initWithContactStoreConfiguration:(id)arg1;	// IMP=0x00000000000cb511

@end
