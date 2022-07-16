//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <MediaMiningKit/NSCopying-Protocol.h>

@class NSNumber, NSSet, NSString;

@interface CLSNowPlayingStreamEventMetadata : NSObject <NSCopying>
{
    NSString *_album;	// 8 = 0x8
    NSString *_artist;	// 16 = 0x10
    NSString *_title;	// 24 = 0x18
    NSNumber *_durationInSeconds;	// 32 = 0x20
    NSSet *_genres;	// 40 = 0x28
    NSString *_source;	// 48 = 0x30
}

- (void).cxx_destruct;	// IMP=0x000000000005df3e
@property(copy, nonatomic) NSString *source; // @synthesize source=_source;
@property(copy, nonatomic) NSSet *genres; // @synthesize genres=_genres;
@property(retain, nonatomic) NSNumber *durationInSeconds; // @synthesize durationInSeconds=_durationInSeconds;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
@property(copy, nonatomic) NSString *artist; // @synthesize artist=_artist;
@property(copy, nonatomic) NSString *album; // @synthesize album=_album;
- (_Bool)isEqualToEventMetadata:(id)arg1;	// IMP=0x000000000005dcd8
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000005dc75
- (unsigned long long)hash;	// IMP=0x000000000005db32
- (id)description;	// IMP=0x000000000005d97d
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000005d80b
- (id)initWithDuetKnowledgeEvent:(id)arg1;	// IMP=0x000000000005df92

@end
