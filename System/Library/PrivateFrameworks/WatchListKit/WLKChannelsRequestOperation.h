//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString, WLKChannelsResponse;

@interface WLKChannelsRequestOperation
{
    _Bool _filtered;	// 8 = 0x8
    WLKChannelsResponse *_channelsResponse;	// 16 = 0x10
    NSString *_caller;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x000000000000ae81
@property(copy, nonatomic) NSString *caller; // @synthesize caller=_caller;
@property(retain, nonatomic) WLKChannelsResponse *channelsResponse; // @synthesize channelsResponse=_channelsResponse;
@property(nonatomic) _Bool filtered; // @synthesize filtered=_filtered;
- (void)processResponse;	// IMP=0x000000000000acae
- (id)initWithCaller:(id)arg1 isFilteredByUserChannels:(_Bool)arg2;	// IMP=0x000000000000ab62
- (id)initWithCaller:(id)arg1;	// IMP=0x000000000000ab4e

@end

