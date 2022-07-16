//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSDictionary, NSMutableDictionary, NSString;

@interface RadioAddStationRequest
{
    NSDictionary *_matchDictionary;	// 8 = 0x8
    long long _persistentID;	// 16 = 0x10
    NSMutableDictionary *_stationDictionary;	// 24 = 0x18
    NSString *_stationHashForSkipHistoryCopying;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x000000000001d188
- (void)startWithAddStationCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x000000000001d048
- (void)startWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x000000000001d01c
- (id)matchDictionary;	// IMP=0x000000000001d007
- (id)changeList;	// IMP=0x000000000001cf01
- (id)initWithQueryTerm:(id)arg1 queryID:(long long)arg2;	// IMP=0x000000000001cd09
- (id)initWithRadioTrackDictionary:(id)arg1 useArtist:(_Bool)arg2;	// IMP=0x000000000001cb33
- (id)initWithLibraryTrackDictionary:(id)arg1 useArtist:(_Bool)arg2;	// IMP=0x000000000001c95d
- (id)initWithStationDictionary:(id)arg1;	// IMP=0x000000000001c822
- (id)initWithStation:(id)arg1;	// IMP=0x000000000001c6e7
- (id)init;	// IMP=0x000000000001c6a5

@end
