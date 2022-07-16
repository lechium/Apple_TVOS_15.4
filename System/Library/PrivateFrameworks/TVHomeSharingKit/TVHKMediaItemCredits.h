//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSOrderedSet;

@interface TVHKMediaItemCredits : NSObject
{
    NSOrderedSet *_actors;	// 8 = 0x8
    NSOrderedSet *_directors;	// 16 = 0x10
    NSOrderedSet *_producers;	// 24 = 0x18
    NSOrderedSet *_screenwriters;	// 32 = 0x20
}

+ (id)_stringRepresentationFromArray:(id)arg1;	// IMP=0x0000000000030c2b
+ (id)_arrayFromStringRepresentation:(id)arg1;	// IMP=0x0000000000030c0f
- (void).cxx_destruct;	// IMP=0x0000000000030c83
@property(copy, nonatomic) NSOrderedSet *screenwriters; // @synthesize screenwriters=_screenwriters;
@property(copy, nonatomic) NSOrderedSet *producers; // @synthesize producers=_producers;
@property(copy, nonatomic) NSOrderedSet *directors; // @synthesize directors=_directors;
@property(copy, nonatomic) NSOrderedSet *actors; // @synthesize actors=_actors;
- (id)description;	// IMP=0x0000000000030aa1
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000003076d
- (unsigned long long)hash;	// IMP=0x0000000000030632
- (id)stringRepresentation;	// IMP=0x0000000000030407
- (id)initWithStringRepresentation:(id)arg1;	// IMP=0x000000000003011d
@property(readonly, nonatomic) _Bool hasCredits;

@end
