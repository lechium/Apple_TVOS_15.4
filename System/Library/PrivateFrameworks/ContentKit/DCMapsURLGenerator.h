//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class DCMapsLink, NSMutableDictionary;

__attribute__((visibility("hidden")))
@interface DCMapsURLGenerator
{
    NSMutableDictionary *_queryDictionary;	// 8 = 0x8
    DCMapsLink *_mapsLink;	// 16 = 0x10
}

+ (id)URLWithMapsLink:(id)arg1;	// IMP=0x000000000002ed57
- (void).cxx_destruct;	// IMP=0x000000000002ed26
@property(readonly, nonatomic) DCMapsLink *mapsLink; // @synthesize mapsLink=_mapsLink;
- (void)setString:(id)arg1 forQueryKey:(id)arg2;	// IMP=0x000000000002ec76
- (id)mapType;	// IMP=0x000000000002ebb9
- (id)directionsMode;	// IMP=0x000000000002eb4e
- (void)populateQueryDictionary;	// IMP=0x000000000002e8b6
@property(readonly, nonatomic) NSMutableDictionary *queryDictionary; // @synthesize queryDictionary=_queryDictionary;
- (id)URL;	// IMP=0x000000000002e7df
- (id)query;	// IMP=0x000000000002e77c
- (id)path;	// IMP=0x000000000002e76f
- (id)host;	// IMP=0x000000000002e762
- (id)scheme;	// IMP=0x000000000002e755
- (id)initWithMapsLink:(id)arg1;	// IMP=0x000000000002e6e5

@end

