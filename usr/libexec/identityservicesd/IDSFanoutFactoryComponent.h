//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@interface IDSFanoutFactoryComponent
{
}

- (void)setExpiration:(id)arg1 onFanout:(id)arg2 withMessage:(id)arg3;	// IMP=0x00400000000508e0
- (id)createFanoutFromMessage:(id)arg1 forService:(id)arg2 fromIdentity:(id)arg3 withMaxSize:(unsigned long long)arg4 chunkNumber:(long long)arg5 firstMessage:(id)arg6;	// IMP=0x0010000000050430
- (void)addMessage:(id)arg1 toFanout:(id)arg2;	// IMP=0x0010000000050340
- (id)runIndividuallyWithInput:(id)arg1;	// IMP=0x001000000004ebf0

@end

