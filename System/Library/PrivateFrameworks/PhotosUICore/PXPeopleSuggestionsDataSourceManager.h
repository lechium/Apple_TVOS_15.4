//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class PXPeopleSuggestionsDataSource, PXPeopleSuggestionsMediaProvider;

@interface PXPeopleSuggestionsDataSourceManager
{
}

@property(readonly, copy, nonatomic) PXPeopleSuggestionsMediaProvider *mediaProvider;
- (_Bool)isLoading;	// IMP=0x00000000005d6b7e
- (void)boostLoading;	// IMP=0x00000000005d6b78
- (void)cancelLoading;	// IMP=0x00000000005d6b72
- (void)startLoading;	// IMP=0x00000000005d6b6c

// Remaining properties
@property(readonly, nonatomic) PXPeopleSuggestionsDataSource *dataSource; // @dynamic dataSource;

@end
