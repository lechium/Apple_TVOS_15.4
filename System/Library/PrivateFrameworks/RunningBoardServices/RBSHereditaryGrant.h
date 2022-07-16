//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSArray, NSObject, NSString;
@protocol OS_xpc_object;

@interface RBSHereditaryGrant
{
    NSString *_endowmentNamespace;	// 8 = 0x8
    NSString *_sourceEnvironment;	// 16 = 0x10
    NSObject<OS_xpc_object> *_encodedEndowment;	// 24 = 0x18
    NSArray *_attributes;	// 32 = 0x20
}

+ (id)grantWithNamespace:(id)arg1 sourceEnvironment:(id)arg2 endowment:(id)arg3 attributes:(id)arg4;	// IMP=0x000000000000a30f
+ (id)grantWithNamespace:(id)arg1 sourceEnvironment:(id)arg2 attributes:(id)arg3;	// IMP=0x000000000000a27f
+ (id)grantWithNamespace:(id)arg1 endowment:(id)arg2 attributes:(id)arg3;	// IMP=0x0000000000009ef8
- (void).cxx_destruct;	// IMP=0x000000000000aac7
@property(readonly, nonatomic) NSArray *attributes; // @synthesize attributes=_attributes;
@property(readonly, nonatomic) NSObject<OS_xpc_object> *encodedEndowment; // @synthesize encodedEndowment=_encodedEndowment;
@property(readonly, copy, nonatomic) NSString *sourceEnvironment; // @synthesize sourceEnvironment=_sourceEnvironment;
@property(readonly, copy, nonatomic) NSString *endowmentNamespace; // @synthesize endowmentNamespace=_endowmentNamespace;
- (id)initWithRBSXPCCoder:(id)arg1;	// IMP=0x000000000000a832
- (void)encodeWithRBSXPCCoder:(id)arg1;	// IMP=0x000000000000a73c
- (id)debugDescription;	// IMP=0x000000000000a5e6
- (id)description;	// IMP=0x000000000000a514
- (unsigned long long)hash;	// IMP=0x000000000000a4a7
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000000a3b8

@end

