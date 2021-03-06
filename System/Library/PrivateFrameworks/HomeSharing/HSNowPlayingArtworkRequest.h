//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@interface HSNowPlayingArtworkRequest
{
    unsigned int _interfaceID;	// 8 = 0x8
    unsigned int _playQueueIndex;	// 12 = 0xc
    struct CGSize _maximumSize;	// 16 = 0x10
}

@property(readonly, nonatomic) unsigned int playQueueIndex; // @synthesize playQueueIndex=_playQueueIndex;
@property(readonly, nonatomic) struct CGSize maximumSize; // @synthesize maximumSize=_maximumSize;
@property(readonly, nonatomic) unsigned int interfaceID; // @synthesize interfaceID=_interfaceID;
- (id)canonicalResponseForResponse:(id)arg1;	// IMP=0x0000000000003168
- (id)initWithInterfaceID:(unsigned int)arg1 maximumSize:(struct CGSize)arg2 playQueueIndex:(unsigned int)arg3;	// IMP=0x0000000000002f55

@end

