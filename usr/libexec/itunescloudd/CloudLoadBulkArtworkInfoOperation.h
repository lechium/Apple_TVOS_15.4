//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSArray;

@interface CloudLoadBulkArtworkInfoOperation
{
    NSArray *_cloudIDs;	// 8 = 0x8
    _Bool _useLongIDs;	// 16 = 0x10
    unsigned char _itemKind;	// 17 = 0x11
    NSArray *_cloudArtworkInfoDictionaries;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x0020000000035f48
@property(readonly, nonatomic) NSArray *cloudArtworkInfoDictionaries; // @synthesize cloudArtworkInfoDictionaries=_cloudArtworkInfoDictionaries;
@property(readonly, nonatomic) unsigned char itemKind; // @synthesize itemKind=_itemKind;
@property(readonly, nonatomic) _Bool useLongIDs; // @synthesize useLongIDs=_useLongIDs;
- (void)main;	// IMP=0x0010000000035a03
- (id)initWithConfiguration:(id)arg1 cloudIDs:(id)arg2;	// IMP=0x00100000000358e2
- (id)initWithCloudIDs:(id)arg1;	// IMP=0x001000000003587e

@end
