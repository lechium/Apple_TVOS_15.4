//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HMFoundation/HMFObject.h>

@class HMCRedirector;

@interface HMCPartition : HMFObject
{
    HMCRedirector *_redirections;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x0000000000468f19
@property(readonly) HMCRedirector *redirections; // @synthesize redirections=_redirections;
- (_Bool)modelBelongsToThisPartition:(id)arg1;	// IMP=0x0000000000468efb
- (id)init;	// IMP=0x0000000000468e84

@end

