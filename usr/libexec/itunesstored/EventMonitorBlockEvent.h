//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@interface EventMonitorBlockEvent
{
    CDUnknownBlockType _eventBlock;	// 32 = 0x20
    CDUnknownBlockType _testBlock;	// 40 = 0x28
}

@property(copy, nonatomic) CDUnknownBlockType testBlock; // @synthesize testBlock=_testBlock;
@property(copy, nonatomic) CDUnknownBlockType eventBlock; // @synthesize eventBlock=_eventBlock;
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00100000001292fb
- (void)performAction;	// IMP=0x00100000001292e1
- (_Bool)hasOccurred;	// IMP=0x00100000001292c5
- (void)dealloc;	// IMP=0x001000000012926d

@end

