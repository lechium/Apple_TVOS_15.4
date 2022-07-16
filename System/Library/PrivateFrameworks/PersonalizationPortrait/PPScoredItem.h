//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <PersonalizationPortrait/NSCopying-Protocol.h>
#import <PersonalizationPortrait/NSSecureCoding-Protocol.h>

@protocol NSCopying><NSSecureCoding;

@interface PPScoredItem : NSObject <NSCopying, NSSecureCoding>
{
    unsigned short _resultPosition;	// 8 = 0x8
    unsigned short _resultCount;	// 10 = 0xa
    NSObject<NSCopying><NSSecureCoding> *_item;	// 16 = 0x10
    double _score;	// 24 = 0x18
}

+ (_Bool)supportsSecureCoding;	// IMP=0x0000000000023f56
- (void).cxx_destruct;	// IMP=0x0000000000023eb7
@property(readonly, nonatomic) unsigned short resultCount; // @synthesize resultCount=_resultCount;
@property(readonly, nonatomic) unsigned short resultPosition; // @synthesize resultPosition=_resultPosition;
@property(readonly, nonatomic) double score; // @synthesize score=_score;
@property(readonly, nonatomic) NSObject<NSCopying><NSSecureCoding> *item; // @synthesize item=_item;
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000023e27
- (_Bool)isEqualToScoredItem:(id)arg1;	// IMP=0x0000000000023cb8
- (unsigned long long)hash;	// IMP=0x0000000000023c75
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000023c6a
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000000023bc6
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000023a9b
- (id)initWithItem:(id)arg1 score:(double)arg2;	// IMP=0x0000000000023a84
- (id)initWithItem:(id)arg1 score:(double)arg2 resultPosition:(unsigned short)arg3 resultCount:(unsigned short)arg4;	// IMP=0x00000000000239f2

@end

