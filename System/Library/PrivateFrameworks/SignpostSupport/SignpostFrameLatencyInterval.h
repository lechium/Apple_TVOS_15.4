//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <SignpostSupport/SignpostCARenderServerFrameMetadata-Protocol.h>

@class NSSet;

@interface SignpostFrameLatencyInterval <SignpostCARenderServerFrameMetadata>
{
    unsigned int _frameSeed;	// 32 = 0x20
    unsigned int _swapId;	// 36 = 0x24
    unsigned long long _totalFrameCount;	// 40 = 0x28
    unsigned long long _lateFrameCount;	// 48 = 0x30
    NSSet *_contributingPids;	// 56 = 0x38
}

- (void).cxx_destruct;	// IMP=0x0000000000024252
@property(retain, nonatomic) NSSet *contributingPids; // @synthesize contributingPids=_contributingPids;
@property(readonly, nonatomic) unsigned long long lateFrameCount; // @synthesize lateFrameCount=_lateFrameCount;
@property(readonly, nonatomic) unsigned long long totalFrameCount; // @synthesize totalFrameCount=_totalFrameCount;
@property(readonly, nonatomic) unsigned int swapId; // @synthesize swapId=_swapId;
@property(readonly, nonatomic) unsigned int frameSeed; // @synthesize frameSeed=_frameSeed;
- (id)initWithStartMCT:(unsigned long long)arg1 endMCT:(unsigned long long)arg2 timebaseRatio:(double)arg3 swapID:(unsigned int)arg4 frameSeed:(unsigned int)arg5 totalFrameCount:(unsigned long long)arg6 lateFrameCount:(unsigned long long)arg7;	// IMP=0x0000000000024178
- (id)initWithFrameLatencyInterval:(id)arg1 isLong:(_Bool)arg2;	// IMP=0x0000000000023e79

@end

