//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSError;

__attribute__((visibility("hidden")))
@interface _GEOFailedTicket
{
    NSError *_error;	// 256 = 0x100
}

- (void).cxx_destruct;	// IMP=0x00000000006fdf69
- (void)submitWithRefinedHandler:(CDUnknownBlockType)arg1 auditToken:(id)arg2 timeout:(long long)arg3 networkActivity:(CDUnknownBlockType)arg4;	// IMP=0x00000000006fdd2c
- (void)submitWithHandler:(CDUnknownBlockType)arg1 auditToken:(id)arg2 timeout:(long long)arg3 networkActivity:(CDUnknownBlockType)arg4;	// IMP=0x00000000006fdaf2
- (id)initWithError:(id)arg1 traits:(id)arg2;	// IMP=0x00000000006fda67

@end
