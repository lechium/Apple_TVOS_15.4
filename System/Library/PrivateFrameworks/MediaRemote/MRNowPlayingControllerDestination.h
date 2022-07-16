//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class MRPlayerPath;

@interface MRNowPlayingControllerDestination
{
    _Bool _isEndpointSet;	// 8 = 0x8
    MRPlayerPath *_unresolvedPlayerPath;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x00000000001d785d
@property(nonatomic) _Bool isEndpointSet; // @synthesize isEndpointSet=_isEndpointSet;
@property(retain, nonatomic) MRPlayerPath *unresolvedPlayerPath; // @synthesize unresolvedPlayerPath=_unresolvedPlayerPath;
- (id)description;	// IMP=0x00000000001d76f5
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000001d765d
- (id)initWithConfiguration:(id)arg1;	// IMP=0x00000000001d7545
@property(retain, nonatomic) MRPlayerPath *resolvedPlayerPath;
- (void)setEndpoint:(id)arg1;	// IMP=0x00000000001d74d8

@end

