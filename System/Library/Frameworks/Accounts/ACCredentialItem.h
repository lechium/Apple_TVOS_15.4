//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <Accounts/ACProtobufCoding-Protocol.h>
#import <Accounts/NSSecureCoding-Protocol.h>

@class ACAccountStore, NSDate, NSMutableSet, NSSet, NSString, NSURL;

@interface ACCredentialItem : NSObject <NSSecureCoding, ACProtobufCoding>
{
    NSString *_accountIdentifier;	// 8 = 0x8
    NSDate *_expirationDate;	// 16 = 0x10
    NSString *_serviceName;	// 24 = 0x18
    _Bool _persistent;	// 32 = 0x20
    NSURL *_objectID;	// 40 = 0x28
    ACAccountStore *_accountStore;	// 48 = 0x30
    NSMutableSet *_dirtyProperties;	// 56 = 0x38
}

+ (_Bool)supportsSecureCoding;	// IMP=0x000000000005618a
- (void).cxx_destruct;	// IMP=0x0000000000057431
@property(readonly, nonatomic) NSSet *dirtyProperties; // @synthesize dirtyProperties=_dirtyProperties;
@property(nonatomic) __weak ACAccountStore *accountStore; // @synthesize accountStore=_accountStore;
- (void)clearDirtyProperties;	// IMP=0x00000000000573e6
- (void)_markPropertyDirty:(id)arg1;	// IMP=0x0000000000057377
- (void)markAllPropertiesDirty;	// IMP=0x0000000000057303
- (_Bool)isPropertyDirty:(id)arg1;	// IMP=0x00000000000572ed
@property(readonly, nonatomic, getter=isDirty) _Bool dirty;
@property(retain, nonatomic) NSURL *objectID;
@property(nonatomic, getter=isPersistent) _Bool persistent;
- (void)setServiceName:(id)arg1;	// IMP=0x000000000005720e
@property(readonly, nonatomic) NSString *serviceName;
@property(retain, nonatomic) NSDate *expirationDate;
@property(readonly, nonatomic, getter=isExpired) _Bool expired;
- (void)setAccountIdentifier:(id)arg1;	// IMP=0x0000000000057103
@property(readonly, nonatomic) NSString *accountIdentifier;
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000056fd3
- (id)fullDescription;	// IMP=0x0000000000056ebb
@property(readonly, copy) NSString *description;
- (id)_encodeProtobufData;	// IMP=0x0000000000056dd8
- (id)_encodeProtobuf;	// IMP=0x0000000000056c83
- (id)_initWithProtobufData:(id)arg1;	// IMP=0x0000000000056b4c
- (id)_initWithProtobuf:(id)arg1;	// IMP=0x0000000000056927
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000000056790
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000056547
- (id)initWithAccountIdentifier:(id)arg1 serviceName:(id)arg2;	// IMP=0x0000000000056457
- (id)initWithManagedCredentialItem:(id)arg1;	// IMP=0x00000000000561ef
- (id)initWithManagedCredentialItem:(id)arg1 accountStore:(id)arg2;	// IMP=0x0000000000056192

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
