//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class GKGameInternal;

@interface GKTestToolClientProxy
{
    GKGameInternal *_testGame;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x002000000015e093
@property(retain, nonatomic) GKGameInternal *testGame; // @synthesize testGame=_testGame;
- (id)externalVersion;	// IMP=0x001000000015dfef
- (id)adamID;	// IMP=0x001000000015df70
- (id)bundleShortVersion;	// IMP=0x001000000015def1
- (id)bundleVersion;	// IMP=0x001000000015de72
- (id)bundleIdentifier;	// IMP=0x001000000015ddf3
- (id)transportWithCredential:(id)arg1;	// IMP=0x001000000015dd18
- (oneway void)setTestGame:(id)arg1 reply:(CDUnknownBlockType)arg2;	// IMP=0x001000000015d8b3

@end

