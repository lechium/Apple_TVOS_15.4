//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSMapTable, NSString;

@interface GEOCustomEnvironmentInfo
{
    NSMapTable *_overrideURLs;	// 80 = 0x50
    NSString *_uuid;	// 88 = 0x58
}

- (void).cxx_destruct;	// IMP=0x000000000113eacc
- (_Bool)isActive;	// IMP=0x000000000113ea37
- (void)makeActive;	// IMP=0x000000000113e891
- (id)overrideURLs;	// IMP=0x000000000113e87c
- (void)updateWithURLs:(id)arg1;	// IMP=0x000000000113e836
- (void)delete;	// IMP=0x000000000113e608
- (void)save;	// IMP=0x000000000113e31c
- (id)dictionaryRepresentation;	// IMP=0x000000000113e138
- (id)initWithName:(id)arg1 displayName:(id)arg2 dictionaryRepresentation:(id)arg3;	// IMP=0x000000000113def4

@end

