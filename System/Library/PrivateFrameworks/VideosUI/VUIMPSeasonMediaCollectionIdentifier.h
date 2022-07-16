//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSNumber;

__attribute__((visibility("hidden")))
@interface VUIMPSeasonMediaCollectionIdentifier
{
    NSNumber *_seasonNumber;	// 8 = 0x8
}

+ (id)seasonIdentifierWithMediaItem:(id)arg1;	// IMP=0x00000000000f205c
+ (id)requiredMPPropertyNames;	// IMP=0x00000000000f202a
- (void).cxx_destruct;	// IMP=0x00000000000f25de
@property(copy, nonatomic) NSNumber *seasonNumber; // @synthesize seasonNumber=_seasonNumber;
- (id)description;	// IMP=0x00000000000f2476
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000000f2318
- (unsigned long long)hash;	// IMP=0x00000000000f2297
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000000f228c
- (id)initWithPersistentID:(id)arg1 seasonNumber:(id)arg2;	// IMP=0x00000000000f2191
- (id)initWithPersistentID:(id)arg1 mediaEntityType:(id)arg2;	// IMP=0x00000000000f2122

@end
