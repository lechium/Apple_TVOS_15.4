//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class HMDAccountHandle;

__attribute__((visibility("hidden")))
@interface _HMDAccountHandleIdentifer
{
    HMDAccountHandle *_accountHandle;	// 16 = 0x10
}

+ (_Bool)supportsSecureCoding;	// IMP=0x00000000001f10d0
- (void).cxx_destruct;	// IMP=0x00000000001f0c53
@property(readonly, copy) HMDAccountHandle *accountHandle; // @synthesize accountHandle=_accountHandle;
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000000001f0ba2
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000001f0b07
- (id)identifier;	// IMP=0x00000000001f0ab7
- (id)kind;	// IMP=0x00000000001f0aaa
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000001f09d6
- (id)initWithAccountHandle:(id)arg1;	// IMP=0x00000000001f0906
- (id)initWithIdentifier:(id)arg1;	// IMP=0x00000000001f0850

@end
