//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString;

@interface HBLaunchOpenURLAction
{
}

+ (_Bool)_application:(id)arg1 isPreferredForOpeningURL:(id)arg2;	// IMP=0x0020000000094e15
- (void)executeWithOptions:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0020000000094a0a
- (id)replacementAction;	// IMP=0x00100000000948d3
- (_Bool)validate:(inout id *)arg1;	// IMP=0x001000000009474a
- (_Bool)supportsLaunchEventTime;	// IMP=0x0010000000094742

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;

@end

