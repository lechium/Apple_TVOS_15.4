//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSURL;

@interface MCMCommandRepairUserData
{
    NSURL *_url;	// 8 = 0x8
    char *_sandboxToken;	// 16 = 0x10
}

+ (Class)incomingMessageClass;	// IMP=0x002000000009c206
+ (unsigned long long)command;	// IMP=0x001000000009c1fb
- (void).cxx_destruct;	// IMP=0x002000000009c1e8
@property(readonly, nonatomic) char *sandboxToken; // @synthesize sandboxToken=_sandboxToken;
@property(readonly, nonatomic) NSURL *url; // @synthesize url=_url;
- (void)dealloc;	// IMP=0x001000000009c185
- (_Bool)fromQueue:(id)arg1 executeWithError:(unsigned long long *)arg2;	// IMP=0x001000000009c171
- (id)initWithMessage:(id)arg1 clientIdentity:(id)arg2 userIdentityCache:(id)arg3;	// IMP=0x001000000009c085
- (id)initWithURL:(id)arg1 sandboxToken:(const char *)arg2 userIdentityCache:(id)arg3;	// IMP=0x001000000009bfe5

@end

