//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@interface MCMXPCMessageSetCodeSignMapping
{
    id _info;	// 8 = 0x8
    id _options;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x0020000000093b4e
@property(readonly, nonatomic) id options; // @synthesize options=_options;
@property(readonly, nonatomic) id info; // @synthesize info=_info;
- (id)initWithXPCObject:(id)arg1 clientConnection:(id)arg2 userIdentityCache:(id)arg3 error:(unsigned long long *)arg4;	// IMP=0x0010000000093a47

@end

