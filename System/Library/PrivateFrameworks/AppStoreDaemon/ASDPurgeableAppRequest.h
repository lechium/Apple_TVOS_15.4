//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class ASDPurgeableAppRequestOptions;

@interface ASDPurgeableAppRequest
{
}

+ (long long)requestType;	// IMP=0x000000000005b979
- (void)startWithCompletionBlock:(CDUnknownBlockType)arg1;	// IMP=0x000000000005b8d1
- (id)initWithOptions:(id)arg1;	// IMP=0x000000000005b8bf

// Remaining properties
@property(readonly, copy, nonatomic) ASDPurgeableAppRequestOptions *options; // @dynamic options;

@end

