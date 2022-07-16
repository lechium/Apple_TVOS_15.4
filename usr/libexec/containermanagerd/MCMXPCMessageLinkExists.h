//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class MCMContainerIdentity;

@interface MCMXPCMessageLinkExists
{
    MCMContainerIdentity *_containerAIdentity;	// 8 = 0x8
    MCMContainerIdentity *_containerBIdentity;	// 16 = 0x10
    unsigned long long _attributes;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x0020000000059d33
@property(readonly, nonatomic) unsigned long long attributes; // @synthesize attributes=_attributes;
@property(readonly, nonatomic) MCMContainerIdentity *containerBIdentity; // @synthesize containerBIdentity=_containerBIdentity;
@property(readonly, nonatomic) MCMContainerIdentity *containerAIdentity; // @synthesize containerAIdentity=_containerAIdentity;
- (id)initWithXPCObject:(id)arg1 clientConnection:(id)arg2 userIdentityCache:(id)arg3 error:(unsigned long long *)arg4;	// IMP=0x0010000000059706

@end

