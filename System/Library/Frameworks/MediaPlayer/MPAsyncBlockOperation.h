//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@interface MPAsyncBlockOperation
{
    CDUnknownBlockType _startHandler;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x000000000022c8da
@property(readonly, copy, nonatomic) CDUnknownBlockType startHandler; // @synthesize startHandler=_startHandler;
- (void)execute;	// IMP=0x000000000022c8b0
- (id)initWithStartHandler:(CDUnknownBlockType)arg1;	// IMP=0x000000000022c83e

@end
