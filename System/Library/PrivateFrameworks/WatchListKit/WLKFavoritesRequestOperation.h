//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSArray;

@interface WLKFavoritesRequestOperation
{
    NSArray *_favorites;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x0000000000005fa8
@property(readonly, nonatomic) NSArray *favorites; // @synthesize favorites=_favorites;
- (void)processResponse;	// IMP=0x0000000000005d8a
- (void)prepareURLRequest:(CDUnknownBlockType)arg1;	// IMP=0x0000000000005a3c
- (id)initWithCaller:(id)arg1;	// IMP=0x0000000000005918

@end

