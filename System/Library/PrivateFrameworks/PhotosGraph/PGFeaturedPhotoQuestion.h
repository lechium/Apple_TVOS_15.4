//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSDictionary, NSString;

@interface PGFeaturedPhotoQuestion
{
    unsigned short _state;	// 8 = 0x8
    NSDictionary *_additionalInfo;	// 16 = 0x10
    NSString *_entityIdentifier;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x000000000017469f
- (unsigned short)state;	// IMP=0x000000000017468e
- (id)entityIdentifier;	// IMP=0x000000000017467d
- (id)additionalInfo;	// IMP=0x000000000017466c
- (_Bool)isEquivalentToQuestion:(id)arg1;	// IMP=0x0000000000174584
- (unsigned short)entityType;	// IMP=0x000000000017457c
- (unsigned short)displayType;	// IMP=0x0000000000174574
- (unsigned short)type;	// IMP=0x0000000000174569
- (id)initWithAssetUUID:(id)arg1 suggestionType:(unsigned short)arg2 suggestionSubtype:(unsigned short)arg3;	// IMP=0x00000000001743f6

@end

