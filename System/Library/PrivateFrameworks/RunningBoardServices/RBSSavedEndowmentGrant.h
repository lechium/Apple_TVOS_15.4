//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString;

@interface RBSSavedEndowmentGrant
{
    NSString *_endowmentNamespace;	// 8 = 0x8
    NSString *_key;	// 16 = 0x10
}

+ (id)grantWithNamespace:(id)arg1 key:(id)arg2;	// IMP=0x0000000000001c92
- (void).cxx_destruct;	// IMP=0x0000000000002094
@property(readonly, nonatomic) NSString *key; // @synthesize key=_key;
@property(readonly, copy, nonatomic) NSString *endowmentNamespace; // @synthesize endowmentNamespace=_endowmentNamespace;
- (id)initWithRBSXPCCoder:(id)arg1;	// IMP=0x0000000000001f64
- (void)encodeWithRBSXPCCoder:(id)arg1;	// IMP=0x0000000000001ec5
- (id)description;	// IMP=0x0000000000001e36
- (unsigned long long)hash;	// IMP=0x0000000000001e19
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000001d54

@end

