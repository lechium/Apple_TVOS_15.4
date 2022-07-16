//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class GKPlayerInternal, NSString;

@interface GKConcernInternal
{
    GKPlayerInternal *_player;	// 8 = 0x8
    NSString *_message;	// 16 = 0x10
    unsigned int _concernID;	// 24 = 0x18
}

+ (id)secureCodedPropertyKeys;	// IMP=0x00000000000f93d1
+ (_Bool)supportsSecureCoding;	// IMP=0x00000000000f93c9
- (void).cxx_destruct;	// IMP=0x00000000000f9612
@property(nonatomic) unsigned int concernID; // @synthesize concernID=_concernID;
@property(copy, nonatomic) NSString *message; // @synthesize message=_message;
@property(retain, nonatomic) GKPlayerInternal *player; // @synthesize player=_player;
- (unsigned long long)hash;	// IMP=0x00000000000f959b
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000000f94cb

@end
