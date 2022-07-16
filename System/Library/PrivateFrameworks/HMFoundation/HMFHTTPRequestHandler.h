//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSPredicate;

@interface HMFHTTPRequestHandler
{
    NSPredicate *_methodPredicate;	// 8 = 0x8
    NSPredicate *_URLPredicate;	// 16 = 0x10
    CDUnknownBlockType _matchBlock;	// 24 = 0x18
    CDUnknownBlockType _requestBlock;	// 32 = 0x20
}

+ (_Bool)_isValidURLPredicate:(id)arg1;	// IMP=0x000000000000962c
+ (_Bool)_isValidMethodPrediate:(id)arg1;	// IMP=0x0000000000009624
- (void).cxx_destruct;	// IMP=0x00000000000099e9
@property(copy, nonatomic) CDUnknownBlockType requestBlock; // @synthesize requestBlock=_requestBlock;
@property(readonly, copy, nonatomic) CDUnknownBlockType matchBlock; // @synthesize matchBlock=_matchBlock;
@property(readonly, copy, nonatomic) NSPredicate *URLPredicate; // @synthesize URLPredicate=_URLPredicate;
@property(readonly, copy, nonatomic) NSPredicate *methodPredicate; // @synthesize methodPredicate=_methodPredicate;
- (id)initWithMethodPredicate:(id)arg1 URLPredicate:(id)arg2 matchBlock:(CDUnknownBlockType)arg3;	// IMP=0x0000000000009634
- (id)init;	// IMP=0x000000000000957c

@end
