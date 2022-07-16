//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@interface CVNLPTextDecodingBeamSearchConfiguration
{
    _Bool _shouldOptimizeAlignment;	// 16 = 0x10
    unsigned long long _beamWidth;	// 24 = 0x18
    unsigned long long _pathCount;	// 32 = 0x20
    CDUnknownBlockType _scoringFunction;	// 40 = 0x28
}

@property(readonly, nonatomic) CDUnknownBlockType scoringFunction; // @synthesize scoringFunction=_scoringFunction;
@property(nonatomic) _Bool shouldOptimizeAlignment; // @synthesize shouldOptimizeAlignment=_shouldOptimizeAlignment;
@property(nonatomic) unsigned long long pathCount; // @synthesize pathCount=_pathCount;
@property(nonatomic) unsigned long long beamWidth; // @synthesize beamWidth=_beamWidth;
- (id)initWithCommitActionBehavior:(CDUnknownBlockType)arg1 beamWidth:(unsigned long long)arg2 pathCount:(unsigned long long)arg3 shouldOptimizeAlignment:(_Bool)arg4;	// IMP=0x000000000001bd40
- (id)initWithCommitActionBehavior:(CDUnknownBlockType)arg1 scoringFunction:(CDUnknownBlockType)arg2 beamWidth:(unsigned long long)arg3 pathCount:(unsigned long long)arg4;	// IMP=0x000000000001bd10
- (id)initWithCommitActionBehavior:(CDUnknownBlockType)arg1 scoringFunction:(CDUnknownBlockType)arg2 beamWidth:(unsigned long long)arg3 pathCount:(unsigned long long)arg4 shouldOptimizeAlignment:(_Bool)arg5;	// IMP=0x000000000001bce0
- (id)_initWithCommitActionBehavior:(CDUnknownBlockType)arg1 scoringFunction:(CDUnknownBlockType)arg2 beamWidth:(unsigned long long)arg3 pathCount:(unsigned long long)arg4 shouldOptimizeAlignment:(_Bool)arg5;	// IMP=0x000000000001bc60

@end

