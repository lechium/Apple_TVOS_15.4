//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <PhotosUICore/PXNewSearchResult-Protocol.h>

@class NSDate, NSString;

@interface PXSearchResultCollection : NSObject <PXNewSearchResult>
{
    NSString *_collectionUUID;	// 8 = 0x8
    unsigned long long _subtype;	// 16 = 0x10
    NSString *_thumbnailAssetUUID;	// 24 = 0x18
    NSString *_identifier;	// 32 = 0x20
    unsigned long long _type;	// 40 = 0x28
    NSString *_title;	// 48 = 0x30
    NSString *_subtitle;	// 56 = 0x38
    unsigned long long _assetCount;	// 64 = 0x40
    NSDate *_startDate;	// 72 = 0x48
    NSDate *_endDate;	// 80 = 0x50
}

+ (id)_dateIntervalFormatter;	// IMP=0x0000000000515310
- (void).cxx_destruct;	// IMP=0x00000000005152b1
@property(copy, nonatomic) NSDate *endDate; // @synthesize endDate=_endDate;
@property(copy, nonatomic) NSDate *startDate; // @synthesize startDate=_startDate;
@property(nonatomic) unsigned long long assetCount; // @synthesize assetCount=_assetCount;
@property(copy, nonatomic) NSString *subtitle; // @synthesize subtitle=_subtitle;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
@property(nonatomic) unsigned long long type; // @synthesize type=_type;
@property(copy, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
@property(copy, nonatomic) NSString *thumbnailAssetUUID; // @synthesize thumbnailAssetUUID=_thumbnailAssetUUID;
@property(readonly, nonatomic) unsigned long long subtype; // @synthesize subtype=_subtype;
@property(copy, nonatomic) NSString *collectionUUID; // @synthesize collectionUUID=_collectionUUID;
@property(readonly, copy) NSString *description;
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000514f5a
@property(readonly) unsigned long long hash;
- (id)initWithTitle:(id)arg1 subtitle:(id)arg2 assetCount:(unsigned long long)arg3 collectionUUID:(id)arg4 thumbnailAssetUUID:(id)arg5 startDate:(id)arg6 endDate:(id)arg7 subtype:(unsigned long long)arg8;	// IMP=0x0000000000514892
- (id)init;	// IMP=0x0000000000514818

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end

