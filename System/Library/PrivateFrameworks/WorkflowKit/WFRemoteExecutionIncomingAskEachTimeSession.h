//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSDictionary, NSSet;

@interface WFRemoteExecutionIncomingAskEachTimeSession
{
    NSSet *_lastKnownDestinations;	// 8 = 0x8
    NSDictionary *_lastKnownOptions;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x00000000001b05d3
@property(retain, nonatomic) NSDictionary *lastKnownOptions; // @synthesize lastKnownOptions=_lastKnownOptions;
@property(retain, nonatomic) NSSet *lastKnownDestinations; // @synthesize lastKnownDestinations=_lastKnownDestinations;
- (id)missingParameterError;	// IMP=0x00000000001b046b
- (void)finishWithError:(id)arg1;	// IMP=0x00000000001b02fe
- (void)handleTimeout;	// IMP=0x00000000001b02cb
- (void)sendResponse:(id)arg1 destinations:(id)arg2 options:(id)arg3;	// IMP=0x00000000001afe65
- (void)handleIncomingProtobuf:(id)arg1 currentlyActiveSessions:(id)arg2 responseDestinations:(id)arg3 responseOptions:(id)arg4;	// IMP=0x00000000001aecaf

@end
