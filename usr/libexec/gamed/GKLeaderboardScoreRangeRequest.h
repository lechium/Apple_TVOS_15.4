//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@interface GKLeaderboardScoreRangeRequest
{
    struct _NSRange _range;	// 64 = 0x40
}

+ (_Bool)supportsSecureCoding;	// IMP=0x004000000009c88b
@property(nonatomic) struct _NSRange range; // @synthesize range=_range;
- (_Bool)isEqual:(id)arg1;	// IMP=0x001000000009c9d2
- (void)encodeWithCoder:(id)arg1;	// IMP=0x001000000009c935
- (id)initWithCoder:(id)arg1;	// IMP=0x001000000009c893
- (void)loadScoresWithService:(id)arg1 context:(id)arg2 handler:(CDUnknownBlockType)arg3;	// IMP=0x00100000001af7bf
- (void)generateScoresFromServerResponse:(id)arg1 service:(id)arg2 context:(id)arg3 timeToLive:(double)arg4 handler:(CDUnknownBlockType)arg5;	// IMP=0x00100000001af1dc
- (id)resourceIdentifier;	// IMP=0x00100000001aef76
- (id)serverRequestWithService:(id)arg1;	// IMP=0x00100000001aecac
- (id)bagKey;	// IMP=0x00100000001aec9f
- (void)sanitizeRange;	// IMP=0x00100000001aec6a

@end

